#include "input.h"
#include "../../game/game_data.h"
#include <windows.h>

// PS2 button constants
#define PS2_UP      0x0010
#define PS2_RIGHT   0x0020
#define PS2_DOWN    0x0040
#define PS2_LEFT    0x0080
#define PS2_L2      0x0100
#define PS2_R2      0x0200
#define PS2_L1      0x0400
#define PS2_START   0x0800
#define PS2_SELECT  0x1000
#define PS2_L3      0x2000
#define PS2_R3      0x4000
#define PS2_R1      0x0020  // Same bit as RIGHT — R1 mapped separately on PS2 but shares bit here
#define PS2_CROSS   0x8000

// Track previous frame state for edge detection
static uint32_t s_prevButtons = 0;
static uint32_t s_currentButtons = 0;

void initInput(void) {
    s_prevButtons = 0;
    s_currentButtons = 0;
}

void updateInput(void) {
    uint32_t buttons = 0;

    // Only capture input when our window is focused
    HWND foreground = GetForegroundWindow();
    HWND ourWindow = FindWindowA("REOF2Window", NULL);
    if (foreground != ourWindow) {
        // Window not focused — clear all input
        s_prevButtons = s_currentButtons;
        s_currentButtons = 0;
        g_game.controllerState = 0;
        return;
    }

    // D-pad: arrow keys
    if (GetAsyncKeyState(VK_UP) & 0x8000)    buttons |= PS2_UP;
    if (GetAsyncKeyState(VK_DOWN) & 0x8000)  buttons |= PS2_DOWN;
    if (GetAsyncKeyState(VK_LEFT) & 0x8000)  buttons |= PS2_LEFT;
    if (GetAsyncKeyState(VK_RIGHT) & 0x8000) buttons |= PS2_RIGHT;

    // Face buttons
    if (GetAsyncKeyState('Z') & 0x8000)      buttons |= PS2_CROSS;
    if (GetAsyncKeyState(VK_SPACE) & 0x8000) buttons |= PS2_CROSS;
    if (GetAsyncKeyState('X') & 0x8000)      buttons |= PS2_RIGHT;  // Circle = right in bitmask
    if (GetAsyncKeyState('C') & 0x8000)      buttons |= PS2_L1;     // Square → L1 placeholder
    if (GetAsyncKeyState('V') & 0x8000)      buttons |= PS2_R1;     // Triangle → R1 placeholder

    // Start / Select
    if (GetAsyncKeyState(VK_RETURN) & 0x8000) buttons |= PS2_START;
    if (GetAsyncKeyState(VK_BACK) & 0x8000)   buttons |= PS2_SELECT;

    // Shoulder buttons
    if (GetAsyncKeyState('Q') & 0x8000)      buttons |= PS2_L1;
    if (GetAsyncKeyState('E') & 0x8000)      buttons |= PS2_R1;
    if (GetAsyncKeyState('A') & 0x8000)      buttons |= PS2_L2;
    if (GetAsyncKeyState('D') & 0x8000)      buttons |= PS2_R2;

    s_prevButtons = s_currentButtons;
    s_currentButtons = buttons;

    // Update game controller state
    // The PS2 entity data structure uses:
    //   +0x08: current frame buttons (raw state)
    //   +0x0C: previous frame buttons
    //   +0x10: just pressed (rising edge: current & ~previous)
    //   +0x14: just released (falling edge: ~current & previous)
    g_game.controllerState = buttons;

    // Also update entity data if it exists (for func_001b0720 etc.)
    if (g_game.entityDataPtr != NULL) {
        uint8_t* entity = (uint8_t*)g_game.entityDataPtr;
        uint32_t prev = *(uint32_t*)(entity + 0x08);  // previous = last frame's raw buttons
        *(uint32_t*)(entity + 0x0C) = prev;
        *(uint32_t*)(entity + 0x08) = buttons;
        *(uint32_t*)(entity + 0x10) = buttons & ~prev;  // rising edge
        *(uint32_t*)(entity + 0x14) = ~buttons & prev;  // falling edge
    }
}

int isKeyDown(int vkey) {
    return (GetAsyncKeyState(vkey) & 0x8000) ? 1 : 0;
}
