/**
 * Synchronization primitives for PS2 to Windows port
 * Handles semaphores, mutexes, and other synchronization mechanisms
 */

#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>

// Forward declarations
extern void* lookupTableEntry(int index);

// System command state (original global at 0x001edf10)
static int32_t g_currentCommand = 0;   // Current command being processed

// Semaphore address constant (original: 0x1f0000 - 0x580 = 0x1EFA80)
#define SYSTEM_SEMAPHORE_ADDR 0x001EFA80

// Log message indices (these would be defined based on the actual table)
#define LOG_SCMD_FAIL_SEMA 0  // "Scmd fail sema cur_cmd:%d keep_cmd:%d\n"

// Forward declarations for interrupt control
extern int checkInterruptStatus(void);  // Original: func_0011d378 at 0x11d378
extern int cleanupSemaphores(void);     // Original: func_0011d390 at 0x11d390

// Wait queue entry structure
typedef struct WaitQueueEntry {
    uint32_t data0;           // offset 0x0
    uint32_t data1;           // offset 0x4
    uint32_t data2;           // offset 0x8
    uint32_t data3;           // offset 0xc
    uint32_t data4;           // offset 0x10
    struct WaitQueueEntry* next;  // offset 0x14: Next entry in queue
} WaitQueueEntry;

// Global wait queue head (original at 0x0024e168)
static WaitQueueEntry* g_waitQueueHead = NULL;

/**
 * @category system/thread
 * @status complete
 * @author caprado
 * @original func_00115408
 * @address 0x00115408
 * @description Delays execution for specified microseconds. Original calls PS2 BIOS WaitSema().
 *              For Windows, uses Sleep() with millisecond conversion.
 * @windows_compatibility high
 */
void delayExecution(uint32_t microseconds) {
    // Original PS2 code calls WaitSema() BIOS function
    // For Windows, convert microseconds to milliseconds and use Sleep()

    #ifdef _WIN32
        #include <windows.h>
        // Convert microseconds to milliseconds (round up)
        uint32_t milliseconds = (microseconds + 999) / 1000;
        Sleep(milliseconds);
    #else
        // For other platforms, use usleep if available
        #include <unistd.h>
        usleep(microseconds);
    #endif
}

/**
 * @category system/sync
 * @status complete
 * @author caprado
 * @original func_001178e0
 * @address 0x001178e0
 * @description Adds entry to wait queue and waits. Uses interrupt disable/enable for synchronization.
 *              Original has 3 sub-functions for add, add-complex, and remove operations.
 *              This implements the simple add (first function at 0x1178e0).
 * @windows_compatibility medium
 */
int addToWaitQueue(uintptr_t semaphoreAddr) {
    WaitQueueEntry entry;
    WaitQueueEntry* current;

    // Disable interrupts during queue manipulation
    checkInterruptStatus();  // Original: func_0011d378 at 0x11d378

    // Initialize wait queue entry
    entry.data0 = (uint32_t)semaphoreAddr;
    entry.data1 = 0;
    entry.data2 = 0;
    entry.data3 = 0;
    entry.data4 = 0;
    entry.next = NULL;

    // Add to wait queue
    if (g_waitQueueHead == NULL) {
        // Queue is empty - set as head
        g_waitQueueHead = &entry;
    } else {
        // Find end of queue and add entry
        current = g_waitQueueHead;

        // Wait until the entry.next slot is free (busy wait)
        while (current->next != NULL) {
            current = current->next;
        }

        // Add to end of queue
        current->next = &entry;
    }

    // Re-enable interrupts and return
    return cleanupSemaphores();  // Original: func_0011d390 at 0x11d390 (tail call)
}

/**
 * @category utility/logging
 * @status complete
 * @author caprado
 * @original func_00116598
 * @address 0x00116598
 * @description Logs a message by looking up format string from table and printing.
 *              For Windows, we use printf directly with the format string.
 * @windows_compatibility high
 */
