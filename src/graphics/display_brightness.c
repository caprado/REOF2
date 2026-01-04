#include "display_brightness.h"
#include "../game/game_data.h"
#include <string.h>

#define DISPLAY_STATE_BUFFER_SIZE 0xF0

static uint8_t s_displayStateBuffer[DISPLAY_STATE_BUFFER_SIZE];

/**
 * @category graphics/init
 * @status complete
 * @original func_001b7ab0
 * @address 0x001b7ab0
 * @description Initializes display brightness/scale settings based on global volume setting.
 *              Reads SE volume (0x3137aa), converts to a display scale value (0-256),
 *              applies it via display mode function, then clears display state buffer.
 * @windows_compatibility high
 * @author caprado
 */
void initializeDisplayBrightness(void) {
    uint8_t volumeSetting = g_game.seVolume;

    float scaledValue = (float)volumeSetting;
    scaledValue = scaledValue / 7.0f;
    scaledValue = scaledValue * 256.0f;

    int32_t brightnessValue = (int32_t)scaledValue;

    setDisplayBrightness(brightnessValue);

    clearDisplayStateBuffer();
}

/**
 * @original func_001ac8e0
 * @address 0x001ac8e0
 */
void setDisplayBrightness(int32_t brightness) {
    if (brightness < 0) {
        brightness = 0;
    } else if (brightness > 256) {
        brightness = 256;
    }

    g_game.displayBrightness = brightness;
}

int32_t getDisplayBrightness(void) {
    return g_game.displayBrightness;
}

/**
 * @original func_001b8ff0
 * @address 0x001b8ff0
 */
void clearDisplayStateBuffer(void) {
    memset(s_displayStateBuffer, 0, DISPLAY_STATE_BUFFER_SIZE);
}
