#include <stdint.h>
#include <stdbool.h>
#include "frame_sync.h"

/**
 * External function declarations
 * These are called during frame sync operations
 */
extern void func_001a05c0(int32_t bufferIndex);  // Graphics config with buffer index
extern void func_001a8960(void);                  // Sync/memory barrier operation

// Global frame sync context instance
FrameSyncContext g_frameSync = {0};

/**
 * @category graphics/memory
 * @status complete
 * @original func_0019f2e0
 * @address 0x0019f2e0
 * @description Update graphics frame synchronization state.
 *              Increments frame counters and checks if sync threshold reached.
 *              When currentFrameCount exceeds targetFrameCount and syncRequestFlag
 *              is set, triggers buffer swap by toggling activeBufferIndex.
 *              Always calls sync function at end for memory barrier.
 * @windows_compatibility medium - PS2 VSync timing abstracted
 * @author caprado
 */
int32_t updateGraphicsFrameSync(void) {
    // Increment global frame counter
    // Original: v1 = *(gp-0x64d8); v1++; *(gp-0x64d8) = v1
    g_frameSync.globalFrameCounter++;

    // Increment current frame count
    // Original: a0 = g_0028ffcc; a0++; g_0028ffcc = a0
    g_frameSync.currentFrameCount++;

    // Load target frame count for comparison
    // Original: v0 = g_0028ffc4
    uint32_t target = g_frameSync.targetFrameCount;
    uint32_t current = g_frameSync.currentFrameCount;

    // Check if we've reached or exceeded target frame count
    // Original: at = (v0 < v1) ? 1 : 0; beqz at, label_0x19f370
    // This means: if (target < current) then process sync
    if (target < current) {
        // Check if sync request is pending (flag == 1)
        // Original: v0 = 1; v1 = g_0028ffd0; bne v1, v0, label_0x19f370
        if (g_frameSync.syncRequestFlag == 1) {
            // Clear sync request flag
            // Original: g_0028ffd0 = 0
            g_frameSync.syncRequestFlag = 0;

            // Copy pending target to active target
            // Original: v1 = g_0028ffc8; g_0028ffc4 = v1
            g_frameSync.targetFrameCount = g_frameSync.pendingTargetFrame;

            // Toggle active buffer index (0 <-> 1)
            // Original: v0 = g_0028ffc0; v0 = v0 ^ 1; g_0028ffc0 = v0
            g_frameSync.activeBufferIndex ^= 1;

            // Call graphics config with new buffer index
            // Original: a0 = g_0028ffc0; jal 0x1a0010 (func_001a05c0)
            func_001a05c0((int32_t)g_frameSync.activeBufferIndex);
        }
    }

    // Always call sync function (memory barrier)
    // Original: jal 0x1a8930 (func_001a8960); sync
    func_001a8960();

    // Return value indicates readiness
    // Based on caller (func_0019f080) checking bnez v0
    // Return 1 if sync occurred (ready), implied by flow
    // The original doesn't explicitly set v0, but caller expects it
    // Looking at the logic: if we processed sync, buffers are ready
    return (g_frameSync.syncRequestFlag == 0) ? 1 : 0;
}

/**
 * @category graphics/memory
 * @status complete
 * @description Initialize frame sync context with default values.
 * @windows_compatibility high
 * @author caprado
 */
void initFrameSyncContext(void) {
    g_frameSync.activeBufferIndex = 0;
    g_frameSync.targetFrameCount = 0;
    g_frameSync.pendingTargetFrame = 0;
    g_frameSync.currentFrameCount = 0;
    g_frameSync.syncRequestFlag = 0;
    g_frameSync.globalFrameCounter = 0;
}
