/**
 * @category graphics/init
 * @status complete
 * @original func_0019f4e0
 * @address 0x0019f4e0
 * @description Initializes display settings globals used by game rendering code.
 *              Replaces PS2-specific display configuration with Windows/OpenGL compatible values.
 *
 * Original PS2 Behavior:
 * - Set screen resolution based on display mode params
 * - Configured GS registers for interlacing, color depth
 * - Calculated framebuffer addresses and screen centers
 * - Called various PS2 display initialization functions
 *
 * Windows Replacement:
 * - Sets all display globals to appropriate values for 640x480
 * - Calculates screen center coordinates used by game rendering
 * - No PS2 hardware interaction (OpenGL handles actual display)
 *
 * @windows_compatibility high
 * @author caprado
 */

#include "display_settings.h"
#include "../game/game_data.h"

/**
 * @brief Initialize display settings with default 640x480 resolution
 */
void initializeDisplaySettings(void) {
    initializeDisplaySettingsWithSize(640, 480);
}

/**
 * @brief Initialize display settings with specific dimensions
 * @param width Screen width
 * @param height Screen height
 *
 * This function sets up all the display-related globals that game logic
 * reads for coordinate calculations during rendering.
 *
 * Key calculations from original PS2 code:
 * - screenCenterX = 0x800 - (width / 2)
 * - screenCenterY = 0x800 - (height / 2)
 * These center coordinates are used by func_0018f780 and other rendering code.
 */
void initializeDisplaySettingsWithSize(int32_t width, int32_t height) {
    // --- Critical rendering globals (MUST be set for game logic) ---

    // Screen dimensions - used by coordinate calculations (gp-0x6448, gp-0x644c)
    g_game.screenWidth = width;          // Original: gp-0x6448
    g_game.screenHeight = height;        // Original: gp-0x644c

    // Also stored at additional locations
    g_game.displayWidth = width;         // Original: 0x0028ff7c
    g_game.displayHeight = height;       // Original: 0x0028ff80

    // Screen center coordinates - CRITICAL for rendering
    // Original: 0x800 - (width/2), 0x800 - (height/2)
    // These are used in func_0018f780 for coordinate transforms
    g_game.screenCenterX = 0x800 - (width / 2);   // Original: 0x00290314 = 0x6c0 for 640 width
    g_game.screenCenterY = 0x800 - (height / 2);  // Original: 0x00290318 = 0x710 for 480 height

    // Float scale value - used in rendering calculations
    // Original sets this based on color depth, default to 65535.0f for 32-bit
    g_game.displayScale = 65535.0f;      // Original: 0x0028ffb4 / gp-0x4c

    // --- Display configuration (may be read by other game code) ---

    // Display mode settings - default to non-interlaced 32-bit
    g_game.displayMode = 0;              // Original: 0x0028ff70
    g_game.interlaceMode = 0;            // Original: 0x0028ff74 (0 = non-interlaced)
    g_game.pixelFormat = 3;              // Original: 0x0028ff84 (3 = 32-bit)
    g_game.colorDepth = 0;               // Original: 0x0028ff88
    g_game.interlaceType = 0;            // Original: 0x0028ff8c
    g_game.colorFormat = 0;              // Original: 0x0028ffa0

    // Display offsets and block sizes
    g_game.horizontalOffset = 0x40;      // Original: 0x0028ff90
    g_game.verticalOffset = 0x20;        // Original: 0x0028ff94
    g_game.blockWidth = 0x40;            // Original: 0x0028ffa8
    g_game.blockHeight = 0x20;           // Original: 0x0028ffac

    // Framebuffer dimensions (calculated from screen + offsets)
    g_game.framebufferWidth = width + g_game.horizontalOffset - 1;   // Original: 0x0028ff98
    g_game.framebufferHeight = height + g_game.verticalOffset - 1;   // Original: 0x0028ff9c

    // Display timing values
    g_game.displayTiming = 0x30;         // Original: 0x0028ffa4
    g_game.timingValue1 = 0x27c;         // Original: 0x00290324 (varies by mode)
    g_game.timingValue2 = 0x32;          // Original: 0x00290328 (varies by mode)

    // Buffer configuration
    g_game.bufferAddress = 0;            // Original: 0x0028ffb0
    g_game.bufferOffset1 = 0;            // Original: 0x0029032c
    g_game.bufferOffset2 = 0;            // Original: 0x00290330

    // State flags
    g_game.graphicsReady = 1;            // Original: 0x0028ffbc - Set to ready
    g_game.graphicsInitFlag = 0;         // Original: 0x0028ffc0
    g_game.displayState1 = 0;            // Original: 0x0029031c
    g_game.displayState2 = 0;            // Original: 0x00290320
    g_game.displayStateFlag = 0;         // Original: 0x00290410

    // Stored copies of dimensions
    g_game.storedWidth = width;          // Original: 0x00290404
    g_game.storedHeight = height;        // Original: 0x00290408
    g_game.centerReference = 0x800;      // Original: 0x0029040c
    g_game.storedColorDepth = 0;         // Original: 0x00290414

    // Color bit configuration (32-bit RGBA default)
    // Original values vary by color depth, using 32-bit defaults
    g_game.colorBitConfig[0] = 8;        // 0x00290418
    g_game.colorBitConfig[1] = 0;        // 0x0029041c
    g_game.colorBitConfig[2] = 0xff;     // 0x00290420
    g_game.colorBitConfig[3] = 8;        // 0x00290424
    g_game.colorBitConfig[4] = 8;        // 0x00290428
    g_game.colorBitConfig[5] = 0xff;     // 0x0029042c
    g_game.colorBitConfig[6] = 8;        // 0x00290430
    g_game.colorBitConfig[7] = 0x10;     // 0x00290434
    g_game.colorBitConfig[8] = 0xff;     // 0x00290438
    g_game.colorBitConfig[9] = 8;        // 0x0029043c
    g_game.colorBitConfig[10] = 0x18;    // 0x00290440
    g_game.colorBitConfig[11] = 0xff;    // 0x00290444
}
