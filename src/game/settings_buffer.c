/**
 * @category game/init
 * @status complete
 * @original func_001ae690
 * @address 0x001ae690
 * @description Initializes the game settings buffer with default values.
 *              Clears the 16-byte settings buffer and copies default values from ROM.
 *              Original PS2: memset(0x3135a0, 0, 0x10), memcpy(0x3135a0, 0x23db80, 0x10)
 * @windows_compatibility high
 * @author caprado
 */

#include "settings_buffer.h"
#include "game_data.h"
#include <string.h>

#define SETTINGS_BUFFER_SIZE 0x10

static const uint8_t s_defaultSettings[SETTINGS_BUFFER_SIZE] = {
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0
};

void initializeSettingsBuffer(void) {
    memset(g_game.settingsBuffer, 0, SETTINGS_BUFFER_SIZE);

    memcpy(g_game.settingsBuffer, s_defaultSettings, SETTINGS_BUFFER_SIZE);
}
