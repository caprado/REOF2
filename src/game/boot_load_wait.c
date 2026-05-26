#include "boot_load_wait.h"
#include "game_data.h"
#include "boot_load_check.h"

// PS2-specific stubs removed:
// func_001b5010 — PS2 font context glyph width (ctx+0x78)
// func_001b4fd0 — PS2 font context line height (ctx+0x6c, ctx+0x98)
// func_001b5040 — PS2 font context style flag (ctx+0x7c)
// func_001bdc10 — PS2 memory card / file system operations
// func_001c19e0 — PS2 loading screen text display
// func_001c2620 — PS2 loading screen GS/DMA rendering

// Access frame entry fields via byte offset (matches FrameEntry struct layout)
#define FE_COUNTER(e)    (((uint8_t*)(e))[10])
#define FE_COUNTER_B(e)  (((uint8_t*)(e))[11])

/**
 * @category game/state
 * @status complete
 * @original func_001bc750
 * @address 0x001bc750
 * @description Boot loading sub-state machine at entry[0xa].
 *              PS2 rendering calls (loading screen display) removed — Windows loads synchronously.
 * @windows_compatibility high
 * @author caprado
 */
int32_t waitForBootLoad(void* entryPtr) {
    uint8_t subState;
    int32_t loadResult;
    uint16_t buttons;

    buttons = (uint16_t)g_game.controllerState;

    subState = FE_COUNTER(entryPtr);

    switch (subState) {
        case 0x5b:
            goto state_5b;
        case 0x5a:
            goto state_5a;
        case 1:
            goto state_1;
        case 0:
            goto state_0;
        default:
            return 1;
    }

state_0:
    loadResult = checkBootLoadState();

    switch (loadResult) {
        case 0:
            FE_COUNTER(entryPtr) = FE_COUNTER(entryPtr) + 1;
            FE_COUNTER_B(entryPtr) = 0;
            return 1;

        case -1:
            g_game.systemStateBuffer[0x11] = 0;
            return 0;

        case -4:
            g_game.systemStateBuffer[0x11] = 1;
            return 0;

        case -2:
            g_game.systemStateBuffer[0x11] = 0;
            FE_COUNTER(entryPtr) = 0x5a;
            FE_COUNTER_B(entryPtr) = 0x20;
            return 1;

        case -6:
            g_game.systemStateBuffer[0x11] = 1;
            FE_COUNTER(entryPtr) = 0x5b;
            FE_COUNTER_B(entryPtr) = 0x20;
            return 1;

        default:
            return 1;
    }

state_1:
    // Original: func_001bdc10() — PS2 memory card ops, not needed on Windows
    g_game.systemStateBuffer[0x11] = 2;
    return 0;

state_5a:
    if (FE_COUNTER_B(entryPtr) != 0) {
        FE_COUNTER_B(entryPtr) = FE_COUNTER_B(entryPtr) - 1;
    }
    if ((buttons & 0xfff0) != 0) {
        return 0;
    }
    return 1;

state_5b:
    if (FE_COUNTER_B(entryPtr) != 0) {
        FE_COUNTER_B(entryPtr) = FE_COUNTER_B(entryPtr) - 1;
    }
    if ((buttons & 0xfff0) != 0) {
        return 0;
    }
    return 1;
}
