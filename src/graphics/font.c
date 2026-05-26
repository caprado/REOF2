#include "font.h"
#include "../io/afs_reader.h"
#include "../io/tim2_decoder.h"
#include "../io/file_loader.h"
#include <stdio.h>
#include <string.h>

#ifdef _WIN32
#include <windows.h>
#include <GL/gl.h>
#else
#include <GL/gl.h>
#endif

// Font atlas: 128x64 pixels, 16x8 grid of 8x8 glyphs = 128 ASCII chars
#define FONT_GLYPH_W 8
#define FONT_GLYPH_H 8
#define FONT_ATLAS_COLS 16
#define FONT_ATLAS_ROWS 8
#define FONT_ATLAS_W 128
#define FONT_ATLAS_H 64

// NETBIO00.DAT → sub-AFS entry [0] → file index 580 = FONT8_8.TM2
#define NETBIO_FONT_OUTER_INDEX 0
#define NETBIO_FONT_INNER_INDEX 580

static GLuint s_fontTexture = 0;
static int s_fontReady = 0;

int32_t initFont(void) {
    AfsArchive outerAfs;
    AfsArchive innerAfs;
    uint8_t* fontData = NULL;
    uint32_t fontSize = 0;
    DecodedTexture decoded;
    char afsPath[256];

    if (s_fontReady) {
        return 1;
    }

    snprintf(afsPath, sizeof(afsPath), "%sNETBIO00.DAT", getDiscBasePath());

    // Open outer AFS
    if (!afsOpen(afsPath, &outerAfs)) {
        fprintf(stderr, "[Font] Failed to open %s\n", afsPath);
        return 0;
    }

    // Open nested AFS (entry 0 = main data archive with 1397 files)
    if (!afsOpenNested(&outerAfs, NETBIO_FONT_OUTER_INDEX, &innerAfs)) {
        fprintf(stderr, "[Font] Failed to open nested AFS\n");
        afsClose(&outerAfs);
        return 0;
    }

    // Read FONT8_8.TM2 (file 580)
    if (!afsReadFile(&innerAfs, NETBIO_FONT_INNER_INDEX, &fontData, &fontSize)) {
        fprintf(stderr, "[Font] Failed to read FONT8_8.TM2 (index %d)\n", NETBIO_FONT_INNER_INDEX);
        afsClose(&innerAfs);
        afsClose(&outerAfs);
        return 0;
    }

    // Decode TIM2 to RGBA
    if (!decodeTim2(fontData, fontSize, &decoded)) {
        fprintf(stderr, "[Font] Failed to decode TIM2\n");
        free(fontData);
        afsClose(&innerAfs);
        afsClose(&outerAfs);
        return 0;
    }

    free(fontData);
    afsClose(&innerAfs);
    afsClose(&outerAfs);

    // Upload to OpenGL texture
    glGenTextures(1, &s_fontTexture);
    glBindTexture(GL_TEXTURE_2D, s_fontTexture);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, decoded.width, decoded.height,
                 0, GL_RGBA, GL_UNSIGNED_BYTE, decoded.rgba);

    freeDecodedTexture(&decoded);

    s_fontReady = 1;
    printf("[Font] Loaded FONT8_8.TM2 (%dx%d) as OpenGL texture %u\n",
           FONT_ATLAS_W, FONT_ATLAS_H, s_fontTexture);
    fflush(stdout);

    return 1;
}

void drawText(const char* text, int x, int y, float r, float g, float b) {
    int cx, cy;
    unsigned char ch;
    float u0, v0, u1, v1;
    int glyphCol, glyphRow;

    if (!s_fontReady || text == NULL) {
        return;
    }

    // Set up 2D rendering
    glMatrixMode(GL_PROJECTION);
    glPushMatrix();
    glLoadIdentity();
    glOrtho(0, 640, 448, 0, -1, 1);
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glLoadIdentity();

    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, s_fontTexture);
    glDisable(GL_DEPTH_TEST);

    glColor4f(r, g, b, 1.0f);

    cx = x;
    cy = y;

    glBegin(GL_QUADS);
    while (*text) {
        ch = (unsigned char)*text;
        text++;

        if (ch == '\n') {
            cx = x;
            cy += FONT_GLYPH_H + 2;
            continue;
        }

        if (ch >= 128) {
            cx += FONT_GLYPH_W;
            continue;
        }

        glyphCol = ch % FONT_ATLAS_COLS;
        glyphRow = ch / FONT_ATLAS_COLS;

        u0 = (float)(glyphCol * FONT_GLYPH_W) / (float)FONT_ATLAS_W;
        v0 = (float)(glyphRow * FONT_GLYPH_H) / (float)FONT_ATLAS_H;
        u1 = (float)((glyphCol + 1) * FONT_GLYPH_W) / (float)FONT_ATLAS_W;
        v1 = (float)((glyphRow + 1) * FONT_GLYPH_H) / (float)FONT_ATLAS_H;

        glTexCoord2f(u0, v0); glVertex2f((float)cx, (float)cy);
        glTexCoord2f(u1, v0); glVertex2f((float)(cx + FONT_GLYPH_W), (float)cy);
        glTexCoord2f(u1, v1); glVertex2f((float)(cx + FONT_GLYPH_W), (float)(cy + FONT_GLYPH_H));
        glTexCoord2f(u0, v1); glVertex2f((float)cx, (float)(cy + FONT_GLYPH_H));

        cx += FONT_GLYPH_W;
    }
    glEnd();

    // Restore state
    glDisable(GL_TEXTURE_2D);
    glEnable(GL_DEPTH_TEST);
    glPopMatrix();
    glMatrixMode(GL_PROJECTION);
    glPopMatrix();
    glMatrixMode(GL_MODELVIEW);
}

void shutdownFont(void) {
    if (s_fontTexture != 0) {
        glDeleteTextures(1, &s_fontTexture);
        s_fontTexture = 0;
    }
    s_fontReady = 0;
}
