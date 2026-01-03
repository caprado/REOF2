#include "engine_startup.h"
#include "game_data.h"
#include <stdlib.h>
#include <string.h>

// Entry point - to be refactored
// func_001b9e60: Main menu controller entry point
// Calls: func_001b9ef0 (0x1b9ef0), func_001b9f10 (0x1b9f10), func_001ba0f0 (0x1ba0f0)
extern void func_001b9e60(void* context);

/**
 * @category game/init
 * @status complete
 * @original N/A (new abstraction)
 * @description Centralized engine initialization replacing scattered PS2 startup code.
 *
 * ORIGINAL PS2 BEHAVIOR:
 * - Systems initialized in various places throughout main()
 * - Used hardcoded memory addresses for all state
 * - No centralized initialization order
 *
 * WINDOWS REPLACEMENT:
 * - Single initialization function with proper ordering
 * - All systems use GameData structure
 * - Clean error handling
 *
 * @windows_compatibility high
 * @author caprado
 */

/**
 * @brief Initialize text rendering system
 * @description Allocates text array for in-game text rendering
 * @return true if successful, false on allocation failure
 */
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

/**
 * @brief Initialize resource system
 * @description Allocates resource entry array (32 bytes per entry, 256 entries)
 * @return true if successful, false on allocation failure
 */
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

/**
 * @brief Initialize all game engine systems
 */
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

    // Step 4: Graphics memory system initialization
    // (Will be called on-demand by checkGraphicsMemoryReady)

    // Step 5: Menu system initialization
    // Entry point: func_001b9e60 (to be refactored)
    // For now, this is a stub - uncomment when refactored
    // func_001b9e60(NULL);

    return true;
}

/**
 * @brief Shutdown all game engine systems
 */
void shutdownEngine(void) {
    // Free resource entry array
    if (g_game.resourceEntryBase != NULL) {
        free(g_game.resourceEntryBase);
        g_game.resourceEntryBase = NULL;
    }

    // Shutdown in reverse order of initialization
    shutdownGameData();
}
