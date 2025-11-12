void func_001bfbc0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    at = 0x31 << 16;                                            // 0x001bfbc0: lui $at, 0x31
    g_0031608c = 0;  // Global at 0x0031608c                    // 0x001bfbc4: sw $zero, 0x608c($at)
    at = 0x31 << 16;                                            // 0x001bfbc8: lui $at, 0x31
    return;                                                     // 0x001bfbcc: jr $ra
    g_003160a0 = 0;  // Global at 0x003160a0                    // 0x001bfbd0: sw $zero, 0x60a0($at)
}