#include "demo_overlay.h"
#include "game_data.h"
#include "game_frame_callback.h"
#include "../media/video_player.h"
#include "../graphics/font.h"
#include "../graphics/game_font.h"
#include "../audio/sound_bank.h"
#include <stdio.h>

// AFS indices in NETBIO01.DAT -> entry [0] -> inner AFS
// Verified from overlay data section strings at 0x5ac0b0-0x5ac150
#define VIDEO_OPENING     1845   // PS2opening.sfd (84.6MB)
#define AUDIO_OPENING     1607   // opening.adx (10.7MB)
#define VIDEO_TITLE1      1847   // PS2title1_jpn.sfd (11.4MB, 512x448, 24.4s)
#define AUDIO_TITLE       1821   // file2_010.adx (34.4s)
#define VIDEO_DEMO1       1833   // PS2demo01.sfd (11.9MB)
#define AUDIO_DEMO1       1604   // file2demo01.adx (28.6s)
#define VIDEO_DEMO2       1834   // PS2demo02.sfd (9.2MB)
#define AUDIO_DEMO2       1605   // file2demo02.adx (23.5s)

// Title screen idle timeout before attract mode (~45 seconds observed on PS2)
#define TITLE_IDLE_FRAMES 2700   // 45 seconds at 60fps

extern void func_001bbab0(void);
extern void func_001af2f0(uintptr_t a0);

#define OV_SUBSTATE(e)   (((uint8_t*)(e))[2])
#define OV_TIMER(e)      (*(int16_t*)(((uint8_t*)(e)) + 8))

#define BTN_ANY     0xFFF0
#define BTN_START   0x0800

// States:
//   0  = Custom splash init
//   1  = Custom splash display
//   10 = Start opening FMV
//   11 = Wait for FMV / skip
//   20 = Transition to title
//   21 = Title screen (loop video, PRESS START)
//   22 = Attract: start demo video
//   23 = Attract: wait for demo video
//   24 = Attract: transition back to title
//   30 = Post-title cleanup
//   31 = Audio cleanup
//   32 = Final cleanup / menu active

static int s_drawPressStart = 0;
static int s_drawMenu = 0;
static int s_menuSelection = 0;
static int s_attractMode = 0;
static int s_attractDemoIndex = 0;  // cycles 0/1/2: demo1, demo2, opening

#define MENU_ITEM_COUNT 6

// Menu item strings — verified from ELF data at 0x0021d240
static const char* s_menuItems[MENU_ITEM_COUNT] = {
    "SINGLE PLAY",
    "NETWORK PLAY",
    "COLLECTION",
    "CHARALOG",
    "OPTION",
    "HDD INSTALL"
};

/**
 * @original func_001addd0
 * @address 0x001addd0
 * @description Audio fade transition. PS2: computes fade slope for SPU2 channel volume.
 *              ASM: cvt.s.w, sub.s, div.s to compute (target - current) / frames.
 *              Windows: stop video audio (our video_player handles audio internally).
 */
static void audioFadeTransition(void) {
    stopVideo();
}

/**
 * @original func_001adbe0
 * @address 0x001adbe0
 * @description Audio channel cleanup. PS2: loops 3 BGM/streaming channels (0-2),
 *              stops each via func_00132b10, releases handle via func_00131af8.
 *              Does NOT stop SPU2 SFX voices — those play to completion.
 *              Windows: stop video/BGM only, leave sound effects playing.
 */
static void audioCleanupAllChannels(void) {
    stopVideo();
}

int shouldDrawPressStart(void) {
    return s_drawPressStart;
}

int shouldDrawMenu(void) {
    return s_drawMenu;
}

int getMenuSelection(void) {
    return s_menuSelection;
}

int isAttractMode(void) {
    return s_attractMode;
}

