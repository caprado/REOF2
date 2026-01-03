#ifndef MENU_INIT_H
#define MENU_INIT_H

/**
 * @file menu_init.h
 * @brief Menu system initialization
 */

/**
 * @brief Initialize menu system
 * @description Initializes menu system state flags. If sequence is not active,
 *              clears all menu state. If sequence is active, preserves the
 *              active flag and initializes memory region.
 * @original func_001b9ef0 at 0x001b9ef0
 */
void initializeMenuSystem(void);

#endif // MENU_INIT_H
