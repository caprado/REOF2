void func_00132a50() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00132a50: addiu $sp, $sp, -0x10
    if (a0 != 0) goto label_0x132a70;                           // 0x00132a54: bnez $a0, 0x132a70
    a0 = 0x22 << 16;                                            // 0x00132a5c: lui $a0, 0x22
    a0 = &str_00223c70;  // "E02080833 ADXT_GetInputSj: parameter error" // 0x00132a64: addiu $a0, $a0, 0x3c70
    return func_00127de8();  // Tail call                        // 0x00132a68: j 0x127d90
    sp = sp + 0x10;                                             // 0x00132a6c: addiu $sp, $sp, 0x10
label_0x132a70:
    g_00223cdc = a1;  // Global at 0x00223cdc                   // 0x00132a74: sb $a1, 0x6c($a0)
    return;                                                     // 0x00132a78: jr $ra
    sp = sp + 0x10;                                             // 0x00132a7c: addiu $sp, $sp, 0x10
}