#include <stdint.h>
#include <stdbool.h>

// Global rendering state variables (PS2 memory addresses)
// These would be part of a rendering context structure in a proper Windows port
static uint32_t g_renderState1 = 0;  // Original: global at 0x00290310
static uint32_t g_renderState2 = 0;  // Original: global at 0x0028ffc8
static uint8_t g_renderFlags = 0;    // Original: global at 0x003137ac

/**
 * @category graphics/render
 * @status complete
 * @author caprado
 * @original func_001aefd0
 * @address 0x001aefd0
 * @description Sets rendering state by storing a parameter value to global graphics
 *              state variables. This function is called multiple times per frame with
 *              different state values (0xd, 0x5f, 0x60, 0x63, 0x6c) to configure the
 *              rendering pipeline before drawing operations.
 * @windows_compatibility high
 */
void setRenderingState(uint8_t stateValue) {
    // Store the state value (masked to 8-bit) to rendering state globals
    // On PS2, this would configure graphics synthesizer state
    // On Windows, this would map to OpenGL/DirectX state changes

    uint8_t maskedState = stateValue & 0xff;

    // Set primary render state (original: func_001972e0 at 0x1972e0)
    // This stores to global at 0x00290310
    g_renderState1 = maskedState;

    // Set secondary render state (original: func_001a0980 at 0x1a0980)
    // This stores to global at 0x0028ffc8
    g_renderState2 = maskedState;

    // Store to render flags (original: global at 0x003137ac)
    g_renderFlags = maskedState;

    // Note: In PS2 original, func_001972e0 is tail-called first, then
    // the function continues with the stack frame setup and calls func_001a0980.
    // The assembly shows this is actually two separate code paths that got
    // merged by the decompiler due to the jump/branch structure.
}

/**
 * @description Helper function - sets render state 1
 * Original: func_001972e0 at 0x001972e0
 */
static inline void setRenderState1(uint32_t value) {
    g_renderState1 = value;  // Original: stores to 0x00290310
}

/**
 * @description Helper function - sets render state 2
 * Original: func_001a0980 at 0x001a0980
 */
static inline void setRenderState2(uint32_t value) {
    g_renderState2 = value;  // Original: stores to 0x0028ffc8
}

/**
 * @description Gets current render state 1 value
 */
uint32_t getRenderState1(void) {
    return g_renderState1;
}

/**
 * @description Gets current render state 2 value
 */
uint32_t getRenderState2(void) {
    return g_renderState2;
}

/**
 * @description Gets current render flags
 */
uint8_t getRenderFlags(void) {
    return g_renderFlags;
}
