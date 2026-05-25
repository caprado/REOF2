#include "video_player.h"
#include "../io/afs_reader.h"
#include "../io/file_loader.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef _WIN32
#include <windows.h>
#include <GL/gl.h>
#else
#include <GL/gl.h>
#endif

#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>
#include <libswscale/swscale.h>
#include <libswresample/swresample.h>
#include <libavutil/opt.h>

#include <AL/al.h>
#include <AL/alc.h>

// Custom I/O context for reading from within AFS archive
typedef struct {
    FILE* file;
    int64_t baseOffset;
    int64_t fileSize;
    int64_t currentPos;
} AfsIOContext;

static AfsIOContext s_videoIOCtx;
static AfsIOContext s_audioIOCtx;
static AVFormatContext* s_fmtCtx = NULL;
static AVFormatContext* s_audioFmtCtx = NULL;
static AVCodecContext* s_videoCodecCtx = NULL;
static AVCodecContext* s_audioCodecCtx = NULL;
static struct SwsContext* s_swsCtx = NULL;
static AVFrame* s_frame = NULL;
static AVFrame* s_rgbFrame = NULL;
static AVPacket* s_packet = NULL;
static int s_videoStreamIdx = -1;
static int s_audioStreamIdx = -1;
static GLuint s_videoTexture = 0;
static int s_videoWidth = 0;
static int s_videoHeight = 0;
static int s_playing = 0;
static int s_initialized = 0;
static uint8_t* s_rgbBuffer = NULL;
static double s_videoStartTime = 0.0;
static int s_frameDecoded = 0;
static double s_loopStartSec = -1.0;  // -1 = no loop

// Audio state
static SwrContext* s_swrCtx = NULL;
static ALCdevice* s_alDevice = NULL;
static ALCcontext* s_alContext = NULL;
static ALuint s_alSource = 0;
#define AUDIO_BUFFER_COUNT 8
#define AUDIO_BUFFER_SAMPLES 4096
static ALuint s_alBuffers[AUDIO_BUFFER_COUNT];
static int s_audioSampleRate = 0;
static int s_audioChannels = 0;
static int s_audioInitialized = 0;

// Custom read callback for ffmpeg — reads from AFS file at offset range
static int afsReadPacket(void* opaque, uint8_t* buf, int buf_size) {
    AfsIOContext* io = (AfsIOContext*)opaque;
    int64_t remaining = io->fileSize - io->currentPos;
    int toRead;

    if (remaining <= 0) {
        return AVERROR_EOF;
    }

    toRead = (buf_size < remaining) ? buf_size : (int)remaining;

    if (fseek(io->file, (long)(io->baseOffset + io->currentPos), SEEK_SET) != 0) {
        return AVERROR(EIO);
    }

    toRead = (int)fread(buf, 1, toRead, io->file);
    if (toRead == 0) {
        return AVERROR_EOF;
    }

    io->currentPos += toRead;
    return toRead;
}

// Custom seek callback
static int64_t afsSeekPacket(void* opaque, int64_t offset, int whence) {
    AfsIOContext* io = (AfsIOContext*)opaque;

    if (whence == AVSEEK_SIZE) {
        return io->fileSize;
    }

    switch (whence) {
        case SEEK_SET:
            io->currentPos = offset;
            break;
        case SEEK_CUR:
            io->currentPos += offset;
            break;
        case SEEK_END:
            io->currentPos = io->fileSize + offset;
            break;
        default:
            return AVERROR(EINVAL);
    }

    if (io->currentPos < 0) io->currentPos = 0;
    if (io->currentPos > io->fileSize) io->currentPos = io->fileSize;

    return io->currentPos;
}

int32_t initVideoPlayer(void) {
    if (s_initialized) return 1;
    s_initialized = 1;
    return 1;
}

