#ifndef SOUND_BANK_H
#define SOUND_BANK_H

#include <stdint.h>

/**
 * @file sound_bank.h
 * @category audio/playback
 * @status complete
 * @original func_001ac9d0, func_001ac220, func_001daca0, func_001b8000
 * @address 0x001ac9d0, 0x001ac220, 0x001daca0, 0x001b8000
 * @description Windows replacement for PS2 SPU2 sound bank system.
 *              Loads MOMO/IECS banks from NETBIO00.DAT, decodes VAG ADPCM
 *              to PCM16, plays via OpenAL.
 *
 * PS2 runtime:
 *   func_001ac9d0 — parses IECS descriptors into table at 0x2a5410
 *   func_001ac220 — plays sound by category + index from table
 *   func_001b8000(N) — wrapper: plays category 12, index N
 *
 * Bank format: MOMO header (0x40) + IECS (IECSsreV + IECSdaeH + IECSigaV + BD)
 *   MOMO +0x04: category ID
 *   IECS +0x20: BD (audio body) size
 *   BD: VAG ADPCM blocks, samples separated by end flag (byte[1] & 0x01)
 *
 * @author caprado
 */

#define SOUND_MAX_CATEGORIES  32
#define SOUND_MAX_SAMPLES    128
#define SOUND_MAX_SOURCES     32

/**
 * @description Initialize OpenAL device/context and source pool.
 * @return 1 on success, 0 on failure
 */
int32_t initSoundBankSystem(void);

/**
 * @description Load a MOMO/IECS sound bank from NETBIO00.DAT entry[0].
 *              Decodes all VAG samples to PCM and creates OpenAL buffers.
 *              ASM-verified: func_001daca0 maps bank names to categories:
 *                "start"=12, "download"=12, "result"=12, "shop"=12, "common"=12
 * @param afsIndex File index in NETBIO00.DAT entry[0] (e.g. 1334 for "start")
 * @param category Category slot for sound table (e.g. 12 for title/menu)
 * @return 1 on success, 0 on failure
 */
int32_t loadSoundBank(int32_t afsIndex, int32_t category);

/**
 * @description Unload all samples for a category, freeing OpenAL buffers.
 * @param category Category ID to unload
 */
void unloadSoundCategory(int32_t category);

/**
 * @description Play a sound effect by category and sample index.
 *              Matches PS2 func_001ac220(category, index).
 * @param category Sound category (from MOMO header)
 * @param index Sample index within category
 * @return 1 on success, 0 if not found or no free source
 */
int32_t playSoundEffect(int32_t category, int32_t index);

/**
 * @description Stop all currently playing sound effects.
 */
void stopAllSoundEffects(void);

/**
 * @description Shutdown sound bank system, free all resources.
 */
void shutdownSoundBankSystem(void);

#endif // SOUND_BANK_H
