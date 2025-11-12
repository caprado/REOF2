void func_0013c6a8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    if (a0 == 0) return;  // Branch to 0x13c6c8                 // 0x0013c6a8: beqz $a0, 0x13c6c8
    v0 = 1;                                                     // 0x0013c6ac: addiu $v0, $zero, 1
    if (a0 != v0) return;  // Branch to 0x13c6cc                // 0x0013c6b0: bne $a0, $v0, 0x13c6cc
    v1 = 0x20 << 16;                                            // 0x0013c6b4: lui $v1, 0x20
    v0 = 0x20 << 16;                                            // 0x0013c6b8: lui $v0, 0x20
    return;                                                     // 0x0013c6bc: jr $ra
    g_002044a0 = a0;  // Global at 0x002044a0                   // 0x0013c6c0: sw $a0, 0x44a0($v0)
}