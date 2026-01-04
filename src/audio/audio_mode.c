/**
 * @category audio/settings
 * @status complete
 * @original func_001b7e60
 * @address 0x001b7e60
 * @description Sets the audio output mode (stereo/mono).
 *              Calls two sub-functions to configure audio channels.
 * @windows_compatibility medium
 * @author caprado
 */

#include "audio_mode.h"
#include "audio_panning.h"
#include "audio_stereo_setting.h"

void setStereoMode(uint8_t mode) {
    setAudioPanning(mode);
    setStereoModeSetting(mode);
}
