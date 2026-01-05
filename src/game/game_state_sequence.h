#ifndef GAME_STATE_SEQUENCE_H
#define GAME_STATE_SEQUENCE_H

#include <stdint.h>

/**
 * @file game_state_sequence.h
 * @brief Game state initialization sequence
 * @description Master initialization function that sets up all core game subsystems.
 *              Original: func_001ba9c0 at address 0x001ba9c0
 */

/**
 * @brief Initialize the complete game state sequence
 * @description Initializes all core game subsystems in order:
 *              1. Audio/sound channels (func_001ad600)
 *              2. Display/screen settings (func_001b7ab0)
 *              3. Buffer initialization (func_001ae690)
 *              4. Game state flags (func_001ba3c0)
 *              5. State buffer initialization (func_001d33e0)
 *              6. Array clearing (func_001af240)
 *              7. Timer/counter initialization (func_001ba8b0)
 *              8. Value copy (func_001ae5a0)
 *              9. State machine update (func_001b7490)
 * @original func_001ba9c0
 */
void initializeGameStateSequence(void);

/**
 * @brief Get the game initialization counter
 * @return Current value of init counter (gp-0x7cc0)
 */
uint32_t getGameInitCounter(void);

/**
 * @brief Set the game initialization counter
 * @param value New counter value
 */
void setGameInitCounter(uint32_t value);

/**
 * @brief Check if game state is ready
 * @return 0 if ready, non-zero otherwise (gp-0x6360)
 */
uint32_t getGameStateReady(void);

/**
 * @brief Set game state ready flag
 * @param value New ready flag value
 */
void setGameStateReady(uint32_t value);

#endif // GAME_STATE_SEQUENCE_H
