void func_00188568() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x28 << 16;                                            // 0x00188568: lui $v0, 0x28
    a0 = v0 + -0x2fb8;                                          // 0x00188570: addiu $a0, $v0, -0x2fb8
    /* nop */                                                   // 0x00188574: nop 
    v0 = g_0027d048;  // Global at 0x0027d048                   // 0x00188578: lw $v0, 0($a0)
    /* bnezl $v0, 0x18858c */                                   // 0x0018857c: bnezl $v0, 0x18858c
    v1 = v1 + 1;                                                // 0x00188580: addiu $v1, $v1, 1
    return;                                                     // 0x00188584: jr $ra
}