void demoOverlayCallback(void* entry) {
    static int s_executedThisFrame = 0;

    // Guard: prevent double execution per frame
    // updateGameStateManager and processMenuController both process frame entries
    if (s_executedThisFrame) {
        s_executedThisFrame = 0;  // reset for next frame
        return;
    }
    s_executedThisFrame = 1;

    uint8_t subState = OV_SUBSTATE(entry);
    int16_t timer;
    uint16_t buttons = (uint16_t)(g_game.controllerState & 0xFFFF);

    switch (subState) {

        // ========== CUSTOM SPLASH ==========

        case 0:
            OV_TIMER(entry) = 180;
            OV_SUBSTATE(entry) = 1;
            break;

        case 1: {
            timer = OV_TIMER(entry);
            timer--;
            OV_TIMER(entry) = timer;

            float alpha = 1.0f;
            if (timer > 150) alpha = (float)(180 - timer) / 30.0f;
            if (timer < 30) alpha = (float)timer / 30.0f;

            if (alpha > 0.0f) {
                drawGameText("REOF2", 278, 170, alpha, alpha, alpha);
                drawGameText("Resident Evil Outbreak File 2", 117, 200, alpha * 0.7f, alpha * 0.7f, alpha * 0.7f);
                drawGameText("Decompiled by caprado", 173, 260, alpha * 0.5f, alpha * 0.5f, alpha * 0.5f);
            }

            if ((buttons & BTN_ANY) && timer < 120) {
                OV_SUBSTATE(entry) = 10;
                break;
            }

            if (timer <= 0) {
                OV_SUBSTATE(entry) = 10;
            }
            break;
        }

        // ========== OPENING FMV ==========

        case 10:
            printf("[DemoOverlay] Starting opening FMV\n");
            fflush(stdout);
            playVideo(VIDEO_OPENING, AUDIO_OPENING);
            OV_TIMER(entry) = 150;
            OV_SUBSTATE(entry) = 11;
            break;

        case 11: {
            int videoDone;

            timer = OV_TIMER(entry);
            if (timer > 0) {
                timer--;
                OV_TIMER(entry) = timer;
            }

            if ((buttons & BTN_ANY) && timer < 90) {
                printf("[DemoOverlay] FMV skipped\n");
                fflush(stdout);
                stopVideo();
                OV_TIMER(entry) = 20;
                OV_SUBSTATE(entry) = 20;
                triggerFade(8);
                break;
            }

            videoDone = !isVideoPlaying();
            if (videoDone) {
                printf("[DemoOverlay] FMV finished\n");
                fflush(stdout);
                stopVideo();
                OV_TIMER(entry) = 20;
                OV_SUBSTATE(entry) = 20;
            }

            triggerFade(8);
            break;
        }

        // ========== TITLE SCREEN ==========

        case 20:
            timer = OV_TIMER(entry);
            timer--;
            OV_TIMER(entry) = timer;
            if (timer <= 0) {
                printf("[DemoOverlay] Starting title screen\n");
                fflush(stdout);
                playVideo(VIDEO_TITLE1, AUDIO_TITLE);
                setVideoLoop(20.0);
                OV_TIMER(entry) = TITLE_IDLE_FRAMES;
                OV_SUBSTATE(entry) = 21;
            }
            break;

        case 21: {
            int framesInState;

            timer = OV_TIMER(entry);
            timer--;
            OV_TIMER(entry) = timer;

            // START -> menu transition
            // ASM: overlay 0x545d7c checks BTN_START, calls func_001addd0 + func_001b8000
            if (buttons & BTN_START) {
                printf("[DemoOverlay] Start pressed\n");
                fflush(stdout);
                audioFadeTransition();
                s_drawPressStart = 0;
                playSoundEffect(12, 32);  // "RESIDENT EVIL" voice (bank "start", category 12, sample 32)
                triggerFade(7);
                OV_TIMER(entry) = 20;
                OV_SUBSTATE(entry) = 30;
                break;
            }

            // Loop video when it ends
            if (!isVideoPlaying()) {
                playVideo(VIDEO_TITLE1, AUDIO_TITLE);
                setVideoLoop(20.0);
            }

            // Blink "PRESS START BUTTON" ~1 second cycle
            framesInState = TITLE_IDLE_FRAMES - timer;
            {
                int blinkPhase = (framesInState / 30) % 2;
                s_drawPressStart = (blinkPhase == 0) ? 1 : 0;
            }

            // Timeout -> attract/demo mode (~1 minute idle on PS2)
            if (timer <= 0) {
                printf("[DemoOverlay] Title timeout -> attract mode\n");
                fflush(stdout);
                stopVideo();
                s_drawPressStart = 0;
                OV_TIMER(entry) = 10;
                OV_SUBSTATE(entry) = 22;
            }
            break;
        }

        // ========== ATTRACT / DEMO MODE ==========
        // PS2 cycles: title -> demo1 -> title -> demo2 -> title -> ...
        // Demo videos: PS2demo01.sfd (1833) + file2demo01.adx (1604)
        //              PS2demo02.sfd (1834) + file2demo02.adx (1605)

        case 22: {
            // Start attract video
            // Cycle: demo1 -> demo2 -> opening -> repeat
            // Videos from overlay data: demo/file2demo01.adx, demo/file2demo02.adx, demo/opening.adx
            int videoIdx, audioIdx;
            timer = OV_TIMER(entry);
            timer--;
            OV_TIMER(entry) = timer;
            if (timer > 0) break;

            switch (s_attractDemoIndex) {
                case 0:
                    videoIdx = VIDEO_DEMO1;
                    audioIdx = AUDIO_DEMO1;
                    printf("[DemoOverlay] Attract: playing demo 1\n");
                    break;
                case 1:
                    videoIdx = VIDEO_DEMO2;
                    audioIdx = AUDIO_DEMO2;
                    printf("[DemoOverlay] Attract: playing demo 2\n");
                    break;
                default:
                    videoIdx = VIDEO_OPENING;
                    audioIdx = AUDIO_OPENING;
                    printf("[DemoOverlay] Attract: replaying opening\n");
                    break;
            }
            fflush(stdout);

            playVideo(videoIdx, audioIdx);
            s_attractMode = 1;
            OV_TIMER(entry) = 150;
            OV_SUBSTATE(entry) = 23;
            break;
        }

        case 23: {
            // Wait for demo video to finish
            timer = OV_TIMER(entry);
            if (timer > 0) {
                timer--;
                OV_TIMER(entry) = timer;
            }

            // Any button -> back to title immediately
            if ((buttons & BTN_ANY) && timer < 90) {
                printf("[DemoOverlay] Attract: skipped\n");
                fflush(stdout);
                stopVideo();
                s_attractMode = 0;
                OV_TIMER(entry) = 10;
                OV_SUBSTATE(entry) = 24;
                break;
            }

            // START -> go directly to menu
            if ((buttons & BTN_START) && timer < 90) {
                printf("[DemoOverlay] Attract: START pressed -> menu\n");
                fflush(stdout);
                audioFadeTransition();
                s_drawPressStart = 0;
                s_attractMode = 0;
                playSoundEffect(12, 32);  // "RESIDENT EVIL"
                triggerFade(7);
                OV_TIMER(entry) = 20;
                OV_SUBSTATE(entry) = 30;
                break;
            }

            if (!isVideoPlaying()) {
                printf("[DemoOverlay] Attract: demo finished\n");
                fflush(stdout);
                stopVideo();
                s_attractMode = 0;
                OV_TIMER(entry) = 10;
                OV_SUBSTATE(entry) = 24;
            }
            break;
        }

        case 24:
            // Transition back to title, cycle to next attract video
            timer = OV_TIMER(entry);
            timer--;
            OV_TIMER(entry) = timer;
            if (timer <= 0) {
                s_attractDemoIndex = (s_attractDemoIndex + 1) % 3;
                printf("[DemoOverlay] Attract: back to title (next=%d)\n", s_attractDemoIndex);
                fflush(stdout);
                OV_TIMER(entry) = 20;
                OV_SUBSTATE(entry) = 20;
            }
            break;

        // ========== POST-TITLE CLEANUP ==========

        case 30:
            timer = OV_TIMER(entry);
            timer--;
            OV_TIMER(entry) = timer;
            if (timer <= 0) {
                audioCleanupAllChannels();
                OV_TIMER(entry) = 10;
                OV_SUBSTATE(entry) = 31;
            }
            break;

        case 31:
            timer = OV_TIMER(entry);
            timer--;
            OV_TIMER(entry) = timer;
            if (timer <= 0) {
                printf("[DemoOverlay] Boot sequence complete\n");
                fflush(stdout);
                func_001bbab0();
                OV_SUBSTATE(entry) = 32;
            }
            break;

        case 32: {
            uint32_t pressed = 0;
            s_drawMenu = 1;

            if (g_game.entityDataPtr != NULL) {
                pressed = *(uint32_t*)((uint8_t*)g_game.entityDataPtr + 0x10);
            }

            if (pressed & 0x0010) {
                if (s_menuSelection > 0) {
                    s_menuSelection--;
                    playSoundEffect(12, 4);  // ASM: func_001b8000(4) at 0x5440d4
                }
            }
            if (pressed & 0x0040) {
                if (s_menuSelection < MENU_ITEM_COUNT - 1) {
                    s_menuSelection++;
                    playSoundEffect(12, 4);  // ASM: func_001b8000(4) at 0x5440d4
                }
            }

            if (pressed & (BTN_START | 0x8000)) {
                playSoundEffect(12, 22);  // "OUTBREAK" voice — ASM: menu select triggers this
                printf("[Menu] Selected: %s (index %d)\n",
                       s_menuItems[s_menuSelection], s_menuSelection);
                fflush(stdout);
            }
            break;
        }

        default:
            break;
    }
}
