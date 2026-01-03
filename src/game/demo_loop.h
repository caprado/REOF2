#ifndef DEMO_LOOP_H
#define DEMO_LOOP_H

/**
 * @file demo_loop.h
 * @brief Demo/attract mode update loop for title screen
 * @description This is NOT the main game loop - it's for rendering
 *              the title screen and attract mode sequences.
 */

/**
 * @brief Update demo/attract mode
 * @description Called each frame to update demo mode. Routes to either
 *              the demo state machine (when state==4) or demo rendering
 *              operations (when state==1,2,3).
 * @original func_001bbfb0 at 0x001bbfb0
 */
void updateDemoLoop(void);

#endif // DEMO_LOOP_H
