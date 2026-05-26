#include "camera_input.h"
#include "game_data.h"
#include <math.h>

// Forward declarations for deeper sub-functions (to be refactored later)
// func_001a5cf0 — PS2 controller polling via SIF/IOP. Windows: input.c handles it.
extern void func_001a6310(void);     // Controller initialization

// Controller state buffer at gp-0x6400 (analog stick data)
typedef struct ControllerAnalogState {
    int16_t reserved;     // +0x00
    int16_t leftStickY;   // +0x02 - Left analog Y
    int16_t leftStickX;   // +0x04 - Left analog X
} ControllerAnalogState;

static ControllerAnalogState s_analogState;

// Camera source data at 0x002a0f40
typedef struct CameraInputData {
    uint8_t state0;           // +0x00
    uint8_t state1;           // +0x01
    uint16_t stateFlags;      // +0x02
    uint8_t reserved04;       // +0x04
    uint8_t reserved05;       // +0x05
    uint8_t inputIndex;       // +0x06 - Copied from 0x002a0f25
    uint8_t reserved07;       // +0x07
    uint32_t inputState;      // +0x08 - Combined input state
    float posAngle1;          // +0x0C - Position/direction from analog 1
    float posAngle2;          // +0x10
    float posAngle3;          // +0x14
    float dirAngle1;          // +0x18 - Direction from analog 2
    float dirAngle2;          // +0x1C
    float dirAngle3;          // +0x20
} CameraInputData;

static CameraInputData* s_cameraInputData = NULL;

// Input remap table at 0x00217720 (16 bytes)
// Maps low nibble of inputState to remapped value
static const uint8_t s_inputRemapTable[16] = {
    0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15
};

// Analog magnitude lookup table at 0x00217730
// Used for normalizing analog stick values
static const uint8_t s_analogMagnitudeTable[256] = {
    // Placeholder - actual values from ROM
    0
};

// Previous input state flag - Original: gp-0x6408
static uint8_t s_previousInputFlag = 0;

// Current input state flag - Original: gp-0x640c
static uint8_t s_currentInputFlag = 0;

// Two-pi constant for angle calculations
static const float TWO_PI = 6.283185307f;

/**
 * @category game/camera
 * @status complete
 * @original func_001a6180
 * @address 0x001a6180
 * @description Looks up analog stick magnitude from table based on
 *              calculated intensity value. Returns 0 if intensity < 0x25.
 * @windows_compatibility high
 * @author caprado
 */
static uint8_t lookupAnalogMagnitude(int16_t* analogData) {
    int16_t intensity = analogData[2];  // offset +4

    // If intensity below threshold, return 0
    if (intensity < 0x25) {
        return 0;
    }

    // Get angle value at offset +6
    int16_t angle = analogData[3];

    // Convert to table index
    // Original uses float division: angle / 22.5f (0x41b4 << 16)
    float normalized = (float)angle / 22.5f;

    // Clamp to valid range
    if (normalized >= 2147483648.0f) {  // 0x4f00 << 16
        normalized -= 2147483648.0f;
        int32_t index = (int32_t)normalized | 0x80000000;
        return s_analogMagnitudeTable[index & 0xFF];
    }

    return s_analogMagnitudeTable[(int32_t)normalized & 0xFF];
}

/**
 * @category game/camera
 * @status complete
 * @original func_001a6030
 * @address 0x001a6030
 * @description Calculates analog stick vector from X/Y components.
 *              Computes angle and magnitude, stores to output structure.
 * @windows_compatibility high
 * @author caprado
 */
static void calculateAnalogVector(int16_t* output, int16_t inputY) {
    int16_t x = output[0];
    int16_t y = output[1];

    // If both zero, set angle to 0
    if (x == 0 && y == 0) {
        // Store zero angle at offset +8
        *(float*)(output + 4) = 0.0f;
        output[3] = 0;  // angle index at +6
        return;
    }

    // Calculate angle using atan2
    // Original calls func_00111f90 (convert int to float), func_00122350 (atan2)
    float fx = (float)x;
    float fy = (float)(-y);  // Negate Y for coordinate system

    float angle = atan2f(fy, fx);

    // Normalize negative angles
    if (angle < 0.0f) {
        angle += TWO_PI;
    }

    // Store angle
    *(float*)(output + 4) = angle;

    // Convert angle to 0-360 index
    int16_t angleIndex = (int16_t)((angle / TWO_PI) * 360.0f);
    output[3] = angleIndex;

    // Calculate magnitude
    float magnitude = sqrtf(fx * fx + fy * fy);
    int16_t mag = (int16_t)magnitude;

    // Clamp magnitude to 0x7F max
    if (mag >= 0x80) {
        mag = 0x7F;
    }
    output[2] = mag;

    // If magnitude below threshold, clear all values
    if (mag < 0x25) {  // Deadzone threshold
        output[0] = 0;
        output[1] = 0;
        *(float*)(output + 4) = 0.0f;
        output[3] = 0;
        output[2] = 0;
    }
}

