#ifndef GAME_FRAME_CALLBACK_H
#define GAME_FRAME_CALLBACK_H

#include <stdint.h>

/**
 * @category game/state
 * @status complete
 * @original func_001bbe80
 * @address 0x001bbe80
 * @description Main game frame callback registered in frame entry table slot 0.
 *              Dispatches between init (state 0) and attract mode state machine (state 1).
 * @param entry Pointer to the 32-byte frame entry (passed from finalizeFrame)
 * @windows_compatibility high
 * @author caprado
 */
void gameFrameCallback(void* entry);

/**
 * @category graphics/fade
 * @status complete
 * @original func_001bb9e0
 * @address 0x001bb9e0
 * @description Triggers a fade transition by configuring fadeBuffer2.
 *              Reads fade parameters from a static config table indexed by mode.
 *              Sets direction, alpha step, duration, and initial color.
 * @param mode Fade mode (1-9), selects config from table
 * @windows_compatibility high
 * @author caprado
 */
void triggerFade(int32_t mode);

#endif // GAME_FRAME_CALLBACK_H
