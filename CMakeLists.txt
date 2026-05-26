cmake_minimum_required(VERSION 3.15)
project(REOF2 VERSION 0.1.0 LANGUAGES C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

add_definitions(-DPLATFORM_WINDOWS)

include_directories(${CMAKE_SOURCE_DIR}/src)

# Find ffmpeg
find_path(AVCODEC_INCLUDE_DIR libavcodec/avcodec.h)
find_path(AVFORMAT_INCLUDE_DIR libavformat/avformat.h)
find_path(SWSCALE_INCLUDE_DIR libswscale/swscale.h)
find_path(AVUTIL_INCLUDE_DIR libavutil/avutil.h)

find_library(AVCODEC_LIBRARY avcodec)
find_library(AVFORMAT_LIBRARY avformat)
find_library(SWSCALE_LIBRARY swscale)
find_library(AVUTIL_LIBRARY avutil)
find_library(SWRESAMPLE_LIBRARY swresample)
find_library(OPENAL_LIBRARY openal)

# Collect all .c files under src/
file(GLOB_RECURSE ALL_SOURCES "src/*.c")

add_executable(reof2 ${ALL_SOURCES})

target_include_directories(reof2 PRIVATE
    ${AVCODEC_INCLUDE_DIR}
    ${AVFORMAT_INCLUDE_DIR}
    ${SWSCALE_INCLUDE_DIR}
    ${AVUTIL_INCLUDE_DIR}
)

target_link_libraries(reof2
    opengl32
    gdi32
    user32
    kernel32
    ${AVCODEC_LIBRARY}
    ${AVFORMAT_LIBRARY}
    ${SWSCALE_LIBRARY}
    ${AVUTIL_LIBRARY}
    ${SWRESAMPLE_LIBRARY}
    ${OPENAL_LIBRARY}
)

if(MSVC)
    target_compile_options(reof2 PRIVATE /W3)
else()
    target_compile_options(reof2 PRIVATE -Wall -Wextra)
endif()

set_target_properties(reof2 PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)
