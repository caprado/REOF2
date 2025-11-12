void func_001886c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = ((unsigned)a0 < (unsigned)2) ? 1 : 0;                  // 0x001886c0: sltiu $v0, $a0, 2
    if (v0 != 0) return;  // Branch to 0x1886d4                 // 0x001886c4: bnez $v0, 0x1886d4
    v1 = 0x24;                                                  // 0x001886c8: addiu $v1, $zero, 0x24
    return;                                                     // 0x001886cc: jr $ra
}