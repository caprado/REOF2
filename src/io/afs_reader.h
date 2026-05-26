#ifndef AFS_READER_H
#define AFS_READER_H

#include <stdint.h>
#include <stdio.h>

/**
 * @file afs_reader.h
 * @description AFS (Archive File System) reader for Capcom PS2 games.
 *              Reads from raw disc files at runtime — no extraction to disk.
 *
 * AFS Format (verified from disc):
 *   +0x00 (4): Magic "AFS\0" (0x00534641)
 *   +0x04 (4): File count (uint32)
 *   +0x08 (8*N): File table — offset/size pairs (uint32 each)
 *   Data follows at the offsets specified in the table.
 */

#define AFS_MAGIC 0x00534641

typedef struct {
    uint32_t offset;
    uint32_t size;
} AfsEntry;

typedef struct {
    uint32_t fileCount;
    AfsEntry* entries;
    FILE* fileHandle;
    char filePath[256];
    int32_t ownsHandle;  // 1 if we opened the file, 0 if shared from parent
} AfsArchive;

/**
 * @description Open an AFS archive for reading. Does NOT read all data into memory —
 *              only reads the header/file table. Individual files are read on demand.
 * @param path Path to AFS file (e.g. "assets/disc/BIN/01.DAT")
 * @param archive Output struct to populate
 * @return 1 on success, 0 on failure
 */
int32_t afsOpen(const char* path, AfsArchive* archive);

/**
 * @description Read a file entry from an open AFS archive into a caller-provided buffer.
 * @param archive Open AFS archive
 * @param index File index (0 to fileCount-1)
 * @param outBuffer Will be malloc'd and filled with file data. Caller must free().
 * @param outSize Will be set to the file size in bytes
 * @return 1 on success, 0 on failure
 */
int32_t afsReadFile(AfsArchive* archive, uint32_t index, uint8_t** outBuffer, uint32_t* outSize);

/**
 * @description Close an AFS archive and free resources.
 * @param archive Archive to close
 */
void afsClose(AfsArchive* archive);

/**
 * @description Open a nested AFS archive within an already-open AFS archive.
 *              Reads the sub-archive's file table from within the parent's file entry.
 * @param parent Open parent AFS archive
 * @param parentIndex Index of the entry in parent that contains the sub-AFS
 * @param subArchive Output sub-archive struct
 * @return 1 on success, 0 on failure
 */
int32_t afsOpenNested(AfsArchive* parent, uint32_t parentIndex, AfsArchive* subArchive);

#endif // AFS_READER_H
