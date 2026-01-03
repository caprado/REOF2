# Resident Evil Outbreak File #2 Decompilation Project

![Decompilation Progress](https://raw.githubusercontent.com/caprado/REOF2/main/.github/data/badge.svg)

## Project Description
This project is dedicated to the decompilation and preservation of the PlayStation 2 game "Resident Evil Outbreak File #2". The game binary has been extracted into C code using custom automated decompilation tools. The project is now focused on analyzing, categorizing, and refactoring this raw code into readable, maintainable source code with proper function names, data structures, and documentation. The ultimate goal is to create a documented, buildable version that runs on modern platforms (Windows and Linux) while preserving the original game's behavior.


## Current Status
The game binary has been extracted into raw C code using decompilation tools. Current focus:
- Analyzing and categorizing 4073 extracted functions by purpose
- Identifying function roles (entry points, memory management, I/O, game logic, etc.)
- Refactoring raw decompiler output into readable, maintainable code
- Replacing generic names (`func_00100230`) with meaningful identifiers
- Documenting data structures and system architecture
- Creating a platform abstraction layer for Windows and Linux support

**Progress:** 4073 functions extracted and ready for analysis. String and data sections included.

## Project Structure

```
src/
├── core/
├── io/
├── game/
├── platform/
└── include/
```

### Directory Descriptions

- **core/** - Core system functions including entry points, threading functionality, and memory management routines
- **io/** - Input/output operations for CD/DVD access and filesystem interactions
- **game/** - Game-specific logic including the state machine and initialization sequences
- **platform/** - Platform-specific code abstraction layer
  - **ps2/** - Original PlayStation 2 implementations for reference
  - **windows/** - Windows platform implementations for PC compatibility
- **include/** - Header files and shared definitions
- **extracted/** - Untranslated fully decompiled C code from the original game binary

## Objectives
- **Organization**: Categorize and organize 4073 decompiled functions into logical modules
- **Refactoring**: Clean up and improve code readability while maintaining functional accuracy
- **Documentation**: Document function purposes, data structures, and system architecture
- **Platform Abstraction**: Create a cross-platform codebase that runs on both PS2 (reference) and Windows
- **Preservation**: Maintain accurate preservation of the original game's behavior and functionality

## Contributing

### Tracking Progress

We use a JSDoc-style tagging system to track which functions have been categorized and refactored.

**Quick example:**

### Original function
Do not edit other then to tag

```c
/** @category: core/entry @status: complete @author: yourname */
void func_00100230() {
    // Refactored function code
}
```

### Refactored Code
```c
/** 
 * @category core/entry
 * @status complete
 * @author caprado
 * @original func_00100230
 * @address 0x00100230
 * @description Main entry point that initializes the system and returns a status code
 * @windows_compatibility high
 */
int main_entry_point(void) {
    int result;
    
    // Call system initialization function
    result = initialize_system();

    return (result > 0) ? 1 : 0;
}
```

## Getting Involved
This project is open-source, and welcome contributions from anyone interested in video games, reverse engineering, or software preservation. If you'd like to contribute or have suggestions, please reach out.

## Disclaimer
This project is for educational and preservation purposes only. It does not endorse piracy, and participants are advised to ensure they own legal copies of the game and comply with all relevant copyright laws.

## Acknowledgments
- Capcom for creating "Resident Evil Outbreak File #2"
- The emulation and reverse-engineering communities for providing the tools and knowledge necessary to undertake this project
