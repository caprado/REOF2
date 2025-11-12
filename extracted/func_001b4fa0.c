void func_001b4fa0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = 1;                                                     // 0x001b4fa0: addiu $v1, $zero, 1
    at = 0x2b << 16;                                            // 0x001b4fa4: lui $at, 0x2b
    g_002ac540 = v1;  // Global at 0x002ac540                   // 0x001b4fa8: sw $v1, -0x3ac0($at)
    at = 0x2b << 16;                                            // 0x001b4fac: lui $at, 0x2b
    a0 = g_002ac578;  // Global at 0x002ac578                   // 0x001b4fb0: lw $a0, -0x3a88($at)
    at = 0x2b << 16;                                            // 0x001b4fb4: lui $at, 0x2b
    v1 = g_002ac5dc;  // Global at 0x002ac5dc                   // 0x001b4fb8: lw $v1, -0x3a24($at)
    at = 0x2b << 16;                                            // 0x001b4fbc: lui $at, 0x2b
    g_002ac58c = a0;  // Global at 0x002ac58c                   // 0x001b4fc0: sw $a0, -0x3a74($at)
    at = 0x2b << 16;                                            // 0x001b4fc4: lui $at, 0x2b
    return;                                                     // 0x001b4fc8: jr $ra
    g_002ac590 = v1;  // Global at 0x002ac590                   // 0x001b4fcc: sw $v1, -0x3a70($at)
}