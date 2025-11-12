void func_00126c40() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = a2 + a3;                                               // 0x00126c40: addu $v1, $a2, $a3
    if (a0 != 0) return;  // Branch to 0x126c70                 // 0x00126c44: bnez $a0, 0x126c70
    v0 = a1 + v1;                                               // 0x00126c4c: addu $v0, $a1, $v1
    /* beqzl $a3, 0x126c58 */                                   // 0x00126c50: beqzl $a3, 0x126c58
    /* break (trap) */                                          // 0x00126c54: break 0, 7
    v0 = v0 + 0x21;                                             // 0x00126c58: addiu $v0, $v0, 0x21
    /* divide: v0 / a3 -> hi:lo */                              // 0x00126c5c: divu $zero, $v0, $a3
    /* mflo $v0 */                                              // 0x00126c60
    /* multiply: v0 * a3 -> hi:lo */                            // 0x00126c64: mult $ac2, $v0, $a3
    return;                                                     // 0x00126c68: jr $ra
    v0 = v0 - a2;                                               // 0x00126c6c: subu $v0, $v0, $a2
}