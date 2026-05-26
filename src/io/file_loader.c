#include "file_loader.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static const char* s_discBasePath = "assets/disc/";

const char* getDiscBasePath(void) {
    return s_discBasePath;
}

/**
 * @category io/filesystem
 * @status complete
 * @original func_001a8dd0
 * @address 0x001a8dd0
 * @description Loads a BIN/*.DAT file, parses MWo3 header, reads both data sections.
 *              Replaces PS2 CRI ADXF middleware (ADXF_Open, ADXF_ReadSj32, ADXF_Stop).
 *
 * Original PS2 flow:
 *   func_0010ac68 — prepare file path
 *   func_00128d88 — ADXF read request loop
 *   func_001298c8 — validate sector count
 *   func_00129460 — ADXF stop
 *   func_00129a08 — poll until status == 3
 *   func_00129010 — cleanup
 *
 * Windows replacement: fopen/fread/fclose
 *
 * @param slot File slot index (0-9)
 * @param outFile Output struct with parsed header and data pointers
 * @return 1 on success, 0 on failure
 * @windows_compatibility high
 * @author caprado
 */
int32_t loadGameFile(int32_t slot, LoadedFile* outFile) {
    char path[256];
    FILE* fp;
    size_t bytesRead;

    if (outFile == NULL) {
        return 0;
    }

    memset(outFile, 0, sizeof(LoadedFile));

    snprintf(path, sizeof(path), "%sBIN/%d.DAT", s_discBasePath, slot);

    fp = fopen(path, "rb");
    if (fp == NULL) {
        fprintf(stderr, "[FileLoader] Failed to open: %s\n", path);
        return 0;
    }

    // Read MWo3 header (64 bytes)
    bytesRead = fread(&outFile->header, 1, MWO3_HEADER_SIZE, fp);
    if (bytesRead != MWO3_HEADER_SIZE) {
        fprintf(stderr, "[FileLoader] Failed to read header from: %s\n", path);
        fclose(fp);
        return 0;
    }

    // Verify magic
    if (outFile->header.magic != MWO3_MAGIC) {
        fprintf(stderr, "[FileLoader] Invalid MWo3 magic in: %s (got 0x%08x)\n",
                path, outFile->header.magic);
        fclose(fp);
        return 0;
    }

    printf("[FileLoader] Loading %s (id=%d, name=%s, s1=0x%x, s2=0x%x)\n",
           path, outFile->header.fileId, outFile->header.filename,
           outFile->header.section1Size, outFile->header.section2Size);
    fflush(stdout);

    // Allocate and read section 1
    if (outFile->header.section1Size > 0) {
        outFile->section1Data = (uint8_t*)malloc(outFile->header.section1Size);
        if (outFile->section1Data == NULL) {
            fprintf(stderr, "[FileLoader] Failed to allocate %u bytes for section 1\n",
                    outFile->header.section1Size);
            fclose(fp);
            return 0;
        }

        bytesRead = fread(outFile->section1Data, 1, outFile->header.section1Size, fp);
        if (bytesRead != outFile->header.section1Size) {
            fprintf(stderr, "[FileLoader] Short read on section 1: got %zu, expected %u\n",
                    bytesRead, outFile->header.section1Size);
            free(outFile->section1Data);
            outFile->section1Data = NULL;
            fclose(fp);
            return 0;
        }
    }

    // Allocate and read section 2
    if (outFile->header.section2Size > 0) {
        outFile->section2Data = (uint8_t*)malloc(outFile->header.section2Size);
        if (outFile->section2Data == NULL) {
            fprintf(stderr, "[FileLoader] Failed to allocate %u bytes for section 2\n",
                    outFile->header.section2Size);
            free(outFile->section1Data);
            outFile->section1Data = NULL;
            fclose(fp);
            return 0;
        }

        bytesRead = fread(outFile->section2Data, 1, outFile->header.section2Size, fp);
        if (bytesRead != outFile->header.section2Size) {
            fprintf(stderr, "[FileLoader] Short read on section 2: got %zu, expected %u\n",
                    bytesRead, outFile->header.section2Size);
            free(outFile->section1Data);
            free(outFile->section2Data);
            outFile->section1Data = NULL;
            outFile->section2Data = NULL;
            fclose(fp);
            return 0;
        }
    }

    fclose(fp);

    printf("[FileLoader] Loaded %s successfully (%u + %u bytes)\n",
           outFile->header.filename,
           outFile->header.section1Size, outFile->header.section2Size);

    return 1;
}

void freeLoadedFile(LoadedFile* file) {
    if (file == NULL) {
        return;
    }
    if (file->section1Data != NULL) {
        free(file->section1Data);
        file->section1Data = NULL;
    }
    if (file->section2Data != NULL) {
        free(file->section2Data);
        file->section2Data = NULL;
    }
    memset(&file->header, 0, sizeof(MWo3Header));
}
