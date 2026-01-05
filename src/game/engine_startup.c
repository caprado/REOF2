#include "engine_startup.h"
#include "game_data.h"
#include <stdlib.h>
#include <string.h>

static bool initializeTextSystem(void) {
    // Allocate text array with default capacity
    g_game.textArrayCapacity = 32;
    g_game.textArray = (char**)calloc(32, sizeof(char*));

    if (g_game.textArray == NULL) {
        return false;
    }

    g_game.textArraySize = 0;
    return true;
}

static bool initializeResourceSystem(void) {
    // PS2 used hardcoded address 0x00307d90 for resource array
    // Windows: Allocate dynamically (256 entries × 32 bytes = 8192 bytes)
    #define RESOURCE_ENTRY_COUNT 256
    #define RESOURCE_ENTRY_SIZE 32

    size_t totalSize = RESOURCE_ENTRY_COUNT * RESOURCE_ENTRY_SIZE;
    g_game.resourceEntryBase = calloc(1, totalSize);

    if (g_game.resourceEntryBase == NULL) {
        return false;
    }

    return true;
}

bool initializeEngine(void) {
    // Step 1: Initialize GameData structure
    initializeGameData();

    // Step 2: Initialize text rendering system
    if (!initializeTextSystem()) {
        return false;
    }

    // Step 3: Initialize resource system (MUST be before game state manager runs)
    if (!initializeResourceSystem()) {
        return false;
    }

    return true;
}

void shutdownEngine(void) {
    // Free resource entry array
    if (g_game.resourceEntryBase != NULL) {
        free(g_game.resourceEntryBase);
        g_game.resourceEntryBase = NULL;
    }

    // Shutdown in reverse order of initialization
    shutdownGameData();
}
