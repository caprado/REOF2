void func_001b7b30() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a0 = gp + -0x63a0;                                          // 0x001b7b30: addiu $a0, $gp, -0x63a0
    return func_00107d30();  // Tail call                        // 0x001b7b38: j 0x107c70
    a2 = 5;                                                     // 0x001b7b3c: addiu $a2, $zero, 5
    sp = sp + -0x150;                                           // 0x001b7b40: addiu $sp, $sp, -0x150
    v0 = 4;                                                     // 0x001b7b44: addiu $v0, $zero, 4
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001b7b4c: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b7b54: addu.qb $zero, $sp, $s1
    v1 = *(int8_t*)((gp) + -0x63a0);                            // 0x001b7b5c: lb $v1, -0x63a0($gp)
    if (v1 == v0) goto label_0x1b7c88;                          // 0x001b7b60: beq $v1, $v0, 0x1b7c88
    v0 = 3;                                                     // 0x001b7b68: addiu $v0, $zero, 3
    if (v1 == v0) goto label_0x1b7c8c;                          // 0x001b7b6c: beq $v1, $v0, 0x1b7c8c
    v0 = v1 + a0;                                               // 0x001b7b70: addu $v0, $v1, $a0
    v0 = 2;                                                     // 0x001b7b74: addiu $v0, $zero, 2
    if (v1 == v0) goto label_0x1b7c88;                          // 0x001b7b78: beq $v1, $v0, 0x1b7c88
    v0 = 1;                                                     // 0x001b7b7c: addiu $v0, $zero, 1
    if (v1 == v0) goto label_0x1b7c88;                          // 0x001b7b80: beq $v1, $v0, 0x1b7c88
    /* nop */                                                   // 0x001b7b84: nop 
    if (v1 == 0) goto label_0x1b7b98;                           // 0x001b7b88: beqz $v1, 0x1b7b98
    /* nop */                                                   // 0x001b7b8c: nop 
    goto label_0x1b7e3c;                                        // 0x001b7b90: b 0x1b7e3c
label_0x1b7b98:
    v0 = *(uint8_t*)(a0);                                       // 0x001b7b98: lbu $v0, 0($a0)
    if (v0 != 0) goto label_0x1b7bac;                           // 0x001b7b9c: bnez $v0, 0x1b7bac
    at = 0x31 << 16;                                            // 0x001b7ba0: lui $at, 0x31
    goto label_0x1b7e40;                                        // 0x001b7ba4: b 0x1b7e40
    v0 = -1;                                                    // 0x001b7ba8: addiu $v0, $zero, -1
label_0x1b7bac:
    v1 = -0x40;                                                 // 0x001b7bac: addiu $v1, $zero, -0x40
    v0 = g_003137fc;  // Global at 0x003137fc                   // 0x001b7bb0: lw $v0, 0x37fc($at)
    at = 8 << 16;                                               // 0x001b7bb4: lui $at, 8
    a0 = v0 + at;                                               // 0x001b7bb8: addu $a0, $v0, $at
    at = 0xc << 16;                                             // 0x001b7bbc: lui $at, 0xc
    a0 = a0 + 0x3f;                                             // 0x001b7bc0: addiu $a0, $a0, 0x3f
    v0 = v0 + at;                                               // 0x001b7bc4: addu $v0, $v0, $at
    a0 = a0 & v1;                                               // 0x001b7bc8: and $a0, $a0, $v1
    v0 = v0 + 0x3f;                                             // 0x001b7bcc: addiu $v0, $v0, 0x3f
    func_001acf00();  // 0x1aced0                                // 0x001b7bd0: jal 0x1aced0
    a1 = v0 & v1;                                               // 0x001b7bd4: and $a1, $v0, $v1
    a1 = 0x24 << 16;                                            // 0x001b7bd8: lui $a1, 0x24
    a2 = 0x24 << 16;                                            // 0x001b7bdc: lui $a2, 0x24
    a0 = sp + 0x50;                                             // 0x001b7be0: addiu $a0, $sp, 0x50
    a1 = &str_0023dd00;  // "data\\rom\\sound\\ps2\\snd\\"      // 0x001b7be4: addiu $a1, $a1, -0x2300
    func_0010a570();  // 0x10a4d8                                // 0x001b7be8: jal 0x10a4d8
    a2 = &str_0023dd10;  // "%senemy.tsb"                       // 0x001b7bec: addiu $a2, $a2, -0x22f0
    at = 0x31 << 16;                                            // 0x001b7bf0: lui $at, 0x31
    s0 = sp + 0x50;                                             // 0x001b7bf4: addiu $s0, $sp, 0x50
    v1 = g_003137fc;  // Global at 0x003137fc                   // 0x001b7bf8: lw $v1, 0x37fc($at)
    v0 = -0x40;                                                 // 0x001b7bfc: addiu $v0, $zero, -0x40
    a2 = 1;                                                     // 0x001b7c00: addiu $a2, $zero, 1
    v1 = v1 + 0x4000;                                           // 0x001b7c0c: addiu $v1, $v1, 0x4000
    v1 = v1 + 0x3f;                                             // 0x001b7c10: addiu $v1, $v1, 0x3f
    s2 = v1 & v0;                                               // 0x001b7c14: and $s2, $v1, $v0
    func_001d33e0();  // 0x1d3390                                // 0x001b7c18: jal 0x1d3390
    if (s3 > 0) goto label_0x1b7c34;                            // 0x001b7c24: bgtz $s3, 0x1b7c34
    a1 = 0x24 << 16;                                            // 0x001b7c28: lui $a1, 0x24
    goto label_0x1b7e40;                                        // 0x001b7c2c: b 0x1b7e40
    v0 = -1;                                                    // 0x001b7c30: addiu $v0, $zero, -1
