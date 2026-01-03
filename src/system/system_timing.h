#ifndef SYSTEM_TIMING_H
#define SYSTEM_TIMING_H

#include <stdint.h>

/**
 * @file system_timing.h
 * @brief System timing and state checking (PS2 to Windows conversion)
 */

/**
 * @brief System timing structure
 * @description Normalized timing data structure for 60fps timing domain
 */
typedef struct {
    uint32_t state;       // 0 = not ready, 2 = ready, 4 = paused/invalid
    uint32_t flag;        // used for error/skip indicator
    uint32_t timingValue; // normalized to 60fps timing domain
} SystemTiming;

/**
 * @brief Query system timing (Windows replacement for PS2 func_00111738)
 * @param out Pointer to SystemTiming structure to fill
 * @description Windows implementation using QueryPerformanceCounter.
 *              Converts delta time into 60fps frame units to match PS2 behavior.
 */
void querySystemTiming(SystemTiming* out);

/**
 * @brief Frame timing gate for optional update control
 * @return 0 = skip optional update (normal), 1 = run optional update, -1 = timing error
 * @description Frame pacing gate that controls whether optional game updates
 *              should execute. This is NOT a frame delta function - it's a
 *              decision gate that evaluates system state and timing to determine
 *              if extra processing should occur this frame.
 *
 *              Return values:
 *              - 0: Skip optional update (normal timing or system not ready)
 *              - 1: Run optional update (timing allows extra processing)
 *              - -1: Timing error (frame too fast, skip optional update)
 *
 * @original func_00112170 at 0x00112170
 */
int32_t checkSystemTiming(void);

#endif // SYSTEM_TIMING_H
