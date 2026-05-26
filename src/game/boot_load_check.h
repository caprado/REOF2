#ifndef BOOT_LOAD_CHECK_H
#define BOOT_LOAD_CHECK_H

#include <stdint.h>

/**
 * @category game/state
 * @status complete
 * @original func_001bd070
 * @address 0x001bd070
 * @description Checks boot loading state. Reads two state variables and returns
 *              a status code indicating loading progress.
 *
 * State variable gp-0x7c50:
 *   3 → return -1 (complete/idle)
 *   2 → return -1 (complete)
 *   1 → return -2 (in progress)
 *   0 → check secondary state gp-0x632c:
 *     0 → return -4
 *     2 → return -6
 *     other → return 0
 *
 * @return status code: 0, -1, -2, -4, or -6
 * @windows_compatibility high
 * @author caprado
 */
int32_t checkBootLoadState(void);

#endif // BOOT_LOAD_CHECK_H
