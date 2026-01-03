#ifndef TIMING_H
#define TIMING_H

#include <stdint.h>
#include <stdbool.h>

/**
 * @file timing.h
 * @brief Frame timing and counter management for Windows
 *
 * Replaces PS2 VSync/hardware counter with Windows high-resolution timer.
 * The PS2 version used hardware counters and VSync interrupts for timing.
 */

/**
 * @brief Initialize the timing system
 * @return true if initialization succeeded, false otherwise
 */
bool initTiming(void);

/**
 * @brief Shutdown the timing system
 */
void shutdownTiming(void);

/**
 * @brief Update frame counter (call once per frame)
 */
void updateFrameCounter(void);

/**
 * @brief Get total number of frames rendered
 * @return Frame count since initialization
 */
uint64_t getFrameCount(void);

/**
 * @brief Get time elapsed since last frame (delta time)
 * @return Delta time in seconds
 */
double getDeltaTime(void);

/**
 * @brief Get frames per second (averaged over last second)
 * @return Current FPS
 */
double getFPS(void);

/**
 * @brief Wait to maintain target frame rate (60 FPS)
 */
void waitForNextFrame(void);

/**
 * @brief Get high-resolution timestamp in microseconds
 * @return Current timestamp in microseconds
 */
uint64_t getTimestampMicroseconds(void);

#endif // TIMING_H
