#ifndef MEMORY_REGION_H
#define MEMORY_REGION_H

#include <stdint.h>

/**
 * @file memory_region.h
 * @brief Memory region registration and tracking system
 * @description Replaces PS2 memory tracking at 0x002aa8c0.
 *              Allows up to 8 memory regions to be registered for tracking.
 *
 * Original PS2 Memory Layout:
 * - 0x002aa8c0: Region table (8 entries × 8 bytes = 64 bytes)
 * - 0x002903e0: Allocator context structure
 *   - +0x0c: Current allocation position
 * - gp-0x63c8: Max registered slot index (allocState1)
 *
 * When a region is registered:
 * 1. Find empty slot in table at 0x002aa8c0
 * 2. Read allocator position from 0x2903ec (context+0xc)
 * 3. Store position to regionPtr[0], index to regionPtr[1]
 * 4. Store regionPtr into the table slot
 */

#define MAX_MEMORY_REGIONS 8

/**
 * @brief Memory region entry written TO the registered region
 * @description First two fields of a registered region get written by the allocator
 */
typedef struct MemoryRegionEntry {
    void* allocPosition;     // Allocator position at time of registration
    int32_t registrationIndex;  // Index in the region table (0-7)
} MemoryRegionEntry;

/**
 * @brief Region table slot structure
 * @description Each slot in the table at 0x002aa8c0 is 8 bytes
 */
typedef struct RegionTableSlot {
    void* regionPtr;         // +0x00: Pointer to the registered region
    uint32_t reservedSize;   // +0x04: Accumulated reserved size for this region
} RegionTableSlot;

/**
 * @brief Allocator context structure
 * @description Based on 0x189940 which reads offset 0x0c
 */
typedef struct AllocatorContext {
    void* field_00;
    void* field_04;
    void* field_08;
    void* currentPosition;   // 0x0c: Current allocation position
    void* field_10;
    uint32_t alignment;      // 0x14: Alignment value
} AllocatorContext;

/**
 * @brief Bump allocator state structure
 * @description Simple bump allocator at 0x002aa8b0
 */
typedef struct BumpAllocator {
    void* basePtr;           // +0x00: Base memory pointer
    uint32_t totalCapacity;  // +0x04: Total capacity (set at init)
    uint32_t currentOffset;  // +0x08: Current offset from base
    uint32_t remaining;      // +0x0c: Remaining bytes available
} BumpAllocator;

/**
 * @brief Register a memory region for tracking
 * @param regionPtr Pointer to the memory region to register.
 *                  The first 8 bytes will be overwritten with allocator state.
 * @note Fatal error (infinite loop) if table is full
 */
void registerMemoryRegion(void* regionPtr);

/**
 * @brief Get the number of registered memory regions
 * @return Count of registered regions
 */
int32_t getMemoryRegionCount(void);

/**
 * @brief Get a registered memory region by index
 * @param index Slot index (0 to MAX_MEMORY_REGIONS-1)
 * @return Pointer to registered region, or NULL if invalid/empty
 */
void* getMemoryRegion(int32_t index);

/**
 * @brief Clear all registered memory regions
 */
void clearMemoryRegions(void);

/**
 * @brief Get the global allocator context
 * @return Pointer to allocator context (original: 0x002903e0)
 */
AllocatorContext* getAllocatorContext(void);

/**
 * @brief Reserve memory for the last registered region
 * @param size Amount of memory to reserve
 * @description Finds the last registered region, adds size to its reserved amount,
 *              updates allocState2 tracking, and calls allocator to reserve.
 *              Original: func_001aef60
 */
void reserveRegionMemory(uint32_t size);

/**
 * @brief Allocate memory from the bump allocator
 * @param size Number of bytes to allocate
 * @return Pointer to allocated memory, or NULL if insufficient space
 * @description Original: func_001af1f0
 */
void* allocateMemory(uint32_t size);

/**
 * @brief Get the bump allocator state
 * @return Pointer to bump allocator (original: 0x002aa8b0)
 */
BumpAllocator* getBumpAllocator(void);

/**
 * @brief Initialize the bump allocator with a memory buffer
 * @param basePtr Base pointer of the memory buffer
 * @param capacity Total size of the buffer in bytes
 * @description Original: func_001af190
 */
void initializeBumpAllocator(void* basePtr, uint32_t capacity);

#endif // MEMORY_REGION_H
