#include "fade_control.h"
#include "../game/game_data.h"
#include <string.h>

/**
 * @category graphics/render
 * @status complete
 * @original func_001bb710
 * @address 0x001bb710
 * @description Clears both fade control buffers. Called during secondary init.
 * @windows_compatibility high
 * @author caprado
 */
void clearFadeBuffers(void) {
    memset(g_game.fadeBuffer2, 0, 0x18);
    memset(g_game.fadeBuffer1, 0, 0x20);
}
