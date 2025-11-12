void func_00188758() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x28 << 16;                                            // 0x00188758: lui $v0, 0x28
    a1 = v0 + -0x2fb8;                                          // 0x00188760: addiu $a1, $v0, -0x2fb8
    /* nop */                                                   // 0x00188764: nop 
    v0 = g_0027d048;  // Global at 0x0027d048                   // 0x00188768: lw $v0, 0($a1)
    /* beqzl $v0, 0x188788 */                                   // 0x0018876c: beqzl $v0, 0x188788
    v1 = v1 + 1;                                                // 0x00188770: addiu $v1, $v1, 1
    v0 = g_0027d04c;  // Global at 0x0027d04c                   // 0x00188774: lw $v0, 4($a1)
    if (v0 != a0) return;  // Branch to 0x188788                // 0x00188778: bnel $v0, $a0, 0x188788
    v1 = v1 + 1;                                                // 0x0018877c: addiu $v1, $v1, 1
    return;                                                     // 0x00188780: jr $ra
}