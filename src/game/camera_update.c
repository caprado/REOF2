#include "camera_update.h"
#include "camera_input.h"
#include "game_data.h"

// Camera source buffer at 0x002a0f40 (size: ~0x80 bytes)
// Contains: state bytes, floats for position/direction vectors
typedef struct CameraSourceData {
    uint8_t state0;           // +0x00
    uint8_t state1;           // +0x01
    uint16_t stateFlags;      // +0x02 - 0 or 0x8000 means no update
    float unknown04;          // +0x04
    uint32_t inputState;      // +0x08 - button input state
    float posX;               // +0x0C - camera position X
    float posY;               // +0x10 - camera position Y
    float posZ;               // +0x14 - camera position Z
    float dirX;               // +0x18 - camera direction X
    float dirY;               // +0x1C - camera direction Y
    float dirZ;               // +0x20 - camera direction Z
} CameraSourceData;

static CameraSourceData s_cameraSource;

// Camera destination structure (pointed to by gp-0x6430)
// Receives copied camera data during update
typedef struct CameraDestData {
    uint8_t state0;           // +0x00
    uint8_t state1;           // +0x01
    uint16_t stateFlags;      // +0x02
    float unknown04;          // +0x04
    uint32_t currentInput;    // +0x08 - current frame input
    uint32_t previousInput;   // +0x0C - previous frame input
    uint32_t inputPressed;    // +0x10 - buttons just pressed (rising edge)
    uint32_t inputReleased;   // +0x14 - buttons just released (falling edge)
    uint32_t inputChanged;    // +0x18 - any input state change
    float posX;               // +0x1C - camera position X
    float posY;               // +0x20 - camera position Y
    float posZ;               // +0x24 - camera position Z
    float dirX;               // +0x28 - camera direction X
    float dirY;               // +0x2C - camera direction Y
    float dirZ;               // +0x30 - camera direction Z
    uint32_t inputChangeCopy; // +0x34 - copy of inputChanged
    uint8_t holdTimers[48];   // +0x38 - hold timers for 24 buttons (2 bytes each)
} CameraDestData;

static CameraDestData* s_cameraDest = NULL;

// Camera update flag - Original: gp-0x643c
// Set to 1 if camera state changed (stateFlags non-zero and not 0x8000)
static uint8_t s_cameraUpdateFlag = 0;

// Button mask table at 0x0022a2d0 - 24 button masks for input tracking
static const uint32_t s_buttonMasks[24] = {
    0x00000001, 0x00000002, 0x00000004, 0x00000008,
    0x00000010, 0x00000020, 0x00000040, 0x00000080,
    0x00000100, 0x00000200, 0x00000400, 0x00000800,
    0x00001000, 0x00002000, 0x00004000, 0x00008000,
    0x00010000, 0x00020000, 0x00040000, 0x00080000,
    0x00100000, 0x00200000, 0x00400000, 0x00800000
};

/**
 * @category game/camera
 * @status complete
 * @original func_001a18c0
 * @address 0x001a18c0
 * @description Updates input button state tracking. Computes pressed/released
 *              edges from current and previous input states.
 * @windows_compatibility high
 * @author caprado
 */
static void updateInputButtonState(CameraDestData* dest, uint32_t newInput) {
    // Store previous input, set new input
    dest->previousInput = dest->currentInput;
    dest->currentInput = newInput;

    // Calculate pressed buttons (rising edge): new & ~old = new & (new ^ old)
    uint32_t changed = dest->currentInput ^ dest->previousInput;
    dest->inputPressed = dest->currentInput & changed;

    // Calculate released buttons (falling edge): old & ~new = old & (new ^ old)
    dest->inputReleased = dest->previousInput & changed;

    // Combined change mask
    dest->inputChanged = dest->inputPressed | dest->inputReleased;
}

/**
 * @category game/camera
 * @status complete
 * @original func_001a1910
 * @address 0x001a1910
 * @description Updates hold timers for each button. Increments timer while
 *              button is held (max 255), resets to 0 when released.
 * @windows_compatibility high
 * @author caprado
 */
static void updateInputHoldTimers(CameraDestData* dest) {
    for (int i = 0; i < 24; i++) {
        uint32_t mask = s_buttonMasks[i];

        if (dest->currentInput & mask) {
            // Button is held - increment timer (max 255)
            uint8_t* timer = &dest->holdTimers[i * 2];
            if (*timer < 255) {
                (*timer)++;
            }
        } else {
            // Button released - reset timer
            dest->holdTimers[i * 2] = 0;
            dest->holdTimers[i * 2 + 1] = 0;
        }
    }
}

/**
 * @category game/camera
 * @status complete
 * @original func_001a17e0
 * @address 0x001a17e0
 * @description Updates camera state each frame. Processes camera input,
 *              copies camera position/direction from source buffer to
 *              destination, and updates input tracking state.
 * @windows_compatibility high
 * @author caprado
 */
void updateCameraState(void) {
    // Process camera input from controller
    // Original: jal 0x1a5b10
    processCameraInput();

    // Clear camera update flag
    // Original: sb $zero, -0x643c($gp)
    s_cameraUpdateFlag = 0;

    // Get destination pointer (gp-0x6430)
    // For now, use our static structure
    if (s_cameraDest == NULL) {
        return;
    }

    // Copy state bytes from source to destination
    // Original: copies from 0x2a0f40 to pointer at gp-0x6430
    s_cameraDest->state0 = s_cameraSource.state0;
    s_cameraDest->state1 = s_cameraSource.state1;
    s_cameraDest->stateFlags = s_cameraSource.stateFlags;
    s_cameraDest->unknown04 = s_cameraSource.unknown04;

    // Check if camera state changed
    // Set flag if stateFlags != 0 and stateFlags != 0x8000
    if (s_cameraSource.stateFlags != 0 && s_cameraSource.stateFlags != 0x8000) {
        s_cameraUpdateFlag++;
    }

    // Copy camera position (source +0x0C to dest +0x1C)
    s_cameraDest->posX = s_cameraSource.posX;
    s_cameraDest->posY = s_cameraSource.posY;
    s_cameraDest->posZ = s_cameraSource.posZ;

    // Copy camera direction (source +0x18 to dest +0x28)
    s_cameraDest->dirX = s_cameraSource.dirX;
    s_cameraDest->dirY = s_cameraSource.dirY;
    s_cameraDest->dirZ = s_cameraSource.dirZ;

    // Update input button state tracking
    // Original: jal 0x1a18c0 with a0=dest, a1=source.inputState
    updateInputButtonState(s_cameraDest, s_cameraSource.inputState);

    // Update button hold timers
    // Original: jal 0x1a1910 with a0=dest
    updateInputHoldTimers(s_cameraDest);

    // Copy inputChanged to offset +0x34
    // Original: lw $v1, 0x10($a0); sw $v1, 0x34($a0)
    s_cameraDest->inputChangeCopy = s_cameraDest->inputPressed;
}

/**
 * @brief Get camera update flag
 * @return 1 if camera state changed this frame, 0 otherwise
 */
uint8_t getCameraUpdateFlag(void) {
    return s_cameraUpdateFlag;
}

/**
 * @brief Set camera destination pointer
 * @param dest Pointer to camera destination structure
 */
void setCameraDestination(void* dest) {
    s_cameraDest = (CameraDestData*)dest;
}

/**
 * @brief Get camera source data pointer
 * @return Pointer to camera source structure
 */
void* getCameraSourceData(void) {
    return &s_cameraSource;
}
