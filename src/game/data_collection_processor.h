#ifndef DATA_COLLECTION_PROCESSOR_H
#define DATA_COLLECTION_PROCESSOR_H

/**
 * @file data_collection_processor.h
 * @brief Data collection processing functions
 * @category game/data
 * @author caprado
 */

/**
 * Processes a collection of data entries by iterating through them,
 * retrieving entry information, calculating sizes, and accumulating
 * the total size offset.
 *
 * This function appears to be part of a data structure initialization
 * or scanning routine that walks through entries and computes memory
 * layout information.
 *
 * @note The accumulated size is stored in register s1 for use by caller
 * @note Loop count comes from external context (register s2)
 */
void processDataCollection(void);

#endif // DATA_COLLECTION_PROCESSOR_H
