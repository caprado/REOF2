/**
 * @category game/init
 * @status complete
 * @original func_001ba3c0
 * @address 0x001ba3c0
 * @description Initializes game state flags. Sets various flags to 0 or 1,
 *              copies values from settings buffer to game state, then calls
 *              several initialization sub-functions.
 * @windows_compatibility high
 * @author caprado
 */

#include "game_state_flags.h"
#include "game_data.h"
#include "validate_state.h"
#include "../graphics/screen_offset.h"
#include "../audio/audio_mode.h"
#include "../audio/audio_volume.h"

void initializeGameStateFlags(void) {
    g_game.state37dd = 0;
    g_game.state37a3 = 0;
    g_game.state37af = 1;
    g_game.timerShift = 1;
    g_game.state3865 = 1;
    g_game.state37a4 = 1;
    g_game.state37a7 = 0;
    g_game.state37a8 = 0;
    g_game.state37a2 = 1;
    g_game.state37a1 = 0;
    g_game.state37a6 = 1;
    g_game.state37ab = 1;

    g_game.stereoMode = g_game.settingsBuffer[0];
    g_game.bgmVolume = g_game.settingsBuffer[1];
    g_game.seVolume = g_game.settingsBuffer[2];
    g_game.controllerLayout = g_game.settingsBuffer[3];
    g_game.vibrationEnabled = g_game.settingsBuffer[4];
    g_game.screenOffsetX = g_game.settingsBuffer[6];
    g_game.screenOffsetY = g_game.settingsBuffer[7];
    g_game.brightness = g_game.settingsBuffer[5];

    validateGameStateValues();

    g_game.state37d2 = 0;
    g_game.state37ba = 0xffff;
    g_game.state37b8 = 0;
    g_game.state37b9 = 0;
    g_game.state37bc = 0;
    g_game.state37be = 0;
    g_game.state37c0 = 0;
    g_game.state37c2 = 0;
    g_game.state37c4 = 0;
    g_game.state37c6 = 0;
    g_game.state37c8 = 0;
    g_game.state37c9 = 0;
    g_game.state37ca = 0;
    g_game.state37da = 0;
    g_game.state37db = 0;

    setScreenOffset((int8_t)g_game.screenOffsetX, (int8_t)g_game.screenOffsetY);
    setStereoMode(g_game.stereoMode);
    setSeVolume(g_game.seVolume);
    setBgmVolume(g_game.bgmVolume);
}
