/**
 * System entry points and initialization functions
 * Main bootstrap code for PS2 to Windows port
 */

#include <stdint.h>
#include <stdbool.h>

// Forward declarations for functions defined in other modules
extern void initialize_hardware_registers(void);  // From hardware.c
extern int waitSystemSemaphore(int skipChecks);   // From sync/semaphore.c
extern int checkInterruptStatus(void);  // Original: func_0011d378 at 0x11d378
extern int cleanupSemaphores(void);     // Original: func_0011d390 at 0x11d390

/**
 * @category core/init
 * @status complete
 * @author caprado
 * @original func_00111f90
 * @address 0x00111f90
 * @description System initialization function that validates initialization mode parameter,
 *              performs conditional setup based on mode value, and executes hardware initialization.
 *              Handles special cases including zero mode, negative values, and magic constants.
 * @windows_compatibility high
 */
int initialize_system(int32_t initMode) {
    int32_t mode = 3;           // Default mode value
    int32_t isNegative;         // Sign bit of initMode
    int32_t delayCounter = 0x3C; // 60 decimal - delay loop counter

    // Extract sign bit (check if negative)
    isNegative = (uint32_t)initMode >> 31;

    // Special case: if initMode is 0, set mode to 2 and skip to initialization
    if (initMode == 0) {
        mode = 2;
        initialize_hardware_registers();  // Original: func_00111678 at 0x1115a0
        return mode;
    }

    // Special case: check for magic value 0x80000000 (most negative int32)
    if (initMode == (int32_t)0x80000000) {
        initialize_hardware_registers();
        return mode;
    }

    // If initMode is negative (sign bit set), perform delay loop
    if (isNegative) {
        int32_t absValue = -initMode;  // Get absolute value

        // Check if absValue is within valid range (not 0xFFFFFFFF or greater)
        if (absValue > 0xFFFFFFFF) {
            // Out of range - just call init and return
            initialize_hardware_registers();
            return mode;
        }

        // Delay loop: count down from 60 to 0
        // This appears to be a timing delay mechanism
        while (delayCounter > 0) {
            delayCounter--;
        }
    }

    // Perform the hardware initialization
    initialize_hardware_registers();
    return mode;
}

/**
 * @category core/entry
 * @status complete
 * @author caprado
 * @original func_00100230
 * @address 0x00100230
 * @description System entry point that initializes the system and returns a status code
 *              indicating success (1) or failure (0). This appears to be a bootstrap function
 *              called early in the program lifecycle.
 * @windows_compatibility high
 */
int system_entry_point(void) {
    int result;

    // Call system initialization function with default mode (0)
    // The original func_00100230 doesn't pass a parameter, so a0 would be uninitialized
    // We'll use 0 as a safe default which sets mode to 2
    result = initialize_system(0);  // Original: func_00111f90 at 0x111f90

    // Return boolean result: 1 if initialization succeeded (result > 0), 0 otherwise
    // Original MIPS: sltu $v0, $zero, $v0 (set if 0 < v0)
    return (result > 0) ? 1 : 0;
}

// Global state variables for extended initialization
static uint32_t g_savedState = 0;      // Backup of previous global state
static uint32_t g_globalState = 0;     // Current global state (0x0024b700)
static uint32_t g_globalPointer = 0;   // Global pointer value (0x0024b704)

/**
 * @category core/init
 * @status complete
 * @author caprado
 * @original func_00100250
 * @address 0x00100250
 * @description Extended initialization function that performs additional setup steps,
 *              manages global state, and calls subsystem initialization functions.
 *              This appears to be a secondary entry point called after the primary initialization.
 * @windows_compatibility high
 */
void extended_initialization(uint32_t stateValue, uint32_t pointerValue) {
    int result;

    // Call first initialization function with parameter 1
    result = waitSystemSemaphore(1);  // Original: func_00100e38 at 0x100d98

    // If result is zero, perform first initialization path
    if (result == 0) {
        checkInterruptStatus();  // Original: func_0011d378 at 0x11d378

        // Backup current global state
        g_savedState = g_globalState;

        // Update global state with new values
        g_globalState = stateValue;
        g_globalPointer = pointerValue;

        // Call second initialization function
        result = cleanupSemaphores();  // Original: func_0011d390 at 0x11d390

        // If second result is non-zero, we continue (already at return)
        if (result != 0) {
            // Success path - continue
        }
    }

    // Function completes - both paths lead here
}
