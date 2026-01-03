#include <stdint.h>
#include <stdbool.h>
#include "menu_state.h"  // For initMenuState
#include "game_state_manager.h"  // For processGameStateManager
#include "menu_init.h"  // For initializeMenuSystem
#include "game_data.h"  // For GameData structure

/**
 * Menu controller context
 * Passed as parameter to processMenuController
 */
typedef struct MenuContext {
    uint8_t menuState;       // Menu state (0=init, 1=running)
} MenuContext;

/**
 * @category game/menu
 * @status complete
 * @author caprado
 * @original func_001b9e60
 * @address 0x001b9e60
 * @description Main menu controller that dispatches to menu subsystems.
 *              Handles menu initialization and updates, and triggers game
 *              state manager when appropriate.
 * @windows_compatibility high
 */
void processMenuController(MenuContext* context) {
    uint8_t state = context->menuState;

    // State machine based on menu initialization state
    switch (state) {
        case 0:  // First time - initialize menu
        {
            // Initialize menu system
            initializeMenuSystem();  // Original: func_001b9f10 at 0x1b9ef0

            // Clear menu flags (now using GameData structure)
            g_game.menuFlag1 = 0;  // Original: gp-0x638c
            g_game.menuFlag2 = 0;  // Original: gp-0x6390

            // Advance to running state
            context->menuState = 1;
            break;
        }

        case 1:  // Normal menu operation
        {
            // Update menu system every frame
            initMenuState();  // Original: func_001ba010 at 0x1ba010

            // Check if game state manager should run (now using GameData structure)
            // PS2 branching: if (flag == 1) goto run_game; else return
            uint8_t gameStateFlag = g_game.gameStateFlag;  // Original: 0x00307f91

            if (gameStateFlag != 1) {
                // Flag is 0 or any other value - skip game state manager
                break;
            }

            // Game state manager active - process it
            processGameStateManager();  // Original: func_001ba1d0 at 0x1ba0f0
            break;
        }

        default:
            // Unknown state - do nothing
            break;
    }
}
