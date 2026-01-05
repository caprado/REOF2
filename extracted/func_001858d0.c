void func_001858d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_19, local_1a, local_1b, local_1c, local_1d, local_1e;
    uint32_t local_281, local_282, local_283, local_285, local_286, local_287, local_290, local_294;
    uint32_t local_298, local_29c, local_2a0, local_4, local_60;
    
    sp = sp + -0x350;                                           // 0x001858d0: addiu $sp, $sp, -0x350
    func_00183fa0();  // 183fa0                                // 0x0018590c: jal 0x183fa0
    if (v1 != 0) goto label_0x185e7c;                           // 0x00185918: bnez $v1, 0x185e7c
    local_298 = v0;                                             // 0x0018591c: sw $v0, 0x298($sp)
    s0 = sp + 0x200;                                            // 0x00185920: addiu $s0, $sp, 0x200
    func_00184048();  // 184048                                // 0x0018592c: jal 0x184048
    if (v1 != 0) goto label_0x185e7c;                           // 0x00185938: bnez $v1, 0x185e7c
    local_298 = v0;                                             // 0x0018593c: sw $v0, 0x298($sp)
    a3 = sp + 0x290;                                            // 0x0018594c: addiu $a3, $sp, 0x290
    func_00184320();  // 184320                                // 0x00185950: jal 0x184320
    t0 = sp + 0x294;                                            // 0x00185954: addiu $t0, $sp, 0x294
    v1 = 0x8101 << 16;                                          // 0x00185958: lui $v1, 0x8101
    v1 = v1 | 0x11;                                             // 0x00185960: ori $v1, $v1, 0x11
    if (a0 != v1) goto label_0x185e7c;                          // 0x00185964: bne $a0, $v1, 0x185e7c
    local_298 = v0;                                             // 0x00185968: sw $v0, 0x298($sp)
    v0 = local_60;                                              // 0x0018596c: lbu $v0, 0x60($sp)
    if (v0 != 0) goto label_0x1859ac;                           // 0x00185970: bnez $v0, 0x1859ac
    a0 = local_0;                                               // 0x00185974: lhu $a0, 0($sp)
    v0 = 0 | 0x8000;                                            // 0x00185978: ori $v0, $zero, 0x8000
    v1 = a0 & 0xf000;                                           // 0x0018597c: andi $v1, $a0, 0xf000
    if (v1 == v0) goto label_0x185994;                          // 0x00185980: beq $v1, $v0, 0x185994
    v0 = 0 | 0xa000;                                            // 0x00185988: ori $v0, $zero, 0xa000
    if (v1 != v0) goto label_0x1859ac;                          // 0x0018598c: bne $v1, $v0, 0x1859ac
    /* nop */                                                   // 0x00185990: nop 
label_0x185994:
    v1 = a1 & 0xf00;                                            // 0x00185994: andi $v1, $a1, 0xf00
    v0 = 0x400;                                                 // 0x00185998: addiu $v0, $zero, 0x400
    if (v1 == v0) goto label_0x1859b8;                          // 0x0018599c: beql $v1, $v0, 0x1859b8
    v0 = a1 & 2;                                                // 0x001859a0: andi $v0, $a1, 2
    /* beqzl $v1, 0x1859b8 */                                   // 0x001859a4: beqzl $v1, 0x1859b8
    v0 = a1 & 2;                                                // 0x001859a8: andi $v0, $a1, 2
label_0x1859ac:
    v0 = 0x8101 << 16;                                          // 0x001859ac: lui $v0, 0x8101
    goto label_0x185e7c;                                        // 0x001859b0: b 0x185e7c
    v0 = v0 | 0x9002;                                           // 0x001859b4: ori $v0, $v0, 0x9002
