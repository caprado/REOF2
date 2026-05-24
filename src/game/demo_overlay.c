#include "demo_overlay.h"
#include "game_data.h"
#include "game_frame_callback.h"
#include "../media/video_player.h"
#include "../graphics/font.h"
#include "../graphics/game_font.h"
#include "../audio/sound_bank.h"
#include <stdio.h>

// AFS indices in NETBIO01.DAT -> entry [0] -> inner AFS
#define VIDEO_OPENING     1845
#define AUDIO_OPENING     1607
#define VIDEO_TITLE1      1847
#define AUDIO_TITLE       1821

extern void func_001b8000(void);
extern void func_001addd0(void);
extern void func_001adbe0(void);
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
//   30 = Post-title cleanup
//   31 = Audio cleanup
//   32 = Final cleanup / menu active

static int s_drawPressStart = 0;
static int s_drawMenu = 0;
static int s_menuSelection = 0;
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

int shouldDrawPressStart(void) {
    return s_drawPressStart;
}

int shouldDrawMenu(void) {
    return s_drawMenu;
}

int getMenuSelection(void) {
    return s_menuSelection;
}

void demoOverlayCallback(void* entry) {
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

            // Fade in/out splash text
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

            // Skip on any button (1 second grace period)
            if ((buttons & BTN_ANY) && timer < 90) {
                printf("[DemoOverlay] FMV skipped\n");
                fflush(stdout);
                stopVideo();
                OV_TIMER(entry) = 20;
                OV_SUBSTATE(entry) = 20;
                triggerFade(8);
                break;
            }

            // Check if video finished naturally
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
            // Brief transition before title
            timer = OV_TIMER(entry);
            timer--;
            OV_TIMER(entry) = timer;
            if (timer <= 0) {
                printf("[DemoOverlay] Starting title screen\n");
                fflush(stdout);
                playVideo(VIDEO_TITLE1, AUDIO_TITLE);
                setVideoLoop(20.0);
                OV_TIMER(entry) = 30000;
                OV_SUBSTATE(entry) = 21;
            }
            break;

        case 21: {
            // Title screen: video plays, "PUSH START" text overlaid, blinks
            // ASM verified: func_001b3260 draws "   PUSH START" at grid (13, row)
            // Text is rendered throughout title video, blinking on/off
            int framesInState;

            timer = OV_TIMER(entry);
            timer--;
            OV_TIMER(entry) = timer;

            // Start button -> menu
            if (buttons & BTN_START) {
                printf("[DemoOverlay] Start pressed\n");
                fflush(stdout);
                stopVideo();
                s_drawPressStart = 0;
                playSoundEffect(12, 32);  // "RESIDENT EVIL" voice (bank "start" at AFS 1334, category 12)
                func_001addd0();
                triggerFade(7);
                func_001b8000();
                OV_TIMER(entry) = 20;
                OV_SUBSTATE(entry) = 30;
                break;
            }

            // Loop video when it ends
            if (!isVideoPlaying()) {
                playVideo(VIDEO_TITLE1, AUDIO_TITLE);
                setVideoLoop(20.0);
            }

            // Blink "PUSH START" text — shown from the start, blinks ~1 second cycle
            // ASM: a3=-1 parameter to func_001b3260 controls blink
            framesInState = 30000 - timer;
            {
                int blinkPhase = (framesInState / 30) % 2;
                s_drawPressStart = (blinkPhase == 0) ? 1 : 0;
            }

            // Timeout -> loop
            if (timer <= 0) {
                OV_TIMER(entry) = 30000;
            }
            break;
        }

        // ========== POST-TITLE CLEANUP ==========

        case 30:
            timer = OV_TIMER(entry);
            timer--;
            OV_TIMER(entry) = timer;
            if (timer <= 0) {
                func_001adbe0();
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
            // Main menu active — handle navigation input
            // ASM: func_0x544680 checks D-pad and Start
            // Use entity data inputPressed field for edge detection (rising edge only)
            uint32_t pressed = 0;
            s_drawMenu = 1;

            if (g_game.entityDataPtr != NULL) {
                pressed = *(uint32_t*)((uint8_t*)g_game.entityDataPtr + 0x10);
            }

            // D-pad up/down (rising edge)
            if (pressed & 0x0010) {
                if (s_menuSelection > 0) s_menuSelection--;
            }
            if (pressed & 0x0040) {
                if (s_menuSelection < MENU_ITEM_COUNT - 1) s_menuSelection++;
            }

            // Start/Cross confirms selection (rising edge)
            if (pressed & (BTN_START | 0x8000)) {
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
