/**
 * @category game/init
 * @status complete
 * @original func_001d33e0
 * @address 0x001d33e0
 * @description Initializes game state buffer. Clears 4KB of state data
 *              and sets up buffer pointers using g_game.secondaryBuffer.
 * @windows_compatibility high
 * @author caprado
 */

#include "state_buffer.h"
#include "game_data.h"
#include <string.h>

#define STATE_BUFFER_SIZE   0x10000

void initializeStateBuffer(void) {
    memset(g_game.stateData, 0, sizeof(g_game.stateData));

    g_game.stateBufferIndex = -1;
    g_game.stateBufferStart = (uint8_t*)g_game.secondaryBuffer;
    g_game.stateBufferEnd = (uint8_t*)g_game.secondaryBuffer + STATE_BUFFER_SIZE;
}
