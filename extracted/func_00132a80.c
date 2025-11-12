void func_00132a80() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00132a80: addiu $sp, $sp, -0x10
    if (a0 != 0) goto label_0x132aa0;                           // 0x00132a84: bnez $a0, 0x132aa0
    a0 = 0x22 << 16;                                            // 0x00132a8c: lui $a0, 0x22
    func_00127de8();  // 0x127d90                                // 0x00132a90: jal 0x127d90
    a0 = &str_00223ca0;  // "E02080830 ADXT_SetWaitPlayStart: parameter error" // 0x00132a94: addiu $a0, $a0, 0x3ca0
    goto label_0x132aa4;                                        // 0x00132a98: b 0x132aa4
label_0x132aa0:
    v0 = g_00223cb4;  // Global at 0x00223cb4                   // 0x00132aa0: lw $v0, 0x14($a0)
label_0x132aa4:
    return;                                                     // 0x00132aa8: jr $ra
    sp = sp + 0x10;                                             // 0x00132aac: addiu $sp, $sp, 0x10
}