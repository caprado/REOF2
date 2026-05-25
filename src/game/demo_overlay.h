#ifndef DEMO_OVERLAY_H
#define DEMO_OVERLAY_H

#include <stdint.h>

/**
 * @file demo_overlay.h
 * @description Windows replacement for the demo.bin overlay callback.
 *              On PS2, the overlay at 0x543080 ran MIPS code loaded from BIN/1.DAT.
 *              On Windows, we implement the same state machine behavior directly.
 *
 * The overlay's state machine (from ASM at 0x54f710):
 *   State 0: Start opening video + audio
 *   State 1: Wait/countdown + fade
 *   State 2-6: Further opening sequence states
 *
 * Video: PS2opening.sfd (index 1845 in NETBIO01 inner AFS)
 * Audio: Opening.adx (index 1607 in NETBIO01 inner AFS)
 */

/**
 * @description Demo overlay callback — registered in frame entry table slot 4
 *              during loadCompanyLogos (func_001b7940).
 *              Replaces PS2 overlay code at 0x543080.
 * @param entry Frame entry pointer
 */
void demoOverlayCallback(void* entry);

/**
 * @description Check if "PRESS START" should be drawn this frame.
 *              Must be called AFTER renderVideoFrame() in the main loop.
 * @return 1 if text should be drawn, 0 if not
 */
int shouldDrawPressStart(void);

/**
 * @description Check if main menu should be drawn this frame.
 * @return 1 if menu should be drawn, 0 if not
 */
int shouldDrawMenu(void);

/**
 * @description Get current menu selection index (0-5).
 */
int getMenuSelection(void);

/**
 * @description Check if attract/demo mode is active (for DEMONSTRATION text overlay).
 */
int isAttractMode(void);

#endif // DEMO_OVERLAY_H
