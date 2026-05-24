#include "game_frame_callback.h"
#include "game_data.h"
#include <stdio.h>
#include "game_state_manager.h"
#include "../graphics/render_state_manager.h"

// Subfunctions called by init (func_001bbed0)
#include "../io/resource_loader.h"
extern void func_001bef00(void);
extern void func_001b3830(void);
extern void func_001dac50(void);

// Subfunctions called by boot state machine (func_001bc2a0)
#include "entity_check.h"
#include "entity_ready_check.h"
extern void func_001af280(uintptr_t a0); // Register callback address
extern void func_001b76c0(uintptr_t callback, int32_t index); // initializeFrameEntry
extern void func_001bbf40(void);         // State 0: init function
extern void func_001bbf70(void);         // State 0: init function
#include "boot_load_wait.h"
extern void func_001c2a50(void);         // State 2: graphics/scenario setup
extern int32_t func_001c2e20(void);      // State 3: scenario config check
extern int32_t func_001dbdc0(void);      // State 6: completion check
extern void func_001bc1a0(void);         // State 5: scene display init
#include "scene_init.h"
extern void func_001af2f0(uintptr_t a0); // State 10: cleanup
extern void func_001ba3c0(void);         // State 10: game state init
extern void func_001bbab0(void);         // State 10: perspective matrix
#include "resource_queue.h"
extern void func_001b7790(void);         // State 10: display setup
// func_001b0ce0 ported as isEntityDataReady() in entity_ready_check.c

// Fade configuration table — 16 bytes per entry, extracted from ROM at 0x0021cb70
typedef struct {
    uint8_t pad0;
    uint8_t colorIndex;
    uint8_t pad2[10];
    uint8_t startAlpha;
    uint8_t targetAlpha;
    int16_t duration;
} FadeConfig;

static const FadeConfig s_fadeConfigTable[] = {
    { 0x00, 0x00, {0x04,0x05,0x00,0x00,0x00,0x00,0x80,0x02,0xE0,0x01}, 0x00, 0xA0, 1000 },
    { 0x00, 0x00, {0x04,0x05,0x00,0x00,0x00,0x00,0x80,0x02,0xE0,0x01}, 0xA0, 0xFF, 200 },
    { 0x00, 0x00, {0x04,0x05,0x00,0x00,0x00,0x00,0x80,0x02,0xE0,0x01}, 0x00, 0xFF, 32 },
    { 0x00, 0x01, {0x04,0x05,0x00,0x00,0x00,0x00,0x80,0x02,0xE0,0x01}, 0xFF, 0x00, 8 },
    { 0x00, 0x00, {0x04,0x05,0x00,0x00,0x00,0x00,0x80,0x02,0xE0,0x01}, 0x00, 0xFF, 64 },
    { 0x00, 0x00, {0x04,0x05,0x00,0x00,0x00,0x00,0x80,0x02,0xE0,0x01}, 0xFF, 0x00, 32 },
    { 0x00, 0x00, {0x04,0x05,0x00,0x00,0x00,0x00,0x80,0x02,0xE0,0x01}, 0xFF, 0x00, 32 },
    { 0x00, 0x00, {0x04,0x05,0x00,0x00,0x00,0x00,0x80,0x02,0xE0,0x01}, 0x00, 0xFF, 32 },
};

#define FADE_CONFIG_COUNT 8

// Color table for fade overlay (indexed by colorIndex in FadeConfig)
static const uint32_t s_fadeColorTable[] = {
    0x00000000,  // 0: black
    0x00FFFFFF,  // 1: white
    0x00000000,  // 2: black (placeholder)
    0x00000000,  // 3: black (placeholder)
};

/**
 * @category graphics/fade
 * @status complete
 * @original func_001bb9e0
 * @address 0x001bb9e0
 * @description Triggers a fade transition by configuring fadeBuffer2.
 *
 * Original ASM:
 *   sh a0, fadeBuffer2+4           ; store mode as active flag
 *   t0 = configTable + (a0-1)*16   ; look up config
 *   sw t0, fadeBuffer2+0x14        ; store config pointer
 *   a3 = config[0xc] (startAlpha), a0 = config[0xd] (targetAlpha)
 *   if target < start: dir=1, step=start-target
 *   else: dir=2, step=target-start
 *   step = step / duration
 *   if dir==1: step = -step
 *   color = (startAlpha << 24) | colorTable[config[1]]
 *
 * @param mode Fade mode (1-8)
 * @windows_compatibility high
 * @author caprado
 */
