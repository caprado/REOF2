#ifndef GAME_STATE_MANAGER_H
#define GAME_STATE_MANAGER_H

#include <stdint.h>

/**
 * @category game/state
 * @status complete
 * @original func_001ba1d0
 * @address 0x001ba1d0
 * @description Main game state manager update - handles initialization sequence and per-frame updates.
 *              State 0: Initialization - sets up screen, calls init functions
 *              State 1: Running - updates counters and calls per-frame processing functions
 * @windows_compatibility high
 * @author caprado
 */
void updateGameStateManager(void);

/**
 * @category game/state
 * @status complete
 * @original func_001ba0f0
 * @address 0x001ba0f0
 * @description Processes game state sequence timer. Decrements timer and advances sequence.
 * @windows_compatibility high
 * @author caprado
 */
void processGameStateManager(void);

/**
 * @category game/state
 * @status complete
 * @original func_001ba010
 * @address 0x001ba010
 * @description Resets game state manager. Clears timer, index, and sequence pointer.
 * @windows_compatibility high
 * @author caprado
 */
void resetGameStateManager(void);

#endif // GAME_STATE_MANAGER_H
