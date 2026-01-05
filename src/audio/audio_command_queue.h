#ifndef AUDIO_COMMAND_QUEUE_H
#define AUDIO_COMMAND_QUEUE_H

#include <stdint.h>

int32_t queuePanningCommand(uint8_t panningEnabled);
uint8_t getPanningEnabled(void);

#endif // AUDIO_COMMAND_QUEUE_H
