void func_001329e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001329e0: addiu $sp, $sp, -0x10
    if (a0 != 0) goto label_0x132a00;                           // 0x001329e4: bnez $a0, 0x132a00
    a0 = 0x22 << 16;                                            // 0x001329ec: lui $a0, 0x22
    a0 = &str_00223c10;  // "E02080829 ADXT_GetLpCnt: parameter error" // 0x001329f4: addiu $a0, $a0, 0x3c10
    return func_00127de8();  // Tail call                        // 0x001329f8: j 0x127d90
    sp = sp + 0x10;                                             // 0x001329fc: addiu $sp, $sp, 0x10
label_0x132a00:
    g_00223c7a = 0;  // Global at 0x00223c7a                    // 0x00132a04: sh $zero, 0x6a($a0)
    str_00223c70 = 0;  // Global at 0x00223c70                  // 0x00132a08: sh $zero, 0x60($a0)
    g_00223c74 = 0;  // Global at 0x00223c74                    // 0x00132a0c: sw $zero, 0x64($a0)
    g_00223c78 = 0;  // Global at 0x00223c78                    // 0x00132a10: sh $zero, 0x68($a0)
    return;                                                     // 0x00132a14: jr $ra
    sp = sp + 0x10;                                             // 0x00132a18: addiu $sp, $sp, 0x10
}