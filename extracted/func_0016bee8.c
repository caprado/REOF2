void func_0016bee8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0016bee8: addiu $sp, $sp, -0x10
    func_00171200();  // 171200                                // 0x0016bef0: jal 0x171200
    /* nop */                                                   // 0x0016bef4: nop 
    func_0016bfc8();  // 16bfc8                                // 0x0016bef8: jal 0x16bfc8
    /* nop */                                                   // 0x0016befc: nop 
    if (v0 == 0) goto label_0x16bf28;                           // 0x0016bf00: beqz $v0, 0x16bf28
    a1 = 0x26 << 16;                                            // 0x0016bf04: lui $a1, 0x26
label_0x16bf08:
    /* nop */                                                   // 0x0016bf08: nop 
    /* nop */                                                   // 0x0016bf0c: nop 
    /* nop */                                                   // 0x0016bf10: nop 
    /* nop */                                                   // 0x0016bf14: nop 
    /* nop */                                                   // 0x0016bf18: nop 
    goto label_0x16bf08;                                        // 0x0016bf1c: b 0x16bf08
    /* nop */                                                   // 0x0016bf20: nop 
    /* nop */                                                   // 0x0016bf24: nop 
label_0x16bf28:
    a0 = 8;                                                     // 0x0016bf28: addiu $a0, $zero, 8
    func_0015ad38();  // 15ad38                                // 0x0016bf2c: jal 0x15ad38
    a1 = a1 + 0x37a8;                                           // 0x0016bf30: addiu $a1, $a1, 0x37a8
    if (a0 == 0) goto label_0x16bf70;                           // 0x0016bf38: beqz $a0, 0x16bf70
    v0 = 0xff03 << 16;                                          // 0x0016bf40: lui $v0, 0xff03
    v1 = 0xff00 << 16;                                          // 0x0016bf44: lui $v1, 0xff00
    v0 = v0 | 0xff05;                                           // 0x0016bf48: ori $v0, $v0, 0xff05
    a1 = 0xff00 << 16;                                          // 0x0016bf4c: lui $a1, 0xff00
    v0 = a0 ^ v0;                                               // 0x0016bf50: xor $v0, $a0, $v0
    v1 = v1 | 0xf01;                                            // 0x0016bf58: ori $v1, $v1, 0xf01
    a1 = a1 | 0xf13;                                            // 0x0016bf5c: ori $a1, $a1, 0xf13
    if (v0 != 0) a1 = v1;                                       // 0x0016bf60: movn $a1, $v1, $v0
    return func_00169940();  // Tail call                        // 0x0016bf64: j 0x1698d0
    sp = sp + 0x10;                                             // 0x0016bf68: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0016bf6c: nop 
label_0x16bf70:
    a0 = 0x26 << 16;                                            // 0x0016bf70: lui $a0, 0x26
    a0 = a0 + 0x77e8;                                           // 0x0016bf78: addiu $a0, $a0, 0x77e8
    func_00107c70();  // 107c70                                // 0x0016bf7c: jal 0x107c70
    a2 = 0x24;                                                  // 0x0016bf80: addiu $a2, $zero, 0x24
    a0 = 0x26 << 16;                                            // 0x0016bf84: lui $a0, 0x26
    a0 = a0 + 0x7810;                                           // 0x0016bf88: addiu $a0, $a0, 0x7810
    func_00107c70();  // 107c70                                // 0x0016bf90: jal 0x107c70
    a2 = 8;                                                     // 0x0016bf94: addiu $a2, $zero, 8
    a0 = 0x26 << 16;                                            // 0x0016bf98: lui $a0, 0x26
    a0 = a0 + 0x7818;                                           // 0x0016bf9c: addiu $a0, $a0, 0x7818
    func_00107c70();  // 107c70                                // 0x0016bfa4: jal 0x107c70
    a2 = 0x40;                                                  // 0x0016bfa8: addiu $a2, $zero, 0x40
    v1 = 0x21 << 16;                                            // 0x0016bfac: lui $v1, 0x21
    g_002157b8 = 0;  // Global at 0x002157b8                    // 0x0016bfb8: sw $zero, 0x57b8($v1)
    return;                                                     // 0x0016bfbc: jr $ra
    sp = sp + 0x10;                                             // 0x0016bfc0: addiu $sp, $sp, 0x10
}