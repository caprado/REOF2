# Resident Evil Outbreak File #2 Decompilation Project

![Decompilation Progress](.github/data/badge.svg)

## Project Description
This project is dedicated to the decompilation of the PlayStation 2 game "Resident Evil Outbreak File #2". Currently, the project involves organizing the raw assembly code extracted from the game and recompiling it back into readable and structured C code. This effort aims to facilitate a deeper understanding of the game's architecture and coding practices, and eventually contribute to the preservation and study of video game software.

## Current Status
The project has successfully decompiled the game binary into C code. Current focus:
- Organizing and categorizing the decompiled functions into logical modules
- Refactoring and cleaning up the extracted C code for readability
- Documenting function purposes and data structures
- Creating a platform abstraction layer for cross-platform compatibility
- **4073 functions total** to categorize and refactor from the extracted directory

All functions have been decompiled to C, including strings and text data sectors.

## Project Structure

```
src/
├── core/
│   ├── entry.c
│   ├── thread.c
│   └── memory.c
├── io/
│   ├── cdrom.c
│   └── filesystem.c
├── game/
│   ├── state.c
│   └── init.c
├── platform/
│   ├── ps2/
│   └── windows/
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

We use a JSDoc-style tagging system to track which functions have been categorized and refactored. See [docs/TAGGING_GUIDE.md](docs/TAGGING_GUIDE.md) for details.

**Quick example:**
```c
/** @category: core/entry @status: complete @author: yourname */
void func_00100230() {
    // Refactored function code
}
```

### Running Progress Tracker Locally

```bash
# View current progress
python tools/track_progress.py

# Generate detailed reports
python tools/track_progress.py --json progress.json --report progress.txt

# Generate badge
python tools/generate_badge.py --json progress.json --output badge.svg
```

## Getting Involved
This project is open-source, and welcome contributions from anyone interested in video games, reverse engineering, or software preservation. If you'd like to contribute or have suggestions, please reach out via our project repository.

## Disclaimer
This project is for educational and preservation purposes only. It does not endorse piracy, and participants are advised to ensure they own legal copies of the game and comply with all relevant copyright laws.

## Acknowledgments
- Capcom for creating "Resident Evil Outbreak File #2"
- The emulation and reverse-engineering communities for providing the tools and knowledge necessary to undertake this project

## License
This project is released under the [MIT License](LICENSE).
