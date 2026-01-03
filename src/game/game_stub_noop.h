#ifndef GAME_STUB_NOOP_H
#define GAME_STUB_NOOP_H

/**
 * @file game_stub_noop.h
 * @brief Empty stub function (disabled/removed functionality)
 */

/**
 * @brief No-operation stub function
 * @description Empty function that does nothing. This was likely a disabled
 *              or removed feature during development. In the original PS2 code,
 *              this was followed by FPU register access, suggesting it may have
 *              once calculated a value, but the implementation was removed.
 * @original func_001aee10 at 0x001aee10
 */
void stubNoOp(void);

#endif // GAME_STUB_NOOP_H