label_0x1859b8:
    /* bnezl $v0, 0x1859cc */                                   // 0x001859b8: bnezl $v0, 0x1859cc
    v0 = a0 & 0x20;                                             // 0x001859bc: andi $v0, $a0, 0x20
    v0 = 0x8101 << 16;                                          // 0x001859c0: lui $v0, 0x8101
    goto label_0x185e7c;                                        // 0x001859c4: b 0x185e7c
    v0 = v0 | 0xd;                                              // 0x001859c8: ori $v0, $v0, 0xd
    /* beqzl $v0, 0x1859e0 */                                   // 0x001859cc: beqzl $v0, 0x1859e0
    v0 = local_4;                                               // 0x001859d0: lw $v0, 4($sp)
    v0 = 0x8101 << 16;                                          // 0x001859d4: lui $v0, 0x8101
    goto label_0x185e7c;                                        // 0x001859d8: b 0x185e7c
    v0 = v0 | 2;                                                // 0x001859dc: ori $v0, $v0, 2
    v0 = (v0 < s2) ? 1 : 0;                                     // 0x001859e0: slt $v0, $v0, $s2
    /* beqzl $v0, 0x1859f8 */                                   // 0x001859e4: beqzl $v0, 0x1859f8
    v0 = s2 + s7;                                               // 0x001859e8: addu $v0, $s2, $s7
    v0 = 0x8101 << 16;                                          // 0x001859ec: lui $v0, 0x8101
    goto label_0x185e7c;                                        // 0x001859f0: b 0x185e7c
    v0 = v0 | 0x16;                                             // 0x001859f4: ori $v0, $v0, 0x16
    v1 = -1;                                                    // 0x001859f8: addiu $v1, $zero, -1
    a0 = v0 + 0x3ff;                                            // 0x001859fc: addiu $a0, $v0, 0x3ff
    a1 = local_10;                                              // 0x00185a00: lw $a1, 0x10($sp)
    v1 = (v1 < a0) ? 1 : 0;                                     // 0x00185a04: slt $v1, $v1, $a0
    v0 = v0 + 0x7fe;                                            // 0x00185a08: addiu $v0, $v0, 0x7fe
    if (v1 != 0) v0 = a0;                                       // 0x00185a0c: movn $v0, $a0, $v1
    func_001830f0();  // 1830f0                                // 0x00185a14: jal 0x1830f0
    s1 = v0 >> 0xa;                                             // 0x00185a18: sra $s1, $v0, 0xa
    if (s0 < 0) goto label_0x185e80;                            // 0x00185a20: bltz $s0, 0x185e80
    v0 = (s0 < s1) ? 1 : 0;                                     // 0x00185a28: slt $v0, $s0, $s1
    if (v0 == 0) goto label_0x185a68;                           // 0x00185a2c: beqz $v0, 0x185a68
    func_00182e98();  // 182e98                                // 0x00185a34: jal 0x182e98
    a1 = sp + 0x298;                                            // 0x00185a38: addiu $a1, $sp, 0x298
    v0 = local_298;                                             // 0x00185a40: lw $v0, 0x298($sp)
    if (v0 != 0) goto label_0x185e80;                           // 0x00185a44: bnez $v0, 0x185e80
    v0 = s1 - s0;                                               // 0x00185a4c: subu $v0, $s1, $s0
    v0 = (v1 < v0) ? 1 : 0;                                     // 0x00185a50: slt $v0, $v1, $v0
    if (v0 == 0) goto label_0x185a68;                           // 0x00185a54: beqz $v0, 0x185a68
    /* nop */                                                   // 0x00185a58: nop 
    v0 = 0x8101 << 16;                                          // 0x00185a5c: lui $v0, 0x8101
    goto label_0x185e80;                                        // 0x00185a60: b 0x185e80
    v0 = v0 | 0x1c;                                             // 0x00185a64: ori $v0, $v0, 0x1c
