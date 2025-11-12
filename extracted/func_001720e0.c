void func_001720e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001720e0: addiu $sp, $sp, -0x10
    goto label_0x1720f8;                                        // 0x001720ec: j 0x1720f8
    sp = sp + 0x10;                                             // 0x001720f0: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x001720f4: nop 
label_0x1720f8:
    v0 = 0x23 << 16;                                            // 0x001720f8: lui $v0, 0x23
    v1 = 0x5a5a << 16;                                          // 0x001720fc: lui $v1, 0x5a5a
    a0 = g_002292d4;  // Global at 0x002292d4                   // 0x00172100: lw $a0, -0x6d2c($v0)
    sp = sp + -0x10;                                            // 0x00172104: addiu $sp, $sp, -0x10
    v1 = v1 | 0x5a5a;                                           // 0x00172108: ori $v1, $v1, 0x5a5a
    if (a0 == v1) goto label_0x172130;                          // 0x0017210c: beq $a0, $v1, 0x172130
    a1 = 0xff00 << 16;                                          // 0x00172114: lui $a1, 0xff00
    a1 = a1 | 0x201;                                            // 0x00172120: ori $a1, $a1, 0x201
    return func_00169940();  // Tail call                        // 0x00172124: j 0x1698d0
    sp = sp + 0x10;                                             // 0x00172128: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0017212c: nop 
label_0x172130:
    return;                                                     // 0x00172134: jr $ra
    sp = sp + 0x10;                                             // 0x00172138: addiu $sp, $sp, 0x10
}