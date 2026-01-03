#ifndef GAME_INIT_COUNTER_H
#define GAME_INIT_COUNTER_H

/**
 * @file game_init_counter.h
 * @brief Game initialization counter management
 */

/**
 * @brief Decrement initialization counter and trigger init when zero
 * @description Decrements a reference counter. When counter reaches 0,
 *              resets it to 20 and calls initialization function with
 *              game data structure pointer.
 * @original func_001ba8b0 at 0x001ba8b0
 */
void decrementAndInitialize(void);

#endif // GAME_INIT_COUNTER_H
