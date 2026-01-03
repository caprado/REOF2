#ifndef FRAME_SYNC_H
#define FRAME_SYNC_H

#include <stdint.h>
#include <stdbool.h>

/**
 * @file frame_sync.h
 * @brief Graphics frame synchronization system
 * @description Manages double-buffering frame synchronization and VSync state.
 *              On PS2, this coordinated with VBlank interrupts.
 *              On Windows, this abstracts frame timing for OpenGL.
 */

/**
 * @brief Frame synchronization context structure
 * @description Replaces PS2 globals at 0x0028ffc0-0x0028ffd0 and gp-0x64d8
 */
typedef struct FrameSyncContext {
    uint32_t activeBufferIndex;      // Original: 0x0028ffc0 - Active buffer (0 or 1, toggled via XOR)
    uint32_t targetFrameCount;       // Original: 0x0028ffc4 - Target frame count for sync
    uint32_t pendingTargetFrame;     // Original: 0x0028ffc8 - Pending target (copied on sync)
    uint32_t currentFrameCount;      // Original: 0x0028ffcc - Current frame counter
    uint32_t syncRequestFlag;        // Original: 0x0028ffd0 - Sync request flag (1 = pending)
    uint32_t globalFrameCounter;     // Original: gp-0x64d8 - Global frame tick counter
} FrameSyncContext;

/**
 * @brief Global frame sync context
 */
extern FrameSyncContext g_frameSync;

/**
 * @brief Update graphics frame synchronization state
 * @original func_0019f2e0 at 0x0019f2e0
 * @return 1 if frame sync is ready (buffers can be swapped), 0 if waiting
 * @description Increments frame counters and checks if synchronization
 *              threshold has been reached. When sync is triggered:
 *              - Clears sync request flag
 *              - Updates target frame count from pending value
 *              - Toggles active buffer index (0 <-> 1)
 *              - Calls graphics configuration with new buffer index
 */
int32_t updateGraphicsFrameSync(void);

/**
 * @brief Initialize frame sync context
 * @description Sets initial values for frame synchronization
 */
void initFrameSyncContext(void);

#endif // FRAME_SYNC_H
