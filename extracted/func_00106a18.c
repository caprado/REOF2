void func_00106a18() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00106a18: addiu $sp, $sp, -0x30
    if (s0 == 0) goto label_0x106a80;                           // 0x00106a3c: beqz $s0, 0x106a80
    s3 = 0x22 << 16;                                            // 0x00106a44: lui $s3, 0x22
    func_0010ab20();  // 10ab20                                // 0x00106a48: jal 0x10ab20
    a1 = s3 + 0x190;                                            // 0x00106a4c: addiu $a1, $s3, 0x190
    a1 = 0x22 << 16;                                            // 0x00106a50: lui $a1, 0x22
    a1 = a1 + 0x180;                                            // 0x00106a54: addiu $a1, $a1, 0x180
    if (v0 == 0) goto label_0x106a70;                           // 0x00106a58: beqz $v0, 0x106a70
    func_0010ab20();  // 10ab20                                // 0x00106a60: jal 0x10ab20
    /* nop */                                                   // 0x00106a64: nop 
    if (v0 != 0) goto label_0x106a88;                           // 0x00106a68: bnez $v0, 0x106a88
label_0x106a70:
    *(uint32_t*)((s1) + 0x34) = s0;                             // 0x00106a70: sw $s0, 0x34($s1)
    goto label_0x106a84;                                        // 0x00106a74: b 0x106a84
    *(uint32_t*)((s1) + 0x30) = s2;                             // 0x00106a78: sw $s2, 0x30($s1)
    /* nop */                                                   // 0x00106a7c: nop 
label_0x106a80:
    s3 = 0x22 << 16;                                            // 0x00106a80: lui $s3, 0x22
label_0x106a84:
    v0 = s3 + 0x190;                                            // 0x00106a84: addiu $v0, $s3, 0x190
label_0x106a88:
    return;                                                     // 0x00106a9c: jr $ra
    sp = sp + 0x30;                                             // 0x00106aa0: addiu $sp, $sp, 0x30
}