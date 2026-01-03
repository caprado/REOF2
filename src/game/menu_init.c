#include <stdint.h>
#include <string.h>
#include "game_data.h"  // For GameData structure

/**
 * @category game/menu
 * @status complete
 * @author caprado
 * @original func_001b9ef0
 * @address 0x001b9ef0
 * @description Initialize menu system by clearing menu sequence state.
 *
 *              ORIGINAL PS2 BEHAVIOR:
 *              - If sequence is NOT active:
 *                  memset(0x00307f90, 0, 0x1C) - clears 28 bytes of menu state
 *              - If sequence IS active:
 *                  only force sequenceActive = 1
 *              - PS2 tail-calls func_00107d30 (thread sync) - removed on Windows
 *
 *              WINDOWS REPLACEMENT:
 *              - Uses GameData structure instead of hardcoded addresses
 *              - Clears menu sequence fields in g_game
 *              - No thread sync tail-call needed
 *
 * @windows_compatibility high
 */
void initializeMenuSystem(void) {
    uint8_t isActive = g_game.sequenceActive;

    if (isActive != 1) {
        // PS2: memset(0x00307f90, 0, 0x1C) clears 28 bytes
        // Cleared fields: sequenceActive, gameStateFlag, currentTimer, sequenceIndex, sequenceArray
        // Windows: Clear the same fields explicitly (no memset - struct layout differs from PS2)
        g_game.sequenceActive = 0;
        g_game.gameStateFlag = 0;
        g_game.currentTimer = 0;
        g_game.sequenceIndex = 0;
        g_game.sequenceArray = NULL;
        g_game.sequenceCount = 0;
        // NOTE: Does NOT clear menuState1/2/3 or timerShift (not part of original 0x1C bytes)
    } else {
        // PS2: sequence already active → set flag, no clearing
        g_game.sequenceActive = 1;
        // PS2 would tail-call func_00107d30 (thread sync) here — removed on Windows
    }
}
