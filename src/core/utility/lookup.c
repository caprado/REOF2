#include <stdint.h>

// Table base address (original: 0x250000 - 0x3740 = 0x24C8C0)
#define LOOKUP_TABLE_BASE 0x0024C8C0

/**
 * @category utility/lookup
 * @status complete
 * @author caprado
 * @original func_00116598
 * @address 0x00116598
 * @description Looks up an entry in a table (likely function pointers or string pointers).
 *              Takes an index, multiplies by 4, and returns the value at that table offset.
 * @windows_compatibility medium
 */
void* lookupTableEntry(int index) {
    // Calculate table address: base + (index * 4)
    // Original calculation: 0x24C8C0 + (index << 2)
    uintptr_t tableAddr = LOOKUP_TABLE_BASE + (index * 4);

    // Load and return the value from the table
    // This could be a function pointer or string pointer
    void* entry = *(void**)tableAddr;

    return entry;
}
