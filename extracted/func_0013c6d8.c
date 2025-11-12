void func_0013c6d8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0013c6d8: addiu $sp, $sp, -0x10
    if (a0 != 0) return;  // Branch to 0x13c700                 // 0x0013c6e0: bnez $a0, 0x13c700
    v0 = 0x20 << 16;                                            // 0x0013c6ec: lui $v0, 0x20
    g_002044a8 = 0;  // Global at 0x002044a8                    // 0x0013c6f0: sb $zero, 0x44a8($v0)
    return;                                                     // 0x0013c6f4: jr $ra
    sp = sp + 0x10;                                             // 0x0013c6f8: addiu $sp, $sp, 0x10
}