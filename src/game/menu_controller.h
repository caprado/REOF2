#ifndef MENU_CONTROLLER_H
#define MENU_CONTROLLER_H

#include <stdint.h>

/**
 * Menu controller context structure
 * Passed as parameter to processMenuController
 */
typedef struct MenuControllerContext {
    uint8_t padding[8];      // Offset 0x0-0x7: Unknown/reserved
    uint8_t menuState;       // Offset 0x8: Menu state (0=init, 1=running)
} MenuControllerContext;

/**
 * @category game/menu
 * @status complete
 * @original func_001b9e60
 * @address 0x001b9e60
 * @description Main menu controller state machine. Called every frame from main loop.
 * @windows_compatibility high
 * @author caprado
 */
void processMenuController(MenuControllerContext* context);

#endif // MENU_CONTROLLER_H