label_0x185a68:
    v0 = 0xffff << 16;                                          // 0x00185a68: lui $v0, 0xffff
    a1 = local_10;                                              // 0x00185a6c: lw $a1, 0x10($sp)
    v0 = v0 | 0xffff;                                           // 0x00185a70: ori $v0, $v0, 0xffff
    if (a1 != v0) goto label_0x185bbc;                          // 0x00185a74: bne $a1, $v0, 0x185bbc
    v0 = 0x28 << 16;                                            // 0x00185a78: lui $v0, 0x28
    s0 = sp + 0x298;                                            // 0x00185a7c: addiu $s0, $sp, 0x298
    func_00182d68();  // 182d68                                // 0x00185a84: jal 0x182d68
    v1 = local_298;                                             // 0x00185a8c: lw $v1, 0x298($sp)
    if (v1 == 0) goto label_0x185aa0;                           // 0x00185a90: beqz $v1, 0x185aa0
label_0x185a98:
    goto label_0x185e7c;                                        // 0x00185a98: b 0x185e7c
label_0x185aa0:
    func_00182c38();  // 182c38                                // 0x00185aac: jal 0x182c38
    a2 = -1;                                                    // 0x00185ab0: addiu $a2, $zero, -1
    v0 = local_298;                                             // 0x00185ab4: lw $v0, 0x298($sp)
    if (v0 != 0) goto label_0x185e80;                           // 0x00185ab8: bnez $v0, 0x185e80
    func_00187e78();  // 187e78                                // 0x00185ac4: jal 0x187e78
    a1 = sp + 0x280;                                            // 0x00185ac8: addiu $a1, $sp, 0x280
    v1 = local_4;                                               // 0x00185acc: lw $v1, 4($sp)
    v1 = (v1 < s5) ? 1 : 0;                                     // 0x00185ad0: slt $v1, $v1, $s5
    if (v1 == 0) goto label_0x185ae0;                           // 0x00185ad4: beqz $v1, 0x185ae0
    local_10 = s1;                                              // 0x00185ad8: sw $s1, 0x10($sp)
    local_4 = s5;                                               // 0x00185adc: sw $s5, 4($sp)
