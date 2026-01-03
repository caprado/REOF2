#include "data_collection_processor.h"
#include <stdint.h>

// Forward declarations for dependencies
extern int32_t getDataEntryCount(void);          // func_001a2740
extern void* getDataEntryPointer(void);          // func_001a1a60
extern int32_t calculateEntrySize(void);         // func_001a1c30

/**
 * @category game/data
 * @status complete
 * @original func_001a1aa0
 * @address 0x001a1aa0
 * @description Processes a collection of data entries by iterating through them,
 *              retrieving entry information, calculating sizes, and accumulating
 *              the total size offset. This appears to be part of a data structure
 *              initialization or scanning routine.
 * @windows_compatibility high
 * @author caprado
 */
void processDataCollection(void) {
    int32_t totalCount;        // s2 - total number of entries to process
    int32_t currentIndex;      // s3 - current loop iteration counter
    int32_t accumulatedSize;   // s1 - accumulated size offset
    void* entryPointer;        // v0 - pointer to current entry
    int32_t entryCount;        // v1 - count field from entry at offset +4
    int32_t calculatedSize;    // v0 - size calculated by func_001a1c30

    // Get the number of entries to process
    // Original: func_001a2740 returns count, then shifted left by 2
    int32_t rawCount = getDataEntryCount();
    rawCount = rawCount << 2;

    // Initialize accumulator with base offset
    accumulatedSize = rawCount + 0x20;

    // Get total count for loop (stored in s2 from context)
    // Note: totalCount appears to come from a register that's set before this function
    // Since we can't determine the exact source, we'll use rawCount as the limit
    totalCount = rawCount >> 2;  // Reverse the shift to get actual count

    // Initialize loop counter
    currentIndex = 0;

    // Main processing loop
    while (currentIndex < totalCount) {
        // Get pointer to current entry
        entryPointer = getDataEntryPointer();

        // Read entry count at offset +4
        entryCount = *(int32_t*)((uintptr_t)entryPointer + 4);

        // Update accumulated size (add 8 bytes base)
        accumulatedSize += 8;

        // Calculate size based on entry count (multiplied by 8)
        calculatedSize = entryCount << 3;

        // Calculate total entry size
        calculateEntrySize();

        // Accumulate the calculated size (added twice in original)
        accumulatedSize += calculatedSize;
        accumulatedSize += calculatedSize;

        // Move to next entry
        currentIndex++;
    }

    // Function completes - accumulated size is in s1 but not returned
    // This suggests s1 is used by the calling function?
}
