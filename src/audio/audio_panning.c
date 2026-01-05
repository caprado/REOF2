/**
 * @category audio/settings
 * @status complete
 * @original func_001ac980
 * @address 0x001ac980
 * @description Sets the audio panning mode. Inverts the stereo mode flag
 *              and configures audio channel panning.
 *              0 = stereo (inverted to 1 for panning enabled)
 *              1 = mono (inverted to 0 for panning disabled)
 * @windows_compatibility medium
 * @author caprado
 */

#include "audio_panning.h"
#include "audio_command_queue.h"

void setAudioPanning(uint8_t stereoMode) {
    queuePanningCommand(stereoMode ^ 1);
}