label_0x1b7c34:
    a2 = 0x24 << 16;                                            // 0x001b7c34: lui $a2, 0x24
    a1 = &str_0023dd28;  // "vo%03d%02d.afs"                    // 0x001b7c3c: addiu $a1, $a1, -0x22d8
    func_0010a570();  // 0x10a4d8                                // 0x001b7c40: jal 0x10a4d8
    a2 = &str_0023dd10;  // "%senemy.tsb"                       // 0x001b7c44: addiu $a2, $a2, -0x22f0
    a1 = s2 + s3;                                               // 0x001b7c4c: addu $a1, $s2, $s3
    a2 = 1;                                                     // 0x001b7c50: addiu $a2, $zero, 1
    func_001d33e0();  // 0x1d3390                                // 0x001b7c54: jal 0x1d3390
    if (v0 > 0) goto label_0x1b7c6c;                            // 0x001b7c5c: bgtz $v0, 0x1b7c6c
    goto label_0x1b7e40;                                        // 0x001b7c64: b 0x1b7e40
    v0 = -1;                                                    // 0x001b7c68: addiu $v0, $zero, -1
label_0x1b7c6c:
    func_001aced0();  // 0x1ace30                                // 0x001b7c70: jal 0x1ace30
    v0 = *(int8_t*)((gp) + -0x63a0);                            // 0x001b7c78: lb $v0, -0x63a0($gp)
    v0 = v0 + 1;                                                // 0x001b7c7c: addiu $v0, $v0, 1
    goto label_0x1b7e3c;                                        // 0x001b7c80: b 0x1b7e3c
    *(uint8_t*)((gp) + -0x63a0) = v0;                           // 0x001b7c84: sb $v0, -0x63a0($gp)
label_0x1b7c88:
    v0 = v1 + a0;                                               // 0x001b7c88: addu $v0, $v1, $a0
label_0x1b7c8c:
    v1 = g_00352a88;  // Global at 0x00352a88                   // 0x001b7c8c: lbu $v1, -1($v0)
    if (v1 != 0) goto label_0x1b7ca8;                           // 0x001b7c90: bnez $v1, 0x1b7ca8
    v0 = ((unsigned)v1 < (unsigned)0x3a) ? 1 : 0;               // 0x001b7c94: sltiu $v0, $v1, 0x3a
    v0 = *(int8_t*)((gp) + -0x63a0);                            // 0x001b7c98: lb $v0, -0x63a0($gp)
    v0 = v0 + 1;                                                // 0x001b7c9c: addiu $v0, $v0, 1
    goto label_0x1b7e3c;                                        // 0x001b7ca0: b 0x1b7e3c
    *(uint8_t*)((gp) + -0x63a0) = v0;                           // 0x001b7ca4: sb $v0, -0x63a0($gp)
label_0x1b7ca8:
    if (v0 != 0) goto label_0x1b7ce4;                           // 0x001b7ca8: bnez $v0, 0x1b7ce4
    /* nop */                                                   // 0x001b7cac: nop 
    v0 = 0x36 << 16;                                            // 0x001b7cb0: lui $v0, 0x36
    a1 = 0x24 << 16;                                            // 0x001b7cb4: lui $a1, 0x24
    v1 = v1 << 2;                                               // 0x001b7cb8: sll $v1, $v1, 2
    v0 = v0 + -0x6bac;                                          // 0x001b7cbc: addiu $v0, $v0, -0x6bac
    v0 = v0 + v1;                                               // 0x001b7cc0: addu $v0, $v0, $v1
    a2 = 0x24 << 16;                                            // 0x001b7cc4: lui $a2, 0x24
    a3 = g_00359454;  // Global at 0x00359454                   // 0x001b7cc8: lw $a3, 0($v0)
    a0 = sp + 0x50;                                             // 0x001b7ccc: addiu $a0, $sp, 0x50
    a1 = a1 + -0x22c8;                                          // 0x001b7cd0: addiu $a1, $a1, -0x22c8
    func_0010a570();  // 0x10a4d8                                // 0x001b7cd4: jal 0x10a4d8
    a2 = &str_0023dd10;  // "%senemy.tsb"                       // 0x001b7cd8: addiu $a2, $a2, -0x22f0
    goto label_0x1b7df8;                                        // 0x001b7cdc: b 0x1b7df8
    /* nop */                                                   // 0x001b7ce0: nop 
