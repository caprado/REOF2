#ifndef DEMO_STATE_H
#define DEMO_STATE_H

#include <stdint.h>

/**
 * @file demo_state.h
 * @brief Demo/attract mode state machine for title screen sequence
 * @description This is NOT the main gameplay - it's the pre-game attract mode
 *              that plays on boot and loops until the player starts the game.
 */

// Demo state context structure
typedef struct DemoStateContext {
    uint8_t padding[9];   // Padding to offset 9
    uint8_t currentState; // offset 0x9: Current state
    uint8_t timerCounter; // offset 0xa: Timer/delay counter
} DemoStateContext;

// Demo/attract mode state constants
enum DemoState {
    DEMO_STATE_INIT = 0,         // Initialize demo mode
    DEMO_STATE_LOAD = 1,         // Load demo resources
    DEMO_STATE_WAIT_LOAD = 2,    // Wait for resources to load
    DEMO_STATE_FADE_IN = 3,      // Fade in transition
    DEMO_STATE_SEQUENCE = 4,     // Demo sequence playback
    DEMO_STATE_TRANSITION1 = 5,  // First transition
    DEMO_STATE_TRANSITION2 = 6,  // Second transition
    DEMO_STATE_TRANSITION3 = 7,  // Third transition
    DEMO_STATE_SEQUENCE1 = 8,    // First demo sequence
    DEMO_STATE_SEQUENCE2 = 9,    // Second demo sequence
    DEMO_STATE_EXIT = 10,        // Exit demo mode
    DEMO_STATE_IDLE = 11,        // Idle/waiting for player input
    DEMO_STATE_MAX = 12
};

/**
 * @brief Process demo/attract mode state machine
 * @param context Demo state context containing current state and timer
 * @original func_001bc2a0 at 0x001bc2a0
 */
void processDemoStateMachine(DemoStateContext* context);

#endif // DEMO_STATE_H
