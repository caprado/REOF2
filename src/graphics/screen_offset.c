/**
 * @category graphics/display
 * @status complete
 * @original func_001af010
 * @address 0x001af010
 * @description Sets the screen display offset values for position adjustment.
 *              Stores X offset directly and Y offset with bit 0 cleared.
 * @windows_compatibility high
 * @author caprado
 */

#include "screen_offset.h"
#include "../game/game_data.h"

void setScreenOffset(int8_t offsetX, int8_t offsetY) {
    g_game.bufferOffset1 = offsetX;
    g_game.bufferOffset2 = offsetY & ~1;
}