label_0x185ae0:
    a1 = local_287;                                             // 0x00185ae0: lbu $a1, 0x287($sp)
    v1 = 0xa;                                                   // 0x00185ae4: addiu $v1, $zero, 0xa
    a3 = local_282;                                             // 0x00185ae8: lbu $a3, 0x282($sp)
    a2 = local_281;                                             // 0x00185af0: lbu $a2, 0x281($sp)
    v0 = (unsigned)a1 >> 4;                                     // 0x00185af4: srl $v0, $a1, 4
    t7 = local_286;                                             // 0x00185af8: lbu $t7, 0x286($sp)
    t3 = (unsigned)a3 >> 4;                                     // 0x00185afc: srl $t3, $a3, 4
    t6 = local_285;                                             // 0x00185b00: lbu $t6, 0x285($sp)
    t0 = (unsigned)a2 >> 4;                                     // 0x00185b04: srl $t0, $a2, 4
    t4 = local_283;                                             // 0x00185b08: lbu $t4, 0x283($sp)
    t5 = (unsigned)t7 >> 4;                                     // 0x00185b0c: srl $t5, $t7, 4
    t1 = (unsigned)t6 >> 4;                                     // 0x00185b10: srl $t1, $t6, 4
    /* multiply: v0 * v1 -> hi:lo */                            // 0x00185b14: mult $ac2, $v0, $v1
    t2 = (unsigned)t4 >> 4;                                     // 0x00185b18: srl $t2, $t4, 4
    a1 = a1 & 0xf;                                              // 0x00185b24: andi $a1, $a1, 0xf
    a3 = a3 & 0xf;                                              // 0x00185b2c: andi $a3, $a3, 0xf
    a2 = a2 & 0xf;                                              // 0x00185b34: andi $a2, $a2, 0xf
    v0 = v0 + a1;                                               // 0x00185b3c: addu $v0, $v0, $a1
    t3 = t3 + a3;                                               // 0x00185b40: addu $t3, $t3, $a3
    t0 = t0 + a2;                                               // 0x00185b44: addu $t0, $t0, $a2
    t7 = t7 & 0xf;                                              // 0x00185b48: andi $t7, $t7, 0xf
    t6 = t6 & 0xf;                                              // 0x00185b4c: andi $t6, $t6, 0xf
    t4 = t4 & 0xf;                                              // 0x00185b50: andi $t4, $t4, 0xf
    t5 = t5 + t7;                                               // 0x00185b54: addu $t5, $t5, $t7
    t1 = t1 + t6;                                               // 0x00185b58: addu $t1, $t1, $t6
    t2 = t2 + t4;                                               // 0x00185b5c: addu $t2, $t2, $t4
    v0 = v0 + 0x7d0;                                            // 0x00185b60: addiu $v0, $v0, 0x7d0
    a2 = local_290;                                             // 0x00185b64: lw $a2, 0x290($sp)
    a3 = local_294;                                             // 0x00185b68: lw $a3, 0x294($sp)
    local_1e = v0;                                              // 0x00185b70: sh $v0, 0x1e($sp)
    local_1d = t5;                                              // 0x00185b74: sb $t5, 0x1d($sp)
    local_1c = t1;                                              // 0x00185b78: sb $t1, 0x1c($sp)
    local_1b = t2;                                              // 0x00185b7c: sb $t2, 0x1b($sp)
    local_1a = t3;                                              // 0x00185b80: sb $t3, 0x1a($sp)
    func_00184770();  // 184770                                // 0x00185b84: jal 0x184770
    local_19 = t0;                                              // 0x00185b88: sb $t0, 0x19($sp)
    if (v0 != 0) goto label_0x185e7c;                           // 0x00185b8c: bnez $v0, 0x185e7c
    local_298 = v0;                                             // 0x00185b90: sw $v0, 0x298($sp)
    func_001829e0();  // 1829e0                                // 0x00185b94: jal 0x1829e0
    if (v0 == 0) goto label_0x185e50;                           // 0x00185b9c: beqz $v0, 0x185e50
    local_29c = v0;                                             // 0x00185ba0: sw $v0, 0x29c($sp)
    func_00186e48();  // 186e48                                // 0x00185ba4: jal 0x186e48
    if (v0 == 0) goto label_0x185e50;                           // 0x00185bac: beqz $v0, 0x185e50
    local_29c = v0;                                             // 0x00185bb0: sw $v0, 0x29c($sp)
    a1 = local_10;                                              // 0x00185bb4: lw $a1, 0x10($sp)
    v0 = 0x28 << 16;                                            // 0x00185bb8: lui $v0, 0x28
label_0x185bbc:
    local_2a0 = s7;                                             // 0x00185bbc: sw $s7, 0x2a0($sp)
    fp = v0 + -0x7c00;                                          // 0x00185bc4: addiu $fp, $v0, -0x7c00
label_0x185bd0:
    v0 = (s2 < 0x400) ? 1 : 0;                                  // 0x00185bd0: slti $v0, $s2, 0x400
    if (v0 == 0) goto label_0x185cc8;                           // 0x00185bd4: beqz $v0, 0x185cc8
    if (s2 > 0) goto label_0x185c00;                            // 0x00185bdc: bgtz $s2, 0x185c00
    v0 = 0x28 << 16;                                            // 0x00185be0: lui $v0, 0x28
    v0 = s2 + s7;                                               // 0x00185be4: addu $v0, $s2, $s7
    v0 = (v0 < 0x400) ? 1 : 0;                                  // 0x00185be8: slti $v0, $v0, 0x400
    if (v0 == 0) goto label_0x185c1c;                           // 0x00185bec: beqz $v0, 0x185c1c
    v0 = local_4;                                               // 0x00185bf0: lw $v0, 4($sp)
    v0 = (s5 < v0) ? 1 : 0;                                     // 0x00185bf4: slt $v0, $s5, $v0
    if (v0 == 0) goto label_0x185c1c;                           // 0x00185bf8: beqz $v0, 0x185c1c
    v0 = 0x28 << 16;                                            // 0x00185bfc: lui $v0, 0x28
