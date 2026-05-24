#include "afs_reader.h"
#include <stdlib.h>
#include <string.h>

int32_t afsOpen(const char* path, AfsArchive* archive) {
    uint32_t magic;
    size_t tableSize;

    if (archive == NULL || path == NULL) {
        return 0;
    }

    memset(archive, 0, sizeof(AfsArchive));
    strncpy(archive->filePath, path, sizeof(archive->filePath) - 1);

    archive->fileHandle = fopen(path, "rb");
    if (archive->fileHandle == NULL) {
        return 0;
    }

    // Read and verify magic
    if (fread(&magic, 4, 1, archive->fileHandle) != 1 || magic != AFS_MAGIC) {
        fclose(archive->fileHandle);
        archive->fileHandle = NULL;
        return 0;
    }

    // Read file count
    if (fread(&archive->fileCount, 4, 1, archive->fileHandle) != 1) {
        fclose(archive->fileHandle);
        archive->fileHandle = NULL;
        return 0;
    }

    // Read file table
    tableSize = archive->fileCount * sizeof(AfsEntry);
    archive->entries = (AfsEntry*)malloc(tableSize);
    if (archive->entries == NULL) {
        fclose(archive->fileHandle);
        archive->fileHandle = NULL;
        return 0;
    }

    if (fread(archive->entries, sizeof(AfsEntry), archive->fileCount, archive->fileHandle) != archive->fileCount) {
        free(archive->entries);
        archive->entries = NULL;
        fclose(archive->fileHandle);
        archive->fileHandle = NULL;
        return 0;
    }

    archive->ownsHandle = 1;
    return 1;
}

int32_t afsReadFile(AfsArchive* archive, uint32_t index, uint8_t** outBuffer, uint32_t* outSize) {
    AfsEntry* entry;

    if (archive == NULL || archive->fileHandle == NULL || index >= archive->fileCount) {
        return 0;
    }

    entry = &archive->entries[index];
    *outSize = entry->size;

    *outBuffer = (uint8_t*)malloc(entry->size);
    if (*outBuffer == NULL) {
        return 0;
    }

    if (fseek(archive->fileHandle, entry->offset, SEEK_SET) != 0) {
        free(*outBuffer);
        *outBuffer = NULL;
        return 0;
    }

    if (fread(*outBuffer, 1, entry->size, archive->fileHandle) != entry->size) {
        free(*outBuffer);
        *outBuffer = NULL;
        return 0;
    }

    return 1;
}

int32_t afsOpenNested(AfsArchive* parent, uint32_t parentIndex, AfsArchive* subArchive) {
    uint32_t magic;
    uint32_t baseOffset;
    size_t tableSize;

    if (parent == NULL || parent->fileHandle == NULL || subArchive == NULL) {
        return 0;
    }
    if (parentIndex >= parent->fileCount) {
        return 0;
    }

    memset(subArchive, 0, sizeof(AfsArchive));
    baseOffset = parent->entries[parentIndex].offset;

    // Seek to the sub-AFS within the parent file
    if (fseek(parent->fileHandle, baseOffset, SEEK_SET) != 0) {
        return 0;
    }

    // Verify sub-AFS magic
    if (fread(&magic, 4, 1, parent->fileHandle) != 1 || magic != AFS_MAGIC) {
        return 0;
    }

    if (fread(&subArchive->fileCount, 4, 1, parent->fileHandle) != 1) {
        return 0;
    }

    // Read file table
    tableSize = subArchive->fileCount * sizeof(AfsEntry);
    subArchive->entries = (AfsEntry*)malloc(tableSize);
    if (subArchive->entries == NULL) {
        return 0;
    }

    if (fread(subArchive->entries, sizeof(AfsEntry), subArchive->fileCount, parent->fileHandle) != subArchive->fileCount) {
        free(subArchive->entries);
        subArchive->entries = NULL;
        return 0;
    }

    // Adjust offsets: sub-AFS offsets are relative to the sub-AFS start
    // We need to make them absolute for reading from the parent file
    for (uint32_t i = 0; i < subArchive->fileCount; i++) {
        subArchive->entries[i].offset += baseOffset;
    }

    // Share the parent's file handle (don't close it independently)
    subArchive->fileHandle = parent->fileHandle;
    subArchive->ownsHandle = 0;
    strncpy(subArchive->filePath, parent->filePath, sizeof(subArchive->filePath) - 1);

    return 1;
}

void afsClose(AfsArchive* archive) {
    if (archive == NULL) {
        return;
    }
    if (archive->entries != NULL) {
        free(archive->entries);
        archive->entries = NULL;
    }
    if (archive->fileHandle != NULL && archive->ownsHandle) {
        fclose(archive->fileHandle);
    }
    archive->fileHandle = NULL;
    archive->fileCount = 0;
}
