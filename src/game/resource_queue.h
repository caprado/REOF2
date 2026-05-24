#ifndef RESOURCE_QUEUE_H
#define RESOURCE_QUEUE_H

#include <stdint.h>

/**
 * @category io/filesystem
 * @status complete
 * @original func_001b78b0
 * @address 0x001b78b0
 * @description Queues a resource load by setting pending slot bytes.
 *              Checks if the requested slot is already loaded or pending before queuing.
 *              Uses two pending slots (gp-0x7cd4 for a2, gp-0x7cd0 for a0).
 * @param slot Resource slot to load (a0)
 * @param target Target parameter (a1), stored to gp-0x7cd0
 * @param source Source slot (a2), stored to gp-0x7cd4 if not already loaded
 * @windows_compatibility high
 * @author caprado
 */
void queueResourceLoad(int32_t slot, int32_t target, int32_t source);

/**
 * @category game/state
 * @status complete
 * @original func_001b7940
 * @address 0x001b7940
 * @description Loads company logo data. Registers a frame entry callback at slot 4
 *              and queues resource slot 1 (demo.bin) for loading.
 *
 * Original ASM:
 *   jal 0x1b76c0(0x543080, 4)  ; initializeFrameEntry(logoCallback, 4)
 *   jal 0x1b78b0(1, -1)        ; queueResourceLoad(1, -1, ?)
 *
 * @windows_compatibility high
 * @author caprado
 */
void loadCompanyLogos(void);

#endif // RESOURCE_QUEUE_H
