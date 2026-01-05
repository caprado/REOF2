void func_001323f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001323f0: addiu $sp, $sp, -0x10
    if (s0 != 0) goto label_0x132420;                           // 0x001323fc: bnez $s0, 0x132420
    a0 = 0x22 << 16;                                            // 0x00132404: lui $a0, 0x22
    a0 = &str_00223998;  // "E02080871 ADXT_GetOutBalance: parameter error" // 0x00132410: addiu $a0, $a0, 0x3998
    return func_00127de8();  // Tail call                        // 0x00132414: j 0x127d90
    sp = sp + 0x10;                                             // 0x00132418: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0013241c: nop 
label_0x132420:
    func_0012c4e8();  // 12c4e8                                // 0x00132420: jal 0x12c4e8
    a0 = *(int32_t*)((s0) + 0xc);                               // 0x00132424: lw $a0, 0xc($s0)
    func_0012c550();  // 12c550                                // 0x00132428: jal 0x12c550
    a0 = *(int32_t*)((s0) + 0xc);                               // 0x0013242c: lw $a0, 0xc($s0)
    *(uint16_t*)((s0) + 0x46) = v0;                             // 0x00132430: sh $v0, 0x46($s0)
    return;                                                     // 0x0013243c: jr $ra
    sp = sp + 0x10;                                             // 0x00132440: addiu $sp, $sp, 0x10
}