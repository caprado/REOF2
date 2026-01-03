void func_00132448() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00132448: addiu $sp, $sp, -0x10
    if (a0 != 0) goto label_0x132468;                           // 0x0013244c: bnez $a0, 0x132468
    a0 = 0x22 << 16;                                            // 0x00132454: lui $a0, 0x22
    func_00127d90();  // 127d90                                // 0x00132458: jal 0x127d90
    a0 = &str_002239c8;  // "E02080823 ADXT_SetOutVol: parameter error" // 0x0013245c: addiu $a0, $a0, 0x39c8
    goto label_0x13246c;                                        // 0x00132460: b 0x13246c
label_0x132468:
    v0 = g_00223a0e;  // Global at 0x00223a0e                   // 0x00132468: lh $v0, 0x46($a0)
label_0x13246c:
    return;                                                     // 0x00132470: jr $ra
    sp = sp + 0x10;                                             // 0x00132474: addiu $sp, $sp, 0x10
}