#include "game_data.h"
#include <stdlib.h>
#include <string.h>

/**
 * @category game/state
 * @status complete
 * @original N/A (new abstraction)
 * @description Central game data structure replacing PS2 hardcoded addresses.
 *
 * ORIGINAL PS2 BEHAVIOR:
 * Used fixed RAM addresses and GP-relative addressing for all game state:
 * - GP-relative: gp-0x638c, gp-0x6390, gp-0x6384, etc.
 * - Absolute: 0x00307f91, 0x00313884, 0x003136e0, etc.
 *
 * WINDOWS REPLACEMENT:
 * Single unified GameData structure accessed via g_game global.
 * No fixed memory layout or GP register required.
 *
 * @windows_compatibility high
 * @author caprado
 */

// Global game data instance (replaces all scattered PS2 addresses)
GameData g_game = {0};

/**
 * @brief Initialize game data structure
 * @description Sets all fields to safe initial values
 */
void initializeGameData(void) {
    // Zero out the structure
    memset(&g_game, 0, sizeof(GameData));

    // --- Menu controller state ---
    g_game.menuFlag1 = 0;
    g_game.menuFlag2 = 0;
    g_game.gameStateFlag = 0;

    // --- Menu state ---
    g_game.menuState1 = 0;
    g_game.menuState2 = 0;
    g_game.menuState3 = 0;

    // --- Menu sequence system ---
    g_game.sequenceActive = 0;
    g_game.currentTimer = 0;
    g_game.sequenceIndex = 0;
    g_game.sequenceArray = NULL;
    g_game.timerShift = 0;

    // --- Game state manager ---
    g_game.gameStateManagerState = 0;
    g_game.counter1 = 0;
    g_game.counter2 = 0;
    g_game.counter3 = 0;
    g_game.gameFloatValue = 0.0f;
    g_game.frameCallback = 0;

    // --- Resource system ---
    g_game.resourceEntryBase = NULL;

    // --- System state (legacy fields) ---
    g_game.systemState = 0;
    g_game.controllerState = 0;
    g_game.gameCompleteFlag = 0;
    g_game.gameSystemFlag = 0;

    // --- Text rendering data ---
    g_game.textArray = NULL;
    g_game.textArraySize = 0;
    g_game.textArrayCapacity = 0;

    // Allocate text array with default capacity if needed
    // Note: This can be called separately if text system is used
    // allocateTextArray(32);
}

/**
 * @brief Shutdown game data and free resources
 * @description Cleans up any dynamically allocated resources
 */
void shutdownGameData(void) {
    // Free text array and all strings
    if (g_game.textArray != NULL) {
        for (uint32_t i = 0; i < g_game.textArraySize; i++) {
            if (g_game.textArray[i] != NULL) {
                free(g_game.textArray[i]);
                g_game.textArray[i] = NULL;
            }
        }
        free(g_game.textArray);
        g_game.textArray = NULL;
    }

    g_game.textArraySize = 0;
    g_game.textArrayCapacity = 0;

    // Free sequence array if dynamically allocated
    // Note: sequenceArray is typically a static array, not freed here

    // Zero out the entire structure
    memset(&g_game, 0, sizeof(GameData));
}
