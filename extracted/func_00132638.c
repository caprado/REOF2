void func_00132638() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00132638: addiu $sp, $sp, -0x10
    if (a0 != 0) goto label_0x132658;                           // 0x0013263c: bnez $a0, 0x132658
    a0 = 0x22 << 16;                                            // 0x00132644: lui $a0, 0x22
    a0 = &str_00223ab8;  // "E02080834 ADXT_GetNumSctIbuf: parameter error" // 0x0013264c: addiu $a0, $a0, 0x3ab8
    return func_00127de8();  // Tail call                        // 0x00132650: j 0x127d90
    sp = sp + 0x10;                                             // 0x00132654: addiu $sp, $sp, 0x10
label_0x132658:
    g_00223af6 = a1;  // Global at 0x00223af6                   // 0x0013265c: sh $a1, 0x3e($a0)
    return;                                                     // 0x00132660: jr $ra
    sp = sp + 0x10;                                             // 0x00132664: addiu $sp, $sp, 0x10
}