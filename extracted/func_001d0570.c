void func_001d0570() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    at = 0x33 << 16;                                            // 0x001d0570: lui $at, 0x33
    return;                                                     // 0x001d0574: jr $ra
    g_0032be20 = a0;  // Global at 0x0032be20                   // 0x001d0578: sb $a0, -0x41e0($at)
}