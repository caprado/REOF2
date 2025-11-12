void func_00121be8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00121be8: addiu $sp, $sp, -0x30
    v1 = s0 >> 0x14;                                            // 0x00121c14: sra $v1, $s0, 0x14
    v1 = v1 & 0x7ff;                                            // 0x00121c18: andi $v1, $v1, 0x7ff
    s1 = v1 + -0x3ff;                                           // 0x00121c1c: addiu $s1, $v1, -0x3ff
    v0 = (s1 < 0x14) ? 1 : 0;                                   // 0x00121c20: slti $v0, $s1, 0x14
    if (v0 == 0) goto label_0x121cf8;                           // 0x00121c24: beqz $v0, 0x121cf8
    if (s1 >= 0) goto label_0x121c90;                           // 0x00121c2c: bgez $s1, 0x121c90
    a1 = 0xf << 16;                                             // 0x00121c30: lui $a1, 0xf
    v0 = 0x22 << 16;                                            // 0x00121c34: lui $v0, 0x22
    func_001119f0();  // 0x111998                                // 0x00121c3c: jal 0x111998
    /* nop */                                                   // 0x00121c40: nop 
    func_00111f90();  // 0x111f40                                // 0x00121c4c: jal 0x111f40
    /* nop */                                                   // 0x00121c50: nop 
    if (v0 <= 0) goto label_0x121dac;                           // 0x00121c54: blez $v0, 0x121dac
    /* nop */                                                   // 0x00121c58: nop 
    if (s0 < 0) goto label_0x121c70;                            // 0x00121c5c: bltz $s0, 0x121c70
    v0 = 0x7fff << 16;                                          // 0x00121c60: lui $v0, 0x7fff
    goto label_0x121dac;                                        // 0x00121c68: b 0x121dac
label_0x121c70:
    v0 = v0 | 0xffff;                                           // 0x00121c70: ori $v0, $v0, 0xffff
    v0 = s0 & v0;                                               // 0x00121c74: and $v0, $s0, $v0
    v0 = v0 | s2;                                               // 0x00121c78: or $v0, $v0, $s2
    if (v0 == 0) goto label_0x121dac;                           // 0x00121c7c: beqz $v0, 0x121dac
    /* nop */                                                   // 0x00121c80: nop 
    s0 = 0xbff0 << 16;                                          // 0x00121c84: lui $s0, 0xbff0
    goto label_0x121dac;                                        // 0x00121c88: b 0x121dac
label_0x121c90:
    a1 = a1 | 0xffff;                                           // 0x00121c94: ori $a1, $a1, 0xffff
    s3 = a1 >> s1;                                              // 0x00121c98: srav $s3, $a1, $s1
    v1 = s0 & s3;                                               // 0x00121c9c: and $v1, $s0, $s3
    v1 = v1 | s2;                                               // 0x00121ca0: or $v1, $v1, $s2
    /* beqzl $v1, 0x121de0 */                                   // 0x00121ca4: beqzl $v1, 0x121de0
    v0 = 0x22 << 16;                                            // 0x00121cac: lui $v0, 0x22
    func_001119f0();  // 0x111998                                // 0x00121cb4: jal 0x111998
    /* nop */                                                   // 0x00121cb8: nop 
    func_00111f90();  // 0x111f40                                // 0x00121cc4: jal 0x111f40
    /* nop */                                                   // 0x00121cc8: nop 
    if (v0 <= 0) goto label_0x121dac;                           // 0x00121ccc: blez $v0, 0x121dac
    /* nop */                                                   // 0x00121cd0: nop 
    if (s0 >= 0) goto label_0x121cec;                           // 0x00121cd4: bgez $s0, 0x121cec
    v0 = ~(0 | s3);                                             // 0x00121cd8: nor $v0, $zero, $s3
    v0 = 0x10 << 16;                                            // 0x00121cdc: lui $v0, 0x10
    v0 = v0 >> s1;                                              // 0x00121ce0: srav $v0, $v0, $s1
    s0 = s0 + v0;                                               // 0x00121ce4: addu $s0, $s0, $v0
    v0 = ~(0 | s3);                                             // 0x00121ce8: nor $v0, $zero, $s3
label_0x121cec:
    goto label_0x121dac;                                        // 0x00121cf0: b 0x121dac
    s0 = s0 & v0;                                               // 0x00121cf4: and $s0, $s0, $v0