label_0x1b7ce4:
    v0 = 2;                                                     // 0x001b7ce4: addiu $v0, $zero, 2
    if (v1 != v0) goto label_0x1b7d34;                          // 0x001b7ce8: bne $v1, $v0, 0x1b7d34
    v0 = 3;                                                     // 0x001b7cec: addiu $v0, $zero, 3
    func_001ae690();  // 0x1ae5c0                                // 0x001b7cf0: jal 0x1ae5c0
    a0 = 1;                                                     // 0x001b7cf4: addiu $a0, $zero, 1
    v1 = v0 & 0xffff;                                           // 0x001b7cf8: andi $v1, $v0, 0xffff
    a1 = 0x24 << 16;                                            // 0x001b7cfc: lui $a1, 0x24
    v0 = 0x36 << 16;                                            // 0x001b7d00: lui $v0, 0x36
    v1 = v1 & 1;                                                // 0x001b7d04: andi $v1, $v1, 1
    v0 = v0 + -0x6acc;                                          // 0x001b7d08: addiu $v0, $v0, -0x6acc
    v1 = v1 << 2;                                               // 0x001b7d0c: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001b7d10: addu $v0, $v0, $v1
    a2 = 0x24 << 16;                                            // 0x001b7d14: lui $a2, 0x24
    a3 = g_00359534;  // Global at 0x00359534                   // 0x001b7d18: lw $a3, 0($v0)
    a0 = sp + 0x50;                                             // 0x001b7d1c: addiu $a0, $sp, 0x50
    a1 = a1 + -0x22c8;                                          // 0x001b7d20: addiu $a1, $a1, -0x22c8
    func_0010a570();  // 0x10a4d8                                // 0x001b7d24: jal 0x10a4d8
    a2 = &str_0023dd10;  // "%senemy.tsb"                       // 0x001b7d28: addiu $a2, $a2, -0x22f0
    goto label_0x1b7df8;                                        // 0x001b7d2c: b 0x1b7df8
    /* nop */                                                   // 0x001b7d30: nop 
label_0x1b7d34:
    if (v1 != v0) goto label_0x1b7d80;                          // 0x001b7d34: bne $v1, $v0, 0x1b7d80
    a0 = 1;                                                     // 0x001b7d38: addiu $a0, $zero, 1
    func_001ae690();  // 0x1ae5c0                                // 0x001b7d3c: jal 0x1ae5c0
    /* nop */                                                   // 0x001b7d40: nop 
    v1 = v0 & 0xffff;                                           // 0x001b7d44: andi $v1, $v0, 0xffff
    a1 = 0x24 << 16;                                            // 0x001b7d48: lui $a1, 0x24
    v0 = 0x36 << 16;                                            // 0x001b7d4c: lui $v0, 0x36
    v1 = v1 & 1;                                                // 0x001b7d50: andi $v1, $v1, 1
    v0 = v0 + -0x6adc;                                          // 0x001b7d54: addiu $v0, $v0, -0x6adc
    v1 = v1 << 2;                                               // 0x001b7d58: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001b7d5c: addu $v0, $v0, $v1
    a2 = 0x24 << 16;                                            // 0x001b7d60: lui $a2, 0x24
    a3 = g_00359524;  // Global at 0x00359524                   // 0x001b7d64: lw $a3, 0($v0)
    a0 = sp + 0x50;                                             // 0x001b7d68: addiu $a0, $sp, 0x50
    a1 = a1 + -0x22c8;                                          // 0x001b7d6c: addiu $a1, $a1, -0x22c8
    func_0010a570();  // 0x10a4d8                                // 0x001b7d70: jal 0x10a4d8
    a2 = &str_0023dd10;  // "%senemy.tsb"                       // 0x001b7d74: addiu $a2, $a2, -0x22f0
    goto label_0x1b7df8;                                        // 0x001b7d78: b 0x1b7df8
    /* nop */                                                   // 0x001b7d7c: nop 
