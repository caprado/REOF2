#include <stdint.h>
#include <stdbool.h>
#include "menu_sequence.h"  // For processMenuSequence
#include "game_data.h"      // For GameData structure

/**
 * @category game/menu
 * @status complete
 * @author caprado
 * @original func_001ba010
 * @address 0x001ba010
 * @description Initializes/updates menu state. Clears menu state flags and
 *              calls menu processing function. Resets the game state trigger
 *              flag that controls when processGameStateManager runs.
 *
 *              ORIGINAL PS2 BEHAVIOR:
 *              - Used hardcoded memory addresses for all state flags
 *
 *              WINDOWS REPLACEMENT:
 *              - Uses GameData structure for all state
 *
 * @windows_compatibility high
 */
void initMenuState(void) {
    // Call menu sequence processor
    processMenuSequence();  // Original: func_001ba0f0 at 0x1ba070

    // Clear all menu state flags (now using GameData structure)
    g_game.menuState1 = 0;      // Original: 0x00307f9c
    g_game.menuState2 = 0;      // Original: 0x00307f9e
    g_game.menuState3 = 0;      // Original: 0x00307fa0
    g_game.gameStateFlag = 0;   // Original: 0x00307f91 - Reset game state trigger
}
