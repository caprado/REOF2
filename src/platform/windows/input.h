#ifndef INPUT_H
#define INPUT_H

#include <stdint.h>

/**
 * @file input.h
 * @description Abstracted input system for Windows port.
 *              Maps keyboard/mouse (and later gamepad) inputs to PS2 button format.
 *              The game logic reads g_game.controllerState using PS2 button masks.
 *              This system populates that field from Windows input sources.
 *
 * PS2 Button masks (from original game):
 *   0x0010 - Up
 *   0x0020 - Right / Circle (confirm in JP)
 *   0x0040 - Down
 *   0x0080 - Left
 *   0x0100 - L2
 *   0x0200 - R2
 *   0x0400 - L1
 *   0x0800 - Start
 *   0x1000 - Select
 *   0x2000 - L3
 *   0x4000 - R3
 *   0x8000 - Cross (confirm in US)
 *
 * Default keyboard mapping:
 *   Enter/Return  → Start (0x0800)
 *   Escape        → Select (0x1000) (also closes window via opengl_process_events)
 *   Arrow keys    → D-pad (0x0010/0x0020/0x0040/0x0080)
 *   Z / Space     → Cross/Confirm (0x8000)
 *   X             → Circle (0x0020)
 *   C             → Square
 *   V             → Triangle
 *   Any key       → contributes to 0xFFF0 mask for "any button" checks
 */

/**
 * @description Initialize input system.
 */
void initInput(void);

/**
 * @description Update input state from Windows messages.
 *              Call once per frame BEFORE game logic.
 *              Updates g_game.controllerState with current button state.
 */
void updateInput(void);

/**
 * @description Check if a specific key is currently held.
 * @param vkey Windows virtual key code (VK_*)
 * @return 1 if pressed, 0 if not
 */
int isKeyDown(int vkey);

#endif // INPUT_H
