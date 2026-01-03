#ifndef GAME_STATE_MANAGER_H
#define GAME_STATE_MANAGER_H

#include <stdint.h>

/**
 * @file game_state_manager.h
 * @brief Game state manager for main game loop
 */

/**
 * @brief Process game state manager
 * @description Main game state manager that handles initialization and
 *              per-frame game logic updates. Implements 2-state machine:
 *              State 0: Initialize game systems
 *              State 1: Run game logic each frame
 * @original func_001ba1d0 at 0x001ba1d0
 */
void processGameStateManager(void);

#endif // GAME_STATE_MANAGER_H
