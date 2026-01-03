#include <stdint.h>
#include <stdbool.h>
#include "game_data.h"  // For GameData structure

// Unclassified functions
extern void func_00101e20(void* dataPtr);  // Initialization function

#define INIT_COUNTER_RESET_VALUE 0x14  // Reset counter to 20

/**
 * @category game/init
 * @status complete
 * @author caprado
 * @original func_001ba8b0
 * @address 0x001ba8b0
 * @description Decrement initialization counter and trigger initialization
 *              when counter reaches zero. Counter starts at some value and
 *              decrements each call. When it hits 0, resets to 20 and calls
 *              initialization function with game data pointer.
 *
 *              ORIGINAL PS2 BEHAVIOR:
 *              - Used gp-0x7cc0 for initialization counter
 *              - Used gp-0x6358 for game data structure pointer
 *
 *              WINDOWS REPLACEMENT:
 *              - Uses g_game.initCounter from GameData structure
 *              - Passes pointer to g_game structure for initialization
 *
 * @windows_compatibility high
 */
void decrementAndInitialize(void) {
    // Decrement counter (now using GameData structure)
    g_game.initCounter--;

    // Check if counter reached zero
    if (g_game.initCounter == 0) {
        // Reset counter to 20
        g_game.initCounter = INIT_COUNTER_RESET_VALUE;

        // Call initialization function with pointer to GameData structure
        // PS2 passed gp-0x6358 (game data pointer)
        // Windows: Pass pointer to g_game global
        func_00101e20(&g_game);  // Original: func_00101e20 at 0x101d28
    }
}