label_0x185c00:
    a1 = v0 + -0x7c00;                                          // 0x00185c04: addiu $a1, $v0, -0x7c00
    func_00187390();  // 187390                                // 0x00185c0c: jal 0x187390
    a3 = 1;                                                     // 0x00185c10: addiu $a3, $zero, 1
    if (v0 == 0) goto label_0x185e50;                           // 0x00185c14: beqz $v0, 0x185e50
    local_29c = v0;                                             // 0x00185c18: sw $v0, 0x29c($sp)
label_0x185c1c:
    v0 = 0x400;                                                 // 0x00185c1c: addiu $v0, $zero, 0x400
    a2 = v0 - s2;                                               // 0x00185c20: subu $a2, $v0, $s2
    v1 = (a2 < s7) ? 1 : 0;                                     // 0x00185c24: slt $v1, $a2, $s7
    if (v1 != 0) goto label_0x185c84;                           // 0x00185c28: bnez $v1, 0x185c84
    a0 = s2 + fp;                                               // 0x00185c2c: addu $a0, $s2, $fp
    func_00107ab8();  // 107ab8                                // 0x00185c34: jal 0x107ab8
    func_001873b0();  // 1873b0                                // 0x00185c48: jal 0x1873b0
    a3 = 1;                                                     // 0x00185c4c: addiu $a3, $zero, 1
    if (v0 == 0) goto label_0x185e50;                           // 0x00185c50: beqz $v0, 0x185e50
    local_29c = v0;                                             // 0x00185c54: sw $v0, 0x29c($sp)
    s1 = sp + 0x280;                                            // 0x00185c58: addiu $s1, $sp, 0x280
    func_00187e78();  // 187e78                                // 0x00185c64: jal 0x187e78
    s5 = s5 + s7;                                               // 0x00185c68: addu $s5, $s5, $s7
    v1 = local_4;                                               // 0x00185c6c: lw $v1, 4($sp)
    v1 = (v1 < s5) ? 1 : 0;                                     // 0x00185c70: slt $v1, $v1, $s5
    /* bnezl $v1, 0x185d68 */                                   // 0x00185c74: bnezl $v1, 0x185d68
    local_4 = s5;                                               // 0x00185c78: sw $s5, 4($sp)
    goto label_0x185d6c;                                        // 0x00185c7c: b 0x185d6c
    a1 = local_287;                                             // 0x00185c80: lbu $a1, 0x287($sp)
label_0x185c84:
    func_00107ab8();  // 107ab8                                // 0x00185c84: jal 0x107ab8
    func_001873b0();  // 1873b0                                // 0x00185c98: jal 0x1873b0
    a3 = 1;                                                     // 0x00185c9c: addiu $a3, $zero, 1
    if (v0 == 0) goto label_0x185e50;                           // 0x00185ca0: beqz $v0, 0x185e50
    local_29c = v0;                                             // 0x00185ca4: sw $v0, 0x29c($sp)
    v0 = s5 + 0x400;                                            // 0x00185ca8: addiu $v0, $s5, 0x400
    a0 = s6 + 0x400;                                            // 0x00185cac: addiu $a0, $s6, 0x400
    v1 = s7 + -0x400;                                           // 0x00185cb0: addiu $v1, $s7, -0x400
    s5 = v0 - s2;                                               // 0x00185cb4: subu $s5, $v0, $s2
    s7 = v1 + s2;                                               // 0x00185cb8: addu $s7, $v1, $s2
    s6 = a0 - s2;                                               // 0x00185cbc: subu $s6, $a0, $s2
