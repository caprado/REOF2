void func_001aced0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    at = 0x2a << 16;                                            // 0x001aced0: lui $at, 0x2a
    g_002a522c = a0;  // Global at 0x002a522c                   // 0x001aced4: sw $a0, 0x522c($at)
    at = 0x2a << 16;                                            // 0x001aced8: lui $at, 0x2a
    g_002a5230 = a1;  // Global at 0x002a5230                   // 0x001acedc: sw $a1, 0x5230($at)
    at = 0x2a << 16;                                            // 0x001acee0: lui $at, 0x2a
    g_002a5210 = 0;  // Global at 0x002a5210                    // 0x001acee4: sw $zero, 0x5210($at)
    at = 0x2a << 16;                                            // 0x001acee8: lui $at, 0x2a
    g_002a5224 = 0;  // Global at 0x002a5224                    // 0x001aceec: sw $zero, 0x5224($at)
    at = 0x2a << 16;                                            // 0x001acef0: lui $at, 0x2a
    return;                                                     // 0x001acef4: jr $ra
    g_002a5228 = 0;  // Global at 0x002a5228                    // 0x001acef8: sw $zero, 0x5228($at)
}