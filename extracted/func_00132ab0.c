void func_00132ab0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00132ab0: addiu $sp, $sp, -0x10
    if (a0 != 0) goto label_0x132ad0;                           // 0x00132ab4: bnez $a0, 0x132ad0
    a0 = 0x22 << 16;                                            // 0x00132abc: lui $a0, 0x22
    a0 = &str_00223cd0;  // "E02080831 ADXT_IsReadyPlayStart: parameter error" // 0x00132ac4: addiu $a0, $a0, 0x3cd0
    return func_00127de8();  // Tail call                        // 0x00132ac8: j 0x127d90
    sp = sp + 0x10;                                             // 0x00132acc: addiu $sp, $sp, 0x10
label_0x132ad0:
    str_00223d40 = a1;  // Global at 0x00223d40                 // 0x00132ad4: sb $a1, 0x70($a0)
    return;                                                     // 0x00132ad8: jr $ra
    sp = sp + 0x10;                                             // 0x00132adc: addiu $sp, $sp, 0x10
}