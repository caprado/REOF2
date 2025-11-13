#include <stdint.h>
#include <stdbool.h>

extern int checkThreadAndPollSemaphore(uintptr_t bufferAddr, int value, int size);  // Original: func_00107d30 at 0x107d30

// Global buffer address (original: gp - 0x63b0)
#define GAME_BUFFER_ADDR 0x001F9C50  // Placeholder address, actual value is gp-relative

/**
 * @category game/init
 * @status complete
 * @author caprado
 * @original func_001b07d0
 * @address 0x001b07d0
 * @description Initializes game buffer by calling thread/semaphore check with parameters.
 *              Sets up a buffer at gp-0x63b0 with value 0xff and size 8.
 *              Also contains a secondary entry point at 0x1b07e0 for byte operations.
 * @windows_compatibility medium
 */
int initializeGameBuffer(void) {
    // Original: calls func_00107d30 with (gp-0x63b0, 0xff, 8)
    return checkThreadAndPollSemaphore(GAME_BUFFER_ADDR, 0xff, 8);
}

/**
 * @category game/init
 * @status complete
 * @author caprado
 * @original func_001b07d0 (secondary entry at 0x1b07e0)
 * @address 0x001b07e0
 * @description Secondary entry point: Reads byte at offset 3 from buffer,
 *              uses it as index to write a value back to the buffer.
 * @windows_compatibility high
 */
void writeBufferIndexed(uintptr_t bufferAddr, uint8_t value) {
    // Original PS2 code:
    // a0 = *(uint8_t*)(a0 + 3)  // Read index from offset 3
    // v1 = gp - 0x63b0          // Get buffer base
    // v1 = v1 + a0              // Add index
    // *(uint8_t*)(v1) = a1      // Write value at indexed location

    uint8_t index = *((uint8_t*)(bufferAddr + 3));
    *((uint8_t*)(GAME_BUFFER_ADDR + index)) = value;
}
