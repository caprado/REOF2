#include "system_timing.h"
#include <windows.h>
#include <stdint.h>

// Static state for Windows timing
static uint64_t lastCounter = 0;

/**
 * @brief Query system timing (Windows replacement for PS2 func_00111738)
 * @param out Pointer to SystemTiming structure to fill
 * @description Windows implementation using QueryPerformanceCounter.
 *              Maps frame time to PS2-compatible timing values where:
 *              - timingValue ~60 at 60fps, scales with frame time
 *              - timingValue range 32-200+ depending on frame duration
 *
 *              State values and PS2 gate behavior:
 *              - state 0,1: Not ready (gates return 0)
 *              - state 2: Ready but gates optional updates (returns 0)
 *              - state 3: Normal operation (passes to timing checks)
 *              - state 4: Paused/invalid (gates return 0)
 *              - state 5+: Also passes timing checks (rarely used)
 *
 *              NOTE: On PS2, state comes from hardware registers.
 *              Windows impl uses state=3 for normal operation to match PS2's
 *              typical runtime behavior (state 3 passes all gate checks).
 *
 *              IMPORTANT: Requires VSync enabled! Without VSync, >120fps will
 *              trigger timingValue < 32 errors, matching PS2's "too fast" behavior.
 * @windows_implementation Replaces PS2 hardware timing with Win32 API
 */
void querySystemTiming(SystemTiming* out) {
    LARGE_INTEGER freq;
    LARGE_INTEGER now;

    QueryPerformanceFrequency(&freq);
    QueryPerformanceCounter(&now);

    if (lastCounter == 0) {
        // First call - initialization
        lastCounter = now.QuadPart;
        out->state = 3;      // Use state 3 (passes gate checks, allows timing logic)
        out->flag = 0;
        out->timingValue = 60;  // Target frame time at 60fps
        return;
    }

    // Calculate elapsed time in microseconds (to match PS2 cycle precision)
    uint64_t deltaCounter = now.QuadPart - lastCounter;
    lastCounter = now.QuadPart;

    // Convert to microseconds: (delta / freq) * 1000000
    double deltaMicroseconds = ((double)deltaCounter / (double)freq.QuadPart) * 1000000.0;

    // Map to PS2 timing value range
    // At 60fps: 16666 microseconds → timingValue ~60
    // At 30fps: 33333 microseconds → timingValue ~120
    // At 120fps: 8333 microseconds → timingValue ~30 (triggers "too fast" error)
    // Formula: microseconds / 277.77 ≈ timingValue
    // (16666 / 277.77 ≈ 60)
    uint32_t timingValue = (uint32_t)(deltaMicroseconds / 277.77);

    // Always use state 3 for normal Windows operation
    // (PS2 reads this from hardware; we synthesize it)
    out->state = 3;
    out->flag = 0;
    out->timingValue = timingValue;
}

/**
 * @category system/timing
 * @status complete
 * @author caprado
 * @original func_00112170
 * @address 0x00112170
 * @description Frame timing gate that controls whether optional game updates
 *              should run. This is NOT a frame delta calculator - it's a
 *              decision function that returns:
 *              - 0: Skip optional update (normal timing or system not ready)
 *              - 1: Run optional update (timing OK for extra processing)
 *              - -1: Timing error (frame too fast, don't run optional update)
 *
 *              PS2 Logic Flow:
 *              1. State gating: If state==2, <2, or ==4 → return 0
 *              2. Flag check: If flag != 0 → return 0
 *              3. Timing validation: If timingValue < 0 or < 32 → return -1
 *              4. Frame pacing: If timingValue >= 32 → calculate diff (unused) and return 1
 *
 * @windows_compatibility high - Fully converted to Windows timing API
 */
int32_t checkSystemTiming(void) {
    uint32_t buffer[3];
    querySystemTiming((SystemTiming*)buffer);

    uint32_t state = buffer[0];
    uint32_t flag = buffer[1];
    int32_t timingValue = (int32_t)buffer[2];

    // ---- State gating ----
    // PS2 state values (from hardware registers):
    // 0,1: Not ready → return 0
    // 2: Ready but skip optional updates → return 0
    // 3: Normal operation → continues to timing checks
    // 4: Paused/invalid → return 0
    // 5+: Also continues (rare)
    if (state == 2) return 0;  // Skip optional update
    if (state < 2)  return 0;  // Not ready
    if (flag != 0)  return 0;  // Error flag set
    if (state == 4) return 0;  // Paused/invalid state

    // ---- Timing checks ----
    if (timingValue < 0)   return -1;  // Invalid negative timing
    if (timingValue < 32)  return -1;  // Frame too fast - timing error

    // ---- Frame pacing logic ----
    if (timingValue < 61) {
        // Normal frame timing range (32-60)
        int32_t diff = 60 - timingValue;
        (void)diff;  // Calculated but unused (PS2 dead code)
        return 1;    // OK to run optional update
    } else {
        // Slow frame (61+)
        int32_t offset = timingValue - 60;
        (void)offset;  // Calculated but unused (PS2 dead code)
        return 1;      // OK to run optional update
    }
}
