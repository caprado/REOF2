/**
 * @category audio/playback
 * @status complete
 * @original func_001ac9d0 (bank loader), func_001ac220 (sound player), func_001daca0 (bank selector)
 * @address 0x001ac9d0 (bank loader), 0x001ac220 (sound player), 0x001daca0 (bank name selector)
 * @description Windows replacement for PS2 SPU2 sound bank system.
 *              Loads MOMO/IECS banks from NETBIO00.DAT, decodes VAG ADPCM, plays via OpenAL.
 *              ASM-verified loading chain: func_001dac60 -> func_001daca0(0) -> "start" bank
 *              -> func_001daef0("start", 12) -> category 12 -> func_001b8000(N) plays index N
 * @windows_compatibility high
 * @author caprado
 */

#include "sound_bank.h"
#include "../io/afs_reader.h"
#include "../io/file_loader.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef _WIN32
#include <AL/al.h>
#include <AL/alc.h>
#else
#include <AL/al.h>
#include <AL/alc.h>
#endif

/* VAG ADPCM coefficients (fixed-point, /64) */
static const int32_t s_vagCoeffs[5][2] = {
    {0, 0}, {60, 0}, {115, -52}, {98, -55}, {122, -60}
};

typedef struct {
    ALuint alBuffer;
    int32_t valid;
} SoundSample;

typedef struct {
    SoundSample samples[SOUND_MAX_SAMPLES];
    int32_t sampleCount;
    int32_t categoryId;
    int32_t loaded;
} SoundCategory;

static ALCdevice* s_device = NULL;
static ALCcontext* s_context = NULL;
static ALuint s_sources[SOUND_MAX_SOURCES];
static SoundCategory s_categories[SOUND_MAX_CATEGORIES];
static int32_t s_initialized = 0;

/* ---- VAG ADPCM Decoder ---- */

static int16_t* decodeVag(const uint8_t* vagData, int32_t vagSize, int32_t* outCount) {
    int32_t maxSamples = (vagSize / 16) * 28;
    int16_t* pcm = (int16_t*)malloc(maxSamples * sizeof(int16_t));
    if (!pcm) { *outCount = 0; return NULL; }

    int32_t count = 0;
    double s1 = 0.0, s2 = 0.0;

    for (int32_t i = 0; i < vagSize; i += 16) {
        if (i + 16 > vagSize) break;

        int32_t predict = (vagData[i] >> 4) & 0x0F;
        int32_t shift = vagData[i] & 0x0F;
        int32_t flags = vagData[i + 1];

        if (predict > 4) predict = 0;
        if (shift > 12) shift = 12;

        double c1 = s_vagCoeffs[predict][0] / 64.0;
        double c2 = s_vagCoeffs[predict][1] / 64.0;

        for (int32_t j = 2; j < 16; j++) {
            uint8_t byte = vagData[i + j];
            int32_t nibbles[2] = { (byte >> 4) & 0x0F, byte & 0x0F };

            for (int32_t n = 0; n < 2; n++) {
                int32_t nib = nibbles[n];
                if (nib >= 8) nib -= 16;

                double sample = (double)(nib << (12 - shift));
                sample += s1 * c1 + s2 * c2;
                s2 = s1;
                s1 = sample;

                int32_t s = (int32_t)sample;
                if (s > 32767) s = 32767;
                if (s < -32768) s = -32768;
                pcm[count++] = (int16_t)s;
            }
        }

        if (flags & 0x01) break;
    }

    *outCount = count;
    return pcm;
}

/* ---- IECS Bank Parser ---- */

static int32_t parseMomoBank(const uint8_t* data, uint32_t dataSize, int32_t category) {
    if (dataSize < 0x80) return 0;
    if (memcmp(data, "MOMO", 4) != 0) return 0;

    int32_t categoryId = category;
    uint32_t iecsOff = *(uint32_t*)(data + 0x08);

    if (iecsOff + 0x28 > dataSize) return 0;
    if (memcmp(data + iecsOff, "IECSsreV", 8) != 0) return 0;

    uint32_t bdSize = *(uint32_t*)(data + iecsOff + 0x20);
    if (bdSize == 0 || bdSize > dataSize) return 0;

    const uint8_t* bdData = data + dataSize - bdSize;

    /* Find category slot */
    int32_t catSlot = -1;
    for (int32_t i = 0; i < SOUND_MAX_CATEGORIES; i++) {
        if (!s_categories[i].loaded) {
            catSlot = i;
            break;
        }
    }
    if (catSlot < 0) {
        fprintf(stderr, "[SoundBank] No free category slot\n");
        return 0;
    }

    SoundCategory* cat = &s_categories[catSlot];
    memset(cat, 0, sizeof(SoundCategory));
    cat->categoryId = categoryId;

    /* Scan BD for VAG samples by end flags */
    int32_t sampleIdx = 0;
    int32_t sampleStart = 0;

    for (int32_t pos = 0; pos < (int32_t)bdSize; pos += 16) {
        if (pos + 1 >= (int32_t)bdSize) break;
        uint8_t flags = bdData[pos + 1];

        if (flags & 0x01) {
            const uint8_t* chunk = bdData + sampleStart;
            int32_t chunkSize = pos + 16 - sampleStart;

            if (chunkSize > 32 && sampleIdx < SOUND_MAX_SAMPLES) {
                int32_t pcmCount = 0;
                int16_t* pcm = decodeVag(chunk, chunkSize, &pcmCount);

                if (pcm && pcmCount > 0) {
                    ALuint buf = 0;
                    alGenBuffers(1, &buf);
                    alBufferData(buf, AL_FORMAT_MONO16, pcm,
                                 pcmCount * sizeof(int16_t), 22050);

                    cat->samples[sampleIdx].alBuffer = buf;
                    cat->samples[sampleIdx].valid = 1;
                }
                free(pcm);
            }
            sampleIdx++;
            sampleStart = pos + 16;
        }
    }

    cat->sampleCount = sampleIdx;
    cat->loaded = 1;

    printf("[SoundBank] Loaded bank category %d: %d samples\n", categoryId, sampleIdx);
    fflush(stdout);
    return 1;
}

