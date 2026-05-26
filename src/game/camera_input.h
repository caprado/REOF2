#ifndef CAMERA_INPUT_H
#define CAMERA_INPUT_H

#include <stdint.h>

/**
 * @file camera_input.h
 * @brief Camera input processing system
 * @description Handles controller input processing for camera control,
 *              including analog stick normalization and button remapping.
 *              Original: func_001a5b10 at address 0x001a5b10
 */

/**
 * @brief Process camera input from controller
 * @description Polls controller, processes analog sticks, remaps buttons,
 *              and updates camera input state.
 * @category game/camera
 * @original func_001a5b10
 */
void processCameraInput(void);

/**
 * @brief Set camera input data pointer
 * @param data Pointer to camera input data structure
 */
void setCameraInputData(void* data);

/**
 * @brief Get analog controller state
 * @return Pointer to analog state structure
 */
void* getAnalogControllerState(void);

/**
 * @brief Set previous input flag
 * @param flag Input flag value
 */
void setPreviousInputFlag(uint8_t flag);

/**
 * @brief Get current input flag
 * @return Current input flag value
 */
uint8_t getCurrentInputFlag(void);

#endif // CAMERA_INPUT_H
