cmake_minimum_required(VERSION 3.15)
project(REOF2 VERSION 0.1.0 LANGUAGES C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

add_definitions(-DPLATFORM_WINDOWS)

include_directories(${CMAKE_SOURCE_DIR}/src)

# Collect all .c files under src/
file(GLOB_RECURSE ALL_SOURCES "src/*.c")

add_executable(reof2 ${ALL_SOURCES})

target_link_libraries(reof2
    opengl32
    gdi32
    user32
    kernel32
)

if(MSVC)
    target_compile_options(reof2 PRIVATE /W3)
else()
    target_compile_options(reof2 PRIVATE -Wall -Wextra)
endif()

set_target_properties(reof2 PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)