label_0x185cc8:
    func_00182b88();  // 182b88                                // 0x00185cd0: jal 0x182b88
    a2 = sp + 0x29c;                                            // 0x00185cd4: addiu $a2, $sp, 0x29c
    v1 = local_29c;                                             // 0x00185cd8: lw $v1, 0x29c($sp)
    if (v1 != 0) goto label_0x185a98;                           // 0x00185cdc: bnez $v1, 0x185a98
    v0 = 0xffff << 16;                                          // 0x00185ce4: lui $v0, 0xffff
    v0 = v0 | 0xffff;                                           // 0x00185ce8: ori $v0, $v0, 0xffff
    if (s1 != v0) goto label_0x185d54;                          // 0x00185cec: bne $s1, $v0, 0x185d54
    v0 = 0x7fff << 16;                                          // 0x00185cf0: lui $v0, 0x7fff
    s0 = sp + 0x298;                                            // 0x00185cf4: addiu $s0, $sp, 0x298
    func_00182d68();  // 182d68                                // 0x00185cfc: jal 0x182d68
    v1 = local_298;                                             // 0x00185d04: lw $v1, 0x298($sp)
    if (v1 != 0) goto label_0x185a98;                           // 0x00185d08: bnez $v1, 0x185a98
    a2 = -1;                                                    // 0x00185d18: addiu $a2, $zero, -1
    func_00182c38();  // 182c38                                // 0x00185d1c: jal 0x182c38
    v0 = local_298;                                             // 0x00185d24: lw $v0, 0x298($sp)
    if (v0 != 0) goto label_0x185e7c;                           // 0x00185d28: bnez $v0, 0x185e7c
    a2 = 0x8000 << 16;                                          // 0x00185d30: lui $a2, 0x8000
    a2 = s1 | a2;                                               // 0x00185d34: or $a2, $s1, $a2
    func_00182c38();  // 182c38                                // 0x00185d3c: jal 0x182c38
    v0 = local_298;                                             // 0x00185d44: lw $v0, 0x298($sp)
    if (v0 != 0) goto label_0x185e80;                           // 0x00185d48: bnez $v0, 0x185e80
    v0 = 0x7fff << 16;                                          // 0x00185d50: lui $v0, 0x7fff
label_0x185d54:
    v1 = s2 + -0x400;                                           // 0x00185d54: addiu $v1, $s2, -0x400
    v0 = v0 | 0xffff;                                           // 0x00185d58: ori $v0, $v0, 0xffff
    if (s2 != 0) s2 = v1;                                       // 0x00185d5c: movn $s2, $v1, $s2
    goto label_0x185bd0;                                        // 0x00185d60: b 0x185bd0
    s1 = s1 & v0;                                               // 0x00185d64: and $s1, $s1, $v0
    a1 = local_287;                                             // 0x00185d68: lbu $a1, 0x287($sp)
