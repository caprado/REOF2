#ifndef LZ77_DECOMPRESS_H
#define LZ77_DECOMPRESS_H

#include <stdint.h>

/**
 * @file lz77_decompress.h
 * @brief LZ77 decompression for game data
 */

/**
 * @brief Decompress LZ77-compressed data
 * @param compressedData Pointer to compressed 16-bit data stream
 * @param outputBuffer Pointer to output buffer for decompressed data
 * @description Decompresses data using LZ77 algorithm with 16-bit control words.
 *              Control word format:
 *              - Bit 15 (0x8000): Flag indicating compression type
 *              - Bits 11-14: Length/count field
 *              - Bits 0-10: Offset or literal data
 *
 *              Algorithm processes bit flags sequentially, either:
 *              - Copying literal values directly
 *              - Copying from previous output (back-reference)
 *              - Run-length encoding (zero fills)
 * @original func_001aee20 at 0x001aee20
 */
void decompressLZ77Data(uint16_t* compressedData, uint16_t* outputBuffer);

#endif // LZ77_DECOMPRESS_H
