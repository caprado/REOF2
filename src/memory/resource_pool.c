#include "resource_pool.h"
#include "../game/game_data.h"

static ResourceSlot s_resourceSlots[RESOURCE_POOL_MAX_SLOTS];

/**
 * @category memory/allocation
 * @status complete
 * @original func_0019c640
 * @address 0x0019c640
 * @description Allocates a slot in the resource pool. Finds an empty slot in the
 *              6-entry pool, records the allocation, and advances the pool offset.
 *              Size is rounded up to 32-byte alignment.
 * @windows_compatibility high
 * @author caprado
 */
int16_t allocateResourceSlot(int32_t size) {
    if (g_game.resourcePoolCount >= RESOURCE_POOL_MAX_SLOTS) {
        return 0;
    }

    int32_t alignedSize = ((size + 0xff) >> 8);
    alignedSize = (alignedSize + 0x1f) & ~0x1f;

    int32_t slotIndex = 0;
    for (slotIndex = 0; slotIndex < RESOURCE_POOL_MAX_SLOTS; slotIndex++) {
        if (s_resourceSlots[slotIndex].active == 0) {
            break;
        }
    }

    if (slotIndex >= RESOURCE_POOL_MAX_SLOTS) {
        return 1;
    }

    s_resourceSlots[slotIndex].active = 1;
    s_resourceSlots[slotIndex].startOffset = (int16_t)g_game.resourcePoolOffset;
    s_resourceSlots[slotIndex].size = alignedSize;

    g_game.resourcePoolOffset += alignedSize;
    g_game.resourcePoolCount++;

    return s_resourceSlots[slotIndex].startOffset;
}

void initializeResourcePool(void) {
    for (int i = 0; i < RESOURCE_POOL_MAX_SLOTS; i++) {
        s_resourceSlots[i].active = 0;
        s_resourceSlots[i].startOffset = 0;
        s_resourceSlots[i].size = 0;
    }
    g_game.resourcePoolCount = 0;
    g_game.resourcePoolOffset = 0;
}
