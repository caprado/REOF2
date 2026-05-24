#ifndef FILE_LOADER_H
#define FILE_LOADER_H

#include <stdint.h>

/**
 * @file file_loader.h
 * @description Windows file loader for PS2 game data files.
 *              Replaces CRI ADXF middleware (func_001a8dd0) with fopen/fread.
 *              Handles MWo3 container format used by BIN/*.DAT files.
 *
 * MWo3 Format (verified from disc files):
 *   +0x00 (4): Magic "MWo3" (0x336f574d)
 *   +0x04 (4): File ID (1-10)
 *   +0x08 (4): PS2 load address
 *   +0x0C (4): Section 1 size (code or primary data)
 *   +0x10 (4): Section 2 size (data or secondary data)
 *   +0x14 (4): PS2 memory field
 *   +0x18 (4): PS2 memory field
 *   +0x1C (4): PS2 memory field
 *   +0x20 (32): Filename (null-terminated)
 *   +0x40: Section 1 data
 *   +0x40+s1size: Section 2 data
 */

#define MWO3_MAGIC 0x336f574d
#define MWO3_HEADER_SIZE 0x40

typedef struct {
    uint32_t magic;
    uint32_t fileId;
    uint32_t loadAddress;
    uint32_t section1Size;
    uint32_t section2Size;
    uint32_t field14;
    uint32_t field18;
    uint32_t field1C;
    char filename[32];
} MWo3Header;

typedef struct {
    MWo3Header header;
    uint8_t* section1Data;
    uint8_t* section2Data;
} LoadedFile;

/**
 * @description Load a game data file from assets/disc/BIN/%d.DAT
 * @param slot File slot index (0-9)
 * @param outFile Pointer to LoadedFile struct to populate
 * @return 1 on success, 0 on failure
 */
int32_t loadGameFile(int32_t slot, LoadedFile* outFile);

/**
 * @description Free memory allocated by loadGameFile
 * @param file LoadedFile to free
 */
void freeLoadedFile(LoadedFile* file);

/**
 * @description Get the base path for disc assets
 * @return Path string (e.g. "assets/disc/")
 */
const char* getDiscBasePath(void);

#endif // FILE_LOADER_H
