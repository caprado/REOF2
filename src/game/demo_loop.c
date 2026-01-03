#include <stdint.h>
#include <stdbool.h>
#include "render_state.h"
#include "texture_processor.h"

extern void processDemoStateMachine(void);       // Original: func_001bc2a0 at 0x1bc200 - Renamed from processGameStateMachine
extern int checkResourceLoaded(int16_t resourceId);  // Original: func_001d3cb0 at 0x1d3cb0
extern void processRenderingCounter(void);       // Original: func_001ae910 at 0x1ae8d0
extern void func_001aeb00(int value);            // Original: func_001aeb00 at 0x1aea70
extern void func_001ab530(uintptr_t textData);   // Original: func_001ab530 at 0x1ab230
extern uintptr_t func_001c1f70(void);            // Original: func_001c1f70 at 0x1c1f20
extern void func_001b4ff0(int value);            // Original: func_001b4ff0 at 0x1b4fd0
extern void func_001b5050(void);                 // Original: func_001b5050 at 0x1b5040
extern void func_001b5060(uint32_t color);       // Original: func_001b5060 at 0x1b5050
extern int func_001b6220(void);                  // Original: func_001b6220 at 0x1b6150
extern void func_001b5010(int x, int y);         // Original: func_001b5010 at 0x1b4ff0
extern void func_001b52d0(uintptr_t textPtr);    // Original: func_001b52d0 at 0x1b5090

// Global demo state address (original: 0x310000 + 0x3884 = 0x313884)
#define DEMO_STATE_ADDR 0x00313884
static uint16_t* g_demoState = (uint16_t*)DEMO_STATE_ADDR;

// Text data array base (original: 0x220000 - 0x33f0 = 0x21cc10)
#define TEXT_ARRAY_BASE 0x0021CC10

/**
 * @category game/demo
 * @status complete
 * @author caprado
 * @original func_001bbfb0
 * @address 0x001bbfb0
 * @description Demo/attract mode update loop. Checks global demo state and either runs
 *              the demo state machine (if state == 4) or performs rendering/display
 *              operations with text and UI elements for demo sequences.
 *              This is NOT the main game loop - it's for the title screen/attract mode.
 * @windows_compatibility high
 */
void updateDemoLoop(void) {
    // Load current demo state from global
    uint16_t currentState = *g_demoState;

    // Early exit if state is 0 (demo not active)
    if (currentState == 0) {
        return;
    }

    // If state is 4, run the demo state machine
    if (currentState == 4) {
        processDemoStateMachine();  // Original: func_001bc2a0 at 0x1bc200
        return;
    }

    // Otherwise, perform demo rendering/display logic for states 1, 2, 3

    // Check if resource is loaded (returns 0 or 1)
    // Note: Resource index 0xe (14) is initialized by initializeResourceEntry before this is called
    // Checking resource ID 14 to verify the demo resource is ready
    int checkResult = checkResourceLoaded(14);  // Original: func_001d3cb0 at 0x1d3cb0
    int invertedCheck = checkResult ^ 1;  // Invert the result

    // Early exit if check failed
    if (checkResult == 0) {
        return;
    }

    // Perform series of rendering operations for demo
    processRenderingCounter();            // Original: func_001ae910 at 0x1ae8d0
    setRenderingState(0xd);               // Original: func_001aefe0 at 0x1aefd0
    setRenderingState(0x5f);              // Original: func_001aefe0 at 0x1aefd0
    setRenderingState(0x60);              // Original: func_001aefe0 at 0x1aefd0
    setRenderingState(0x63);              // Original: func_001aefe0 at 0x1aefd0
    setRenderingState(0x6c);              // Original: func_001aefe0 at 0x1aefd0

    // Process texture entries starting at index 1
    processTextureEntries(1, checkResult); // Original: func_0019d450 at 0x19d440

    setRenderingState(checkResult);       // Original: func_001aefe0 at 0x1aefd0
    func_001aeb00(5);                     // Original: func_001aeb00 at 0x1aea70

    // Calculate text data array offset based on inverted check
    // offset = ((invertedCheck << 2) + invertedCheck) << 2
    // This is equivalent to: offset = invertedCheck * 20
    int textDataOffset = ((invertedCheck << 2) + invertedCheck) << 2;
    uintptr_t textDataAddr = TEXT_ARRAY_BASE + textDataOffset;

    // Process text rendering with calculated address
    func_001ab530(textDataAddr);          // Original: func_001ab530 at 0x1ab230

    // If state is 3, perform additional demo text rendering operations
    if (currentState != 3) {
        return;
    }

    // Get base address of demo text array
    uintptr_t textArrayBase = func_001c1f70();  // Original: func_001c1f70 at 0x1c1f20

    // Count non-null entries in text array starting from base
    int lineCount = 0;
    uintptr_t* textPtr = (uintptr_t*)textArrayBase;
    while (*textPtr != 0) {
        lineCount++;
        textPtr++;
    }

    // Calculate total line count (includes the null terminator position)
    int totalLines = lineCount + (lineCount - 1);

    // Set display parameters
    func_001b4ff0(0x20);                  // Original: func_001b4ff0 at 0x1b4fd0
    func_001b5050();                      // Original: func_001b5050 at 0x1b5040
    func_001b5060(0x80808080);            // Original: func_001b5060 at 0x1b5050 (grey color)

    // Calculate vertical position offset based on line count
    // vOffset = (0x1c0 - (totalLines << 5)) >> 1
    // This centers the text vertically
    int vOffset = totalLines << 5;        // multiply by 32 (line height)
    vOffset = 0x1c0 - vOffset;            // subtract from screen center

    // Handle negative offset (arithmetic right shift preserves sign)
    if (vOffset < 0) {
        vOffset = (vOffset + 1) >> 1;
    } else {
        vOffset = vOffset >> 1;
    }
    vOffset += 0x10;                      // Add base offset

    // Convert float 48.0 to integer (line spacing)
    int lineSpacing = 48;                 // Original: 0x42400000 (float 48.0)

    // Reset text pointer to start
    textPtr = (uintptr_t*)textArrayBase;

    // Render each text line in demo
    while (*textPtr != 0) {
        // Get width of current text line
        int lineWidth = func_001b6220();      // Original: func_001b6220 at 0x1b6150

        // Calculate horizontal centering: (0x280 - (lineWidth << 4)) >> 1
        int hOffset = 0x280 - (lineWidth << 4);
        if (hOffset < 0) {
            hOffset = (hOffset + 1) >> 1;
        } else {
            hOffset = hOffset >> 1;
        }

        // Set display position
        func_001b5010(hOffset, vOffset);      // Original: func_001b5010 at 0x1b4ff0

        // Render the text
        func_001b52d0(*textPtr);              // Original: func_001b52d0 at 0x1b5090

        // Move to next line
        textPtr++;
        vOffset += lineSpacing;
    }
}