/* ---- Public API ---- */

int32_t initSoundBankSystem(void) {
    if (s_initialized) return 1;

    s_device = alcOpenDevice(NULL);
    if (!s_device) {
        fprintf(stderr, "[SoundBank] Failed to open OpenAL device\n");
        return 0;
    }

    s_context = alcCreateContext(s_device, NULL);
    if (!s_context) {
        fprintf(stderr, "[SoundBank] Failed to create OpenAL context\n");
        alcCloseDevice(s_device);
        s_device = NULL;
        return 0;
    }

    alcMakeContextCurrent(s_context);
    alGenSources(SOUND_MAX_SOURCES, s_sources);

    memset(s_categories, 0, sizeof(s_categories));
    s_initialized = 1;

    printf("[SoundBank] Initialized (%d sources)\n", SOUND_MAX_SOURCES);
    fflush(stdout);
    return 1;
}

int32_t loadSoundBank(int32_t afsIndex, int32_t category) {
    if (!s_initialized) return 0;

    AfsArchive outerAfs, innerAfs;
    char afsPath[256];
    uint8_t* rawData = NULL;
    uint32_t rawSize = 0;

    snprintf(afsPath, sizeof(afsPath), "%sNETBIO00.DAT", getDiscBasePath());

    if (!afsOpen(afsPath, &outerAfs)) {
        fprintf(stderr, "[SoundBank] Failed to open %s\n", afsPath);
        return 0;
    }
    if (!afsOpenNested(&outerAfs, 0, &innerAfs)) {
        fprintf(stderr, "[SoundBank] Failed to open nested AFS\n");
        afsClose(&outerAfs);
        return 0;
    }

    if (!afsReadFile(&innerAfs, afsIndex, &rawData, &rawSize)) {
        fprintf(stderr, "[SoundBank] Failed to read bank %d\n", afsIndex);
        afsClose(&innerAfs);
        afsClose(&outerAfs);
        return 0;
    }

    alcMakeContextCurrent(s_context);
    int32_t result = parseMomoBank(rawData, rawSize, category);

    free(rawData);
    afsClose(&innerAfs);
    afsClose(&outerAfs);
    return result;
}

void unloadSoundCategory(int32_t category) {
    for (int32_t i = 0; i < SOUND_MAX_CATEGORIES; i++) {
        if (s_categories[i].loaded && s_categories[i].categoryId == category) {
            alcMakeContextCurrent(s_context);
            for (int32_t j = 0; j < s_categories[i].sampleCount; j++) {
                if (s_categories[i].samples[j].valid) {
                    alDeleteBuffers(1, &s_categories[i].samples[j].alBuffer);
                }
            }
            memset(&s_categories[i], 0, sizeof(SoundCategory));
            break;
        }
    }
}

int32_t playSoundEffect(int32_t category, int32_t index) {
    if (!s_initialized) return 0;

    alcMakeContextCurrent(s_context);

    for (int32_t i = 0; i < SOUND_MAX_CATEGORIES; i++) {
        if (s_categories[i].loaded && s_categories[i].categoryId == category) {
            if (index < 0 || index >= s_categories[i].sampleCount) return 0;
            if (!s_categories[i].samples[index].valid) return 0;

            ALuint buf = s_categories[i].samples[index].alBuffer;

            for (int32_t s = 0; s < SOUND_MAX_SOURCES; s++) {
                ALint state;
                alGetSourcei(s_sources[s], AL_SOURCE_STATE, &state);
                if (state != AL_PLAYING) {
                    alSourcei(s_sources[s], AL_BUFFER, buf);
                    alSourcePlay(s_sources[s]);
                    return 1;
                }
            }
            fprintf(stderr, "[SoundBank] No free source for cat=%d idx=%d\n", category, index);
            return 0;
        }
    }
    return 0;
}

void stopAllSoundEffects(void) {
    if (!s_initialized) return;
    alcMakeContextCurrent(s_context);
    for (int32_t i = 0; i < SOUND_MAX_SOURCES; i++) {
        alSourceStop(s_sources[i]);
    }
}

void shutdownSoundBankSystem(void) {
    if (!s_initialized) return;

    alcMakeContextCurrent(s_context);
    stopAllSoundEffects();

    alDeleteSources(SOUND_MAX_SOURCES, s_sources);

    for (int32_t i = 0; i < SOUND_MAX_CATEGORIES; i++) {
        if (s_categories[i].loaded) {
            for (int32_t j = 0; j < s_categories[i].sampleCount; j++) {
                if (s_categories[i].samples[j].valid) {
                    alDeleteBuffers(1, &s_categories[i].samples[j].alBuffer);
                }
            }
        }
    }

    alcMakeContextCurrent(NULL);
    alcDestroyContext(s_context);
    alcCloseDevice(s_device);

    s_context = NULL;
    s_device = NULL;
    s_initialized = 0;

    printf("[SoundBank] Shutdown\n");
    fflush(stdout);
}
