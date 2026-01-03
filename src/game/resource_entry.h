#ifndef RESOURCE_ENTRY_H
#define RESOURCE_ENTRY_H

#include <stdint.h>

/**
 * @file resource_entry.h
 * @brief Resource entry management
 */

/**
 * @brief Initialize resource entry in array
 * @param resourceAddr Address/pointer to resource
 * @param entryIndex Index in resource entry array
 * @description Initializes a resource entry at the specified index.
 *              Calls cleanup callback if present, clears entry data,
 *              and sets up initial values. Entry size is 32 bytes.
 * @original func_001b7720 at 0x001b7720
 */
void initializeResourceEntry(uintptr_t resourceAddr, int entryIndex);

#endif // RESOURCE_ENTRY_H
