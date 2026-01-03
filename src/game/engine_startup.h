#ifndef ENGINE_STARTUP_H
#define ENGINE_STARTUP_H

#include <stdbool.h>

/**
 * @file engine_startup.h
 * @brief Engine initialization and startup sequence
 * @description Provides a centralized initialization system that replaces
 *              scattered PS2 initialization code. Ensures proper initialization
 *              order for all game systems.
 */

/**
 * @brief Initialize all game engine systems
 * @description Initializes all game systems in the correct order:
 *              1. GameData structure
 *              2. Text rendering system
 *              3. Graphics memory system
 *              4. Menu system
 *              5. Other subsystems
 * @return true if initialization succeeded, false on error
 */
bool initializeEngine(void);

/**
 * @brief Shutdown all game engine systems
 * @description Cleanly shuts down all systems in reverse order
 */
void shutdownEngine(void);

#endif // ENGINE_STARTUP_H