label_0x1b7d80:
    v0 = 4;                                                     // 0x001b7d80: addiu $v0, $zero, 4
    if (v1 != v0) goto label_0x1b7dd0;                          // 0x001b7d84: bne $v1, $v0, 0x1b7dd0
    v0 = 0x36 << 16;                                            // 0x001b7d88: lui $v0, 0x36
    func_001ae690();  // 0x1ae5c0                                // 0x001b7d8c: jal 0x1ae5c0
    a0 = 1;                                                     // 0x001b7d90: addiu $a0, $zero, 1
    v1 = v0 & 0xffff;                                           // 0x001b7d94: andi $v1, $v0, 0xffff
    a1 = 0x24 << 16;                                            // 0x001b7d98: lui $a1, 0x24
    v0 = 0x36 << 16;                                            // 0x001b7d9c: lui $v0, 0x36
    v1 = v1 & 1;                                                // 0x001b7da0: andi $v1, $v1, 1
    v0 = v0 + -0x6ad4;                                          // 0x001b7da4: addiu $v0, $v0, -0x6ad4
    v1 = v1 << 2;                                               // 0x001b7da8: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001b7dac: addu $v0, $v0, $v1
    a2 = 0x24 << 16;                                            // 0x001b7db0: lui $a2, 0x24
    a3 = g_0035952c;  // Global at 0x0035952c                   // 0x001b7db4: lw $a3, 0($v0)
    a0 = sp + 0x50;                                             // 0x001b7db8: addiu $a0, $sp, 0x50
    a1 = a1 + -0x22c8;                                          // 0x001b7dbc: addiu $a1, $a1, -0x22c8
    func_0010a570();  // 0x10a4d8                                // 0x001b7dc0: jal 0x10a4d8
    a2 = &str_0023dd10;  // "%senemy.tsb"                       // 0x001b7dc4: addiu $a2, $a2, -0x22f0
    goto label_0x1b7df8;                                        // 0x001b7dc8: b 0x1b7df8
    /* nop */                                                   // 0x001b7dcc: nop 
label_0x1b7dd0:
    a1 = 0x24 << 16;                                            // 0x001b7dd0: lui $a1, 0x24
    v1 = v1 << 2;                                               // 0x001b7dd4: sll $v1, $v1, 2
    v0 = v0 + -0x6ae4;                                          // 0x001b7dd8: addiu $v0, $v0, -0x6ae4
    v0 = v0 + v1;                                               // 0x001b7ddc: addu $v0, $v0, $v1
    a2 = 0x24 << 16;                                            // 0x001b7de0: lui $a2, 0x24
    a3 = g_00352a48;  // Global at 0x00352a48                   // 0x001b7de4: lw $a3, 0($v0)
    a0 = sp + 0x50;                                             // 0x001b7de8: addiu $a0, $sp, 0x50
    a1 = a1 + -0x22c8;                                          // 0x001b7dec: addiu $a1, $a1, -0x22c8
    func_0010a570();  // 0x10a4d8                                // 0x001b7df0: jal 0x10a4d8
    a2 = &str_0023dd10;  // "%senemy.tsb"                       // 0x001b7df4: addiu $a2, $a2, -0x22f0
label_0x1b7df8:
    at = 0x31 << 16;                                            // 0x001b7df8: lui $at, 0x31
    a0 = sp + 0x50;                                             // 0x001b7dfc: addiu $a0, $sp, 0x50
    v0 = g_003137fc;  // Global at 0x003137fc                   // 0x001b7e00: lw $v0, 0x37fc($at)
    a2 = 1;                                                     // 0x001b7e04: addiu $a2, $zero, 1
    s0 = v0 + 0x4000;                                           // 0x001b7e0c: addiu $s0, $v0, 0x4000
    func_001d33e0();  // 0x1d3390                                // 0x001b7e10: jal 0x1d3390
    if (v0 > 0) goto label_0x1b7e28;                            // 0x001b7e18: bgtz $v0, 0x1b7e28
    goto label_0x1b7e40;                                        // 0x001b7e20: b 0x1b7e40
    v0 = -1;                                                    // 0x001b7e24: addiu $v0, $zero, -1
label_0x1b7e28:
    func_001acfe0();  // 0x1acf00                                // 0x001b7e28: jal 0x1acf00
    /* nop */                                                   // 0x001b7e2c: nop 
    v0 = *(int8_t*)((gp) + -0x63a0);                            // 0x001b7e30: lb $v0, -0x63a0($gp)
    v0 = v0 + 1;                                                // 0x001b7e34: addiu $v0, $v0, 1
    *(uint8_t*)((gp) + -0x63a0) = v0;                           // 0x001b7e38: sb $v0, -0x63a0($gp)
label_0x1b7e3c:
label_0x1b7e40:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001b7e48: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b7e4c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b7e50: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b7e54: jr $ra
    sp = sp + 0x150;                                            // 0x001b7e58: addiu $sp, $sp, 0x150
}