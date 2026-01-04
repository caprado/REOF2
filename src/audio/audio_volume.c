/**
 * @category audio/settings
 * @status complete
 * @original func_001b7e90
 * @address 0x001b7e90
 * @description Sets the sound effects (SE) volume level.
 *              Original PS2 scaled 0-7 to 0-127 and configured SPU2 channels.
 *              Windows stores the value for use by the audio system.
 * @windows_compatibility high
 * @author caprado
 */

#include "audio_volume.h"

static uint8_t s_seVolume = 0;
static uint8_t s_bgmVolume = 0;

void setSeVolume(uint8_t volume) {
    s_seVolume = volume;
}

uint8_t getSeVolume(void) {
    return s_seVolume;
}

void setBgmVolume(uint8_t volume) {
    s_bgmVolume = volume;
}

uint8_t getBgmVolume(void) {
    return s_bgmVolume;
}