int32_t playVideo(uint32_t videoIndex, uint32_t audioIndex) {
    AfsArchive outerAfs, innerAfs;
    char afsPath[256];
    unsigned char* avioBuffer;
    AVIOContext* avioCtx;
    const AVCodec* videoCodec;
    int ret;

    if (s_playing) {
        stopVideo();
    }

    snprintf(afsPath, sizeof(afsPath), "%sNETBIO01.DAT", getDiscBasePath());

    if (!afsOpen(afsPath, &outerAfs)) {
        fprintf(stderr, "[Video] Failed to open %s\n", afsPath);
        return 0;
    }

    if (!afsOpenNested(&outerAfs, 0, &innerAfs)) {
        fprintf(stderr, "[Video] Failed to open nested AFS\n");
        afsClose(&outerAfs);
        return 0;
    }

    if (videoIndex >= innerAfs.fileCount) {
        fprintf(stderr, "[Video] Video index %u out of range\n", videoIndex);
        afsClose(&innerAfs);
        afsClose(&outerAfs);
        return 0;
    }

    // === VIDEO STREAM ===
    s_videoIOCtx.file = outerAfs.fileHandle;
    s_videoIOCtx.baseOffset = innerAfs.entries[videoIndex].offset;
    s_videoIOCtx.fileSize = innerAfs.entries[videoIndex].size;
    s_videoIOCtx.currentPos = 0;

    printf("[Video] Playing video index %u (%.1fMB)\n",
           videoIndex, (double)s_videoIOCtx.fileSize / 1024.0 / 1024.0);
    fflush(stdout);

    avioBuffer = (unsigned char*)av_malloc(32768);
    avioCtx = avio_alloc_context(avioBuffer, 32768, 0, &s_videoIOCtx,
                                  afsReadPacket, NULL, afsSeekPacket);

    s_fmtCtx = avformat_alloc_context();
    s_fmtCtx->pb = avioCtx;

    ret = avformat_open_input(&s_fmtCtx, NULL, NULL, NULL);
    if (ret < 0) {
        fprintf(stderr, "[Video] Failed to open video stream\n");
        return 0;
    }
    avformat_find_stream_info(s_fmtCtx, NULL);

    // Find video stream
    s_videoStreamIdx = -1;
    for (unsigned i = 0; i < s_fmtCtx->nb_streams; i++) {
        if (s_fmtCtx->streams[i]->codecpar->codec_type == AVMEDIA_TYPE_VIDEO) {
            s_videoStreamIdx = i;
            break;
        }
    }

    if (s_videoStreamIdx < 0) {
        fprintf(stderr, "[Video] No video stream found\n");
        avformat_close_input(&s_fmtCtx);
        return 0;
    }

    videoCodec = avcodec_find_decoder(s_fmtCtx->streams[s_videoStreamIdx]->codecpar->codec_id);
    s_videoCodecCtx = avcodec_alloc_context3(videoCodec);
    avcodec_parameters_to_context(s_videoCodecCtx, s_fmtCtx->streams[s_videoStreamIdx]->codecpar);
    avcodec_open2(s_videoCodecCtx, videoCodec, NULL);

    s_videoWidth = s_videoCodecCtx->width;
    s_videoHeight = s_videoCodecCtx->height;
    printf("[Video] Video: %dx%d, codec=%s\n", s_videoWidth, s_videoHeight, videoCodec->name);
    fflush(stdout);

    s_swsCtx = sws_getContext(s_videoWidth, s_videoHeight, s_videoCodecCtx->pix_fmt,
                               s_videoWidth, s_videoHeight, AV_PIX_FMT_RGB24,
                               SWS_BILINEAR, NULL, NULL, NULL);

    s_frame = av_frame_alloc();
    s_rgbFrame = av_frame_alloc();
    s_packet = av_packet_alloc();

    s_rgbBuffer = (uint8_t*)malloc(s_videoWidth * s_videoHeight * 3);
    s_rgbFrame->data[0] = s_rgbBuffer;
    s_rgbFrame->linesize[0] = s_videoWidth * 3;

    if (s_videoTexture == 0) {
        glGenTextures(1, &s_videoTexture);
    }
    glBindTexture(GL_TEXTURE_2D, s_videoTexture);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, s_videoWidth, s_videoHeight,
                 0, GL_RGB, GL_UNSIGNED_BYTE, NULL);

    // === AUDIO STREAM (separate ADX file) ===
    if (audioIndex > 0 && audioIndex < innerAfs.fileCount) {
        // Open a SECOND file handle for audio (can't share seek position with video)
        FILE* audioFile = fopen(afsPath, "rb");
        if (audioFile) {
            s_audioIOCtx.file = audioFile;
            s_audioIOCtx.baseOffset = innerAfs.entries[audioIndex].offset;
            s_audioIOCtx.fileSize = innerAfs.entries[audioIndex].size;
            s_audioIOCtx.currentPos = 0;

            unsigned char* audioAvioBuffer = (unsigned char*)av_malloc(8192);
            AVIOContext* audioAvioCtx = avio_alloc_context(audioAvioBuffer, 8192, 0,
                &s_audioIOCtx, afsReadPacket, NULL, afsSeekPacket);

            s_audioFmtCtx = avformat_alloc_context();
            s_audioFmtCtx->pb = audioAvioCtx;

            // Force ADX format
            const AVInputFormat* adxFmt = av_find_input_format("adx");
            ret = avformat_open_input(&s_audioFmtCtx, NULL, adxFmt, NULL);
            if (ret >= 0) {
                avformat_find_stream_info(s_audioFmtCtx, NULL);

                s_audioStreamIdx = 0;  // ADX files have one stream
                const AVCodec* audioCodec = avcodec_find_decoder(
                    s_audioFmtCtx->streams[0]->codecpar->codec_id);
                if (audioCodec) {
                    s_audioCodecCtx = avcodec_alloc_context3(audioCodec);
                    avcodec_parameters_to_context(s_audioCodecCtx,
                        s_audioFmtCtx->streams[0]->codecpar);

                    if (avcodec_open2(s_audioCodecCtx, audioCodec, NULL) >= 0) {
                        s_audioSampleRate = s_audioCodecCtx->sample_rate;
                        s_audioChannels = s_audioCodecCtx->ch_layout.nb_channels;

                        s_swrCtx = swr_alloc();
                        av_opt_set_chlayout(s_swrCtx, "in_chlayout", &s_audioCodecCtx->ch_layout, 0);
                        av_opt_set_chlayout(s_swrCtx, "out_chlayout", &s_audioCodecCtx->ch_layout, 0);
                        av_opt_set_int(s_swrCtx, "in_sample_rate", s_audioSampleRate, 0);
                        av_opt_set_int(s_swrCtx, "out_sample_rate", s_audioSampleRate, 0);
                        av_opt_set_sample_fmt(s_swrCtx, "in_sample_fmt", s_audioCodecCtx->sample_fmt, 0);
                        av_opt_set_sample_fmt(s_swrCtx, "out_sample_fmt", AV_SAMPLE_FMT_S16, 0);
                        swr_init(s_swrCtx);

                        if (!s_alDevice) {
                            s_alDevice = alcOpenDevice(NULL);
                            if (s_alDevice) {
                                s_alContext = alcCreateContext(s_alDevice, NULL);
                                alcMakeContextCurrent(s_alContext);
                            }
                        }

                        if (s_alDevice) {
                            alGenSources(1, &s_alSource);
                            alSourcef(s_alSource, AL_GAIN, 1.0f);
                            s_audioInitialized = 1;

                            printf("[Video] Audio: %dHz, %dch, codec=%s, fmt=%d\n",
                                   s_audioSampleRate, s_audioChannels, audioCodec->name,
                                   s_audioCodecCtx->sample_fmt);
                            printf("[Video] OpenAL device: %s\n",
                                   alcGetString(s_alDevice, ALC_DEVICE_SPECIFIER));
                            fflush(stdout);
                        } else {
                            printf("[Video] ERROR: OpenAL device failed\n");
                            fflush(stdout);
                        }
                    }
                }
            } else {
                fclose(audioFile);
            }
        }
    }

    // Free inner AFS entries (we saved the offsets we need)
    free(innerAfs.entries);
    innerAfs.entries = NULL;
    // outerAfs file handle stays alive for video I/O

    // Record start time for frame sync
    {
        LARGE_INTEGER freq, now;
        QueryPerformanceFrequency(&freq);
        QueryPerformanceCounter(&now);
        s_videoStartTime = (double)now.QuadPart / (double)freq.QuadPart;
    }
    s_frameDecoded = 0;
    s_loopStartSec = -1.0;

    s_playing = 1;
    return 1;
}

