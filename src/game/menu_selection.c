#include <stdint.h>
#include <stdbool.h>

// Unclassified function
extern void func_00189860(uint8_t menuId, uint16_t* paramPtr, uint8_t* typePtr, uint8_t type);

// Menu item structure (24 bytes per entry)
typedef struct MenuItem {
    uint8_t type;           // offset 0 - Item type (1 = selectable)
    uint8_t field1;         // offset 1
    uint8_t field2;         // offset 2
    uint8_t field3;         // offset 3
    uint8_t field4;         // offset 4
    uint8_t field5;         // offset 5
    uint8_t menuId;         // offset 6 - Menu/action ID
    uint8_t padding[9];     // offset 7-15
    void* dataPtr;          // offset 0x10 - Data pointer
    uint32_t field14;       // offset 0x14
} MenuItem;

// Menu item array (need to be replaced with GameData)
#define MENU_ITEMS_ADDR 0x0029af20
static MenuItem* g_menuItems = (MenuItem*)MENU_ITEMS_ADDR;

/**
 * @category game/menu
 * @status complete
 * @author caprado
 * @original func_001ba060
 * @address 0x001ba060
 * @description Menu selection handler. Processes menu item selection,
 *              validates menu item, and calls handler with parameters.
 * @windows_compatibility high
 */
void handleMenuSelection(uint8_t menuIndex, uint8_t* paramData) {
    // Calculate menu item offset: menuIndex * 24
    // Original: (menuIndex * 2 + menuIndex) * 8
    uint32_t offset = menuIndex * 24;

    // Get menu item from array
    MenuItem* item = (MenuItem*)((uintptr_t)g_menuItems + offset);

    // Check if menu item has data
    if (item->dataPtr == NULL) {
        return;
    }

    // Check if item type is selectable (type == 1)
    if (item->type != 1) {
        return;
    }

    // Prepare selection parameters
    uint8_t selectionType = 3;  // Selection type constant

    // Combine parameter bytes
    // Original: (paramData[1] << 1) | (paramData[0] & 1)
    uint16_t combinedParam = ((paramData[1] << 1) | (paramData[0] & 1));

    // Call menu action handler
    func_00189860(
        item->menuId,           // Menu/action ID
        &combinedParam,         // Combined parameter
        &selectionType,         // Selection type (3)
        2                       // Constant parameter
    );
}
