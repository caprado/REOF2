#ifndef BOOT_LOAD_WAIT_H
#define BOOT_LOAD_WAIT_H

#include <stdint.h>

/**
 * @category game/state
 * @status complete
 * @original func_001bc750
 * @address 0x001bc750
 * @description Boot loading wait function. Called each frame during state 1 of the
 *              boot state machine. Manages a sub-state machine that handles resource
 *              loading, error states, and waiting for button press.
 * @param entry Frame entry pointer (for accessing sub-state at +0xa, counter at +0xb)
 * @return 1 = still waiting, 0 = done
 * @windows_compatibility high
 * @author caprado
 */
int32_t waitForBootLoad(void* entry);

#endif // BOOT_LOAD_WAIT_H
