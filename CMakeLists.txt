cmake_minimum_required(VERSION 3.15)
project(REOF2_Decompilation VERSION 0.1.0 LANGUAGES C CXX)

# Set C standard
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Build options
option(BUILD_ORIGINAL_EXTRACTED "Include original extracted functions" OFF)
option(BUILD_TESTS "Build test suite" OFF)

# Platform detection
if(WIN32)
    add_definitions(-DPLATFORM_WINDOWS)
    message(STATUS "Building for Windows")
elseif(UNIX)
    add_definitions(-DPLATFORM_LINUX)
    message(STATUS "Building for Linux")
endif()

# Include directories
include_directories(
    ${CMAKE_SOURCE_DIR}/src/include
    ${CMAKE_SOURCE_DIR}/src
)

# Source files - Core System
set(CORE_SOURCES
    src/core/entry.c
    src/core/hardware.c
    src/core/thread.c
)

# Source files - Memory Management
set(MEMORY_SOURCES
    src/core/memory/allocation.c
    src/core/memory/pool.c
)

# Source files - Utilities
set(UTILITY_SOURCES
    src/core/utility/array.c
    src/core/utility/lookup.c
)

# Source files - Synchronization
set(SYNC_SOURCES
    src/core/sync/semaphore.c
)

# Source files - Game Logic
set(GAME_SOURCES
    src/game/init.c
    src/game/loop.c
    src/game/state.c
    src/game/rendering.c
    src/game/resource.c
    src/game/texture_manager.c
)

# Source files - I/O
set(IO_SOURCES
    src/io/cdrom.c
    src/io/filesystem.c
)

# Combine all sources
set(ALL_SOURCES
    ${CORE_SOURCES}
    ${MEMORY_SOURCES}
    ${UTILITY_SOURCES}
    ${SYNC_SOURCES}
    ${GAME_SOURCES}
    ${IO_SOURCES}
    ${BOOTSTRAP_SOURCES}
)

# Filter out files that don't exist yet
set(EXISTING_SOURCES)
foreach(source ${ALL_SOURCES})
    if(EXISTS ${CMAKE_SOURCE_DIR}/${source})
        list(APPEND EXISTING_SOURCES ${source})
    else()
        message(WARNING "Source file not found: ${source}")
    endif()
endforeach()

# Platform abstraction layer
if(WIN32)
    set(PLATFORM_SOURCES
        src/platform/windows/windows_platform.c
    )
    # Filter platform sources too
    foreach(source ${PLATFORM_SOURCES})
        if(EXISTS ${CMAKE_SOURCE_DIR}/${source})
            list(APPEND EXISTING_SOURCES ${source})
        else()
            message(WARNING "Platform source file not found: ${source}")
        endif()
    endforeach()
endif()

# Game bootstrap
set(BOOTSTRAP_SOURCES
    src/game/bootstrap.c
)

# Main executable
if(EXISTING_SOURCES)
    add_executable(reof2
        src/main.c  # Windows entry point wrapper
        ${EXISTING_SOURCES}
    )

    # Windows-specific libraries
    if(WIN32)
        target_link_libraries(reof2
            kernel32  # Windows API
            user32
        )
    endif()

    # Compiler warnings
    if(MSVC)
        target_compile_options(reof2 PRIVATE /W4)
    else()
        target_compile_options(reof2 PRIVATE -Wall -Wextra -Wpedantic)
    endif()

    # Output directories
    set_target_properties(reof2 PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
    )
else()
    message(FATAL_ERROR "No source files found to compile!")
endif()

# Optional: Build original extracted functions for reference
if(BUILD_ORIGINAL_EXTRACTED)
    file(GLOB EXTRACTED_SOURCES "extracted/*.c")
    add_library(extracted_functions STATIC ${EXTRACTED_SOURCES})
    target_include_directories(extracted_functions PRIVATE ${CMAKE_SOURCE_DIR}/src/include)
endif()

# Print build configuration
message(STATUS "==============================================")
message(STATUS "REOF2 Decompilation Build Configuration")
message(STATUS "==============================================")
message(STATUS "C Standard: ${CMAKE_C_STANDARD}")
message(STATUS "CXX Standard: ${CMAKE_CXX_STANDARD}")
message(STATUS "Build Type: ${CMAKE_BUILD_TYPE}")
message(STATUS "Source Files Found: ${CMAKE_CURRENT_LIST_LENGTH}")
message(STATUS "==============================================")
