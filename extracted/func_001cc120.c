void func_001cc120() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    at = 0x32 << 16;                                            // 0x001cc120: lui $at, 0x32
    return;                                                     // 0x001cc124: jr $ra
    g_00325920 = 0;  // Global at 0x00325920                    // 0x001cc128: sb $zero, 0x5920($at)
}