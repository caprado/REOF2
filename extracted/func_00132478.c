void func_00132478() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00132478: addiu $sp, $sp, -0x20
    if (s1 != 0) goto label_0x1324b0;                           // 0x00132488: bnez $s1, 0x1324b0
    a0 = 0x22 << 16;                                            // 0x00132490: lui $a0, 0x22
    a0 = &str_002239f8;  // "E02080824 ADXT_GetOutVol: parameter error" // 0x0013249c: addiu $a0, $a0, 0x39f8
    return func_00127de8();  // Tail call                        // 0x001324a4: j 0x127d90
    sp = sp + 0x20;                                             // 0x001324a8: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x001324ac: nop 
label_0x1324b0:
    *(uint16_t*)((s1) + 0x40) = a1;                             // 0x001324b0: sh $a1, 0x40($s1)
    a0 = *(int32_t*)((s1) + 4);                                 // 0x001324b4: lw $a0, 4($s1)
    func_0012d5b8();  // 12d5b8                                // 0x001324b8: jal 0x12d5b8
    s0 = *(int32_t*)((s1) + 0xc);                               // 0x001324bc: lw $s0, 0xc($s1)
    a1 = *(int16_t*)((s1) + 0x40);                              // 0x001324c0: lh $a1, 0x40($s1)
    a1 = a1 + v0;                                               // 0x001324d0: addu $a1, $a1, $v0
    return func_0012c4d0();  // Tail call                        // 0x001324d8: j 0x12c4b8
    sp = sp + 0x20;                                             // 0x001324dc: addiu $sp, $sp, 0x20
    sp = sp + -0x10;                                            // 0x001324e0: addiu $sp, $sp, -0x10
    if (a0 != 0) goto label_0x132500;                           // 0x001324e4: bnez $a0, 0x132500
    a0 = 0x22 << 16;                                            // 0x001324ec: lui $a0, 0x22
    func_00127d90();  // 127d90                                // 0x001324f0: jal 0x127d90
    a0 = &str_00223a28;  // "E02080840 ADXT_SetSvrFreq: parameter error" // 0x001324f4: addiu $a0, $a0, 0x3a28
    goto label_0x132504;                                        // 0x001324f8: b 0x132504
label_0x132500:
    v0 = g_00223a68;  // Global at 0x00223a68                   // 0x00132500: lh $v0, 0x40($a0)
label_0x132504:
    return;                                                     // 0x00132508: jr $ra
    sp = sp + 0x10;                                             // 0x0013250c: addiu $sp, $sp, 0x10
}