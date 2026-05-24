#include "boot_load_wait.h"
#include "game_data.h"

// Subfunctions called during boot loading
extern void func_001b5010(int32_t a0);   // Called with a0=-2
extern void func_001b4fd0(int32_t a0);   // Called with a0=0x14
extern void func_001b5040(void);         // Called after above two
#include "boot_load_check.h"
extern void func_001bdc10(void);         // Called in sub-state 1
extern void func_001c19e0(int32_t a0);   // Display function (loading screen text)
extern void func_001c2620(int32_t a0, int32_t a1, int32_t a2); // Display function

// Access frame entry fields via byte offset (matches FrameEntry struct layout)
#define FE_COUNTER(e)    (((uint8_t*)(e))[10])
#define FE_COUNTER_B(e)  (((uint8_t*)(e))[11])

/**
 * @category game/state
 * @status complete
 * @original func_001bc750
 * @address 0x001bc750
 * @description Direct port from ASM. Sub-state machine at entry[0xa]:
 *   0:    Call func_001bd070 (load). Handle return codes:
 *         0 → increment counter, clear counterB
 *         -1 → return 0 with flag clear
 *         -2 → set counter=0x5a, counterB=0x20, flag=0
 *         -4 → return 0 with flag=1
 *         -6 → set counter=0x5b, counterB=0x20, flag=1
 *         other → return 1 (keep waiting)
 *   1:    Call func_001bdc10, set flag=2, return 0
 *   0x5a: Countdown counterB. When 0: check buttons, call display functions
 *   0x5b: Same as 0x5a with different display parameter
 *   other: return 1
 *
 * Returns 0 when loading is complete, 1 while still loading/waiting.
 *
 * @windows_compatibility high
 * @author caprado
 */
int32_t waitForBootLoad(void* entryPtr) {
    uint8_t subState;
    int32_t loadResult;
    uint16_t buttons;

    // Original: lhu $s1, 0x36e0($at) — read controller buttons
    buttons = (uint16_t)g_game.controllerState;

    // Original: jal 0x1b5010 with a0=-2
    func_001b5010(-2);
    // Original: jal 0x1b4fd0 with a0=0x14
    func_001b4fd0(0x14);
    // Original: jal 0x1b5040
    func_001b5040();

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
    // Main loading call
    loadResult = checkBootLoadState();

    switch (loadResult) {
        case 0:
            // Success: increment sub-state, clear counterB
            FE_COUNTER(entryPtr) = FE_COUNTER(entryPtr) + 1;
            FE_COUNTER_B(entryPtr) = 0;
            return 1;

        case -1:
            // Done with flag clear
            g_game.systemStateBuffer[0x11] = 0;  // 0x3137b1
            return 0;

        case -4:
            // Done with flag set to 1
            g_game.systemStateBuffer[0x11] = 1;  // 0x3137b1
            return 0;

        case -2:
            // Error: set to wait state 0x5a
            g_game.systemStateBuffer[0x11] = 0;  // 0x3137b1
            FE_COUNTER(entryPtr) = 0x5a;
            FE_COUNTER_B(entryPtr) = 0x20;
            return 1;

        case -6:
            // Error: set to wait state 0x5b
            g_game.systemStateBuffer[0x11] = 1;  // 0x3137b1
            FE_COUNTER(entryPtr) = 0x5b;
            FE_COUNTER_B(entryPtr) = 0x20;
            return 1;

        default:
            return 1;
    }

state_1:
    // Sub-state 1: call func_001bdc10, set flag=2
    func_001bdc10();
    g_game.systemStateBuffer[0x11] = 2;  // 0x3137b1
    return 0;

state_5a:
    // Wait state 0x5a: countdown, then check buttons
    if (FE_COUNTER_B(entryPtr) != 0) {
        FE_COUNTER_B(entryPtr) = FE_COUNTER_B(entryPtr) - 1;
        goto state_5a_display;
    }
    // Countdown done: check button press (any button in upper bits)
    if ((buttons & 0xfff0) != 0) {
        // Button pressed during 0x5a state
        return 0;
    }
    // No button: call display functions
    func_001c19e0(2);
    func_001c2620(2, 0x30, 0x188);

state_5a_display:
    func_001c19e0(7);
    func_001c2620(7, 0x30, 0x138);
    return 1;

state_5b:
    // Wait state 0x5b: countdown, then check buttons
    if (FE_COUNTER_B(entryPtr) != 0) {
        FE_COUNTER_B(entryPtr) = FE_COUNTER_B(entryPtr) - 1;
        goto state_5b_display;
    }
    // Countdown done: check button press
    if ((buttons & 0xfff0) != 0) {
        // Button pressed during 0x5b state
        return 0;
    }
    // No button: call display functions
    func_001c19e0(2);
    func_001c2620(2, 0x30, 0x188);

state_5b_display:
    func_001c19e0(6);
    func_001c2620(6, 0x30, 0x138);
    return 1;
}
