void func_001241d8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a0 = 0x1f << 16;                                            // 0x001241d8: lui $a0, 0x1f
    a0 = a0 + 0x1f3c;                                           // 0x001241e0: addiu $a0, $a0, 0x1f3c
    v1 = g_001f1f3c;  // Global at 0x001f1f3c                   // 0x001241e4: lw $v1, 0($a0)
    v1 = v1 + 1;                                                // 0x001241e8: addiu $v1, $v1, 1
    return;                                                     // 0x001241ec: jr $ra
    g_001f1f3c = v1;  // Global at 0x001f1f3c                   // 0x001241f0: sw $v1, 0($a0)
}