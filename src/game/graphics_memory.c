#include <stdint.h>
#include <stdbool.h>
#include "../graphics/graphics_buffer.h"  // For selectGraphicsBuffer
#include "../graphics/frame_sync.h"       // For updateGraphicsFrameSync

// Unclassified graphics functions
extern void func_0019f4e0(void);  // Graphics subsystem init
extern void func_001a0010(int32_t param1, int32_t param2, int32_t param3);  // Graphics setup
extern void func_001a05c0(int32_t param);  // Graphics config
extern void func_001a1590(void);  // Graphics finalization
extern int32_t func_00113130(void);  // System wait/poll

// Graphics memory globals (need to be replaced with GameData)
static uint32_t* g_graphicsVar1 = (uint32_t*)0x0028ffbc;  // Graphics variable 1
static uint32_t* g_graphicsVar2 = (uint32_t*)0x0028ffc4;  // Graphics variable 2
static uint32_t* g_graphicsVar3 = (uint32_t*)0x0028ffc8;  // Graphics variable 3
static uint32_t* g_graphicsVar4 = (uint32_t*)0x0028ffcc;  // Graphics variable 4
static uint32_t* g_scratchpadVar1 = (uint32_t*)0x10000800;  // Scratchpad memory
static uint32_t* g_scratchpadVar2 = (uint32_t*)0x10000810;  // Scratchpad memory

/**
 * @category graphics/memory
 * @status complete
 * @author caprado
 * @original func_0019f080
 * @address 0x0019f080
 * @description Check if graphics memory buffer is ready and initialize if available.
 *              Called with width=0x280 (640) and height=0x1c0 (448) for main buffer.
 *              Returns 1 if ready and initialized, 0 if not ready (retry needed).
 * @windows_compatibility medium - PS2 graphics memory needs Windows equivalent
 */
int32_t checkGraphicsMemoryReady(int32_t width, int32_t height) {
    // Check if graphics subsystem is ready
    int32_t isReady = updateGraphicsFrameSync();  // Original: func_0019f2e0 at 0x0019f2e0

    if (isReady == 0) {
        // Not ready - return 0 (caller will retry)
        return 0;
    }

    // Graphics ready - initialize subsystems
    selectGraphicsBuffer();  // Original: func_0018dba0 at 0x18dba0

    // Clear graphics variables
    *g_graphicsVar2 = 0;  // 0x0028ffc4
    *g_graphicsVar3 = 0;  // 0x0028ffc8
    *g_graphicsVar4 = 0;  // 0x0028ffcc

    // Initialize graphics subsystems
    func_0019f4e0();  // Original: func_0019f4e0 at 0x19f420
    func_001a0010(4, 0, 1);  // Original: func_001a0010 at 0x19f4e0
    func_001a05c0(1);  // Original: func_001a05c0 at 0x1a0010
    func_001a1590();  // Original: func_001a1590 at 0x1a1530

    // Wait for system ready (poll until returns 0)
    int32_t pollResult;
    do {
        pollResult = func_00113130();  // Original: func_00113130 at 0x113098
        *g_graphicsVar1 = pollResult;  // 0x0028ffbc
    } while (pollResult != 0);

    // Set scratchpad memory values
    *g_scratchpadVar2 = 0x80;  // 0x10000810
    *g_scratchpadVar1 = 0;     // 0x10000800

    // Return success
    return 1;
}
