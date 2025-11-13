#include <stdint.h>
#include <stddef.h>

// Structure definitions for the memory allocator
typedef struct BlockEntry {
    uint32_t startAddress;      // offset 0x0: Start address of the block
    uint32_t size;               // offset 0x4: Size of the block
    uint16_t alignmentSize;      // offset 0x8: Alignment size
    uint16_t flags;              // offset 0xa: Block flags
    uint16_t nextFreeIndex;      // offset 0xe: Index of next free block (0xFFFF = end)
} BlockEntry;

typedef struct HeapDescriptor {
    BlockEntry* blockArrayPtr;   // offset 0x8: Pointer to block array
    uint16_t nextFreeBlockPtr;   // offset 0xc: Next free block pointer
    uint32_t totalSize;          // offset 0x10: Total heap size
    uint32_t alignmentSize;      // offset 0x18: Heap alignment requirement
    uint32_t totalAllocated;     // offset 0x1c: Total allocated bytes
    uint16_t currentAllocIndex;  // offset 0x24: Current allocation index
} HeapDescriptor;

typedef struct MemoryContext {
    uint32_t field_0x18;         // offset 0x18: Alignment/size field
} MemoryContext;

extern void calculate_aligned_size(void);
extern void update_allocation_stats(void);
extern void handle_allocation_failure(void);

/**
 * @category memory/allocation
 * @status complete
 * @author caprado
 * @original func_001a0c10
 * @address 0x001a0c10
 * @description Allocates a memory block from a managed heap by traversing a free list
 *              and finding a suitable block. Updates allocation statistics and block metadata.
 * @windows_compatibility high
 */
void* allocate_memory_block(
    MemoryContext* memContext,      // a0: Memory management context structure
    size_t requestedSize,           // a1: Size of memory to allocate
    uint16_t blockIndex,            // s1: Index for the block being allocated
    size_t blockSize,               // s2: Actual block size (may differ from requested)
    HeapDescriptor* heapDesc        // s3: Heap descriptor with free list info
) {
    // Calculate aligned size based on heap alignment requirements
    size_t alignmentMask = heapDesc->alignmentSize;  // offset 0x18
    size_t alignedSize = (requestedSize + alignmentMask - 1) & ~(alignmentMask - 1);

    const uint16_t INVALID_INDEX = 0xFFFF;

    // Check if the block index is invalid (uninitialized)
    if (blockIndex == INVALID_INDEX) {
        return NULL;  // Early exit for invalid block
    }

    // Check if the current allocation index is at end of list
    if (heapDesc->currentAllocIndex == INVALID_INDEX) {  // offset 0x24
        // No more free blocks available
        handle_allocation_failure();
        return NULL;
    }

    // Get the base address of the block array
    BlockEntry* blockArray = (BlockEntry*)heapDesc->blockArrayPtr;  // offset 0x8
    uint16_t nextBlockPtr = heapDesc->nextFreeBlockPtr;              // offset 0xc

    // If there's no next free block, search from the current block
    if (nextBlockPtr == 0) {
        BlockEntry* currentBlock = &blockArray[heapDesc->currentAllocIndex];

        // Traverse the linked list of free blocks
        while (1) {
            uint16_t nextIndex = currentBlock->nextFreeIndex;  // offset 0xe

            // If this is the last block in the list
            if (nextIndex == INVALID_INDEX) {
                // Calculate available space in the block
                size_t blockStart = currentBlock->startAddress;      // offset 0x0
                size_t blockEnd = blockStart + currentBlock->size;   // offset 0x4

                // Align the end address
                size_t alignedEnd = (blockEnd + alignmentMask - 1) & ~(alignmentMask - 1);

                // Calculate available space
                size_t availableSpace = heapDesc->totalSize - alignedEnd;  // offset 0x10

                // Check if there's enough space for the requested allocation
                if (availableSpace < alignedSize) {
                    handle_allocation_failure();
                    return NULL;
                }

                // Allocate the block by updating metadata
                BlockEntry* targetBlock = &blockArray[blockIndex];
                targetBlock->flags = 0;                    // offset 0xa: Clear flags
                targetBlock->size = blockSize;             // offset 0x4: Set size
                targetBlock->alignmentSize = alignmentMask; // offset 0x8: Set alignment
                targetBlock->startAddress = blockStart - alignedSize;  // offset 0x0

                // Update allocation statistics
                heapDesc->totalAllocated += blockSize;     // offset 0x1c
                update_allocation_stats();

                return (void*)targetBlock->startAddress;
            }

            // Get the next block in the chain
            BlockEntry* nextBlock = &blockArray[nextIndex];

            // Calculate aligned end address of the next block
            size_t nextBlockStart = nextBlock->startAddress;
            size_t nextBlockEnd = nextBlockStart + nextBlock->size;
            size_t alignedNextEnd = (nextBlockEnd + alignmentMask - 1) & ~(alignmentMask - 1);

            // Calculate available space before the next block
            size_t currentStart = currentBlock->startAddress;
            size_t gapSize = currentStart - alignedNextEnd;

            // Check if the gap is large enough for our allocation
            if (gapSize >= alignedSize) {
                // Found a suitable gap - allocate here
                BlockEntry* targetBlock = &blockArray[blockIndex];
                targetBlock->flags = 0;
                targetBlock->size = blockSize;
                targetBlock->alignmentSize = alignmentMask;
                targetBlock->startAddress = alignedNextEnd;

                // Update allocation statistics
                heapDesc->totalAllocated += blockSize;
                update_allocation_stats();

                return (void*)targetBlock->startAddress;
            }

            // Move to the next block and continue searching
            currentBlock = nextBlock;
        }
    } else {
        // There is a next free block pointer - use it directly
        BlockEntry* currentBlock = &blockArray[heapDesc->currentAllocIndex];

        // Traverse from the specified next block
        while (1) {
            uint16_t nextIndex = currentBlock->nextFreeIndex;

            if (nextIndex == INVALID_INDEX) {
                // Reached end of list - check if there's space
                size_t availableSpace = currentBlock->startAddress - heapDesc->totalSize;

                if (availableSpace < alignedSize) {
                    handle_allocation_failure();
                    return NULL;
                }

                // Allocate at the end
                BlockEntry* targetBlock = &blockArray[blockIndex];
                targetBlock->flags = 0;
                targetBlock->size = blockSize;
                targetBlock->alignmentSize = alignmentMask;
                targetBlock->startAddress = currentBlock->startAddress - alignedSize;

                heapDesc->totalAllocated += blockSize;
                update_allocation_stats();

                return (void*)targetBlock->startAddress;
            }

            // Check the next block
            BlockEntry* nextBlock = &blockArray[nextIndex];
            size_t nextBlockStart = nextBlock->startAddress;
            size_t nextBlockEnd = nextBlockStart + nextBlock->size;
            size_t alignedNextEnd = (nextBlockEnd + alignmentMask - 1) & ~(alignmentMask - 1);

            size_t currentStart = currentBlock->startAddress;
            size_t gapSize = currentStart - alignedNextEnd;

            if (gapSize >= alignedSize) {
                // Found suitable gap
                BlockEntry* targetBlock = &blockArray[blockIndex];
                targetBlock->flags = 0;
                targetBlock->size = blockSize;
                targetBlock->alignmentSize = alignmentMask;
                targetBlock->startAddress = currentStart - alignedSize;

                heapDesc->totalAllocated += blockSize;
                update_allocation_stats();

                return (void*)targetBlock->startAddress;
            }

            currentBlock = nextBlock;
        }
    }
}