int32_t updateVideo(void) {
    int ret;
    int gotFrame = 0;

    if (!s_playing || !s_fmtCtx) {
        return 0;
    }

    // Decode video frame FIRST (then audio catches up)
    // This prevents audio from racing ahead of video
    while (!gotFrame) {
        ret = av_read_frame(s_fmtCtx, s_packet);
        if (ret < 0) {
            // End of file — check for loop
            if (s_loopStartSec >= 0.0) {
                int64_t seekTarget = (int64_t)(s_loopStartSec * AV_TIME_BASE);
                av_seek_frame(s_fmtCtx, -1, seekTarget, AVSEEK_FLAG_BACKWARD);
                avcodec_flush_buffers(s_videoCodecCtx);
                continue;  // Try reading again after seek
            }
            s_playing = 0;
            return 0;
        }

        if (s_packet->stream_index == s_videoStreamIdx) {
            ret = avcodec_send_packet(s_videoCodecCtx, s_packet);
            if (ret >= 0) {
                ret = avcodec_receive_frame(s_videoCodecCtx, s_frame);
                if (ret >= 0) {
                    sws_scale(s_swsCtx, (const uint8_t* const*)s_frame->data,
                              s_frame->linesize, 0, s_videoHeight,
                              s_rgbFrame->data, s_rgbFrame->linesize);

                    glBindTexture(GL_TEXTURE_2D, s_videoTexture);
                    glTexSubImage2D(GL_TEXTURE_2D, 0, 0, 0,
                                    s_videoWidth, s_videoHeight,
                                    GL_RGB, GL_UNSIGNED_BYTE, s_rgbBuffer);

                    gotFrame = 1;
                }
            }
        }

        av_packet_unref(s_packet);
    }

    // Decode audio AFTER video to stay in sync
    // Only queue 1 buffer per frame to prevent audio racing ahead
    if (s_audioInitialized && s_audioFmtCtx) {
        ALint processed;
        alGetSourcei(s_alSource, AL_BUFFERS_PROCESSED, &processed);
        if (processed > 0) {
            ALuint recycled[AUDIO_BUFFER_COUNT];
            alSourceUnqueueBuffers(s_alSource, processed, recycled);
        }

        ALint queued;
        alGetSourcei(s_alSource, AL_BUFFERS_QUEUED, &queued);

        // Keep max 2 buffers queued — just enough to prevent underrun
        while (queued < 2) {
            AVPacket* audioPkt = av_packet_alloc();
            ret = av_read_frame(s_audioFmtCtx, audioPkt);
            if (ret < 0) {
                av_packet_free(&audioPkt);
                break;
            }

            ret = avcodec_send_packet(s_audioCodecCtx, audioPkt);
            if (ret >= 0) {
                AVFrame* audioFrame = av_frame_alloc();
                if (avcodec_receive_frame(s_audioCodecCtx, audioFrame) >= 0) {
                    int outSamples = audioFrame->nb_samples;
                    int bufBytes = outSamples * s_audioChannels * sizeof(int16_t);
                    int16_t* outBuf = (int16_t*)malloc(bufBytes);
                    uint8_t* outPtr = (uint8_t*)outBuf;

                    swr_convert(s_swrCtx, &outPtr, outSamples,
                                (const uint8_t**)audioFrame->data, audioFrame->nb_samples);

                    ALenum format = (s_audioChannels == 2) ? AL_FORMAT_STEREO16 : AL_FORMAT_MONO16;
                    ALuint bufId;
                    alGenBuffers(1, &bufId);
                    alBufferData(bufId, format, outBuf, bufBytes, s_audioSampleRate);
                    alSourceQueueBuffers(s_alSource, 1, &bufId);
                    queued++;

                    free(outBuf);
                }
                av_frame_free(&audioFrame);
            }
            av_packet_free(&audioPkt);
        }

        ALint state;
        alGetSourcei(s_alSource, AL_SOURCE_STATE, &state);
        if (state != AL_PLAYING && queued > 0) {
            alSourcePlay(s_alSource);
        }
    }

    return 1;
}