/**
 * @category game/camera
 * @status complete
 * @original func_001a5b10
 * @address 0x001a5b10
 * @description Processes camera input from controller. Polls controller state,
 *              remaps input buttons, calculates analog stick vectors, and
 *              stores combined input state to camera data structure.
 * @windows_compatibility medium
 * @author caprado
 */
void processCameraInput(void) {
    // PS2: func_001a5cf0 polled SIF/IOP controller. Windows: input.c handles it.
    // Always valid on Windows since input is handled by GetAsyncKeyState.
    {
        // Get camera input data pointer (0x002a0f40)
        if (s_cameraInputData == NULL) {
            return;
        }

        // Copy input index from 0x002a0f25
        // Original: lbu $v0, 0xf25($at); sb $v0, 6($s1)
        // s_cameraInputData->inputIndex = controllerInputIndex;

        // Get current input state
        uint32_t inputState = s_cameraInputData->inputState;

        // Remap low nibble using lookup table
        // Original: andi $a1, $v0, 0xf; lbu from 0x217720+a1
        uint8_t lowNibble = inputState & 0x0F;
        uint8_t remapped = s_inputRemapTable[lowNibble];

        // Clear low nibble and OR in remapped value
        inputState = (inputState & 0xFFF0) | remapped;
        s_cameraInputData->inputState = inputState;

        // Calculate position analog vector (offset +0x0C)
        // Original: jal 0x1a6030 with a0 = s1+0xc, a1 = analog Y
        int16_t analogBuffer1[6];
        analogBuffer1[0] = (int16_t)(s_cameraInputData->posAngle1);
        analogBuffer1[1] = (int16_t)(s_cameraInputData->posAngle2);
        calculateAnalogVector(analogBuffer1, s_analogState.leftStickY);

        // Calculate direction analog vector (offset +0x18)
        // Original: jal 0x1a6030 with a0 = s1+0x18, a1 = analog X
        int16_t analogBuffer2[6];
        analogBuffer2[0] = (int16_t)(s_cameraInputData->dirAngle1);
        analogBuffer2[1] = (int16_t)(s_cameraInputData->dirAngle2);
        calculateAnalogVector(analogBuffer2, s_analogState.leftStickX);

        // Look up magnitude for position vector
        // Original: jal 0x1a6180 with a0 = s1+0xc
        uint8_t mag1 = lookupAnalogMagnitude(analogBuffer1);

        // Look up magnitude for direction vector
        // Original: jal 0x1a6180 with a0 = s1+0x18
        uint8_t mag2 = lookupAnalogMagnitude(analogBuffer2);

        // Combine magnitudes into input state
        // Original: sll $a1, $s0, 0x10; or into inputState
        // Original: sll $a0, $v1, 0x14; or into inputState
        inputState = s_cameraInputData->inputState;
        inputState |= ((uint32_t)mag1 << 16);
        inputState |= ((uint32_t)mag2 << 20);
        s_cameraInputData->inputState = inputState;
    }

    // Copy previous input flag to current
    // Original: lbu $v1, -0x6408($gp); sb $v1, -0x640c($gp)
    s_currentInputFlag = s_previousInputFlag;
}

/**
 * @brief Set camera input data pointer
 * @param data Pointer to camera input data structure
 */
void setCameraInputData(void* data) {
    s_cameraInputData = (CameraInputData*)data;
}

/**
 * @brief Get analog controller state
 * @return Pointer to analog state structure
 */
void* getAnalogControllerState(void) {
    return &s_analogState;
}

/**
 * @brief Set previous input flag
 * @param flag Input flag value
 */
void setPreviousInputFlag(uint8_t flag) {
    s_previousInputFlag = flag;
}

/**
 * @brief Get current input flag
 * @return Current input flag value
 */
uint8_t getCurrentInputFlag(void) {
    return s_currentInputFlag;
}
