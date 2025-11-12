void func_001bb060() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    at = 0x31 << 16;                                            // 0x001bb060: lui $at, 0x31
    g_00308050 = 0;  // Global at 0x00308050                    // 0x001bb064: sb $zero, -0x7fb0($at)
    at = 0x31 << 16;                                            // 0x001bb068: lui $at, 0x31
    return;                                                     // 0x001bb06c: jr $ra
    g_00308054 = 0;  // Global at 0x00308054                    // 0x001bb070: sw $zero, -0x7fac($at)
}