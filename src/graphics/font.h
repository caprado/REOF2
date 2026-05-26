#ifndef FONT_H
#define FONT_H

#include <stdint.h>

/**
 * @file font.h
 * @description Bitmap font system for text rendering.
 *              Loads FONT8_8.TM2 from NETBIO00.DAT at runtime,
 *              decodes TIM2 to RGBA, uploads to OpenGL texture.
 *              Renders 8x8 ASCII glyphs as textured quads.
 */

/**
 * @description Initialize font system — loads font from disc assets,
 *              decodes TIM2, creates OpenGL texture.
 * @return 1 on success, 0 on failure
 */
int32_t initFont(void);

/**
 * @description Render a text string at screen coordinates.
 *              Uses 2D orthographic projection.
 * @param text Null-terminated ASCII string
 * @param x Screen X position (pixels from left)
 * @param y Screen Y position (pixels from top)
 * @param r Red color component (0.0 - 1.0)
 * @param g Green color component (0.0 - 1.0)
 * @param b Blue color component (0.0 - 1.0)
 */
void drawText(const char* text, int x, int y, float r, float g, float b);

/**
 * @description Shutdown font system, free texture.
 */
void shutdownFont(void);

#endif // FONT_H