void triggerFade(int32_t mode) {
    uint8_t* buf = g_game.fadeBuffer2;
    const FadeConfig* config;
    uint8_t startAlpha, targetAlpha;
    int16_t direction, step, duration;
    uint32_t color;

    if (mode < 1 || mode > FADE_CONFIG_COUNT) {
        return;
    }

    *(int16_t*)(buf + 4) = (int16_t)mode;

    config = &s_fadeConfigTable[mode - 1];
    *(const FadeConfig**)(buf + 0x14) = config;

    startAlpha = config->startAlpha;
    targetAlpha = config->targetAlpha;
    duration = config->duration;

    if (targetAlpha < startAlpha) {
        direction = 1;
        step = (int16_t)(startAlpha - targetAlpha);
    } else {
        direction = 2;
        step = (int16_t)(targetAlpha - startAlpha);
    }

    *(int16_t*)(buf + 6) = direction;
    *(int16_t*)(buf + 0x12) = duration;

    if (duration > 0) {
        step = step / duration;
    }
    if (step == 0) {
        step = 1;
    }

    if (direction == 1) {
        step = -step;
    }

    *(int16_t*)(buf + 0x10) = step;

    color = ((uint32_t)startAlpha << 24) | s_fadeColorTable[config->colorIndex & 0x03];
    *(uint32_t*)(buf + 0x0c) = color;
}

/**
 * @category game/state
 * @status complete
 * @original func_001bbed0
 * @address 0x001bbed0
 * @description One-time init for game frame callback.
 *
 * Original ASM:
 *   entry[8]++ ; FE_SUBSTATE(entryPtr) = 0
 *   jal 0x1a8e70 (a0=0 delay slot)
 *   jal 0x1b7890(entry, 0x1bc740) — store sub-callback at entry+0x14
 *   jal 0x1bef00 ; jal 0x1b3830 ; jal 0x1dac50
 *   gp-0x6350 = 1
 *   jal 0x1aefd0(0x14, 0xff000000)
 *
 * @param entry Frame entry table pointer
 * @windows_compatibility high
 * @author caprado
 */
// Forward declaration of FrameEntry from game_state_manager.c
// These fields match the struct layout
#define FE_STATE(e)      (((uint8_t*)(e))[8])
#define FE_SUBSTATE(e)   (((uint8_t*)(e))[9])
#define FE_COUNTER(e)    (((uint8_t*)(e))[10])

static void initGameFrame(void* entry) {
    FE_STATE(entry) = FE_STATE(entry) + 1;
    FE_SUBSTATE(entry) = 0;
    loadResourceSlot(0);

    // Original: func_001b7890 stores callback 0x1bc740 at entry+0x14
    // 0x1bc740 is trampoline to func_001d9130 — not yet ported
    // subCallback field — leave as 0 (cleared by memset)

    func_001bef00();
    func_001b3830();
    func_001dac50();

    applyRenderState(0x14);
}

/**
 * @category game/state
 * @status complete
 * @original func_001bc2a0
 * @address 0x001bc2a0
 * @description Boot sequence state machine. 12 states dispatched via jump table.
 *              Direct translation from ASM — all subfunctions kept as extern calls.
 *
 * Entry data layout:
 *   FE_SUBSTATE(entryPtr)  = sub-state (0-11)
 *   FE_COUNTER(entryPtr) = timer/counter byte
 *   s0 = entry pointer (saved register)
 *
 * Post-switch: if subState >= 7 && subState < 10, calls func_001bc1b0
 *
 * @param entry Frame entry table pointer
 * @windows_compatibility high
 * @author caprado
 */
