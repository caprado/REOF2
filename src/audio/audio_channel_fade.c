#include "audio_channel_fade.h"
#include "../game/game_data.h"

// Forward declarations for audio system functions
extern int32_t func_00131bb8(void* channelHandle);  // Get channel status (1=playing, 2=playing)
extern void func_00132478(void* channelHandle, int32_t volume);  // Set channel volume
extern void func_0012bbb8(void);  // Audio system update

// Audio channel pointers (0x002aa878) - 3 channels
static void* s_audioChannelPointers[3] = { NULL, NULL, NULL };

// Audio channel state entries (0x002aa820) - 24 bytes each
// Structure per channel:
//   +0x00: uint8_t  state (0 = inactive)
//   +0x04: int32_t  currentVolume
//   +0x08: int32_t  targetVolume
//   +0x0C: float    fadeDelta (volume change per frame)
//   +0x10: float    currentFadePosition
//   +0x14: int32_t  targetVolumeAlt
typedef struct AudioChannelState {
    uint8_t state;           // +0x00
    uint8_t pad1[3];
    int32_t currentVolume;   // +0x04
    int32_t targetVolume;    // +0x08
    float fadeDelta;         // +0x0C
    float fadePosition;      // +0x10
    int32_t targetVolumeAlt; // +0x14
} AudioChannelState;

static AudioChannelState s_audioChannelState[3];

// Audio playing flag (0x003137df)
static uint8_t s_audioPlayingFlag = 0;

// Volume lookup table at 0x0021bd00
static const int32_t s_volumeTable[128] = {
    // This table maps volume indices to actual volume values
    // Populated from ROM data at 0x0021bd00
    0 // Placeholder - actual values from ROM
};

/**
 * @category audio/fade
 * @status complete
 * @original func_001ade90
 * @address 0x001ade90
 * @description Updates audio channel volume fading for all 3 audio channels.
 *              Handles gradual volume transitions (fade in/out) by interpolating
 *              between current and target volumes over time.
 * @windows_compatibility high
 * @author caprado
 */
void updateAudioChannelFade(void) {
    int32_t i;

    // Original: jal 0x1b7a70 - empty stub, returns 0
    // Original: sb $zero, 0x37df($at) - clear audio playing flag
    s_audioPlayingFlag = 0;

    // First loop: Check if any audio channels are playing
    // Original: s0 = 0x2aa878 (channel pointers), s1 = 0..2
    for (i = 0; i < 3; i++) {
        if (s_audioChannelPointers[i] == NULL) {
            continue;
        }

        // Original: jal 0x131bb8 - get channel status
        int32_t status = func_00131bb8(s_audioChannelPointers[i]);

        // If status is 1 or 2, channel is playing
        if (status == 1 || status == 2) {
            s_audioPlayingFlag = 1;
            break;
        }
    }

    // Second loop: Update volume fading for each channel
    // Original: s4 = 0..2, s0 = channel state entry (24 bytes each)
    for (i = 0; i < 3; i++) {
        AudioChannelState* state = &s_audioChannelState[i];

        // Skip if channel is inactive
        // Original: lb $v0, 0($s0); bnez $v0, skip
        if (state->state != 0) {
            continue;
        }

        // Skip if no fade delta
        // Original: lwc1 $f2, 0xc($s0); c.eq.s $f1, $f2
        if (state->fadeDelta == 0.0f) {
            continue;
        }

        // Calculate new fade position
        // Original: add.s $f20, $f0, $f2 (fadePosition + fadeDelta)
        float newPosition = state->fadePosition + state->fadeDelta;

        // Clamp to 0 if negative
        if (newPosition < 0.0f) {
            newPosition = 0.0f;
        }

        // Calculate volume from fade position
        // Original: div.s (newPosition / 127.0f), then multiply by targetVolume
        int32_t newVolume = (int32_t)((newPosition / 127.0f) * (float)state->targetVolume);

        // Clamp volume to target
        if (state->targetVolume < newVolume) {
            newPosition = (float)state->targetVolume;
        }

        // Update volume if changed
        if (newVolume != state->currentVolume) {
            // Look up actual volume from table and set
            // Original: volume index masked to 0x7f, lookup from 0x21bd00
            int32_t volumeIndex = newVolume & 0x7f;
            int32_t actualVolume = s_volumeTable[volumeIndex] / 10;

            func_00132478(s_audioChannelPointers[i], actualVolume);
        }

        // Store updated values
        state->currentVolume = newVolume;
        state->fadePosition = newPosition;

        // Check if fade complete
        int32_t target = state->targetVolumeAlt;
        if (state->currentVolume < target) {
            // Still fading up
            continue;
        }
        if (target < state->currentVolume) {
            // Still fading down
            continue;
        }

        // Fade complete - clear delta if at or past target
        if (state->fadeDelta <= 0.0f) {
            state->fadeDelta = 0.0f;
        }
    }

    // Original: jal 0x12bbb8 - audio system update
    func_0012bbb8();
}

/**
 * @brief Get audio channel pointer array
 * @return Pointer to array of 3 channel handles
 */
void** getAudioChannelPointers(void) {
    return s_audioChannelPointers;
}

/**
 * @brief Get audio channel state array
 * @return Pointer to array of 3 channel states
 */
AudioChannelState* getAudioChannelStates(void) {
    return s_audioChannelState;
}

/**
 * @brief Check if any audio is currently playing
 * @return 1 if audio playing, 0 otherwise
 */
uint8_t isAudioPlaying(void) {
    return s_audioPlayingFlag;
}
