#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include "game_data.h"  // For GameData structure

// Unclassified functions
extern void func_00107d30(void* dest, int value, size_t size);  // memset-like function

// Resource entry structure (32 bytes per entry)
typedef struct ResourceEntry {
    uint16_t type;              // offset 0x00 - Entry type
    uint8_t padding1[2];        // offset 0x02
    uintptr_t resourceAddr;     // offset 0x04 - Resource address
    uint8_t padding2[16];       // offset 0x08-0x17
    void (*cleanupCallback)(void);  // offset 0x14 - Cleanup callback (optional)
    uint8_t padding3[12];       // offset 0x18-0x1f
} ResourceEntry;

// Resource entry array (now uses GameData structure)
// Original PS2: 0x00307d90 (hardcoded address)
// Windows: g_game.resourceEntryBase (dynamically allocated or set)
#define RESOURCE_ENTRY_SIZE 32  // 0x20 bytes per entry

/**
 * @category game/resource
 * @status complete
 * @author caprado
 * @original func_001b7720
 * @address 0x001b7720
 * @description Initialize resource entry in array at specified index.
 *              Calls cleanup callback if present, clears 32 bytes of entry data,
 *              sets type to 4 and stores resource address.
 *
 *              ORIGINAL PS2 BEHAVIOR:
 *              - Used hardcoded address 0x00307d90 for resource array base
 *
 *              WINDOWS REPLACEMENT:
 *              - Uses g_game.resourceEntryBase from GameData structure
 *
 * @windows_compatibility high
 */
void initializeResourceEntry(uintptr_t resourceAddr, int entryIndex) {
    // Calculate entry pointer: base + (index * 32)
    // Original PS2: base = 0x00307d90
    // Windows: base = g_game.resourceEntryBase
    ResourceEntry* entry = (ResourceEntry*)((uintptr_t)g_game.resourceEntryBase + (entryIndex * RESOURCE_ENTRY_SIZE));

    // Call cleanup callback if present
    if (entry->cleanupCallback != NULL) {
        entry->cleanupCallback();
    }

    // Clear entry data (32 bytes)
    // Original uses func_00107d30 (memset-like)
    func_00107d30(entry, 0, RESOURCE_ENTRY_SIZE);  // Original: func_00107d30 at 0x107c70

    // Set entry fields
    entry->resourceAddr = resourceAddr;  // Store resource address
    entry->type = 4;  // Set type to 4
}
