#include <stdint.h>
#include <stdbool.h>

extern int initializeGameBuffer(void);  // Original: func_001b07d0 at 0x1b0720
extern void removeFromPointerArray(uintptr_t addr);  // Original: func_001af2f0 at 0x1af280
extern void addToPointerArray(uintptr_t addr);       // Original: func_001af3a0 at 0x1af2f0
extern void initializeResourceEntry(uintptr_t addr, int index);  // Original: func_001b7720 at 0x1b76c0
extern void func_001bbab0(int param);  // Original: func_001bbab0 at 0x1bb9e0
extern void clearGameBuffer(void);  // Original: func_001bbf70 at 0x1bbf40
extern void updateDemoLoop(void);  // Original: func_001bbfb0 at 0x1bbfb0 - Renamed from updateGameLoop
extern int func_001bc960(void);     // Original: func_001bc960 at 0x1bc750
extern void func_001bc1b0(void);    // Original: func_001bc1b0 at 0x1bc1a0
extern void func_001bc200(void);    // Original: func_001bc200 at 0x1bc1b0
extern void func_001c2e20(void);    // Original: func_001c2e20 at 0x1c2a50
extern int func_001c32d0(void);     // Original: func_001c32d0 at 0x1c2e20
extern int func_001dbe10(void);     // Original: func_001dbe10 at 0x1dbdc0
extern void func_001ba590(void);    // Original: func_001ba590 at 0x1ba3c0
extern void func_001bbb80(void);    // Original: func_001bbb80 at 0x1bbab0f
extern void func_001b7970(void);    // Original: func_001b7970 at 0x1b7940
extern void func_001b77f0(void);    // Original: func_001b77f0 at 0x1b7790
extern int func_001b0d20(void);     // Original: func_001b0d20 at 0x1b0ce0

// Demo/attract mode state machine structure offsets
#define DEMO_STATE_OFFSET 9      // Current state byte (offset 0x9 in context)
#define DEMO_TIMER_OFFSET 10     // Timer/counter byte (offset 0xa in context)

// Global demo mode flags
static uint16_t g_demoSystemFlag = 0;    // Original: g_00313884 at 0x313884
static uint32_t g_demoCompleteFlag = 0;  // Original: gp-0x6330
static uint32_t g_controllerState = 0;   // Original: g_003136e0 at 0x3136e0

// Demo/attract mode state constants
enum DemoState {
    DEMO_STATE_INIT = 0,         // Initialize demo mode
    DEMO_STATE_LOAD = 1,         // Load demo resources
    DEMO_STATE_WAIT_LOAD = 2,    // Wait for resources to load
    DEMO_STATE_FADE_IN = 3,      // Fade in transition
    DEMO_STATE_SEQUENCE = 4,     // Demo sequence playback (was STATE_GAMEPLAY)
    DEMO_STATE_TRANSITION1 = 5,  // First transition
    DEMO_STATE_TRANSITION2 = 6,  // Second transition
    DEMO_STATE_TRANSITION3 = 7,  // Third transition
    DEMO_STATE_SEQUENCE1 = 8,    // First demo sequence
    DEMO_STATE_SEQUENCE2 = 9,    // Second demo sequence
    DEMO_STATE_EXIT = 10,        // Exit demo mode
    DEMO_STATE_IDLE = 11,        // Idle/waiting for player input
    DEMO_STATE_MAX = 12
};

// Demo state context structure (represents data at s0)
typedef struct DemoStateContext {
    uint8_t padding[9];   // Padding to offset 9
    uint8_t currentState; // offset 0x9: Current state
    uint8_t timerCounter; // offset 0xa: Timer/delay counter
} DemoStateContext;

/**
 * @category game/demo
 * @status complete
 * @author caprado
 * @original func_001bc2a0
 * @address 0x001bc2a0
 * @description Demo/attract mode state machine that plays on boot and title screen.
 *              Implements 12 states (0-11) using jump table dispatch.
 *              Manages demo sequence playback, transitions, and waits for player input.
 *              This is NOT the main gameplay loop - it's the pre-game attract sequence.
 * @windows_compatibility medium
 */
