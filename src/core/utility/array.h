#ifndef ARRAY_H
#define ARRAY_H

#include <stdint.h>

void clearPointerArray(void);
void removeFromPointerArray(uintptr_t addressToRemove);
void callAllFunctionPointers(void);
void addToPointerArray(uintptr_t addressToAdd);
int32_t getPointerArrayCount(void);
uintptr_t getPointerArrayEntry(int32_t index);

#endif
