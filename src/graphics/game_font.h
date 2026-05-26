#ifndef GAME_FONT_H
#define GAME_FONT_H

#include <stdint.h>

/**
 * @file game_font.h
 * @description Game font renderer using d20le04.bin (20x20 2bpp JIS font).
 *              Loads glyph bitmaps from NETBIO00.DAT at runtime.
 *              See docs/FONT_FORMAT.md for format details.
 */

/**
 * @description Initialize game font — loads d20le04.bin from disc,
 *              creates OpenGL texture atlas from 2bpp glyph data.
 * @return 1 on success, 0 on failure
 */
int32_t initGameFont(void);

/**
 * @description Render text using Light font (d20le04.bin). No shadow.
 */
void drawGameText(const char* text, int x, int y, float r, float g, float b);

/**
 * @description Render text using Gothic font (d20go04.bin) with shadow.
 *              ASM verified: shadow at +2,+2 offset in black, text on top.
 *              Used for "PRESS START BUTTON" and menu items.
 */
void drawGameTextShadow(const char* text, int x, int y, float r, float g, float b);

/**
 * @description Render text using Gothic font with custom shadow color.
 *              Shadow at +2,+2 offset, then text on top.
 */
void drawGameTextShadowEx(const char* text, int x, int y, float r, float g, float b, float sr, float sg, float sb);

/**
 * @description Shutdown game font, free textures.
 */
void shutdownGameFont(void);

#endif // GAME_FONT_H
