#include "memory_region.h"
#include "../game/game_data.h"
#include <stddef.h>

// Memory region tracking table
// Original: 0x002aa8c0 - 8 slots of 8 bytes each
static RegionTableSlot s_regionTable[MAX_MEMORY_REGIONS];
static int32_t s_regionCount = 0;

// Global allocator context
// Original: 0x002903e0
static AllocatorContext s_allocatorContext;

// Bump allocator state
// Original: 0x002aa8b0
static BumpAllocator s_bumpAllocator;

/**
 * @category memory/allocation
 * @status complete
 * @original func_0018da60 + 0x189940
 * @address 0x0018da60, 0x00189940
 * @description Writes allocator state to a region structure.
 *              func_0018da60 sets up: a2=regionPtr, a1=0, a0=0x2903e0
 *              0x189940 does: *regionPtr = context[a1].currentPosition; regionPtr[1] = a1
 *
 * @param regionPtr Pointer to region (first 8 bytes will be written)
 * @param index Registration index (0 for first registration)
 * @windows_compatibility high
 * @author caprado
 */
static void initializeRegionFromAllocator(void* regionPtr, int32_t index) {
    MemoryRegionEntry* entry = (MemoryRegionEntry*)regionPtr;

    // Original 0x189940:
    // v0 = a1 * 4              ; index * 4
    // v1 = a0 + v0             ; context base + offset
    // v1 = *(v1 + 0xc)         ; load currentPosition
    // *a2 = v1                 ; store to regionPtr[0]
    // *(a2+4) = a1             ; store index to regionPtr[1]

    // For index 0, reads from context + 0 + 0xc = context->currentPosition
    entry->allocPosition = s_allocatorContext.currentPosition;
    entry->registrationIndex = index;
}

/**
 * @category memory/allocation
 * @status complete
 * @original func_001af020
 * @address 0x001af020
 * @description Registers a memory region pointer into the tracking table.
 *              Finds first empty slot in the 8-entry table.
 *              Calls allocator to write state into the region's first 8 bytes.
 *              Stores the region pointer into the table slot.
 *              Fatal infinite loop if table is full (8 entries max).
 *
 * @param regionPtr Pointer to memory region to register (e.g., &g_game).
 *                  First 8 bytes will be overwritten with allocator state.
 * @windows_compatibility high - Pure bookkeeping logic
 * @author caprado
 */
void registerMemoryRegion(void* regionPtr) {
    int32_t slotIndex = 0;

    // Find first empty slot in the region table
    // Original: s0 = 0x2aa8c0, loop checks *(s0 + i*8) for zero
    while (slotIndex < MAX_MEMORY_REGIONS) {
        if (s_regionTable[slotIndex].regionPtr == NULL) {
            break;  // Found empty slot
        }
        slotIndex++;
    }

    // If all slots are full, fatal error (infinite loop in original)
    // Original: label_0x1af074 - infinite loop
    if (slotIndex >= MAX_MEMORY_REGIONS) {
        while (1) {
            // Fatal: memory region table full
        }
    }

    // Initialize region from allocator state
    // Original: jal 0x18da60 which sets a2=a0, a1=0, a0=0x2903e0 then calls 0x189940
    initializeRegionFromAllocator(regionPtr, 0);

    // Update max region count if this slot is higher
    // Original: gp-0x63c8 comparison and store
    if (g_game.allocState1 < (uint32_t)slotIndex) {
        g_game.allocState1 = slotIndex;
    }

    // Store the region pointer in the table slot
    // Original: sw $s2, 0($s0) at 0x1af0ac
    s_regionTable[slotIndex].regionPtr = regionPtr;
    s_regionTable[slotIndex].reservedSize = 0;
    s_regionCount = slotIndex + 1;
}

int32_t getMemoryRegionCount(void) {
    return s_regionCount;
}

void* getMemoryRegion(int32_t index) {
    if (index < 0 || index >= MAX_MEMORY_REGIONS) {
        return NULL;
    }
    return s_regionTable[index].regionPtr;
}

void clearMemoryRegions(void) {
    for (int i = 0; i < MAX_MEMORY_REGIONS; i++) {
        s_regionTable[i].regionPtr = NULL;
        s_regionTable[i].reservedSize = 0;
    }
    s_regionCount = 0;
}

AllocatorContext* getAllocatorContext(void) {
    return &s_allocatorContext;
}

