void func_001afb40() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    at = 0x31 << 16;                                            // 0x001afb40: lui $at, 0x31
    return;                                                     // 0x001afb44: jr $ra
    v0 = g_003137d2;  // Global at 0x003137d2                   // 0x001afb48: lbu $v0, 0x37d2($at)
}