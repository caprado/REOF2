void func_00169d60() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00169d60: addiu $sp, $sp, -0x10
    func_00169dd8();  // 0x169dd0                                // 0x00169d68: jal 0x169dd0
    /* nop */                                                   // 0x00169d6c: nop 
    if (v0 == 0) goto label_0x169d98;                           // 0x00169d70: beqz $v0, 0x169d98
    a1 = 0x26 << 16;                                            // 0x00169d74: lui $a1, 0x26
label_0x169d78:
    /* nop */                                                   // 0x00169d78: nop 
    /* nop */                                                   // 0x00169d7c: nop 
    /* nop */                                                   // 0x00169d80: nop 
    /* nop */                                                   // 0x00169d84: nop 
    /* nop */                                                   // 0x00169d88: nop 
    goto label_0x169d78;                                        // 0x00169d8c: b 0x169d78
    /* nop */                                                   // 0x00169d90: nop 
    /* nop */                                                   // 0x00169d94: nop 
label_0x169d98:
    a0 = 8;                                                     // 0x00169d98: addiu $a0, $zero, 8
    func_00157d80();  // 0x157cf0                                // 0x00169d9c: jal 0x157cf0
    a1 = a1 + 0x3198;                                           // 0x00169da0: addiu $a1, $a1, 0x3198
    if (v0 == 0) goto label_0x169dc0;                           // 0x00169da4: beqz $v0, 0x169dc0
    a1 = 0xff00 << 16;                                          // 0x00169dac: lui $a1, 0xff00
    a1 = a1 | 0xd01;                                            // 0x00169db4: ori $a1, $a1, 0xd01
    return func_00169940();  // Tail call                        // 0x00169db8: j 0x1698d0
    sp = sp + 0x10;                                             // 0x00169dbc: addiu $sp, $sp, 0x10
label_0x169dc0:
    v1 = 0x21 << 16;                                            // 0x00169dc0: lui $v1, 0x21
    g_002157b0 = 0;  // Global at 0x002157b0                    // 0x00169dc4: sw $zero, 0x57b0($v1)
    return;                                                     // 0x00169dc8: jr $ra
    sp = sp + 0x10;                                             // 0x00169dcc: addiu $sp, $sp, 0x10
}