void processDemoStateMachine(DemoStateContext* context) {
    uint8_t state = context->currentState;

    // Validate state is within bounds
    if (state >= DEMO_STATE_MAX) {
        goto state_exit;
    }

    // Jump table dispatch based on current state
    switch (state) {
        
        case DEMO_STATE_INIT:  // State 0: Initialize demo mode
        {
            int result = initializeGameBuffer();  // Original: func_001b07d0 at 0x1b0720

            if (result == -1) {
                // Error case - exit
                goto state_exit;
            }

            if (result == -2) {
                // Special case - go to exit state
                context->currentState = DEMO_STATE_EXIT;
                context->timerCounter = 0;
                removeFromPointerArray(0x1c1f70);  // Original: func_001af2f0 at 0x1af280
                goto state_exit;
            }

            // Normal path - advance to load state
            initializeResourceEntry(0x1b9e60, 0xe);  // Original: func_001b7720 at 0x1b76c0
            context->currentState++;
            clearGameBuffer();  // Original: func_001bbf70 at 0x1bbf40
            updateDemoLoop();  // Original: func_001bbfb0 at 0x1bbfb0
            removeFromPointerArray(0x1bbfb0);  // Original: func_001af2f0 at 0x1af280
            removeFromPointerArray(0x1bae50);  // Original: func_001af2f0 at 0x1af280
            break;
        }

        case DEMO_STATE_LOAD:  // State 1: Loading demo resources
        {
            int ready = func_001bc960();  // Original: func_001bc960 at 0x1bc750

            if (ready == 0) {
                // Load complete - advance
                context->currentState++;
                context->timerCounter = 0x14;  // Set delay timer to 20
                func_001bbab0(8);  // Original: func_001bbab0 at 0x1bb9e0
                g_demoSystemFlag = 4;
            }
            break;
        }

        case DEMO_STATE_WAIT_LOAD:  // State 2: Wait after load
        {
            if (context->timerCounter > 0) {
                context->timerCounter--;
            } else {
                // Timer expired - advance to fade in
                func_001c2e20();  // Original: func_001c2e20 at 0x1c2a50
                context->currentState = DEMO_STATE_FADE_IN;
            }
            break;
        }

        case DEMO_STATE_FADE_IN:  // State 3: Fade in transition
        {
            int fadeComplete = func_001c32d0();  // Original: func_001c32d0 at 0x1c2e20

            if (fadeComplete == 0) {
                context->timerCounter = 0x14;  // Set delay timer to 20
                func_001bbab0(7);  // Original: func_001bbab0 at 0x1bb9e0
                context->currentState++;
            }
            break;
        }

        case DEMO_STATE_SEQUENCE:  // State 4: Demo sequence playback
        {
            if (context->timerCounter > 0) {
                context->timerCounter--;
            } else {
                // Timer expired - advance
                context->currentState++;
            }
            break;
        }

        case DEMO_STATE_TRANSITION1:  // State 5: First transition
        {
            func_001bc1b0();  // Original: func_001bc1b0 at 0x1bc1a0
            g_demoCompleteFlag = 0;
            context->currentState++;
            func_001bbab0(8);  // Original: func_001bbab0 at 0x1bb9e0
            g_demoSystemFlag = 3;
            break;
        }

        case DEMO_STATE_TRANSITION2:  // State 6: Second transition
        {
            int eventReady = func_001dbe10();  // Original: func_001dbe10 at 0x1dbdc0

            if (eventReady == 0) {
                context->currentState++;
            }

            func_001bbab0(8);  // Original: func_001bbab0 at 0x1bb9e0
            context->timerCounter = 0x80;  // Set timer to 128
            break;
        }

        case DEMO_STATE_SEQUENCE1:  // State 7: First demo sequence
        {
            context->timerCounter--;

            if (context->timerCounter == 0) {
                // Timer expired - advance
                context->currentState++;
                context->timerCounter = 0x80;
                func_001bbab0(8);  // Original: func_001bbab0 at 0x1bb9e0
                g_demoSystemFlag = 1;
            } else if (context->timerCounter == 0x14) {
                // At specific timer value (20)
                func_001bbab0(7);  // Original: func_001bbab0 at 0x1bb9e0
            }
            break;
        }

        case DEMO_STATE_SEQUENCE2:  // State 8: Second demo sequence
        {
            context->timerCounter--;

            if (context->timerCounter == 0) {
                // Timer expired - advance
                context->currentState++;
                context->timerCounter = 0x80;
                func_001bbab0(8);  // Original: func_001bbab0 at 0x1bb9e0
                g_demoSystemFlag = 2;
            } else if (context->timerCounter == 0x14) {
                // At specific timer value (20)
                func_001bbab0(7);  // Original: func_001bbab0 at 0x1bb9e0
            }
            break;
        }

        case DEMO_STATE_TRANSITION3:  // State 9: Third transition
        {
            context->timerCounter--;

            if (context->timerCounter == 0) {
                // Timer expired - advance
                context->currentState++;
                g_demoSystemFlag = 0;
            } else if (context->timerCounter == 0x14) {
                // At specific timer value (20)
                func_001bbab0(7);  // Original: func_001bbab0 at 0x1bb9e0
            }
            break;
        }

        case DEMO_STATE_EXIT:  // State 10: Exit demo mode
        {
            if (g_demoCompleteFlag == 0) {
                // Normal completion
                func_001bc200();  // Original: func_001bc200 at 0x1bc1b0
                goto final_check;
            } else {
                // Alternate exit path
                addToPointerArray(0x1bbfb0);  // Original: func_001af3a0 at 0x1af2f0
                addToPointerArray(0x1bae50);  // Original: func_001af3a0 at 0x1af2f0
                func_001ba590();  // Original: func_001ba590 at 0x1ba3c0
                func_001bbb80();  // Original: func_001bbb80 at 0x1bbab0
                func_001b7970();  // Original: func_001b7970 at 0x1b7940
                func_001b77f0();  // Original: func_001b77f0 at 0x1b7790
            }
            break;
        }

        // This is the idle state that waits for player to press start
        case DEMO_STATE_IDLE:  // State 11: Idle/waiting for player input
        {
            if (context->timerCounter == 0) {
                // Check for input
                int inputReady = func_001b0d20();  // Original: func_001b0d20 at 0x1b0ce0

                if (inputReady != 0) {
                    context->timerCounter = 1;
                }
            } else {
                // Check controller state for specific button (0x20 - likely "Start" button)
                if (g_controllerState & 0x20) {
                    // Button pressed - restart demo sequence
                    initializeResourceEntry(0x1b9e60, 0xe);  // Original: func_001b7720 at 0x1b76c0
                    context->currentState = DEMO_STATE_LOAD;
                    context->timerCounter = 0;
                    updateDemoLoop();  // Original: func_001bbfb0 at 0x1bbfb0
                    clearGameBuffer();  // Original: func_001bbf70 at 0x1bbf40
                    addToPointerArray(0x1c1f70);  // Original: func_001af3a0 at 0x1af2f0
                    removeFromPointerArray(0x1bbfb0);  // Original: func_001af2f0 at 0x1af280
                    removeFromPointerArray(0x1bae50);  // Original: func_001af2f0 at 0x1af280
                } else {
                    // No button press - check again
                    int inputReady = func_001b0d20();  // Original: func_001b0d20 at 0x1b0ce0

                    if (inputReady == 0) {
                        context->timerCounter = 0;
                    }
                }
            }
            break;
        }
    }

state_exit:
    // Post-state processing
    state = context->currentState;

    // States 7-9 need special handling
    if (state >= 7 && state < 10) {
        func_001bc200();  // Original: func_001bc200 at 0x1bc1b0
    }

final_check:
    return;
}