void renderVideoFrame(void) {
    if (!s_playing || s_videoTexture == 0) {
        return;
    }

    glMatrixMode(GL_PROJECTION);
    glPushMatrix();
    glLoadIdentity();
    glOrtho(0, 640, 448, 0, -1, 1);
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glLoadIdentity();

    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, s_videoTexture);
    glDisable(GL_BLEND);
    glDisable(GL_DEPTH_TEST);
    glColor4f(1.0f, 1.0f, 1.0f, 1.0f);

    glBegin(GL_QUADS);
    glTexCoord2f(0.0f, 0.0f); glVertex2f(0.0f, 0.0f);
    glTexCoord2f(1.0f, 0.0f); glVertex2f(640.0f, 0.0f);
    glTexCoord2f(1.0f, 1.0f); glVertex2f(640.0f, 448.0f);
    glTexCoord2f(0.0f, 1.0f); glVertex2f(0.0f, 448.0f);
    glEnd();

    glDisable(GL_TEXTURE_2D);
    glDisable(GL_BLEND);
    glPopMatrix();
    glMatrixMode(GL_PROJECTION);
    glPopMatrix();
    glMatrixMode(GL_MODELVIEW);

    // Full GL state reset for clean rendering after video
    glBindTexture(GL_TEXTURE_2D, 0);
    glDisable(GL_TEXTURE_2D);
    glDisable(GL_BLEND);
    glEnable(GL_DEPTH_TEST);
    glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
    glLoadIdentity();
}

