#ifndef AUDIO_CHANNEL_INIT_H
#define AUDIO_CHANNEL_INIT_H

#include <stdint.h>

typedef struct AudioChannelInfo {
    uint8_t flags;
    int8_t channelType;
    uint8_t padding[2];
    int32_t volumeLeft;
    int32_t volumeRight;
    int32_t reserved;
    float volumeFloat;
} AudioChannelInfo;

int32_t initializeAudioChannels(void);

void shutdownAudioChannels(void);

uint32_t getAudioChannelsInitialized(void);

void setAudioChannelsInitialized(uint32_t value);

AudioChannelInfo* getAudioChannelInfo(int32_t channelIndex);

void* getAudioChannelHandle(int32_t channelIndex);

#endif
