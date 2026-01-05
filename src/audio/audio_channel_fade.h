#ifndef AUDIO_CHANNEL_FADE_H
#define AUDIO_CHANNEL_FADE_H

#include <stdint.h>

/**
 * @file audio_channel_fade.h
 * @brief Audio channel volume fading system
 * @description Handles gradual volume transitions (fade in/out) for 3 audio channels.
 *              Original: func_001ade90 at address 0x001ade90
 */

/**
 * @brief Update audio channel volume fading
 * @description Called each frame to interpolate volume levels for all 3 audio
 *              channels. Handles both fade-in and fade-out transitions.
 * @original func_001ade90
 */
void updateAudioChannelFade(void);

/**
 * @brief Get audio channel pointer array
 * @return Pointer to array of 3 channel handles (0x002aa878)
 */
void** getAudioChannelPointers(void);

/**
 * @brief Check if any audio is currently playing
 * @return 1 if audio playing, 0 otherwise (0x003137df)
 */
uint8_t isAudioPlaying(void);

#endif // AUDIO_CHANNEL_FADE_H
