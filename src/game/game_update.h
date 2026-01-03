#ifndef GAME_UPDATE_H
#define GAME_UPDATE_H

/**
 * @file game_update.h
 * @brief Main game update dispatcher
 */

/**
 * @brief Update all game systems
 * @description Main game update function called each frame in state 1.
 *              Checks if game state is active (non-zero) and if so,
 *              calls 6 different subsystem update functions in sequence.
 * @original func_001ba310 at 0x001ba310
 */
void updateGameSystems(void);

#endif // GAME_UPDATE_H
