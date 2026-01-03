#ifndef TEXTURE_PROCESSOR_H
#define TEXTURE_PROCESSOR_H

#include <stdint.h>

/**
 * @category graphics/texture
 * @description Texture processing and loading API
 */

/**
 * @brief Processes texture entries from the texture table
 * @param startIndex Starting index in the texture table
 * @param count Number of texture entries to process
 */
void processTextureEntries(int startIndex, int count);

#endif // TEXTURE_PROCESSOR_H