label_0x185d6c:
    v1 = 0xa;                                                   // 0x00185d6c: addiu $v1, $zero, 0xa
    a3 = local_282;                                             // 0x00185d70: lbu $a3, 0x282($sp)
    a2 = local_281;                                             // 0x00185d78: lbu $a2, 0x281($sp)
    v0 = (unsigned)a1 >> 4;                                     // 0x00185d7c: srl $v0, $a1, 4
    s0 = local_286;                                             // 0x00185d80: lbu $s0, 0x286($sp)
    t6 = (unsigned)a3 >> 4;                                     // 0x00185d84: srl $t6, $a3, 4
    t3 = local_285;                                             // 0x00185d88: lbu $t3, 0x285($sp)
    t1 = (unsigned)a2 >> 4;                                     // 0x00185d8c: srl $t1, $a2, 4
    t2 = local_283;                                             // 0x00185d90: lbu $t2, 0x283($sp)
    t7 = (unsigned)s0 >> 4;                                     // 0x00185d94: srl $t7, $s0, 4
    t4 = (unsigned)t3 >> 4;                                     // 0x00185d98: srl $t4, $t3, 4
    /* multiply: v0 * v1 -> hi:lo */                            // 0x00185d9c: mult $ac2, $v0, $v1
    t5 = (unsigned)t2 >> 4;                                     // 0x00185da0: srl $t5, $t2, 4
    a1 = a1 & 0xf;                                              // 0x00185dac: andi $a1, $a1, 0xf
    t0 = local_0;                                               // 0x00185db4: lhu $t0, 0($sp)
    a3 = a3 & 0xf;                                              // 0x00185dbc: andi $a3, $a3, 0xf
    a2 = a2 & 0xf;                                              // 0x00185dc4: andi $a2, $a2, 0xf
    v0 = v0 + a1;                                               // 0x00185dc8: addu $v0, $v0, $a1
    t6 = t6 + a3;                                               // 0x00185dcc: addu $t6, $t6, $a3
    t1 = t1 + a2;                                               // 0x00185dd0: addu $t1, $t1, $a2
    s0 = s0 & 0xf;                                              // 0x00185dd4: andi $s0, $s0, 0xf
    t3 = t3 & 0xf;                                              // 0x00185dd8: andi $t3, $t3, 0xf
    t2 = t2 & 0xf;                                              // 0x00185ddc: andi $t2, $t2, 0xf
    t7 = t7 + s0;                                               // 0x00185de0: addu $t7, $t7, $s0
    t4 = t4 + t3;                                               // 0x00185de4: addu $t4, $t4, $t3
    t5 = t5 + t2;                                               // 0x00185de8: addu $t5, $t5, $t2
    t0 = t0 | 0x80;                                             // 0x00185dec: ori $t0, $t0, 0x80
    v0 = v0 + 0x7d0;                                            // 0x00185df0: addiu $v0, $v0, 0x7d0
    a2 = local_290;                                             // 0x00185df4: lw $a2, 0x290($sp)
    a3 = local_294;                                             // 0x00185df8: lw $a3, 0x294($sp)
    local_0 = t0;                                               // 0x00185e00: sh $t0, 0($sp)
    local_1e = v0;                                              // 0x00185e04: sh $v0, 0x1e($sp)
    local_1d = t7;                                              // 0x00185e08: sb $t7, 0x1d($sp)
    local_1c = t4;                                              // 0x00185e0c: sb $t4, 0x1c($sp)
    local_1b = t5;                                              // 0x00185e10: sb $t5, 0x1b($sp)
    local_1a = t6;                                              // 0x00185e14: sb $t6, 0x1a($sp)
    func_00184770();  // 184770                                // 0x00185e18: jal 0x184770
    local_19 = t1;                                              // 0x00185e1c: sb $t1, 0x19($sp)
    if (v0 != 0) goto label_0x185e7c;                           // 0x00185e20: bnez $v0, 0x185e7c
    local_298 = v0;                                             // 0x00185e24: sw $v0, 0x298($sp)
    a1 = local_290;                                             // 0x00185e28: lw $a1, 0x290($sp)
    func_00184f18();  // 184f18                                // 0x00185e30: jal 0x184f18
    if (v0 != 0) goto label_0x185e7c;                           // 0x00185e38: bnez $v0, 0x185e7c
    local_298 = v0;                                             // 0x00185e3c: sw $v0, 0x298($sp)
    func_001829e0();  // 1829e0                                // 0x00185e40: jal 0x1829e0
    if (v0 != 0) goto label_0x185e5c;                           // 0x00185e48: bnez $v0, 0x185e5c
    local_29c = v0;                                             // 0x00185e4c: sw $v0, 0x29c($sp)
label_0x185e50:
    v0 = 0x8101 << 16;                                          // 0x00185e50: lui $v0, 0x8101
    goto label_0x185e7c;                                        // 0x00185e54: b 0x185e7c
    v0 = v0 | 0x6f;                                             // 0x00185e58: ori $v0, $v0, 0x6f
label_0x185e5c:
    func_00186e48();  // 186e48                                // 0x00185e5c: jal 0x186e48
    v1 = 0x8101 << 16;                                          // 0x00185e64: lui $v1, 0x8101
    a0 = local_2a0;                                             // 0x00185e68: lw $a0, 0x2a0($sp)
    v1 = v1 | 0x6f;                                             // 0x00185e6c: ori $v1, $v1, 0x6f
    local_29c = v0;                                             // 0x00185e70: sw $v0, 0x29c($sp)
    if (v0 == 0) a0 = v1;                                       // 0x00185e74: movz $a0, $v1, $v0
label_0x185e7c:
label_0x185e80:
    return;                                                     // 0x00185ea4: jr $ra
    sp = sp + 0x350;                                            // 0x00185ea8: addiu $sp, $sp, 0x350
}