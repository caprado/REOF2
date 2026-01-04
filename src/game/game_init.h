#ifndef GAME_INIT_H
#define GAME_INIT_H

#include <stdint.h>

/**
 * @file game_init.h
 * @brief Game initialization functions
 * @description Contains functions for initializing game subsystems during startup.
 */

/**
 * @brief Initialize all game subsystems
 * @description Allocates memory buffers and initializes subsystems for:
 *              - Textures and models
 *              - Audio and scripts
 *              - Entities and animations
 *              - Resources and rendering
 *
 * Called by updateGameStateManager during state 0 (initialization).
 *
 * @see updateGameStateManager
 */
void initializeGameSubsystems(void);

#endif // GAME_INIT_H