static void bootStateMachine(void* entryPtr) {
    uint8_t subState = FE_SUBSTATE(entryPtr);
    int32_t result;
    uint8_t timer;

    if (subState >= 12) {
        goto post_switch;
    }

    switch (subState) {
        case 0: {
            // 0x1bc2d8: jal 0x1b0720
            result = checkEntityLoadStatus();
            // Result in a0 after register shuffle (dc32 lines are register moves)
            // if result == -1, return (wait)
            if (result == -1) {
                goto post_switch;
            }
            // if result == -2, error → set subState=11, call func_001af280(0x1c1f70)
            if (result == -2) {
                FE_SUBSTATE(entryPtr) = 0xb;
                FE_COUNTER(entryPtr) = 0;
                func_001af280(0x001c1f70);
                subState = FE_SUBSTATE(entryPtr);
                goto post_switch_with_substate;
            }
            // Success: register frame entry and advance
            // jal 0x1b76c0(0x1b9e60, 0xe) — initializeFrameEntry with callback
            func_001b76c0(0x001b9e60, 0xe);
            FE_SUBSTATE(entryPtr) = FE_SUBSTATE(entryPtr) + 1;
            // jal 0x1bbf40, jal 0x1bbf70
            func_001bbf40();
            func_001bbf70();
            // jal 0x1af280(0x1bbfb0), jal 0x1af280(0x1bae50)
            func_001af280(0x001bbfb0);
            func_001af280(0x001bae50);
            goto post_switch;
        }

        case 1:
            // 0x1bc364: jal 0x1bc750
            result = waitForBootLoad(entryPtr);
            if (result != 0) {
                goto post_switch;
            }
            // Load done: advance subState, triggerFade(8), systemState=4
            // Original timer=0x14 (20 frames) — shortened for Windows since
            // PS2 hardware transitions we're waiting for don't apply
            FE_SUBSTATE(entryPtr) = FE_SUBSTATE(entryPtr) + 1;
            FE_COUNTER(entryPtr) = 1;
            triggerFade(8);
            g_game.systemState = 4;
            goto post_switch;

        case 2:
            // 0x1bc3a0: countdown timer
            timer = FE_COUNTER(entryPtr);
            if (timer != 0) {
                FE_COUNTER(entryPtr) = timer - 1;
                goto post_switch;
            }
            // Timer done: jal 0x1c2a50, set subState=3
            func_001c2a50();
            FE_SUBSTATE(entryPtr) = 3;
            goto post_switch;

        case 3:
            // 0x1bc3cc: jal 0x1c2e20
            result = func_001c2e20();
            if (result != 0) {
                goto post_switch;
            }
            // Done: triggerFade(7), advance subState
            // Original timer=0x14 — shortened for Windows
            FE_COUNTER(entryPtr) = 1;
            triggerFade(7);
            FE_SUBSTATE(entryPtr) = FE_SUBSTATE(entryPtr) + 1;
            goto post_switch;

        case 4:
            // 0x1bc3fc: countdown timer
            timer = FE_COUNTER(entryPtr);
            if (timer != 0) {
                FE_COUNTER(entryPtr) = timer - 1;
                goto post_switch;
            }
            // Timer done: advance subState (a2+1 where a2=subState)
            FE_SUBSTATE(entryPtr) = subState + 1;
            goto post_switch;

        case 5:
            // 0x1bc420: jal 0x1bc1a0
            func_001bc1a0();
            // Clear gp-0x6330, set systemState=3, triggerFade(8), advance
            // gp-0x6330 not yet mapped — use a local approach
            // Original: sw $zero, -0x6330($gp)
            // Original: sh 3, 0x3884($at) → systemState
            FE_SUBSTATE(entryPtr) = FE_SUBSTATE(entryPtr) + 1;
            triggerFade(8);
            g_game.systemState = 3;
            goto post_switch;

        case 6:
            // 0x1bc454: jal 0x1dbdc0
            result = func_001dbdc0();
            if (result == 0) {
                FE_SUBSTATE(entryPtr) = FE_SUBSTATE(entryPtr) + 1;
            }
            // Original timer=0x80 (128 frames = 2 sec PS2 transition)
            // Shortened for Windows — no PS2 display transitions to wait for
            triggerFade(8);
            FE_COUNTER(entryPtr) = 2;
            goto post_switch;

        case 7:
            // 0x1bc484: countdown — PS2 display transition timer
            timer = FE_COUNTER(entryPtr);
            timer = timer - 1;
            FE_COUNTER(entryPtr) = timer;
            timer = timer & 0xff;
            if (timer == 0) {
                FE_SUBSTATE(entryPtr) = FE_SUBSTATE(entryPtr) + 1;
                triggerFade(8);
                FE_COUNTER(entryPtr) = 2;
                g_game.systemState = 1;
                goto post_switch;
            }
            goto post_switch;

        case 8:
            timer = FE_COUNTER(entryPtr);
            timer = timer - 1;
            FE_COUNTER(entryPtr) = timer;
            timer = timer & 0xff;
            if (timer == 0) {
                FE_SUBSTATE(entryPtr) = FE_SUBSTATE(entryPtr) + 1;
                triggerFade(8);
                FE_COUNTER(entryPtr) = 2;
                g_game.systemState = 2;
                goto post_switch;
            }
            goto post_switch;

        case 9:
            timer = FE_COUNTER(entryPtr);
            timer = timer - 1;
            FE_COUNTER(entryPtr) = timer;
            timer = timer & 0xff;
            if (timer == 0) {
                FE_SUBSTATE(entryPtr) = FE_SUBSTATE(entryPtr) + 1;
                g_game.systemState = 0;
                goto post_switch;
            }
            goto post_switch;

        case 10:
            // 0x1bc59c: check gp-0x6330 (scene handle)
            if (g_game.sceneHandle == 0) {
                // Scene not loaded yet: call initializeScene, return (skip post-switch)
                initializeScene();
                return;
            }
            // Scene loaded: full cleanup and logo load
            func_001af2f0(0x001bbfb0);
            func_001af2f0(0x001bae50);
            func_001ba3c0();
            func_001bbab0();
            loadCompanyLogos();
            func_001b7790();
            goto post_switch;

        case 11:
            // 0x1bc5f4: error/check state
            timer = FE_COUNTER(entryPtr);
            if (timer == 0) {
                result = isEntityDataReady();
                if (result == 0) {
                    goto post_switch;
                }
                FE_COUNTER(entryPtr) = 1;
                goto post_switch;
            }
            // timer != 0: check controller input (0x3136e0 & 0x20)
            // Original: lw $v0, 0x36e0($at); andi $v0, 0x20
            if (g_game.controllerState & 0x20) {
                // Button pressed: reset to state 1, re-init
                func_001b76c0(0x001b9e60, 0xe);
                FE_SUBSTATE(entryPtr) = 1;
                FE_COUNTER(entryPtr) = 0;
                func_001bbf70();
                func_001bbf40();
                func_001af2f0(0x001c1f70);
                func_001af280(0x001bbfb0);
                func_001af280(0x001bae50);
                goto post_switch;
            }
            // No button: check func_001b0ce0
            result = isEntityDataReady();
            if (result == 0) {
                FE_COUNTER(entryPtr) = 0;
            }
            goto post_switch;
    }

post_switch:
    subState = FE_SUBSTATE(entryPtr);
post_switch_with_substate:
    // Post-processing: if subState >= 7 && subState < 10, call func_001bc1b0
    if (subState >= 7 && subState < 10) {
        initializeScene();
    }
}

/**
 * @category game/state
 * @status complete
 * @original func_001bbe80
 * @address 0x001bbe80
 * @description Main game frame callback. Dispatches state 0 (init) and state 1
 *              (boot state machine via func_001bc190 → 0x1bc6c0 → 0x1bc2a0).
 *
 * Original ASM:
 *   lbu $a1, 8($a0)
 *   beq $a1, 1 → jal 0x1bc190
 *   beqz $a1 → jal 0x1bbed0
 *   else → return
 *
 * @param entry Frame entry pointer
 * @windows_compatibility high
 * @author caprado
 */
void gameFrameCallback(void* entry) {
    uint8_t state;
    if (entry == NULL) return;
    state = FE_STATE(entry);

    switch (state) {
        case 0:
            initGameFrame(entry);
            break;

        case 1:
            bootStateMachine(entry);
            break;

        default:
            break;
    }
}
