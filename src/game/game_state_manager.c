#include "game_state_manager.h"
#include "game_data.h"
#include "game_init.h"
#include "game_secondary_init.h"
#include "../graphics/graphics_init.h"

// Forward declarations for unrefactored functions called by updateGameStateManager
extern void func_001b76c0(int32_t param);  // System setup with parameter
extern void func_001ba2a0(void);  // Per-frame processing
extern void func_001a8a50(void);  // Update function
extern int32_t func_00112118(void);  // Update function, returns status
extern float func_001aee10(void);  // Returns float value
extern void func_001aed20(void);  // Conditional update
extern void func_001b74b0(void);  // Frame finalization

/**
 * @category game/state
 * @status complete
 * @original func_001ba1d0
 * @address 0x001ba1d0
 * @description Main game state manager update - handles initialization sequence and per-frame updates.
 *              State 0: Initialization - sets up screen, calls init functions
 *              State 1: Running - updates counters and calls per-frame processing functions
 * @windows_compatibility high
 * @author caprado
 */
void updateGameStateManager(void) {
    int32_t initResult;
    int32_t updateResult;
    float floatResult;

    // Check current state
    if (g_game.gameStateManagerState == 1) {
        // State 1: Per-frame processing
        goto state_running;
    } else if (g_game.gameStateManagerState == 0) {
        // State 0: Initialization
        goto state_init;
    } else {
        // Other states: Return immediately
        return;
    }

state_init:
    // Original: func_0019f080() - graphics system init (no params, 0x280/0x1c0 were unused)
    // Loop until initialization succeeds
    do {
        initResult = initializeGraphicsSystem();
    } while (initResult == 0);

    // Call initialization functions
    initializeGameSubsystems();       // Original: func_001ba660
    initializeSecondarySubsystems();  // Original: func_001ba960

    // Original: a0 = (0x1c << 16) + (-0x4180) = 0x1c0000 - 0x4180 = 0x1bBE80
    func_001b76c0(0x1bBE80);

    // Advance to running state
    g_game.gameStateManagerState = g_game.gameStateManagerState + 1;
    return;

state_running:
    // Per-frame processing
    func_001ba2a0();

    // Update counters
    // counter2 = counter3 (copy previous value)
    g_game.counter2 = g_game.counter3;

    // counter1 increments each frame
    g_game.counter1 = g_game.counter1 + 1;

    // Call update functions
    func_001a8a50();

    // Call func_00112118 and store result
    updateResult = func_00112118();

    // Call func_001aee10 which returns a float, store to gameFloatValue
    floatResult = func_001aee10();
    g_game.gameFloatValue = floatResult;

    // If func_00112118 returned non-zero, call func_001aed20
    if (updateResult != 0) {
        func_001aed20();
    }

    // Frame finalization
    func_001b74b0();
}

/**
 * @category game/state
 * @status complete
 * @original func_001ba0f0
 * @address 0x001ba0f0
 * @description Processes game state sequence timer. Decrements timer and advances sequence.
 * @windows_compatibility high
 * @author caprado
 */
void processGameStateManager(void) {
    // Check if sequence is active
    if (g_game.sequenceActive == 0) {
        resetGameStateManager();
        return;
    }

    // Check if sequence array pointer is valid
    if (g_game.sequenceArray == NULL) {
        resetGameStateManager();
        return;
    }

    // Decrement timer by (1 << timerShift)
    int16_t decrement = 1 << g_game.timerShift;
    g_game.currentTimer = g_game.currentTimer - decrement;

    // If timer still positive, keep waiting
    if (g_game.currentTimer > 0) {
        return;
    }

    // Timer expired - load next sequence entry
    int16_t index = g_game.sequenceIndex;
    int16_t nextDuration = g_game.sequenceArray[index].duration;

    // Store as new timer value
    g_game.currentTimer = nextDuration;

    // If duration is 0, sequence has ended
    if (nextDuration == 0) {
        resetGameStateManager();
        return;
    }

    // Call the callback function for this sequence entry
    MenuCallback callback = g_game.sequenceArray[index].callback;
    if (callback != NULL) {
        callback();
    }

    // Advance to next sequence entry
    g_game.sequenceIndex = g_game.sequenceIndex + 1;
}

/**
 * @category game/state
 * @status complete
 * @original func_001ba010
 * @address 0x001ba010
 * @description Resets game state manager. Clears timer, index, and sequence pointer.
 * @windows_compatibility high
 * @author caprado
 */
void resetGameStateManager(void) {
    // Clear all game state manager variables
    g_game.currentTimer = 0;      // Original: sh $zero, 0x7f9c($at)
    g_game.sequenceIndex = 0;     // Original: sh $zero, 0x7f9e($at)
    g_game.sequenceArray = NULL;  // Original: sw $zero, 0x7fa0($at) - clearing pointer
    g_game.gameStateFlag = 0;     // Original: sb $zero, 0x7f91($at)
}
