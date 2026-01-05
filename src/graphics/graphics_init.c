/**
 * @category graphics/init
 * @status complete
 * @original func_0019f080
 * @address 0x0019f080
 * @description Graphics system initialization - sets up display settings and graphics state.
 *              Returns 1 on success, 0 on failure. Called during game startup from updateGameStateManager.
 *
 * Original PS2 Behavior:
 * - Called func_0019f230 to check/init GS subsystem
 * - Called func_0018db40 for VRAM allocation
 * - Called func_0019f420 for DMA/GS packet setup
 * - Called func_0019f4e0 for display configuration (sets all display globals)
 * - Called func_001a0010 for GS register programming
 * - Called func_001a1530 for finalization
 * - Waited for GS ready via func_00113098
 * - Wrote to PS2 INTC registers
 *
 * Windows Replacement:
 * - Calls initializeDisplaySettings() to set all display globals
 * - OpenGL window/context already created in main_windows.c
 * - No PS2 hardware interaction needed
 * - Always returns 1 (success) since OpenGL is already initialized
 *
 * @windows_compatibility high
 * @author caprado
 */

#include "graphics_init.h"
#include "display_settings.h"
#include "../game/game_data.h"

/**
 * @brief Initialize the graphics system
 * @return 1 on success, 0 on failure
 *
 * Windows Implementation:
 * This function initializes all the display-related globals that game logic
 * reads for coordinate calculations. The actual OpenGL initialization is
 * already done in main_windows.c before the game loop starts.
 *
 * The key purpose is to set:
 * - g_game.screenWidth / screenHeight (used by rendering code)
 * - g_game.screenCenterX / screenCenterY (used for coordinate transforms)
 * - g_game.displayScale and other display configuration globals
 */
int32_t initializeGraphicsSystem(void) {
    // Initialize all display settings globals
    // This replaces the complex PS2-specific initialization chain:
    // func_0019f230 -> func_0018db40 -> func_0019f420 -> func_0019f4e0 ->
    // func_001a0010 -> func_001a1530 -> func_00113098 wait loop
    //
    // Those functions set up PS2 GS registers, VRAM, DMA packets, etc.
    // For Windows/OpenGL, we only need the global values that game logic reads.
    initializeDisplaySettings();

    // On Windows, OpenGL is already initialized in main_windows.c
    // before the game loop starts, so we always succeed here.
    // The g_game.graphicsReady flag is set by initializeDisplaySettings()

    return 1;  // Success
}
