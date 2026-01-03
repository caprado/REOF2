void func_00160bc8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00160bc8: addiu $sp, $sp, -0x10
    s0 = 1;                                                     // 0x00160bd0: addiu $s0, $zero, 1
    if (a0 == 0) goto label_0x160bf0;                           // 0x00160bd4: beqz $a0, 0x160bf0
    if (a0 == s0) goto label_0x160c04;                          // 0x00160bdc: beq $a0, $s0, 0x160c04
    goto label_0x160bf8;                                        // 0x00160be4: b 0x160bf8
    a0 = 0x23 << 16;                                            // 0x00160be8: lui $a0, 0x23
    /* nop */                                                   // 0x00160bec: nop 
label_0x160bf0:
    goto label_0x160c00;                                        // 0x00160bf0: b 0x160c00
label_0x160bf8:
    func_00163410();  // 163410                                // 0x00160bf8: jal 0x163410
    a0 = &str_002281a0;  // "E201195: mwPlyFxCnvFrmARGB8888: handle is invalid." // 0x00160bfc: addiu $a0, $a0, -0x7e60
label_0x160c00:
label_0x160c04:
    return;                                                     // 0x00160c0c: jr $ra
    sp = sp + 0x10;                                             // 0x00160c10: addiu $sp, $sp, 0x10
}