#include "frame_finalize.h"
#include "game_data.h"  // For GameData structure
#include <stdint.h>

// External dependencies (to be replaced with proper implementations)
extern void threadSync(uint32_t entrySize);  // Windows replacement for func_00107d30

/**
 * @category game/frame
 * @status complete
 * @author caprado
 * @original func_001b76c0
 * @address 0x001b76c0
 * @description Finalizes the current game frame. This function performs thread
 *              synchronization and registers a frame completion callback in the
 *              resource entry system. The resource entry is configured with:
 *              - Type: 0xc (frame completion)
 *              - Callback pointer stored at offset 4
 *              - Entry size: 32 bytes (0x20)
 *
 *              PS2 Register Mapping:
 *              - v1: entryIndex (supplied by caller, not modified)
 *              - s1: callback (supplied by caller)
 *              - a2: 0x20 (entry size, passed to threadSync)
 * @windows_compatibility medium - Requires Windows thread sync replacement
 */
void finalizeFrame(uint32_t entryIndex, uintptr_t callback) {
    // Compute resource entry pointer (now using GameData structure)
    // Original: Base = 0x00307d90, Entry size: 32 bytes (shifted by 5)
    uint32_t offset = entryIndex << 5;  // index * 32
    uint32_t* entryPtr = (uint32_t*)((uintptr_t)g_game.resourceEntryBase + offset);

    // Synchronize threads (PS2 passes a2 = 0x20 = entry size)
    // Original: func_00107d30 (PS2 thread sync with semaphores)
    // Windows: Need to implement proper frame sync
    threadSync(0x20);

    // Write frame entry type (0xc = frame completion)
    *(uint16_t*)entryPtr = 0xc;

    // Write callback pointer (offset + 4)
    *(uint32_t*)((uintptr_t)entryPtr + 4) = (uint32_t)callback;
}
