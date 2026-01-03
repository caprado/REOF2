#ifndef MENU_CONTROLLER_H
#define MENU_CONTROLLER_H

#include <stdint.h>

/**
 * @file menu_controller.h
 * @brief Main menu controller system
 * @description Dispatches to menu subsystems and manages menu state
 */

/**
 * Menu controller context
 */
typedef struct MenuContext {
    uint8_t menuState;       // Menu state (0=init, 1=running)
} MenuContext;

/**
 * @brief Process main menu controller
 * @param context Menu context structure
 * @original func_001b9e60 at 0x001b9e60
 * @description Main dispatcher that calls menu subsystems based on state
 */
void processMenuController(MenuContext* context);

#endif // MENU_CONTROLLER_H
