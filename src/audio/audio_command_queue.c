/**
 * @category audio/settings
 * @status complete
 * @original func_001a7690
 * @address 0x001a7690
 * @description Stores audio panning setting for use by the audio system.
 *              Original PS2 used a command queue - Windows just stores the value.
 * @windows_compatibility high
 * @author caprado
 */

#include "audio_command_queue.h"

static uint8_t s_panningEnabled = 0;

int32_t queuePanningCommand(uint8_t panningEnabled) {
    s_panningEnabled = panningEnabled;
    return 0;
}

uint8_t getPanningEnabled(void) {
    return s_panningEnabled;
}
