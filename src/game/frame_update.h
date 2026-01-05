#ifndef FRAME_UPDATE_H
#define FRAME_UPDATE_H

#include <stdint.h>

/**
 * @category game/frame
 * @status complete
 * @original func_001ba360
 * @address 0x001ba360
 * @description Render update dispatcher. Only executes when gameStateManagerState is non-zero.
 *              Calls beginRenderFrame, graphics functions, scene compositor, and endRenderFrame.
 * @windows_compatibility medium
 * @author caprado
 */
void updateRenderState(void);

/**
 * @category game/frame
 * @status complete
 * @original func_0019f390
 * @address 0x0019f390
 * @description Per-frame update dispatcher. Executes the main frame update sequence:
 *              rendering, graphics sync, input processing, buffer management, and game logic.
 *              On PS2, this also managed timer registers - on Windows these are abstracted.
 * @return Always returns 1 to indicate success
 * @windows_compatibility medium
 * @author caprado
 */
int32_t executeFrameUpdate(void);

/**
 * @brief Get the current render frame state
 * @return 0 = inactive, 1 = active, 2 = processing
 */
uint32_t getRenderFrameState(void);

/**
 * @category game/frame
 * @status complete
 * @original func_001a8990
 * @address 0x001a8990
 * @description Frame synchronization and input processing.
 *              On PS2: Polls IOP for controller input, then loops waiting for
 *              either streaming data or VSync completion.
 *              On Windows: Manages sync state variables for game logic compatibility.
 *              Input is handled by opengl_process_events() in main loop.
 * @windows_compatibility high
 * @author caprado
 */
void processFrameSync(void);

/**
 * @brief Set the streaming active flag
 * @param active 1 to enable streaming mode, 0 for normal VSync mode
 */
void setStreamingActive(uint32_t active);

/**
 * @brief Get current streaming active state
 * @return Current streaming flag value
 */
uint32_t getStreamingActive(void);

/**
 * @category game/update
 * @status complete
 * @original func_001ba310
 * @address 0x001ba310
 * @description Main game subsystem update dispatcher. Calls 6 subsystem update functions.
 *              Only executes when gameStateManagerState is non-zero.
 * @windows_compatibility medium - subsystem functions need individual porting
 * @author caprado
 */
void updateGameSubsystems(void);

#endif // FRAME_UPDATE_H
