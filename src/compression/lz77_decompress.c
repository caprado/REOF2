#include "lz77_decompress.h"
#include <stdint.h>

/**
 * @category compression/lz77
 * @status complete
 * @author caprado
 * @original func_001aee20
 * @address 0x001aee20
 * @description LZ77 decompression algorithm for game data. Processes compressed
 *              16-bit data stream using control words with bit flags to determine
 *              literal copies, back-references, or run-length encoding.
 * @windows_compatibility high - Platform-independent algorithm
 */
void decompressLZ77Data(uint16_t* compressedData, uint16_t* outputBuffer) {
    uint16_t* inputPtr = compressedData;
    uint16_t* outputPtr = outputBuffer;

    uint16_t controlWord = 0;  // Current control word being processed
    uint16_t controlBitMask = 0;  // Current bit position in control word

    while (1) {
        // Load new control word if needed (all bits processed)
        if (controlBitMask == 0) {
            controlWord = *inputPtr++;
            controlBitMask = 0x8000;  // Start at MSB
        }

        // Check current control bit
        if (controlWord & controlBitMask) {
            // Compressed data: back-reference or RLE
            uint16_t token = *inputPtr++;

            // Extract length and offset from token
            // Bits 11-14: length (count - 1)
            // Bits 0-10: offset or extended length
            uint32_t length = (token >> 11);  // Top 5 bits
            uint32_t offset = token & 0x7FF;  // Bottom 11 bits

            // If length is 0, next word contains actual length
            if (length == 0) {
                length = *inputPtr++;
            }

            if (offset == 0) {
                // Termination condition: length == 0 and offset == 0
                if (length == 0) {
                    return;  // End of compressed data
                }

                // Run-length encoding: fill with zeros
                for (uint32_t i = 0; i < length; i++) {
                    *outputPtr++ = 0;
                }
            } else {
                // Back-reference: copy from previous output
                // offset is in 16-bit units
                uint16_t* sourcePtr = outputPtr - offset;

                for (uint32_t i = 0; i < length; i++) {
                    *outputPtr++ = *sourcePtr++;
                }
            }

            // Shift to next control bit
            controlBitMask >>= 1;

        } else {
            // Literal data: copy directly
            uint16_t literal = *inputPtr++;
            *outputPtr++ = literal;

            // Shift to next control bit
            controlBitMask >>= 1;
        }
    }
}
