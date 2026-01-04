#ifndef RESOURCE_POOL_H
#define RESOURCE_POOL_H

#include <stdint.h>

#define RESOURCE_POOL_MAX_SLOTS 6

typedef struct ResourceSlot {
    int16_t active;      // Original: offset 0 - 1 if slot is in use
    int16_t startOffset; // Original: offset 2 - Starting offset in pool
    int32_t size;        // Original: offset 4 - Allocated size (32-byte aligned)
} ResourceSlot;

int16_t allocateResourceSlot(int32_t size);
void initializeResourcePool(void);

#endif
