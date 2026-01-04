#include "game_data.h"
#include <stdlib.h>
#include <string.h>

GameData g_game = {0};

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
