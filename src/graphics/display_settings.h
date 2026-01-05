#ifndef DISPLAY_SETTINGS_H
#define DISPLAY_SETTINGS_H

#include <stdint.h>
#include <stdbool.h>

/**
 * @category graphics/init
 * @status complete
 * @original func_0019f4e0
 * @address 0x0019f4e0
 * @description Initializes display settings globals used by game rendering code.
 *              This sets up screen dimensions, center coordinates, and other
 *              display configuration values that game logic reads for rendering.
 *
 * Windows Implementation:
 * - Sets globals to values matching 640x480 non-interlaced display
 * - No PS2 GS register programming (handled by OpenGL)
 * - Provides values needed for coordinate calculations in game code
 *
 * @windows_compatibility high
 * @author caprado
 */
void initializeDisplaySettings(void);

/**
 * @brief Initialize display settings with specific dimensions
 * @param width Screen width (default: 640)
 * @param height Screen height (default: 480)
 */
void initializeDisplaySettingsWithSize(int32_t width, int32_t height);

#endif // DISPLAY_SETTINGS_H
