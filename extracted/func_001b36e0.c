void func_001b36e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    at = 0x31 << 16;                                            // 0x001b36e0: lui $at, 0x31
    v1 = g_00313804;  // Global at 0x00313804                   // 0x001b36e4: lhu $v1, 0x3804($at)
    if (v1 == 0) goto label_0x1b36fc;                           // 0x001b36e8: beqz $v1, 0x1b36fc
    at = 0x2b << 16;                                            // 0x001b36ec: lui $at, 0x2b
    g_002ac440 = a0;  // Global at 0x002ac440                   // 0x001b36f0: sw $a0, -0x3bc0($at)
    at = 0x2b << 16;                                            // 0x001b36f4: lui $at, 0x2b
    g_002ac444 = a1;  // Global at 0x002ac444                   // 0x001b36f8: sw $a1, -0x3bbc($at)
label_0x1b36fc:
    return;                                                     // 0x001b36fc: jr $ra
    /* nop */                                                   // 0x001b3700: nop 
}