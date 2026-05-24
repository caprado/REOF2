#ifndef VIDEO_PLAYER_H
#define VIDEO_PLAYER_H

#include <stdint.h>

/**
 * @file video_player.h
 * @description Sofdec/SFD video player for Windows port.
 *              Decodes MPEG-2 PS video from AFS archives using ffmpeg libav.
 *              Renders decoded frames to OpenGL texture.
 *              Also handles ADX audio playback alongside video.
 *
 * SFD files are standard MPEG-2 Program Streams with CRI Sofdec framing.
 * ffmpeg handles them natively.
 *
 * Video files are stored in:
 *   NETBIO01.DAT → entry [0] → sub-AFS (1853 files)
 *   Key indices:
 *     1845 = PS2opening.sfd (84.6MB) - boot opening/logos
 *     1846 = PS2select.sfd (12.2MB) - character select
 *     1847 = PS2title1_jpn.sfd (11.4MB) - title 1
 *     1848 = PS2title2_jpn.sfd (4.8MB) - title 2
 */

/**
 * @description Initialize the video player system.
 * @return 1 on success, 0 on failure
 */
int32_t initVideoPlayer(void);

/**
 * @description Start playing a video with separate audio from the NETBIO01 AFS archive.
 * @param videoIndex File index for SFD video (e.g. 1845 for PS2opening.sfd)
 * @param audioIndex File index for ADX audio (e.g. 1607 for Opening.adx), or 0 for no audio
 * @return 1 on success, 0 on failure
 */
int32_t playVideo(uint32_t videoIndex, uint32_t audioIndex);

/**
 * @description Set a loop point for the current video. When playback reaches
 *              the end, it seeks back to loopStartSec and continues.
 * @param loopStartSec Time in seconds to seek back to when video ends
 */
void setVideoLoop(double loopStartSec);

/**
 * @description Advance video by one frame. Call each game frame.
 *              Decodes next video frame and updates the OpenGL texture.
 * @return 1 if video still playing, 0 if finished or error
 */
int32_t updateVideo(void);

/**
 * @description Render the current video frame to screen as a fullscreen quad.
 */
void renderVideoFrame(void);

/**
 * @description Stop current video playback and free resources.
 */
void stopVideo(void);

/**
 * @description Check if video is currently playing.
 * @return 1 if playing, 0 if not
 */
int32_t isVideoPlaying(void);

/**
 * @description Shutdown video player system.
 */
void shutdownVideoPlayer(void);

#endif // VIDEO_PLAYER_H
