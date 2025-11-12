void func_0012c5f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = 0x20 << 16;                                            // 0x0012c5f0: lui $v1, 0x20
    v1 = v1 + -0x1c80;                                          // 0x0012c5f4: addiu $v1, $v1, -0x1c80
    v0 = g_001fe380;  // Global at 0x001fe380                   // 0x0012c5f8: lw $v0, 0($v1)
    v0 = v0 + -1;                                               // 0x0012c5fc: addiu $v0, $v0, -1
    return;                                                     // 0x0012c600: jr $ra
    g_001fe380 = v0;  // Global at 0x001fe380                   // 0x0012c604: sw $v0, 0($v1)
}