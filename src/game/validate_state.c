/**
 * @category game/init
 * @status complete
 * @original func_001ae770
 * @address 0x001ae770
 * @description Validates and clamps game state values to valid ranges.
 *              Ensures settings are within acceptable bounds after loading.
 * @windows_compatibility high
 * @author caprado
 */

#include "validate_state.h"
#include "game_data.h"

void validateGameStateValues(void) {
    if (g_game.controllerLayout >= 6) {
        g_game.controllerLayout = 0;
    }

    g_game.vibrationEnabled &= 1;

    g_game.stereoMode &= 1;

    if (g_game.bgmVolume >= 8) {
        g_game.bgmVolume = 7;
    }

    if (g_game.seVolume >= 8) {
        g_game.seVolume = 7;
    }

    if ((int8_t)g_game.screenOffsetX < -10 || (int8_t)g_game.screenOffsetX >= 11) {
        g_game.screenOffsetX = 0;
    }

    if ((int8_t)g_game.screenOffsetY < -10 || (int8_t)g_game.screenOffsetY >= 11) {
        g_game.screenOffsetY = 0;
    }

    if (g_game.brightness < 0x38 || g_game.brightness >= 0xa5) {
        g_game.brightness = 0x80;
    }
}
