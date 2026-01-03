#ifndef GAME_DATA_H
#define GAME_DATA_H

#include <stdint.h>

/**
 * @file game_data.h
 * @brief Central game data structure replacing PS2 global memory addresses
 * @description This structure replaces all hardcoded PS2 memory addresses with
 *              a proper Windows-compatible data structure. All game systems
 *              access this single global instance instead of GP-relative pointers.
 *
 * Original PS2 Memory Layout:
 * GP-relative globals (menu/game state):
 * - gp-0x638c: menuFlag1
 * - gp-0x6390: menuFlag2
 * - gp-0x6384: gameStateManagerState
 * - gp-0x633c: counter1
 * - gp-0x6338: counter2
 * - gp-0x6334: counter3
 * - gp-0x6388: gameFloatValue
 *
 * Absolute addresses:
 * - 0x00307f91: gameStateFlag
 * - 0x00313884: systemState
 * - 0x003136e0: controllerState
 * - 0x0021CC10: textArray base
 */

// Forward declarations
struct MenuSequenceEntry;

/**
 * @brief Menu sequence callback function pointer type
 * @description Function pointer for menu sequence callbacks.
 *              On PS2, these were stored as integer addresses in the sequence array.
 *              On Windows, these must be real function pointers.
 */
typedef void (*MenuCallback)(void);

/**
 * @brief Menu sequence entry structure
 * @description Defines a timed sequence step with duration and callback.
 *              PS2 version stored callback as int32_t address.
 *              Windows version uses proper function pointer.
 */
typedef struct MenuSequenceEntry {
    int16_t duration;        // Duration in frames (0 = end of sequence)
    MenuCallback callback;   // Function to call when sequence activates (NULL = no callback)
} MenuSequenceEntry;

/**
 * @brief Central game data structure
 * @description Replaces all PS2 GP-relative globals with a unified structure.
 *              This enables proper Windows compilation and eliminates hardcoded
 *              memory addresses.
 */
typedef struct GameData {
    // --- Menu controller state ---
    uint32_t menuFlag1;              // Original: gp-0x638c
    uint32_t menuFlag2;              // Original: gp-0x6390
    uint8_t gameStateFlag;           // Original: 0x00307f91 - triggers game state manager

    // --- Menu state ---
    uint16_t menuState1;             // Original: 0x00307f9c
    uint16_t menuState2;             // Original: 0x00307f9e
    uint32_t menuState3;             // Original: 0x00307fa0

    // --- Menu sequence system ---
    uint8_t sequenceActive;          // Original: 0x00307f90 - 1 if sequence is running, 0 otherwise
    int16_t currentTimer;            // Original: 0x00307f9c - Current frame timer for active sequence
    int16_t sequenceIndex;           // Original: 0x00307f9e - Current index in sequence array
    MenuSequenceEntry* sequenceArray; // Pointer to active sequence array
    int16_t sequenceCount;           // Number of entries in sequence array (for bounds checking)
    uint8_t timerShift;              // Original: 0x003137ac - Timer shift value (usually 0)

    // --- Game state manager ---
    uint32_t gameStateManagerState;  // Original: gp-0x6384 - State machine state (0=init, 1=running)
    uint16_t counter1;               // Original: gp-0x633c - Game counter
    uint16_t counter2;               // Original: gp-0x6338 - Previous counter value
    uint16_t counter3;               // Original: gp-0x6334 - Source counter (resource entry index)
    float    gameFloatValue;         // Original: gp-0x6388 - Game float value
    uintptr_t frameCallback;         // Frame completion callback pointer
    int32_t  initCounter;            // Original: gp-0x7cc0 - Initialization counter

    // --- Resource system ---
    void* resourceEntryBase;         // Base pointer for resource entry system

    // --- System state (legacy fields) ---
    uint16_t systemState;            // Original: 0x00313884 - Game system state flags
    uint32_t controllerState;        // Original: 0x003136e0 - Button press flags
    uint32_t gameCompleteFlag;       // Game completion status
    uint16_t gameSystemFlag;         // Various system flags

    // --- Text rendering data ---
    char** textArray;                // Original: 0x0021CC10 - Array of text string pointers
    uint32_t textArraySize;          // Number of text entries
    uint32_t textArrayCapacity;      // Allocated capacity
} GameData;

/**
 * @brief Global game data instance
 * @description Single global instance accessed by all game systems
 */
extern GameData g_game;

/**
 * @brief Initialize game data structure
 * @description Sets all fields to safe initial values
 */
void initializeGameData(void);

/**
 * @brief Shutdown game data and free resources
 * @description Cleans up any dynamically allocated resources
 */
void shutdownGameData(void);

// Compatibility macros for gradual migration from old code
// These allow existing code to work while transitioning to the new structure
#define g_menuFlag1              (&g_game.menuFlag1)
#define g_menuFlag2              (&g_game.menuFlag2)
#define g_gameStateFlag          (&g_game.gameStateFlag)
#define g_menuState1             (&g_game.menuState1)
#define g_menuState2             (&g_game.menuState2)
#define g_menuState3             (&g_game.menuState3)
#define g_sequenceActive         (&g_game.sequenceActive)
#define g_currentTimer           (&g_game.currentTimer)
#define g_sequenceIndex          (&g_game.sequenceIndex)
#define g_sequenceData           (&g_game.sequenceArray)
#define g_timerShift             (&g_game.timerShift)
#define g_gameStateManagerState  (&g_game.gameStateManagerState)
#define g_gameCounter1           (&g_game.counter1)
#define g_gameCounter2           (&g_game.counter2)
#define g_gameCounter3           (&g_game.counter3)
#define g_gameFloatValue         (&g_game.gameFloatValue)
#define g_frameCallback          (&g_game.frameCallback)
#define g_resourceEntryBase      (&g_game.resourceEntryBase)

#endif // GAME_DATA_H
