#include "tim2_decoder.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int32_t decodeTim2(const uint8_t* tim2Data, uint32_t dataSize, DecodedTexture* outTexture) {
    uint32_t magic;
    uint16_t picCount;
    uint32_t clutSize, imgSize;
    uint16_t hdrSize, clutColors;
    uint16_t width, height;
    uint32_t imgStart, clutStart;
    uint32_t i;
    uint8_t pixelIdx;
    uint8_t r, g, b, a;

    if (tim2Data == NULL || outTexture == NULL || dataSize < 0x40) {
        return 0;
    }

    memset(outTexture, 0, sizeof(DecodedTexture));

    // Verify magic
    memcpy(&magic, tim2Data, 4);
    if (magic != TIM2_MAGIC) {
        fprintf(stderr, "[TIM2] Invalid magic: 0x%08x\n", magic);
        return 0;
    }

    picCount = *(uint16_t*)(tim2Data + 6);
    if (picCount < 1) {
        fprintf(stderr, "[TIM2] No pictures in file\n");
        return 0;
    }

    // Read picture header at offset 0x10
    clutSize = *(uint32_t*)(tim2Data + 0x14);
    imgSize = *(uint32_t*)(tim2Data + 0x18);
    hdrSize = *(uint16_t*)(tim2Data + 0x1C);
    clutColors = *(uint16_t*)(tim2Data + 0x1E);
    width = *(uint16_t*)(tim2Data + 0x24);
    height = *(uint16_t*)(tim2Data + 0x26);

    imgStart = 0x10 + hdrSize;
    clutStart = imgStart + imgSize;

    if (clutStart + clutSize > dataSize) {
        fprintf(stderr, "[TIM2] Data truncated: need %u, have %u\n",
                clutStart + clutSize, dataSize);
        return 0;
    }

    if (width == 0 || height == 0 || width > 2048 || height > 2048) {
        fprintf(stderr, "[TIM2] Invalid dimensions: %dx%d\n", width, height);
        return 0;
    }

    // Allocate RGBA output
    outTexture->width = width;
    outTexture->height = height;
    outTexture->rgba = (uint8_t*)malloc(width * height * 4);
    if (outTexture->rgba == NULL) {
        return 0;
    }

    // Decode: indexed pixels -> CLUT lookup -> RGBA
    for (i = 0; i < (uint32_t)(width * height); i++) {
        if (i < imgSize) {
            pixelIdx = tim2Data[imgStart + i];
        } else {
            pixelIdx = 0;
        }

        if (pixelIdx < clutColors && (clutStart + pixelIdx * 4 + 3) < dataSize) {
            r = tim2Data[clutStart + pixelIdx * 4 + 0];
            g = tim2Data[clutStart + pixelIdx * 4 + 1];
            b = tim2Data[clutStart + pixelIdx * 4 + 2];
            a = tim2Data[clutStart + pixelIdx * 4 + 3];
            // PS2 alpha: 0-128 range (0x80 = fully opaque), double it for 0-255
            a = (a >= 128) ? 255 : (a * 2);
        } else {
            r = g = b = a = 0;
        }

        outTexture->rgba[i * 4 + 0] = r;
        outTexture->rgba[i * 4 + 1] = g;
        outTexture->rgba[i * 4 + 2] = b;
        outTexture->rgba[i * 4 + 3] = a;
    }

    printf("[TIM2] Decoded %dx%d texture (%d colors)\n", width, height, clutColors);

    return 1;
}

void freeDecodedTexture(DecodedTexture* texture) {
    if (texture != NULL && texture->rgba != NULL) {
        free(texture->rgba);
        texture->rgba = NULL;
    }
}
