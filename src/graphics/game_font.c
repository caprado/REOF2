#include "game_font.h"
#include "../io/afs_reader.h"
#include "../io/file_loader.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef _WIN32
#include <windows.h>
#include <GL/gl.h>
#else
#include <GL/gl.h>
#endif

// Font file indices in NETBIO00.DAT -> entry [0] sub-AFS
#define FONT_AFS_OUTER_INDEX  0
#define FONT_LIGHT_INDEX      584   // d20le04.bin (Light)
#define FONT_GOTHIC_INDEX     583   // d20go04.bin (Gothic/Bold)

// Font properties (from ELF metadata at 0x0021c438)
#define GLYPH_W        20
#define GLYPH_H        20
#define GLYPH_BPP      2
#define GLYPH_BYTES    100   // 5 bytes/row * 20 rows
#define GLYPH_COUNT    7808
#define GLYPH_BPR      5     // bytes per row (20 pixels / 4 pixels per byte)

// OpenGL atlas layout — pack ASCII glyphs into a texture
// We only need printable ASCII (32-126) = 95 chars
// Layout: 16 columns x 6 rows of 20x20 glyphs = 320x120 texture
#define ATLAS_COLS     16
#define ATLAS_ROWS     6
#define ATLAS_W        (ATLAS_COLS * GLYPH_W)  // 320
#define ATLAS_H        (ATLAS_ROWS * GLYPH_H)  // 120

static GLuint s_lightFontTexture = 0;   // d20le04 (Light)
static GLuint s_gothicFontTexture = 0;  // d20go04 (Gothic/Bold)
static int s_gameFontReady = 0;

// Convert ASCII code to glyph index in d20le04.bin
// See docs/FONT_FORMAT.md for derivation
static int asciiToGlyphIndex(int ascii) {
    if (ascii == 0x20) return 0;  // space
    if (ascii < 0x21 || ascii > 0x7E) return 0;  // out of range -> space

    // Full-width ASCII in JIS X 0208:
    // Row = 2 (0x23 - 0x21), Col = ascii - 0x21
    // Verified: 'A'(0x41) -> col=0x20=32 -> index=2*94+32=220 (correct glyph)
    int jis_row = 2;
    int jis_col = ascii - 0x21;
    return jis_row * 94 + jis_col;
}

// Decode a single glyph from 2bpp to RGBA
static void decodeGlyph(const uint8_t* src, uint8_t* dst, int dstStride) {
    for (int y = 0; y < GLYPH_H; y++) {
        for (int x = 0; x < GLYPH_BPR; x++) {
            uint8_t byte = src[y * GLYPH_BPR + x];
            for (int p = 0; p < 4; p++) {
                int px = (byte >> (6 - p * 2)) & 3;
                int dstX = x * 4 + p;
                if (dstX >= GLYPH_W) break;

                int idx = (y * dstStride + dstX) * 4;
                // 2bpp values: 0=transparent, 1=light, 2=medium, 3=full
                uint8_t alpha;
                switch (px) {
                    case 0: alpha = 0; break;
                    case 1: alpha = 85; break;
                    case 2: alpha = 170; break;
                    case 3: alpha = 255; break;
                    default: alpha = 0; break;
                }
                // White glyph with variable alpha (color modulated at draw time)
                dst[idx + 0] = 255;
                dst[idx + 1] = 255;
                dst[idx + 2] = 255;
                dst[idx + 3] = alpha;
            }
        }
    }
}

