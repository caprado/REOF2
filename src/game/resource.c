#include <stdint.h>
#include <stdbool.h>

extern int checkThreadAndPollSemaphore(uintptr_t bufferAddr, int value, int size);  // Original: func_00107d30 at 0x107d30

// Resource array base address (original: 0x300000 + 0x7d90 = 0x307d90)
#define RESOURCE_ARRAY_BASE 0x00307D90
#define RESOURCE_ENTRY_SIZE 32  // 0x20 bytes per entry

// Resource entry structure (32 bytes total)
typedef struct ResourceEntry {
    uint16_t status;              // offset 0x0: Status/type value
    uint16_t padding1;            // offset 0x2: Padding
    uintptr_t address;            // offset 0x4: Resource address
    uint8_t data[12];             // offset 0x8-0x13: Additional data
    void (*callback)(void);       // offset 0x14: Optional callback function pointer
    uint8_t trailing[8];          // offset 0x18-0x1f: Trailing data
} ResourceEntry;

/**
 * @category game/resource
 * @status complete
 * @author caprado
 * @original func_001b7720
 * @address 0x001b7720
 * @description Initializes a resource entry in the global resource array.
 *              Calls optional callback if present, initializes with thread/semaphore check,
 *              and sets status and address fields.
 * @windows_compatibility medium
 */
void initializeResourceEntry(uintptr_t resourceAddress, int entryIndex) {
    // Calculate entry address: base + (index * 32)
    ResourceEntry* entry = (ResourceEntry*)(RESOURCE_ARRAY_BASE + (entryIndex * RESOURCE_ENTRY_SIZE));

    // Check if entry has a callback function at offset 0x14
    if (entry->callback != NULL) {
        // Call the callback function
        entry->callback();
    }

    // Initialize entry with thread/semaphore check (32 bytes)
    checkThreadAndPollSemaphore((uintptr_t)entry, 0, RESOURCE_ENTRY_SIZE);

    // Set entry fields
    entry->address = resourceAddress;  // Store resource address at offset 0x4
    entry->status = 4;                 // Set status to 4 at offset 0x0
}

/**
 * @category game/resource
 * @status complete
 * @author caprado
 * @original helper
 * @address N/A
 * @description Gets pointer to a resource entry by index.
 * @windows_compatibility high
 */
ResourceEntry* getResourceEntry(int index) {
    return (ResourceEntry*)(RESOURCE_ARRAY_BASE + (index * RESOURCE_ENTRY_SIZE));
}

/**
 * @category game/resource
 * @status complete
 * @author caprado
 * @original helper
 * @address N/A
 * @description Gets the status of a resource entry.
 * @windows_compatibility high
 */
uint16_t getResourceStatus(int index) {
    ResourceEntry* entry = getResourceEntry(index);
    return entry->status;
}

/**
 * @category game/resource
 * @status complete
 * @author caprado
 * @original helper
 * @address N/A
 * @description Gets the address stored in a resource entry.
 * @windows_compatibility high
 */
uintptr_t getResourceAddress(int index) {
    ResourceEntry* entry = getResourceEntry(index);
    return entry->address;
}

// Game buffer base address (original: 0x310000 + 0x37a0 = 0x3137a0)
#define GAME_BUFFER_BASE 0x003137A0

/**
 * @category game/buffer
 * @status complete
 * @author caprado
 * @original func_001bbf70
 * @address 0x001bbf70
 * @description Clears 4 entries in game buffer structure.
 *              For each entry (0-3):
 *              - Clears byte at offset (base + i + 0xe0)
 *              - Clears half-word at offset (base + (i*2) + 0xe4)
 * @windows_compatibility high
 */
void clearGameBuffer(void) {
    uint8_t* basePtr = (uint8_t*)GAME_BUFFER_BASE;

    // Loop through 4 entries
    for (int i = 0; i < 4; i++) {
        // Clear byte at offset (base + i + 0xe0)
        *(basePtr + i + 0xe0) = 0;

        // Clear half-word at offset (base + (i*2) + 0xe4)
        *(uint16_t*)(basePtr + (i * 2) + 0xe4) = 0;
    }
}

// Resource lookup array base (original: 0x330000 - 0x1330 = 0x32ecd0)
#define RESOURCE_LOOKUP_BASE 0x0032ECD0
#define RESOURCE_LOOKUP_ENTRY_SIZE 16  // 0x10 bytes per entry
#define MAX_RESOURCE_LOOKUP_ENTRIES 256  // 0x100 entries