label_0x121cf8:
    v0 = (s1 < 0x34) ? 1 : 0;                                   // 0x00121cf8: slti $v0, $s1, 0x34
    if (v0 != 0) goto label_0x121d28;                           // 0x00121cfc: bnez $v0, 0x121d28
    v0 = v1 + -0x413;                                           // 0x00121d00: addiu $v0, $v1, -0x413
    v0 = 0x400;                                                 // 0x00121d04: addiu $v0, $zero, 0x400
    if (s1 != v0) goto label_0x121dd8;                          // 0x00121d08: bne $s1, $v0, 0x121dd8
    /* nop */                                                   // 0x00121d0c: nop 
    func_001119f0();  // 0x111998                                // 0x00121d14: jal 0x111998
    /* nop */                                                   // 0x00121d18: nop 
    goto label_0x121de0;                                        // 0x00121d1c: b 0x121de0
    /* nop */                                                   // 0x00121d24: nop 
label_0x121d28:
    v1 = -1;                                                    // 0x00121d28: addiu $v1, $zero, -1
    s3 = (unsigned)v1 >> v0;                                    // 0x00121d2c: srlv $s3, $v1, $v0
    v1 = s2 & s3;                                               // 0x00121d34: and $v1, $s2, $s3
    /* beqzl $v1, 0x121de0 */                                   // 0x00121d38: beqzl $v1, 0x121de0
    v0 = 0x22 << 16;                                            // 0x00121d40: lui $v0, 0x22
    func_001119f0();  // 0x111998                                // 0x00121d48: jal 0x111998
    /* nop */                                                   // 0x00121d4c: nop 
    func_00111f90();  // 0x111f40                                // 0x00121d58: jal 0x111f40
    /* nop */                                                   // 0x00121d5c: nop 
    if (v0 <= 0) goto label_0x121dac;                           // 0x00121d60: blez $v0, 0x121dac
    /* nop */                                                   // 0x00121d64: nop 
    if (s0 >= 0) goto label_0x121da8;                           // 0x00121d68: bgez $s0, 0x121da8
    v0 = ~(0 | s3);                                             // 0x00121d6c: nor $v0, $zero, $s3
    v0 = 0x14;                                                  // 0x00121d70: addiu $v0, $zero, 0x14
    if (s1 != v0) goto label_0x121d88;                          // 0x00121d74: bne $s1, $v0, 0x121d88
    v0 = 0x34;                                                  // 0x00121d78: addiu $v0, $zero, 0x34
    goto label_0x121da4;                                        // 0x00121d7c: b 0x121da4
    s0 = s0 + 1;                                                // 0x00121d80: addiu $s0, $s0, 1
    /* nop */                                                   // 0x00121d84: nop 
label_0x121d88:
    v1 = 1;                                                     // 0x00121d88: addiu $v1, $zero, 1
    v0 = v0 - s1;                                               // 0x00121d8c: subu $v0, $v0, $s1
    v1 = v1 << v0;                                              // 0x00121d90: sllv $v1, $v1, $v0
    v1 = s2 + v1;                                               // 0x00121d94: addu $v1, $s2, $v1
    v0 = ((unsigned)v1 < (unsigned)s2) ? 1 : 0;                 // 0x00121d98: sltu $v0, $v1, $s2
    s0 = s0 + v0;                                               // 0x00121da0: addu $s0, $s0, $v0
label_0x121da4:
    v0 = ~(0 | s3);                                             // 0x00121da4: nor $v0, $zero, $s3
label_0x121da8:
    s2 = s2 & v0;                                               // 0x00121da8: and $s2, $s2, $v0
label_0x121dac:
    v1 = 0xffff << 16;                                          // 0x00121dac: lui $v1, 0xffff
    s4 = s4 & v1;                                               // 0x00121db8: and $s4, $s4, $v1
    v1 = -1;                                                    // 0x00121dbc: addiu $v1, $zero, -1
    s4 = s4 | a0;                                               // 0x00121dc8: or $s4, $s4, $a0
    s4 = s4 & v1;                                               // 0x00121dd0: and $s4, $s4, $v1
    a2 = s4 | v0;                                               // 0x00121dd4: or $a2, $s4, $v0
label_0x121dd8:
label_0x121de0:
    return;                                                     // 0x00121df4: jr $ra
    sp = sp + 0x30;                                             // 0x00121df8: addiu $sp, $sp, 0x30
}