void func_0016f9b8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0016f9b8: addiu $sp, $sp, -0x10
    if (v0 == 0) goto label_0x16f9e8;                           // 0x0016f9c4: beqz $v0, 0x16f9e8
    v1 = ((unsigned)v0 < (unsigned)-1) ? 1 : 0;                 // 0x0016f9c8: sltiu $v1, $v0, -1
    if (v1 == 0) goto label_0x16f9e0;                           // 0x0016f9cc: beqz $v1, 0x16f9e0
    v0 = ((unsigned)v0 < (unsigned)-3) ? 1 : 0;                 // 0x0016f9d4: sltiu $v0, $v0, -3
    if (v0 == 0) goto label_0x16f9ec;                           // 0x0016f9d8: beqz $v0, 0x16f9ec
    /* nop */                                                   // 0x0016f9dc: nop 
label_0x16f9e0:
    return func_00169940();  // Tail call                        // 0x0016f9e0: j 0x1698d0
    sp = sp + 0x10;                                             // 0x0016f9e4: addiu $sp, $sp, 0x10
label_0x16f9e8:
label_0x16f9ec:
    return;                                                     // 0x0016f9ec: jr $ra
    sp = sp + 0x10;                                             // 0x0016f9f0: addiu $sp, $sp, 0x10
}