// Build OpenGL texture atlas from font data
static GLuint buildFontAtlas(const uint8_t* fontData, uint32_t dataSize, const char* name) {
    uint8_t* atlasPixels;
    GLuint texture;
    int ch, glyphIdx, atlasCol, atlasRow;

    atlasPixels = (uint8_t*)calloc(ATLAS_W * ATLAS_H * 4, 1);
    if (!atlasPixels) return 0;

    for (ch = 0x20; ch <= 0x7E; ch++) {
        glyphIdx = asciiToGlyphIndex(ch);
        if (glyphIdx < 0 || glyphIdx >= GLYPH_COUNT) continue;
        if ((size_t)(glyphIdx + 1) * GLYPH_BYTES > dataSize) continue;

        int atlasSlot = ch - 0x20;
        atlasCol = atlasSlot % ATLAS_COLS;
        atlasRow = atlasSlot / ATLAS_COLS;

        const uint8_t* glyphSrc = fontData + glyphIdx * GLYPH_BYTES;
        uint8_t* glyphDst = atlasPixels + (atlasRow * GLYPH_H * ATLAS_W + atlasCol * GLYPH_W) * 4;
        decodeGlyph(glyphSrc, glyphDst, ATLAS_W);
    }

    glGenTextures(1, &texture);
    glBindTexture(GL_TEXTURE_2D, texture);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, ATLAS_W, ATLAS_H,
                 0, GL_RGBA, GL_UNSIGNED_BYTE, atlasPixels);

    free(atlasPixels);
    printf("[GameFont] Loaded %s (%dx%d atlas)\n", name, ATLAS_W, ATLAS_H);
    fflush(stdout);
    return texture;
}

int32_t initGameFont(void) {
    AfsArchive outerAfs, innerAfs;
    char afsPath[256];
    uint8_t* rawData = NULL;
    uint32_t rawSize = 0;

    if (s_gameFontReady) return 1;

    snprintf(afsPath, sizeof(afsPath), "%sNETBIO00.DAT", getDiscBasePath());

    if (!afsOpen(afsPath, &outerAfs)) {
        fprintf(stderr, "[GameFont] Failed to open %s\n", afsPath);
        return 0;
    }
    if (!afsOpenNested(&outerAfs, FONT_AFS_OUTER_INDEX, &innerAfs)) {
        fprintf(stderr, "[GameFont] Failed to open nested AFS\n");
        afsClose(&outerAfs);
        return 0;
    }

    // Load Light font (d20le04.bin) — used for splash screen
    if (afsReadFile(&innerAfs, FONT_LIGHT_INDEX, &rawData, &rawSize)) {
        if (rawSize == GLYPH_COUNT * GLYPH_BYTES) {
            s_lightFontTexture = buildFontAtlas(rawData, rawSize, "d20le04 (Light)");
        }
        free(rawData);
        rawData = NULL;
    }

    // Load Gothic font (d20go04.bin) — used for title/menu with shadow
    if (afsReadFile(&innerAfs, FONT_GOTHIC_INDEX, &rawData, &rawSize)) {
        if (rawSize == GLYPH_COUNT * GLYPH_BYTES) {
            s_gothicFontTexture = buildFontAtlas(rawData, rawSize, "d20go04 (Gothic)");
        }
        free(rawData);
        rawData = NULL;
    }

    afsClose(&innerAfs);
    afsClose(&outerAfs);

    s_gameFontReady = (s_lightFontTexture != 0 || s_gothicFontTexture != 0) ? 1 : 0;
    return s_gameFontReady;
}

// Internal: draw text string using specified texture
static void drawTextInternal(GLuint texture, const char* text, int x, int y, float r, float g, float b) {
    int cx, cy;
    unsigned char ch;
    const char* p = text;

    if (texture == 0) return;

    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, texture);
    glColor4f(r, g, b, 1.0f);

    cx = x;
    cy = y;

    glBegin(GL_QUADS);
    while (*p) {
        ch = (unsigned char)*p;
        p++;

        if (ch == '\n') { cx = x; cy += GLYPH_H + 2; continue; }
        if (ch < 0x20 || ch > 0x7E) { cx += 14; continue; }

        int atlasSlot = ch - 0x20;
        int atlasCol = atlasSlot % ATLAS_COLS;
        int atlasRow = atlasSlot / ATLAS_COLS;

        float u0 = (float)(atlasCol * GLYPH_W) / (float)ATLAS_W;
        float v0 = (float)(atlasRow * GLYPH_H) / (float)ATLAS_H;
        float u1 = (float)((atlasCol + 1) * GLYPH_W) / (float)ATLAS_W;
        float v1 = (float)((atlasRow + 1) * GLYPH_H) / (float)ATLAS_H;

        glTexCoord2f(u0, v0); glVertex2f((float)cx, (float)cy);
        glTexCoord2f(u1, v0); glVertex2f((float)(cx + GLYPH_W), (float)cy);
        glTexCoord2f(u1, v1); glVertex2f((float)(cx + GLYPH_W), (float)(cy + GLYPH_H));
        glTexCoord2f(u0, v1); glVertex2f((float)cx, (float)(cy + GLYPH_H));

        cx += 14;  // 14px advance per char (ASM verified)
    }
    glEnd();
}

