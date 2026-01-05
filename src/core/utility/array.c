#include "array.h"
#include <stdint.h>
#include <stdbool.h>

// Global pointer array and count (original: gp-0x63b4 and 0x2aa890)
#define MAX_ARRAY_ENTRIES 256
static uintptr_t g_pointerArray[MAX_ARRAY_ENTRIES];  // Original: g_002aa890 at 0x2aa890
static int32_t g_arrayCount = 0;                      // Original: gp-0x63b4
static int32_t g_arrayUnused = 0;                     // Original: gp-0x63b8 (written but never read)

/**
 * @category utility/array
 * @status complete
 * @original func_001af240
 * @address 0x001af240
 * @description Clears the pointer array and resets count to zero.
 *              Zeroes entries 0-7 and resets both count variables.
 * @windows_compatibility high
 * @author caprado
 */
void clearPointerArray(void) {
    g_arrayCount = 0;
    g_arrayUnused = 0;

    for (int32_t i = 7; i >= 0; i--) {
        g_pointerArray[i] = 0;
    }
}

/**
 * @category utility/array
 * @status complete
 * @author caprado
 * @original func_001af2f0
 * @address 0x001af2f0
 * @description Removes an entry from global pointer array by address.
 *              Searches array for matching pointer, clears it, shifts remaining
 *              entries down to fill gap, and decrements count.
 * @windows_compatibility high
 */
void removeFromPointerArray(uintptr_t addressToRemove) {
    int32_t count = g_arrayCount;
    int32_t i = 0;

    // First loop: Find and clear matching entry
    for (i = 0; i < count; i++) {
        if (g_pointerArray[i] == addressToRemove) {
            // Found match - clear it
            g_pointerArray[i] = 0;
            break;
        }
    }

    // If we found and removed an entry (i < count), shift remaining entries down
    if (i < count) {
        // Second loop: Shift all entries after removal point down by one
        for (; i < count - 1; i++) {
            g_pointerArray[i] = g_pointerArray[i + 1];
        }

        // Clear the last entry (now duplicated)
        g_pointerArray[i] = 0;

        // Decrement count
        g_arrayCount--;
    }
}

/**
 * @category utility/array
 * @status complete
 * @author caprado
 * @original func_001af3a0
 * @address 0x001af3a0
 * @description Calls all function pointers stored in the global array.
 *              Iterates through array and executes each function via indirect call (jalr).
 *              Calls func_001b2080 first, then iterates through all array entries.
 * @windows_compatibility high
 */
void callAllFunctionPointers(void) {
    // Forward declaration
    extern void initializeMemoryPool(void);  // Original: func_001b2080 at 0x1b2010

    // Call initialization function first
    initializeMemoryPool();  // Original: func_001b2080 at 0x1b2010

    // Iterate through array and call each function pointer
    int32_t count = g_arrayCount;
    for (int32_t i = 0; i < count; i++) {
        // Get function pointer from array
        typedef void (*FunctionPtr)(void);
        FunctionPtr func = (FunctionPtr)g_pointerArray[i];

        // Call the function if valid
        if (func != NULL) {
            func();
        }
    }
}

void addToPointerArray(uintptr_t addressToAdd) {
    // Check if we have space
    if (g_arrayCount < MAX_ARRAY_ENTRIES) {
        g_pointerArray[g_arrayCount] = addressToAdd;
        g_arrayCount++;
    }
}

int32_t getPointerArrayCount(void) {
    return g_arrayCount;
}

uintptr_t getPointerArrayEntry(int32_t index) {
    if (index >= 0 && index < g_arrayCount) {
        return g_pointerArray[index];
    }
    return 0;
}
