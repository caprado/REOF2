/**
 * @category audio/settings
 * @status complete
 * @original func_001addb0
 * @address 0x001addb0
 * @description Stores the stereo/mono mode setting for use by the audio system.
 *              Original PS2 used a trampoline chain - Windows just stores the value.
 * @windows_compatibility high
 * @author caprado
 */

#include "audio_stereo_setting.h"

static uint8_t s_stereoMode = 0;

void setStereoModeSetting(uint8_t mode) {
    s_stereoMode = mode;
}

uint8_t getStereoModeSetting(void) {
    return s_stereoMode;
}