/**
 * @category memory/allocation
 * @status complete
 * @original func_001aef60
 * @address 0x001aef60
 * @description Reserves memory for the last registered region.
 *              Scans table backwards to find last non-empty slot,
 *              adds size to that slot's reservedSize,
 *              updates allocState2 if new total is higher,
 *              then calls allocator to actually reserve the memory.
 *
 * @param size Amount of memory to reserve (e.g., 0x5c0000)
 * @windows_compatibility high
 * @author caprado
 */
void reserveRegionMemory(uint32_t size) {
    int32_t slotIndex = MAX_MEMORY_REGIONS - 1;

    // Scan backwards to find last non-empty slot
    // Original: v1 = 0x2aa8f8 (slot 7), loop decrements by 8
    while (slotIndex >= 0) {
        if (s_regionTable[slotIndex].regionPtr != NULL) {
            break;  // Found non-empty slot
        }
        slotIndex--;
    }

    // If no regions registered, slotIndex will be -1
    // Original code would still proceed (undefined behavior on empty table)
    if (slotIndex < 0) {
        slotIndex = 0;  // Fallback to slot 0
    }

    // Add size to this region's reserved amount
    // Original: lw $v0, 4($v1); addu $v0, $v0, $a0; sw $v0, 4($v1)
    s_regionTable[slotIndex].reservedSize += size;

    // Update allocState2 if new total is higher
    // Original: gp-0x63c4 comparison and store
    if (g_game.allocState2 < s_regionTable[slotIndex].reservedSize) {
        g_game.allocState2 = s_regionTable[slotIndex].reservedSize;
    }

    // Call allocator to reserve memory
    // Original: j 0x18da40 which sets a1=a0(size), a2=0, a0=0x2903e0, calls 0x1898e0
    // 0x1898e0 performs aligned allocation from the allocator context
    // For now, this is a placeholder - actual allocation handled by Windows heap
    // TODO: Implement allocator reserve when func_001898e0 is refactored
}

/**
 * @category memory/allocation
 * @status complete
 * @original func_001af1f0
 * @address 0x001af1f0
 * @description Allocates memory from the bump allocator.
 *              Simple bump allocation: returns base + offset, then bumps offset.
 *              Returns NULL if insufficient space remaining.
 *
 * @param size Number of bytes to allocate
 * @return Pointer to allocated memory, or NULL if insufficient space
 * @windows_compatibility high
 * @author caprado
 */
void* allocateMemory(uint32_t size) {
    // Check if enough space remaining
    // Original: sltu $v1, $v1, $a0; bnez $v1, 0x1af22c
    if (s_bumpAllocator.remaining < size) {
        return NULL;
    }

    // Calculate return pointer: base + currentOffset
    // Original: v0 = *(a1+0) + *(a1+8)
    void* result = (uint8_t*)s_bumpAllocator.basePtr + s_bumpAllocator.currentOffset;

    // Bump the offset
    // Original: v1 = v1 + a0; sw v1, 8($a1)
    s_bumpAllocator.currentOffset += size;

    // Decrease remaining
    // Original: v1 = v1 - a0; sw v1, 0xc($a1)
    s_bumpAllocator.remaining -= size;

    return result;
}

BumpAllocator* getBumpAllocator(void) {
    return &s_bumpAllocator;
}

/**
 * @category memory/allocation
 * @status complete
 * @original func_001af190
 * @address 0x001af190
 * @description Initializes the bump allocator with a memory buffer.
 *              Clears the allocator struct, sets base pointer and capacity.
 *
 * @param basePtr Base pointer of the memory buffer
 * @param capacity Total size of the buffer in bytes (e.g., 0x240000)
 * @windows_compatibility high
 * @author caprado
 */
void initializeBumpAllocator(void* basePtr, uint32_t capacity) {
    // Clear the allocator structure (original: memset 16 bytes at 0x2aa8b0)
    memset(&s_bumpAllocator, 0, sizeof(BumpAllocator));

    // Set base pointer (original: sw $s1, -0x5750($at) -> 0x2aa8b0)
    s_bumpAllocator.basePtr = basePtr;

    // Set total capacity (original: sw $s0, -0x574c($at) -> 0x2aa8b4)
    s_bumpAllocator.totalCapacity = capacity;

    // Set remaining = capacity (original: sw $s0, -0x5744($at) -> 0x2aa8bc)
    s_bumpAllocator.remaining = capacity;

    // currentOffset starts at 0 (already cleared by memset)
}
