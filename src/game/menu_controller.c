#include "menu_controller.h"
#include "menu_state.h"
#include "game_state_manager.h"
#include "game_data.h"
#include <stdint.h>

/**
 * @category game/menu
 * @status complete
 * @original func_001b9e60
 * @address 0x001b9e60
 * @description Main menu controller state machine. Called every frame from main loop.
 * @windows_compatibility high
 * @author caprado
 */


void processMenuController(MenuControllerContext* context) {
    uint8_t state = context->menuState;

    // State dispatch
    if (state == 1) {
        // State 1: Normal menu operation - skip to update
        goto state_update;
    }

    if (state == 0) {
        // State 0: First time initialization
        goto state_init;
    }

    // Other states: Exit immediately
    return;

state_init:
    // Initialize menu system
    initializeMenuState();  // Refactored from func_001b9ef0

    // Clear menu flags
    // Original: sw $zero, -0x638c($gp) and sw $zero, -0x6390($gp)
    // These are global flags - map to g_game when identified
    g_game.menuFlag1 = 0;
    g_game.menuFlag2 = 0;

    // Advance to running state
    context->menuState = context->menuState + 1;

    // Fall through to state_update

state_update:
    // Update menu sequence state every frame
    updateMenuSequence();  // Refactored from func_001b9f10

    // Check if game state manager should run
    // Original: lbu $a0, 0x7f91($at) where $at = 0x30 << 16 = 0x300000
    // So address is 0x300000 + 0x7f91 = 0x307f91
    uint8_t gameStateFlag = g_game.gameStateFlag;

    if (gameStateFlag == 1) {
        // Game state manager active - process it
        processGameStateManager();  // Refactored from func_001ba0f0
    }
    // If flag is 0 or any other value, skip game state manager

    return;
}
