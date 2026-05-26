/**
 * @category game/ui
 * @status in_progress
 * @original func_001ba070 (callback dispatch), sequence table at 0x21cab0
 * @address 0x21cab0 (OPTIONS config), 0x21dfd0 (string table)
 * @description Windows replacement for PS2 Options screen.
 *              PS2 renders via GS packets (func_00189770). Windows uses OpenGL text.
 *              String table verified from ELF at 0x21dfd0.
 * @windows_compatibility high
 * @author caprado
 */

#include "options_screen.h"
#include "game_data.h"
#include "../graphics/game_font.h"
#include "../audio/sound_bank.h"
#include <stdio.h>
#include <string.h>

#ifdef _WIN32
#include <windows.h>
#include <GL/gl.h>
#endif

#define OPTIONS_ITEM_COUNT 7

static const char* s_optionsItems[OPTIONS_ITEM_COUNT] = {
    "CONTROLLER SETTINGS",
    "SOUND SETTINGS",
    "BRIGHTNESS ADJUST",
    "SCREEN ADJUST",
    "SAVE/LOAD",
    "EDIT NETWORK CONFIGURATION",
    "EXIT"
};

static int s_active = 0;
static int s_selection = 0;
static int s_subScreen = -1;  // -1 = main options list

void initOptionsScreen(void) {
    s_active = 1;
    s_selection = 0;
    s_subScreen = -1;
}

int isOptionsScreenActive(void) {
    return s_active;
}

void updateOptionsScreen(void) {
    uint32_t pressed = 0;

    if (!s_active) return;

    if (g_game.entityDataPtr != NULL) {
        pressed = *(uint32_t*)((uint8_t*)g_game.entityDataPtr + 0x10);
    }

    if (s_subScreen == -1) {
        if (pressed & 0x0010) {
            if (s_selection > 0) {
                s_selection--;
                playSoundEffect(12, 4);
            }
        }
        if (pressed & 0x0040) {
            if (s_selection < OPTIONS_ITEM_COUNT - 1) {
                s_selection++;
                playSoundEffect(12, 4);
            }
        }

        // Confirm
        if (pressed & 0x8000) {
            if (s_selection == OPTIONS_ITEM_COUNT - 1) {
                // EXIT
                s_active = 0;
                return;
            }
            // TODO: enter sub-screen for each option
            printf("[Options] Selected: %s\n", s_optionsItems[s_selection]);
            fflush(stdout);
        }

        // Circle / back = EXIT
        if (pressed & 0x2000) {
            s_active = 0;
            return;
        }
    }
}

static void drawBox(float x, float y, float w, float h, float r, float g, float b, float a) {
    glDisable(GL_TEXTURE_2D);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glColor4f(r, g, b, a);
    glBegin(GL_QUADS);
    glVertex2f(x, y);
    glVertex2f(x + w, y);
    glVertex2f(x + w, y + h);
    glVertex2f(x, y + h);
    glEnd();
    glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
}

void drawOptionsScreen(void) {
    int i;

    if (!s_active) return;

    glMatrixMode(GL_PROJECTION);
    glPushMatrix();
    glLoadIdentity();
    glOrtho(0, 640, 448, 0, -1, 1);
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glLoadIdentity();

    glDisable(GL_DEPTH_TEST);

    // Dark background overlay
    drawBox(0, 0, 640, 448, 0.0f, 0.0f, 0.1f, 0.85f);

    // Title: "OPTIONS" centered at top
    drawGameTextShadow("OPTIONS", 260, 40, 1.0f, 1.0f, 1.0f);

    // Top border line
    drawBox(40, 65, 560, 2, 0.3f, 0.3f, 0.6f, 1.0f);

    // Menu items
    for (i = 0; i < OPTIONS_ITEM_COUNT; i++) {
        int charCount = (int)strlen(s_optionsItems[i]);
        int textW = charCount * 14;
        int x = (640 - textW) / 2;
        int y = 120 + i * 40;

        if (i == s_selection) {
            // Selection highlight box (dark red like PS2 screenshot)
            drawBox((float)(x - 10), (float)(y - 4), (float)(textW + 20), 28.0f,
                    0.4f, 0.0f, 0.0f, 0.7f);
            drawGameTextShadow(s_optionsItems[i], x, y, 1.0f, 1.0f, 1.0f);
        } else {
            // Unselected: dark blue box
            drawBox((float)(x - 10), (float)(y - 4), (float)(textW + 20), 28.0f,
                    0.1f, 0.1f, 0.3f, 0.7f);
            drawGameTextShadow(s_optionsItems[i], x, y, 0.8f, 0.8f, 0.8f);
        }
    }

    glEnable(GL_DEPTH_TEST);
    glPopMatrix();
    glMatrixMode(GL_PROJECTION);
    glPopMatrix();
    glMatrixMode(GL_MODELVIEW);
}
