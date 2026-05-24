#ifndef TIM2_DECODER_H
#define TIM2_DECODER_H

#include <stdint.h>

/**
 * @file tim2_decoder.h
 * @description PS2 TIM2 texture decoder. Converts TIM2 images to RGBA8888
 *              in memory at runtime — no files written to disk.
 *
 * TIM2 Format (verified from FONT8_8.TM2):
 *   +0x00 (4): Magic "TIM2"
 *   +0x04 (1): Version (4)
 *   +0x05 (1): Alignment
 *   +0x06 (2): Picture count
 *   +0x08 (8): Reserved
 *   +0x10: Picture header (48 bytes per picture)
 *     +0x00 (4): Total size
 *     +0x04 (4): CLUT data size
 *     +0x08 (4): Image data size
 *     +0x0C (2): Header size
 *     +0x0E (2): CLUT color count
 *     +0x10 (1): Picture format
 *     +0x11 (1): Mipmap count
 *     +0x12 (1): CLUT type
 *     +0x13 (1): Image type
 *     +0x14 (2): Width
 *     +0x16 (2): Height
 *   After header: Image data (indexed pixels)
 *   After image: CLUT data (RGBA32 palette)
 */

#define TIM2_MAGIC 0x324D4954  // "TIM2" in little-endian

typedef struct {
    uint16_t width;
    uint16_t height;
    uint8_t* rgba;      // RGBA8888 pixel data (width * height * 4 bytes, caller must free)
} DecodedTexture;

/**
 * @description Decode a TIM2 texture from raw data buffer to RGBA8888.
 *              Handles 8-bit indexed images with RGBA32 CLUT.
 * @param tim2Data Raw TIM2 file data
 * @param dataSize Size of the data in bytes
 * @param outTexture Output decoded texture
 * @return 1 on success, 0 on failure
 */
int32_t decodeTim2(const uint8_t* tim2Data, uint32_t dataSize, DecodedTexture* outTexture);

/**
 * @description Free decoded texture data.
 */
void freeDecodedTexture(DecodedTexture* texture);

#endif // TIM2_DECODER_H
