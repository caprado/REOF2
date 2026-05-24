#include "entity_ready_check.h"
#include "game_data.h"

/** @category game/entity @status complete @original func_001b0ce0 @address 0x001b0ce0 @windows_compatibility high @author caprado */
int32_t isEntityDataReady(void) {
    uint8_t* entityBase = (uint8_t*)g_game.entityDataPtr;

    if (entityBase == NULL) {
        return 0;
    }

    // Check status field at offset +2 (uint16)
    uint16_t statusField = *(uint16_t*)(entityBase + 2);
    if (statusField != 1) {
        return 0;
    }

    // Check state byte at offset +1
    if (entityBase[1] != 0x73) {
        return 0;
    }

    return 1;
}