void stopVideo(void) {
    s_playing = 0;

    // Stop and clean up audio
    if (s_audioInitialized) {
        alSourceStop(s_alSource);
        // Unqueue and delete all buffers
        ALint queued;
        alGetSourcei(s_alSource, AL_BUFFERS_QUEUED, &queued);
        while (queued > 0) {
            ALuint buf;
            alSourceUnqueueBuffers(s_alSource, 1, &buf);
            alDeleteBuffers(1, &buf);
            queued--;
        }
        alDeleteSources(1, &s_alSource);
        s_alSource = 0;
        s_audioInitialized = 0;
    }
    if (s_swrCtx) { swr_free(&s_swrCtx); s_swrCtx = NULL; }

    if (s_packet) { av_packet_free(&s_packet); s_packet = NULL; }
    if (s_frame) { av_frame_free(&s_frame); s_frame = NULL; }
    if (s_rgbFrame) { av_frame_free(&s_rgbFrame); s_rgbFrame = NULL; }
    if (s_swsCtx) { sws_freeContext(s_swsCtx); s_swsCtx = NULL; }
    if (s_videoCodecCtx) { avcodec_free_context(&s_videoCodecCtx); s_videoCodecCtx = NULL; }
    if (s_audioCodecCtx) { avcodec_free_context(&s_audioCodecCtx); s_audioCodecCtx = NULL; }

    if (s_audioFmtCtx) {
        if (s_audioFmtCtx->pb) {
            if (s_audioFmtCtx->pb->buffer) {
                av_free(s_audioFmtCtx->pb->buffer);
            }
            avio_context_free(&s_audioFmtCtx->pb);
        }
        if (s_audioIOCtx.file) {
            fclose(s_audioIOCtx.file);
            s_audioIOCtx.file = NULL;
        }
        avformat_close_input(&s_audioFmtCtx);
        s_audioFmtCtx = NULL;
    }

    if (s_fmtCtx) {
        if (s_fmtCtx->pb) {
            if (s_fmtCtx->pb->buffer) {
                av_free(s_fmtCtx->pb->buffer);
            }
            avio_context_free(&s_fmtCtx->pb);
        }
        if (s_videoIOCtx.file) {
            fclose(s_videoIOCtx.file);
            s_videoIOCtx.file = NULL;
        }
        avformat_close_input(&s_fmtCtx);
        s_fmtCtx = NULL;
    }

    if (s_rgbBuffer) { free(s_rgbBuffer); s_rgbBuffer = NULL; }

    s_videoStreamIdx = -1;
    s_audioStreamIdx = -1;
}

int32_t isVideoPlaying(void) {
    return s_playing;
}

void setVideoLoop(double loopStartSec) {
    s_loopStartSec = loopStartSec;
}

void shutdownVideoPlayer(void) {
    stopVideo();
    if (s_videoTexture != 0) {
        glDeleteTextures(1, &s_videoTexture);
        s_videoTexture = 0;
    }
    if (s_alContext) {
        alcMakeContextCurrent(NULL);
        alcDestroyContext(s_alContext);
        s_alContext = NULL;
    }
    if (s_alDevice) {
        alcCloseDevice(s_alDevice);
        s_alDevice = NULL;
    }
    s_initialized = 0;
}
