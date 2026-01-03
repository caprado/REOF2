#ifndef FRAME_FINALIZE_H
#define FRAME_FINALIZE_H

#include <stdint.h>

/**
 * @file frame_finalize.h
 * @brief Frame finalization and synchronization
 */

/**
 * @brief Finalize frame processing
 * @param entryIndex Index into resource entry array (from PS2 v1 register)
 * @param callback Frame completion callback pointer (from PS2 s1 register)
 * @description Finalizes the current game frame by registering a completion
 *              callback in the resource entry system. This function performs
 *              thread synchronization and sets up a resource entry with type 0xc
 *              to handle frame completion callbacks.
 *              Entry size is 32 bytes (0x20).
 * @original func_001b76c0 at 0x001b76c0
 */
void finalizeFrame(uint32_t entryIndex, uintptr_t callback);

#endif // FRAME_FINALIZE_H
