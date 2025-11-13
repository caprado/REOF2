#include <stdint.h>
#include <stdbool.h>

extern int checkThreadAndPollSemaphore(uintptr_t bufferAddr, int value, int size);  // Original: func_00107d30 at 0x107d30

#define POOL_SIZE 256  // 0x100 entries
#define POOL_ENTRY_SIZE 32  // 0x20 bytes per entry

// Pool buffer address (original: 0x310000 - 0x7d50 = 0x3082b0)
#define POOL_BUFFER_BASE 0x003082B0

// Global pool state (original: gp-relative addresses)
static uintptr_t g_poolStackPointer = 0;  // Original: gp-0x6370
static uint16_t g_poolCurrentIndex = 0;   // Original: gp-0x636c
static uint16_t g_poolMaxIndex = 256;     // Original: gp-0x6368

/**
 * @category memory/pool
 * @status complete
 * @author caprado
 * @original func_001b2080
 * @address 0x001b2080
 * @description Initializes memory pool with 256 entries of 32 bytes each.
 *              First loop initializes each entry with thread/semaphore check.
 *              Second loop fills index stack with values from 256 down to 1.
 *              Sets up pool management globals.
 * @windows_compatibility medium
 */
void initializeMemoryPool(void) {
    int i;
    uintptr_t poolAddr = POOL_BUFFER_BASE;

    // First loop: Initialize each pool entry (256 iterations)
    for (i = 0; i < POOL_SIZE; i++) {
        // Call thread/semaphore check for this pool entry
        // Original: func_00107d30(0x3082b0 + (i * 0x20), ?, 0x20)
        checkThreadAndPollSemaphore(poolAddr + (i * POOL_ENTRY_SIZE), 0, POOL_ENTRY_SIZE);
    }

    // Second loop: Initialize index stack (descending from 256 to 1)
    // This creates a stack of available pool indices
    uint16_t* stackPtr = (uint16_t*)(POOL_BUFFER_BASE);  // Start at base
    g_poolStackPointer = (uintptr_t)stackPtr;

    for (i = POOL_SIZE; i > 0; i--) {
        // Write index value and move stack pointer down
        stackPtr--;
        *stackPtr = (uint16_t)i;
        g_poolStackPointer = (uintptr_t)stackPtr;
    }

    // Initialize pool state globals
    g_poolCurrentIndex = 0;       // Current index = 0
    g_poolMaxIndex = POOL_SIZE;   // Max index = 256
}

/**
 * @category memory/pool
 * @status complete
 * @author caprado
 * @original helper
 * @address N/A
 * @description Allocates an entry from the pool by popping from the index stack.
 * @windows_compatibility high
 */
int allocatePoolEntry(void) {
    if (g_poolCurrentIndex >= g_poolMaxIndex) {
        return -1;  // Pool exhausted
    }

    // Pop index from stack
    uint16_t* stackPtr = (uint16_t*)g_poolStackPointer;
    uint16_t index = *stackPtr;
    stackPtr++;
    g_poolStackPointer = (uintptr_t)stackPtr;
    g_poolCurrentIndex++;

    return index;
}

/**
 * @category memory/pool
 * @status complete
 * @author caprado
 * @original helper
 * @address N/A
 * @description Frees an entry back to the pool by pushing to the index stack.
 * @windows_compatibility high
 */
void freePoolEntry(int index) {
    if (g_poolCurrentIndex == 0) {
        return;  // Pool already full
    }

    // Push index back to stack
    uint16_t* stackPtr = (uint16_t*)g_poolStackPointer;
    stackPtr--;
    *stackPtr = (uint16_t)index;
    g_poolStackPointer = (uintptr_t)stackPtr;
    g_poolCurrentIndex--;
}

/**
 * @category memory/pool
 * @status complete
 * @author caprado
 * @original helper
 * @address N/A
 * @description Gets the address of a pool entry by index.
 * @windows_compatibility high
 */
uintptr_t getPoolEntryAddress(int index) {
    if (index < 0 || index >= POOL_SIZE) {
        return 0;
    }
    return POOL_BUFFER_BASE + (index * POOL_ENTRY_SIZE);
}
