#include "timing.h"
#include <stdlib.h>
#include <string.h>

#ifdef _WIN32
#include <windows.h>
#else
#include <sys/time.h>
#include <time.h>
#include <unistd.h>
#endif

/**
 * @category core/timing
 * @status complete
 * @original func_001ae910
 * @address 0x001ae910
 * @description Frame timing and counter management.
 *
 * ORIGINAL PS2 BEHAVIOR:
 * - Managed counter at gp-0x6360 (0x00259ca0)
 * - Called func_00195ec0 (initializeRenderingSystem) when counter > 0
 * - Decremented counter each call
 * - Used hardware VSync for timing
 *
 * WINDOWS REPLACEMENT:
 * - Uses Windows QueryPerformanceCounter for high-resolution timing
 * - Tracks frame count, delta time, and FPS
 * - Provides frame rate limiting to 60 FPS
 * - No longer needs delayed initialization pattern
 *
 * @windows_compatibility high
 * @author caprado
 */

// Timing state
static struct {
    bool initialized;
    uint64_t frameCount;
    uint64_t startTime;
    uint64_t lastFrameTime;
    double deltaTime;
    double targetFrameTime;  // 1/60 = 0.016666... seconds

    // FPS calculation
    uint32_t fpsFrameCount;
    uint64_t fpsStartTime;
    double currentFPS;

#ifdef _WIN32
    LARGE_INTEGER frequency;
    LARGE_INTEGER startCounter;
#endif
} g_timing = {0};

/**
 * @brief Get high-resolution timestamp in microseconds
 */
uint64_t getTimestampMicroseconds(void) {
#ifdef _WIN32
    LARGE_INTEGER counter;
    QueryPerformanceCounter(&counter);

    // Convert to microseconds
    return (uint64_t)((counter.QuadPart * 1000000) / g_timing.frequency.QuadPart);
#else
    struct timeval tv;
    gettimeofday(&tv, NULL);
    return (uint64_t)tv.tv_sec * 1000000 + (uint64_t)tv.tv_usec;
#endif
}

/**
 * @brief Initialize the timing system
 */
bool initTiming(void) {
    if (g_timing.initialized) {
        return true;
    }

#ifdef _WIN32
    // Get performance counter frequency
    if (!QueryPerformanceFrequency(&g_timing.frequency)) {
        return false;
    }

    QueryPerformanceCounter(&g_timing.startCounter);
#endif

    // Initialize timing state
    g_timing.startTime = getTimestampMicroseconds();
    g_timing.lastFrameTime = g_timing.startTime;
    g_timing.frameCount = 0;
    g_timing.deltaTime = 0.0;
    g_timing.targetFrameTime = 1.0 / 60.0;  // 60 FPS target

    // FPS tracking
    g_timing.fpsFrameCount = 0;
    g_timing.fpsStartTime = g_timing.startTime;
    g_timing.currentFPS = 60.0;

    g_timing.initialized = true;
    return true;
}

/**
 * @brief Shutdown the timing system
 */
void shutdownTiming(void) {
    memset(&g_timing, 0, sizeof(g_timing));
}

/**
 * @brief Update frame counter (call once per frame)
 *
 * Replaces PS2's processRenderingCounter which:
 * - Checked counter at gp-0x6360
 * - Called initializeRenderingSystem if counter > 0
 * - Decremented counter
 *
 * Windows version simply tracks frame timing without delayed init.
 */
void updateFrameCounter(void) {
    if (!g_timing.initialized) {
        initTiming();
    }

    // Get current time
    uint64_t currentTime = getTimestampMicroseconds();

    // Calculate delta time
    uint64_t deltaMicros = currentTime - g_timing.lastFrameTime;
    g_timing.deltaTime = (double)deltaMicros / 1000000.0;

    // Update frame count
    g_timing.frameCount++;
    g_timing.lastFrameTime = currentTime;

    // Update FPS calculation (every second)
    g_timing.fpsFrameCount++;
    uint64_t fpsElapsed = currentTime - g_timing.fpsStartTime;

    if (fpsElapsed >= 1000000) {  // 1 second in microseconds
        g_timing.currentFPS = (double)g_timing.fpsFrameCount / ((double)fpsElapsed / 1000000.0);
        g_timing.fpsFrameCount = 0;
        g_timing.fpsStartTime = currentTime;
    }
}

/**
 * @brief Get total number of frames rendered
 */
uint64_t getFrameCount(void) {
    return g_timing.frameCount;
}

/**
 * @brief Get time elapsed since last frame (delta time)
 */
double getDeltaTime(void) {
    return g_timing.deltaTime;
}

/**
 * @brief Get frames per second (averaged over last second)
 */
double getFPS(void) {
    return g_timing.currentFPS;
}

/**
 * @brief Wait to maintain target frame rate (60 FPS)
 *
 * Sleeps the appropriate amount of time to maintain 60 FPS.
 * PS2 used VSync to lock to 60Hz display refresh.
 */
void waitForNextFrame(void) {
    if (!g_timing.initialized) {
        return;
    }

    // Calculate time until next frame
    uint64_t currentTime = getTimestampMicroseconds();
    uint64_t frameDuration = currentTime - g_timing.lastFrameTime;
    uint64_t targetDuration = (uint64_t)(g_timing.targetFrameTime * 1000000.0);

    if (frameDuration < targetDuration) {
        uint64_t sleepTime = targetDuration - frameDuration;

#ifdef _WIN32
        // Windows: Use Sleep (milliseconds)
        Sleep((DWORD)(sleepTime / 1000));
#else
        // Unix: Use usleep (microseconds)
        usleep((useconds_t)sleepTime);
#endif
    }
}