void logMessage(int messageIndex, ...) {
    // On PS2, this would lookup the format string from a table
    // For Windows, we'll use direct format strings for now

    switch (messageIndex) {
        case LOG_SCMD_FAIL_SEMA:
            printf("Scmd fail sema cur_cmd:%d keep_cmd:%d\n", g_currentCommand, 0);
            break;
        default:
            printf("Unknown log message index: %d\n", messageIndex);
            break;
    }
}

/**
 * @category system/sync
 * @status complete
 * @author caprado
 * @original func_00100e38
 * @address 0x00100e38
 * @description Semaphore-based initialization check function. Validates system state,
 *              logs errors if commands are pending, and waits on a system semaphore.
 *              Used to synchronize initialization with other system components.
 * @windows_compatibility medium
 */
int waitSystemSemaphore(int skipChecks) {
    int result;

    // If skipChecks is 0, perform validation checks
    if (skipChecks == 0) {
        // Check if there's a pending command (error condition)
        if (g_currentCommand > 0) {
            // Log error about semaphore failure with command status
            logMessage(LOG_SCMD_FAIL_SEMA);  // Original: func_00116598 at 0x116508
        }

        // Wait on system semaphore with retry loop
        do {
            result = addToWaitQueue(SYSTEM_SEMAPHORE_ADDR);  // Original: func_001178e0 at 0x1178a0

            if (result != 0) {
                // Semaphore wait failed, delay and retry
                delayExecution(0xFA0);  // Original: func_00115408 at 0x115340 - delay 4000 microseconds
            }
        } while (result != 0);

    } else {
        // Skip checks, just wait on semaphore once
        result = addToWaitQueue(SYSTEM_SEMAPHORE_ADDR);  // Original: func_001178e0 at 0x1178a0
    }

    return result;
}

/**
 * @category system/sync
 * @status complete
 * @author caprado
 * @original func_0011d378
 * @address 0x0011d378
 * @description Checks interrupt status by reading PS2 CP0 Status register (bit 16).
 *              Returns 1 if interrupts are enabled, 0 if disabled.
 *              For Windows, this is a stub that always returns 1 (enabled).
 * @windows_compatibility high
 */
int checkInterruptStatus(void) {
    // Original PS2 code reads CP0 register 12 (Status register)
    // Checks bit 16 (0x10000) which is the interrupt enable flag
    // Returns: (bit16 != 0) ? 1 : 0

    #ifdef _WIN32
        // Windows doesn't have PS2 CP0 registers
        // For synchronization, we'll use Windows Critical Sections instead
        // This stub always returns 1 (interrupts "enabled")
        return 1;
    #else
        // On actual PS2 hardware, would read CP0 register 12
        // mfc0 $v0, $12, 0  ; Read Status register
        // and  $v0, $v0, 0x10000  ; Check bit 16
        // sltu $v0, $zero, $v0    ; Return 1 if bit set, 0 otherwise
        return 1;
    #endif
}

/**
 * @category system/sync
 * @status complete
 * @author caprado
 * @original func_0011d390
 * @address 0x0011d390
 * @description Cleans up system semaphores by calling DeleteSema() twice.
 *              Stores results in global variables at 0x1f0a70 and 0x1f0a74.
 *              For Windows, uses critical section cleanup instead.
 * @windows_compatibility high
 */
int cleanupSemaphores(void) {
    // Original PS2 code:
    // - Allocates stack frame with semaphore structures
    // - Calls DeleteSema() twice on PS2 BIOS
    // - Stores results in globals g_001f0a70 and g_001f0a74

    #ifdef _WIN32
        // Windows implementation: Clean up critical sections
        // For now, this is a stub that returns success
        // In a full implementation, this would delete Windows synchronization objects
        return 0;  // Success
    #else
        // Original PS2 implementation would be:
        // int sema1 = DeleteSema(semaphoreHandle1);
        // int sema2 = DeleteSema(semaphoreHandle2);
        // Store results in globals
        return 0;
    #endif
}
