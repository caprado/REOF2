@echo off
REM Clean Windows build script for REOF2
REM Architecture: Windows Entry → OpenGL Init → Game State Machine

echo ================================================
echo REOF2 Windows Build Script
echo Clean Windows OpenGL Port
echo ================================================
echo.

REM Create build directory
if not exist "build" mkdir build
if not exist "build\windows" mkdir build\windows

echo [BUILD] Compiling source files...

REM Compile game data abstraction
gcc -c -Wall -Wextra ^
    -I"src" ^
    -I"src/game" ^
    src/game/game_data.c ^
    -o build/windows/game_data.o

if %ERRORLEVEL% NEQ 0 (
    echo [ERROR] Failed to compile game_data.c
    exit /b 1
)

REM Compile texture manager
gcc -c -Wall -Wextra ^
    -I"src" ^
    -I"src/game" ^
    src/game/texture_manager.c ^
    -o build/windows/texture_manager.o

if %ERRORLEVEL% NEQ 0 (
    echo [ERROR] Failed to compile texture_manager.c
    exit /b 1
)

REM Compile texture slot system
gcc -c -Wall -Wextra ^
    -I"src" ^
    -I"src/game" ^
    -I"src/graphics" ^
    src/graphics/texture_slot.c ^
    -o build/windows/texture_slot.o

if %ERRORLEVEL% NEQ 0 (
    echo [ERROR] Failed to compile texture_slot.c
    exit /b 1
)

REM Compile OpenGL renderer
gcc -c -Wall -Wextra ^
    -I"src" ^
    -I"src/platform/windows" ^
    src/platform/windows/opengl_renderer.c ^
    -o build/windows/opengl_renderer.o

if %ERRORLEVEL% NEQ 0 (
    echo [ERROR] Failed to compile opengl_renderer.c
    exit /b 1
)

REM Compile game state machine
gcc -c -Wall -Wextra ^
    -I"src" ^
    -I"src/game" ^
    src/game/state.c ^
    -o build/windows/state.o

if %ERRORLEVEL% NEQ 0 (
    echo [ERROR] Failed to compile state.c
    exit /b 1
)

REM Compile game loop
gcc -c -Wall -Wextra ^
    -I"src" ^
    -I"src/game" ^
    src/game/loop.c ^
    -o build/windows/loop.o

if %ERRORLEVEL% NEQ 0 (
    echo [ERROR] Failed to compile loop.c
    exit /b 1
)

REM Compile function stubs
gcc -c -Wall -Wextra ^
    -I"src" ^
    -I"src/game" ^
    src/game/stubs.c ^
    -o build/windows/stubs.o

if %ERRORLEVEL% NEQ 0 (
    echo [ERROR] Failed to compile stubs.c
    exit /b 1
)

REM Compile main entry point
gcc -c -Wall -Wextra ^
    -I"src" ^
    -I"src/game" ^
    -I"src/graphics" ^
    -I"src/platform/windows" ^
    src/main_windows.c ^
    -o build/windows/main_windows.o

if %ERRORLEVEL% NEQ 0 (
    echo [ERROR] Failed to compile main_windows.c
    exit /b 1
)

echo [BUILD] Linking executable...

REM Link everything together
gcc ^
    build/windows/main_windows.o ^
    build/windows/game_data.o ^
    build/windows/texture_manager.o ^
    build/windows/texture_slot.o ^
    build/windows/opengl_renderer.o ^
    build/windows/state.o ^
    build/windows/loop.o ^
    build/windows/stubs.o ^
    -o build/windows/reof2.exe ^
    -lopengl32 -lgdi32 -luser32 -lkernel32

if %ERRORLEVEL% NEQ 0 (
    echo [ERROR] Failed to link executable
    exit /b 1
)

echo.
echo ================================================
echo BUILD SUCCESSFUL!
echo ================================================
echo Executable: build\windows\reof2.exe
echo.
echo Architecture:
echo   main() [main_windows.c]
echo     → initializeOpenGL()
echo       → Window + OpenGL Context
echo       → Texture Slot System
echo     → initializeGameData()
echo       → Game Data Structure
echo       → State Machine Context
echo     → gameLoop()
echo       → updateGameLoop()
echo       → processGameStateMachine()
echo       → OpenGL Rendering
echo.
echo To run:
echo   cd build\windows
echo   reof2.exe
echo.
echo Press ESC to exit
echo ================================================
