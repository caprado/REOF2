#include "audio_channel_init.h"
#include "../game/game_data.h"
#include <string.h>

#define AUDIO_CHANNEL_COUNT 3

static uint32_t s_audioChannelsInitialized = 0;
static AudioChannelInfo s_audioChannels[AUDIO_CHANNEL_COUNT];
static void* s_audioChannelHandles[AUDIO_CHANNEL_COUNT] = {NULL};

/**
 * @category audio/init
 * @status complete
 * @original func_001ad600
 * @address 0x001ad600
 * @description Initializes audio channels for sound playback. Sets up 3 audio
 *              channels with volume settings based on global BGM/SE volume configuration.
 *              Channel 0 uses BGM volume (0x3137a9), channels 1-2 use SE volume (0x3137aa).
 * @windows_compatibility high
 * @author caprado
 */
int32_t initializeAudioChannels(void) {
    if (s_audioChannelsInitialized != 0) {
        shutdownAudioChannels();
        return -1;
    }

    memset(s_audioChannels, 0, sizeof(s_audioChannels));

    for (int32_t i = 0; i < AUDIO_CHANNEL_COUNT; i++) {
        s_audioChannelHandles[i] = NULL;
    }

    for (int32_t channelIndex = 0; channelIndex < AUDIO_CHANNEL_COUNT; channelIndex++) {
        AudioChannelInfo* channel = &s_audioChannels[channelIndex];

        channel->flags = 0;
        channel->channelType = (channelIndex == 0) ? 0 : 1;

        uint8_t volumePercent = (channelIndex == 0) ? g_game.bgmVolume : g_game.seVolume;
        int32_t volumeScaled = (volumePercent * 127) / 100;

        channel->volumeLeft = volumeScaled;
        channel->volumeRight = volumeScaled;
        channel->reserved = 0;
        channel->volumeFloat = (float)(volumePercent * 127) / 100.0f;

        // TODO: Create actual audio handle with Windows audio backend
        s_audioChannelHandles[channelIndex] = (void*)(uintptr_t)(channelIndex + 1);
    }

    s_audioChannelsInitialized = 1;

    return 0;
}

void shutdownAudioChannels(void) {
    // Original: func_001adbe0(2) - loops 3 channels, clears flags, destroys handles
    for (int32_t i = 0; i < AUDIO_CHANNEL_COUNT; i++) {
        s_audioChannels[i].flags = 0;
        // TODO: Release actual audio handle with Windows audio backend
        s_audioChannelHandles[i] = NULL;
    }
    s_audioChannelsInitialized = 0;
}

uint32_t getAudioChannelsInitialized(void) {
    return s_audioChannelsInitialized;
}

void setAudioChannelsInitialized(uint32_t value) {
    s_audioChannelsInitialized = value;
}

AudioChannelInfo* getAudioChannelInfo(int32_t channelIndex) {
    if (channelIndex < 0 || channelIndex >= AUDIO_CHANNEL_COUNT) {
        return NULL;
    }
    return &s_audioChannels[channelIndex];
}

void* getAudioChannelHandle(int32_t channelIndex) {
    if (channelIndex < 0 || channelIndex >= AUDIO_CHANNEL_COUNT) {
        return NULL;
    }
    return s_audioChannelHandles[channelIndex];
}