// Resource lookup entry structure (16 bytes total)
typedef struct ResourceLookupEntry {
    uint32_t active;      // offset 0x0: Non-zero if entry is active
    int16_t resourceId;   // offset 0x4: Resource ID to match
    uint8_t padding[8];   // offset 0x6-0xd: Padding/additional data
    int16_t refCount;     // offset 0xe: Reference counter
} ResourceLookupEntry;

// Global state variables for resource processing
// These would be set by calling code before invoking processResourceRange
static int g_resourceStartIndex = 0;
static int g_resourceEndIndex = 0;
static int16_t* g_resourceIndexTable = NULL;

/**
 * @category game/resource
 * @status complete
 * @author caprado
 * @original func_001d35a0
 * @address 0x001d35a0
 * @description Increments reference count for a resource entry in lookup table.
 *              Searches through resource lookup array (256 entries) for matching resourceId.
 *              When found, increments the refCount field at offset 0xe.
 * @windows_compatibility high
 */
void incrementResourceRefCount(int16_t resourceId) {
    ResourceLookupEntry* lookupArray = (ResourceLookupEntry*)RESOURCE_LOOKUP_BASE;

    // Search through resource lookup array for the resource ID
    for (int i = 0; i < MAX_RESOURCE_LOOKUP_ENTRIES; i++) {
        ResourceLookupEntry* entry = &lookupArray[i];

        // Check if entry is active (non-zero)
        if (entry->active == 0) {
            continue;
        }

        // Check if resource ID matches
        if (entry->resourceId == resourceId) {
            // Found matching entry - increment reference count
            entry->refCount++;
            return;
        }
    }
}

/**
 * @category game/resource
 * @status complete
 * @author caprado
 * @original func_001d3ae0
 * @address 0x001d3ae0
 * @description Processes a range of resources by searching lookup table for each.
 *              Iterates from startIndex (s0) to endIndex (s1), and for each index,
 *              searches resource lookup array for matching entry (using indexTable + index).
 *              Calls incrementResourceRefCount when a match is found to process the resource.
 *              Relies on caller-saved registers s0, s1, s2 being set up.
 * @windows_compatibility medium
 */
void processResourceRange(void) {
    int startIndex = g_resourceStartIndex;  // Original: s0
    int endIndex = g_resourceEndIndex;      // Original: s1
    int16_t* indexTable = g_resourceIndexTable;  // Original: s2

    // Outer loop: iterate through resource range
    for (int i = startIndex; i < endIndex; i++) {
        // Calculate resource ID from index table
        int16_t resourceId = indexTable[i];

        // Inner loop: search resource lookup array for matching entry
        ResourceLookupEntry* lookupArray = (ResourceLookupEntry*)RESOURCE_LOOKUP_BASE;

        for (int j = 0; j < MAX_RESOURCE_LOOKUP_ENTRIES; j++) {
            ResourceLookupEntry* entry = &lookupArray[j];

            // Check if entry is active (non-zero) and matches our resource ID
            if (entry->active != 0 && entry->resourceId == resourceId) {
                // Found matching entry - increment its reference count
                incrementResourceRefCount(resourceId);  // Original: func_001d35a0 at 0x1d3540
                break;  // Move to next index after processing
            }
        }
    }
}

/**
 * @category game/resource
 * @status complete
 * @author caprado
 * @original func_001d3cb0
 * @address 0x001d3cb0
 * @description Checks if a resource is loaded/available by searching lookup table.
 *              Calls processResourceRange to process resources, then searches
 *              resource lookup array (256 entries) for the given resourceId.
 *              Returns non-zero if found, 0 otherwise.
 * @windows_compatibility high
 */
int checkResourceLoaded(int16_t resourceId) {
    // Call function to process resource range
    // In PS2 version, this doesn't modify a0, which contains the resource ID to search
    processResourceRange();  // Original: func_001d3ae0 at 0x1d3a90

    // Use the resource ID parameter
    // In PS2 version, this is passed in register a0

    // Search through resource lookup array for the resource ID
    ResourceLookupEntry* lookupArray = (ResourceLookupEntry*)RESOURCE_LOOKUP_BASE;

    for (int i = 0; i < MAX_RESOURCE_LOOKUP_ENTRIES; i++) {
        ResourceLookupEntry* entry = &lookupArray[i];

        // First check if entry is active
        if (entry->active == 0) {
            continue;
        }

        // Check if resource ID matches
        if (entry->resourceId == resourceId) {
            // Found matching entry - return the active value (non-zero)
            return entry->active;
        }
    }

    // Not found in lookup array - return 0
    return 0;
}
