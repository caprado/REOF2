#ifndef OPTIONS_SCREEN_H
#define OPTIONS_SCREEN_H

#include <stdint.h>

/**
 * @file options_screen.h
 * @category game/ui
 * @status in_progress
 * @original func_001ba070 (callback dispatch), sequence table at 0x21cab0
 * @address 0x21cab0 (OPTIONS config), 0x21dfd0 (string table)
 * @description Windows replacement for PS2 Options screen.
 *              PS2 uses GS packet rendering via func_00189770.
 *              Windows uses game_font.c text rendering.
 *
 * Options menu items (from ELF string table at 0x21dfd0):
 *   CONTROLLER SETTINGS, SOUND SETTINGS, BRIGHTNESS ADJUST,
 *   SCREEN ADJUST, SAVE/LOAD, EDIT NETWORK CONFIGURATION, EXIT
 *
 * @windows_compatibility high
 * @author caprado
 */

void initOptionsScreen(void);
void updateOptionsScreen(void);
int isOptionsScreenActive(void);
void drawOptionsScreen(void);

#endif // OPTIONS_SCREEN_H
