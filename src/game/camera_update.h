#ifndef CAMERA_UPDATE_H
#define CAMERA_UPDATE_H

#include <stdint.h>

/**
 * @file camera_update.h
 * @brief Camera state update system
 * @description Handles camera state updates each frame, including copying
 *              camera position/direction data and tracking input state.
 *              Original: func_001a17e0 at address 0x001a17e0
 */

/**
 * @brief Update camera state
 * @description Called each frame to process camera input and update
 *              camera position/direction data.
 * @category game/camera
 * @original func_001a17e0
 */
void updateCameraState(void);

/**
 * @brief Get camera update flag
 * @return 1 if camera state changed this frame, 0 otherwise
 */
uint8_t getCameraUpdateFlag(void);

/**
 * @brief Set camera destination pointer
 * @param dest Pointer to camera destination structure
 */
void setCameraDestination(void* dest);

/**
 * @brief Get camera source data pointer
 * @return Pointer to camera source structure
 */
void* getCameraSourceData(void);

#endif // CAMERA_UPDATE_H