// Light font — no shadow (splash screen)
void drawGameText(const char* text, int x, int y, float r, float g, float b) {
    if (!s_gameFontReady || text == NULL) return;

    glMatrixMode(GL_PROJECTION);
    glPushMatrix();
    glLoadIdentity();
    glOrtho(0, 640, 448, 0, -1, 1);
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glLoadIdentity();

    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glDisable(GL_DEPTH_TEST);

    drawTextInternal(s_lightFontTexture, text, x, y, r, g, b);

    glDisable(GL_TEXTURE_2D);
    glDisable(GL_BLEND);
    glEnable(GL_DEPTH_TEST);
    glPopMatrix();
    glMatrixMode(GL_PROJECTION);
    glPopMatrix();
    glMatrixMode(GL_MODELVIEW);
    glBindTexture(GL_TEXTURE_2D, 0);
    glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
}

// Gothic font with shadow (title screen, menu)
void drawGameTextShadowEx(const char* text, int x, int y, float r, float g, float b, float sr, float sg, float sb) {
    if (!s_gameFontReady || text == NULL) return;

    glMatrixMode(GL_PROJECTION);
    glPushMatrix();
    glLoadIdentity();
    glOrtho(0, 640, 448, 0, -1, 1);
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glLoadIdentity();

    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glDisable(GL_DEPTH_TEST);

    drawTextInternal(s_gothicFontTexture, text, x + 2, y, sr, sg, sb);
    drawTextInternal(s_gothicFontTexture, text, x - 2, y, sr, sg, sb);
    drawTextInternal(s_gothicFontTexture, text, x, y + 2, sr, sg, sb);
    drawTextInternal(s_gothicFontTexture, text, x, y - 2, sr, sg, sb);
    drawTextInternal(s_gothicFontTexture, text, x + 2, y + 2, sr, sg, sb);
    drawTextInternal(s_gothicFontTexture, text, x, y, r, g, b);

    glDisable(GL_TEXTURE_2D);
    glDisable(GL_BLEND);
    glEnable(GL_DEPTH_TEST);
    glPopMatrix();
    glMatrixMode(GL_PROJECTION);
    glPopMatrix();
    glMatrixMode(GL_MODELVIEW);
    glBindTexture(GL_TEXTURE_2D, 0);
    glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
}

// ASM verified: func_001b5090 draws shadow at +2,+2 with color masked to alpha only (black)
void drawGameTextShadow(const char* text, int x, int y, float r, float g, float b) {
    if (!s_gameFontReady || text == NULL) return;

    glMatrixMode(GL_PROJECTION);
    glPushMatrix();
    glLoadIdentity();
    glOrtho(0, 640, 448, 0, -1, 1);
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glLoadIdentity();

    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glDisable(GL_DEPTH_TEST);

    // Shadow pass: black at +2,+2 offset
    drawTextInternal(s_gothicFontTexture, text, x + 2, y + 2, 0.0f, 0.0f, 0.0f);
    // Text pass: requested color
    drawTextInternal(s_gothicFontTexture, text, x, y, r, g, b);

    glDisable(GL_TEXTURE_2D);
    glDisable(GL_BLEND);
    glEnable(GL_DEPTH_TEST);
    glPopMatrix();
    glMatrixMode(GL_PROJECTION);
    glPopMatrix();
    glMatrixMode(GL_MODELVIEW);
    glBindTexture(GL_TEXTURE_2D, 0);
    glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
}

void shutdownGameFont(void) {
    if (s_lightFontTexture != 0) {
        glDeleteTextures(1, &s_lightFontTexture);
        s_lightFontTexture = 0;
    }
    if (s_gothicFontTexture != 0) {
        glDeleteTextures(1, &s_gothicFontTexture);
        s_gothicFontTexture = 0;
    }
    s_gameFontReady = 0;
}
