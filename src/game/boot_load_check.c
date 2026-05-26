#include "boot_load_check.h"
#include "game_data.h"

// Boot loading state variables
// Original: gp-0x7c50 — primary load state (0=not started, 1=loading, 2=done, 3=idle)
// Original: gp-0x632c — secondary load progress
static int32_t s_bootLoadState = 0;     // gp-0x7c50
static int32_t s_bootLoadProgress = 0;  // gp-0x632c

/** @category game/state @status complete @original func_001bd070 @address 0x001bd070
 * @description Direct port from ASM. Pure state lookup, no side effects.
 *
 * Original ASM:
 *   lw $a0, -0x7c50($gp)
 *   beq $a0, 3 → return -1
 *   beq $a0, 2 → return -1
 *   beq $a0, 1 → return -2
 *   (a0 == 0):
 *     lw $v0, -0x632c($gp)
 *     beqz $v0 → return -4
 *     beq $v0, 2 → return -6
 *     else → return 0
 *
 * @return status code
 * @windows_compatibility high
 * @author caprado
 */
int32_t checkBootLoadState(void) {
    int32_t state = s_bootLoadState;

    if (state == 3 || state == 2) {
        return -1;
    }

    if (state == 1) {
        return -2;
    }

    // state == 0: check secondary
    {
        int32_t progress = s_bootLoadProgress;

        if (progress == 0) {
            return -4;
        }
        if (progress == 2) {
            return -6;
        }
        return 0;
    }
}
