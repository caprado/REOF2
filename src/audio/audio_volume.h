#ifndef AUDIO_VOLUME_H
#define AUDIO_VOLUME_H

#include <stdint.h>

void setSeVolume(uint8_t volume);
uint8_t getSeVolume(void);

void setBgmVolume(uint8_t volume);
uint8_t getBgmVolume(void);

#endif // AUDIO_VOLUME_H
