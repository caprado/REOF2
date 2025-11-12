void func_00110a68() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00110a68: addiu $sp, $sp, -0x10
    if (t1 != 0) goto label_0x110d48;                           // 0x00110a84: bnez $t1, 0x110d48
    v0 = ((unsigned)t2 < (unsigned)a3) ? 1 : 0;                 // 0x00110a8c: sltu $v0, $t2, $a3
    if (v0 == 0) goto label_0x110b10;                           // 0x00110a90: beqz $v0, 0x110b10
    v0 = 0 | 0xffff;                                            // 0x00110a94: ori $v0, $zero, 0xffff
    v0 = ((unsigned)v0 < (unsigned)a3) ? 1 : 0;                 // 0x00110a98: sltu $v0, $v0, $a3
    if (v0 != 0) goto label_0x110ab8;                           // 0x00110a9c: bnez $v0, 0x110ab8
    v0 = 0xff << 16;                                            // 0x00110aa0: lui $v0, 0xff
    v0 = ((unsigned)a3 < (unsigned)0x100) ? 1 : 0;              // 0x00110aa4: sltiu $v0, $a3, 0x100
    a0 = 8;                                                     // 0x00110aa8: addiu $a0, $zero, 8
    goto label_0x110acc;                                        // 0x00110aac: b 0x110acc
    if (v0 != 0) a0 = 0;                                        // 0x00110ab0: movn $a0, $zero, $v0
    /* nop */                                                   // 0x00110ab4: nop 
label_0x110ab8:
    v1 = 0x18;                                                  // 0x00110ab8: addiu $v1, $zero, 0x18
    v0 = v0 | 0xffff;                                           // 0x00110abc: ori $v0, $v0, 0xffff
    a0 = 0x10;                                                  // 0x00110ac0: addiu $a0, $zero, 0x10
    v0 = ((unsigned)v0 < (unsigned)a3) ? 1 : 0;                 // 0x00110ac4: sltu $v0, $v0, $a3
    if (v0 != 0) a0 = v1;                                       // 0x00110ac8: movn $a0, $v1, $v0
label_0x110acc:
    v1 = (unsigned)a3 >> a0;                                    // 0x00110acc: srlv $v1, $a3, $a0
    a1 = 0x20;                                                  // 0x00110ad0: addiu $a1, $zero, 0x20
    v0 = 0x22 << 16;                                            // 0x00110ad4: lui $v0, 0x22
    v0 = v0 + v1;                                               // 0x00110ad8: addu $v0, $v0, $v1
    v0 = g_00220d20;  // Global at 0x00220d20                   // 0x00110adc: lbu $v0, 0xd20($v0)
    v0 = v0 + a0;                                               // 0x00110ae0: addu $v0, $v0, $a0
    t4 = a1 - v0;                                               // 0x00110ae4: subu $t4, $a1, $v0
    if (t4 == 0) goto label_0x110b04;                           // 0x00110ae8: beqz $t4, 0x110b04
    v0 = a1 - t4;                                               // 0x00110aec: subu $v0, $a1, $t4
    v1 = t2 << t4;                                              // 0x00110af0: sllv $v1, $t2, $t4
    v0 = (unsigned)t5 >> v0;                                    // 0x00110af4: srlv $v0, $t5, $v0
    t5 = t5 << t4;                                              // 0x00110af8: sllv $t5, $t5, $t4
    t2 = v1 | v0;                                               // 0x00110afc: or $t2, $v1, $v0
    a3 = a3 << t4;                                              // 0x00110b00: sllv $a3, $a3, $t4
label_0x110b04:
    a2 = (unsigned)a3 >> 0x10;                                  // 0x00110b04: srl $a2, $a3, 0x10
    goto label_0x110c70;                                        // 0x00110b08: b 0x110c70
    t1 = a3 & 0xffff;                                           // 0x00110b0c: andi $t1, $a3, 0xffff
label_0x110b10:
    if (a3 != 0) goto label_0x110b38;                           // 0x00110b10: bnez $a3, 0x110b38
    v0 = ((unsigned)v0 < (unsigned)a3) ? 1 : 0;                 // 0x00110b14: sltu $v0, $v0, $a3
    v0 = 1;                                                     // 0x00110b18: addiu $v0, $zero, 1
    /* beqzl $a3, 0x110b24 */                                   // 0x00110b1c: beqzl $a3, 0x110b24
    /* break (trap) */                                          // 0x00110b20: break 0, 7
    /* divide: v0 / t1 -> hi:lo */                              // 0x00110b24: divu $zero, $v0, $t1
    /* mflo $v0 */                                              // 0x00110b28
    v0 = 0 | 0xffff;                                            // 0x00110b30: ori $v0, $zero, 0xffff
    v0 = ((unsigned)v0 < (unsigned)a3) ? 1 : 0;                 // 0x00110b34: sltu $v0, $v0, $a3
label_0x110b38:
    if (v0 != 0) goto label_0x110b50;                           // 0x00110b38: bnez $v0, 0x110b50
    v0 = 0xff << 16;                                            // 0x00110b3c: lui $v0, 0xff
    v0 = ((unsigned)a3 < (unsigned)0x100) ? 1 : 0;              // 0x00110b40: sltiu $v0, $a3, 0x100
    a0 = 8;                                                     // 0x00110b44: addiu $a0, $zero, 8
    goto label_0x110b64;                                        // 0x00110b48: b 0x110b64
    if (v0 != 0) a0 = 0;                                        // 0x00110b4c: movn $a0, $zero, $v0
label_0x110b50:
    v1 = 0x18;                                                  // 0x00110b50: addiu $v1, $zero, 0x18
    v0 = v0 | 0xffff;                                           // 0x00110b54: ori $v0, $v0, 0xffff
    a0 = 0x10;                                                  // 0x00110b58: addiu $a0, $zero, 0x10
    v0 = ((unsigned)v0 < (unsigned)a3) ? 1 : 0;                 // 0x00110b5c: sltu $v0, $v0, $a3
    if (v0 != 0) a0 = v1;                                       // 0x00110b60: movn $a0, $v1, $v0
label_0x110b64:
    v1 = (unsigned)a3 >> a0;                                    // 0x00110b64: srlv $v1, $a3, $a0
    a1 = 0x20;                                                  // 0x00110b68: addiu $a1, $zero, 0x20
    v0 = 0x22 << 16;                                            // 0x00110b6c: lui $v0, 0x22
    v0 = v0 + v1;                                               // 0x00110b70: addu $v0, $v0, $v1
    v0 = g_00220d20;  // Global at 0x00220d20                   // 0x00110b74: lbu $v0, 0xd20($v0)
    v0 = v0 + a0;                                               // 0x00110b78: addu $v0, $v0, $a0
    t4 = a1 - v0;                                               // 0x00110b7c: subu $t4, $a1, $v0
    if (t4 != 0) goto label_0x110b98;                           // 0x00110b80: bnez $t4, 0x110b98
    t7 = a1 - t4;                                               // 0x00110b84: subu $t7, $a1, $t4
    t2 = t2 - a3;                                               // 0x00110b88: subu $t2, $t2, $a3
    a1 = (unsigned)a3 >> 0x10;                                  // 0x00110b8c: srl $a1, $a3, 0x10
    goto label_0x110c68;                                        // 0x00110b90: b 0x110c68
    t6 = a3 & 0xffff;                                           // 0x00110b94: andi $t6, $a3, 0xffff
label_0x110b98:
    v1 = t2 << t4;                                              // 0x00110b98: sllv $v1, $t2, $t4
    v0 = (unsigned)t5 >> t7;                                    // 0x00110b9c: srlv $v0, $t5, $t7
    t5 = t5 << t4;                                              // 0x00110ba0: sllv $t5, $t5, $t4
    a0 = (unsigned)t2 >> t7;                                    // 0x00110ba4: srlv $a0, $t2, $t7
    t2 = v1 | v0;                                               // 0x00110ba8: or $t2, $v1, $v0
    a3 = a3 << t4;                                              // 0x00110bac: sllv $a3, $a3, $t4
    a1 = (unsigned)a3 >> 0x10;                                  // 0x00110bb0: srl $a1, $a3, 0x10
    /* divide: a0 / a1 -> hi:lo */                              // 0x00110bb4: divu $zero, $a0, $a1
    a0 = (unsigned)t2 >> 0x10;                                  // 0x00110bb8: srl $a0, $t2, 0x10
    t6 = a3 & 0xffff;                                           // 0x00110bbc: andi $t6, $a3, 0xffff
    /* beqzl $t1, 0x110bcc */                                   // 0x00110bc4: beqzl $t1, 0x110bcc
    /* break (trap) */                                          // 0x00110bc8: break 0, 7
    /* mflo $v0 */                                              // 0x00110bcc
    /* mfhi $v1 */                                              // 0x00110bd0
    v1 = v1 << 0x10;                                            // 0x00110bd8: sll $v1, $v1, 0x10
    a2 = v1 | a0;                                               // 0x00110bdc: or $a2, $v1, $a0
    v0 = ((unsigned)a2 < (unsigned)t0) ? 1 : 0;                 // 0x00110be0: sltu $v0, $a2, $t0
    if (v0 == 0) goto label_0x110c10;                           // 0x00110be4: beqz $v0, 0x110c10
    a2 = a2 + a3;                                               // 0x00110bec: addu $a2, $a2, $a3
    v0 = ((unsigned)a2 < (unsigned)a3) ? 1 : 0;                 // 0x00110bf0: sltu $v0, $a2, $a3
    /* bnezl $v0, 0x110c14 */                                   // 0x00110bf4: bnezl $v0, 0x110c14
    a2 = a2 - t0;                                               // 0x00110bf8: subu $a2, $a2, $t0
    v0 = ((unsigned)a2 < (unsigned)t0) ? 1 : 0;                 // 0x00110bfc: sltu $v0, $a2, $t0
    v1 = a2 + a3;                                               // 0x00110c00: addu $v1, $a2, $a3
    v0 = v0 ^ 0;                                                // 0x00110c04: xori $v0, $v0, 0
    if (v0 != 0) a2 = v1;                                       // 0x00110c08: movn $a2, $v1, $v0
    /* nop */                                                   // 0x00110c0c: nop 
label_0x110c10:
    a2 = a2 - t0;                                               // 0x00110c10: subu $a2, $a2, $t0
    a0 = t2 & 0xffff;                                           // 0x00110c14: andi $a0, $t2, 0xffff
    /* divide: a2 / t1 -> hi:lo */                              // 0x00110c18: divu $zero, $a2, $t1
    /* beqzl $t1, 0x110c24 */                                   // 0x00110c1c: beqzl $t1, 0x110c24
    /* break (trap) */                                          // 0x00110c20: break 0, 7
    /* mflo $v0 */                                              // 0x00110c24
    /* mfhi $v1 */                                              // 0x00110c28
    v1 = v1 << 0x10;                                            // 0x00110c30: sll $v1, $v1, 0x10
    a0 = v1 | a0;                                               // 0x00110c34: or $a0, $v1, $a0
    v0 = ((unsigned)a0 < (unsigned)t0) ? 1 : 0;                 // 0x00110c38: sltu $v0, $a0, $t0
    if (v0 == 0) goto label_0x110c68;                           // 0x00110c3c: beqz $v0, 0x110c68
    t2 = a0 - t0;                                               // 0x00110c40: subu $t2, $a0, $t0
    a0 = a0 + a3;                                               // 0x00110c44: addu $a0, $a0, $a3
    v0 = ((unsigned)a0 < (unsigned)a3) ? 1 : 0;                 // 0x00110c48: sltu $v0, $a0, $a3
    if (v0 != 0) goto label_0x110c68;                           // 0x00110c4c: bnez $v0, 0x110c68
    t2 = a0 - t0;                                               // 0x00110c50: subu $t2, $a0, $t0
    v0 = ((unsigned)a0 < (unsigned)t0) ? 1 : 0;                 // 0x00110c54: sltu $v0, $a0, $t0
    v1 = a0 + a3;                                               // 0x00110c58: addu $v1, $a0, $a3
    v0 = v0 ^ 0;                                                // 0x00110c5c: xori $v0, $v0, 0
    if (v0 != 0) a0 = v1;                                       // 0x00110c60: movn $a0, $v1, $v0
    t2 = a0 - t0;                                               // 0x00110c64: subu $t2, $a0, $t0
label_0x110c68:
label_0x110c70:
    /* divide: t2 / a2 -> hi:lo */                              // 0x00110c70: divu $zero, $t2, $a2
    a0 = (unsigned)t5 >> 0x10;                                  // 0x00110c74: srl $a0, $t5, 0x10
    /* beqzl $a2, 0x110c80 */                                   // 0x00110c78: beqzl $a2, 0x110c80
    /* break (trap) */                                          // 0x00110c7c: break 0, 7
    /* mflo $v0 */                                              // 0x00110c80
    /* mfhi $v1 */                                              // 0x00110c84
    v1 = v1 << 0x10;                                            // 0x00110c8c: sll $v1, $v1, 0x10
    a1 = v1 | a0;                                               // 0x00110c90: or $a1, $v1, $a0
    v0 = ((unsigned)a1 < (unsigned)t0) ? 1 : 0;                 // 0x00110c94: sltu $v0, $a1, $t0
    /* beqzl $v0, 0x110cc4 */                                   // 0x00110c98: beqzl $v0, 0x110cc4
    a1 = a1 - t0;                                               // 0x00110c9c: subu $a1, $a1, $t0
    a1 = a1 + a3;                                               // 0x00110ca0: addu $a1, $a1, $a3
    v0 = ((unsigned)a1 < (unsigned)a3) ? 1 : 0;                 // 0x00110ca4: sltu $v0, $a1, $a3
    /* bnezl $v0, 0x110cc4 */                                   // 0x00110ca8: bnezl $v0, 0x110cc4
    a1 = a1 - t0;                                               // 0x00110cac: subu $a1, $a1, $t0
    v0 = ((unsigned)a1 < (unsigned)t0) ? 1 : 0;                 // 0x00110cb0: sltu $v0, $a1, $t0
    v1 = a1 + a3;                                               // 0x00110cb4: addu $v1, $a1, $a3
    v0 = v0 ^ 0;                                                // 0x00110cb8: xori $v0, $v0, 0
    if (v0 != 0) a1 = v1;                                       // 0x00110cbc: movn $a1, $v1, $v0
    a1 = a1 - t0;                                               // 0x00110cc0: subu $a1, $a1, $t0
    a0 = t5 & 0xffff;                                           // 0x00110cc4: andi $a0, $t5, 0xffff
    /* divide: a1 / a2 -> hi:lo */                              // 0x00110cc8: divu $zero, $a1, $a2
    /* beqzl $a2, 0x110cd4 */                                   // 0x00110ccc: beqzl $a2, 0x110cd4
    /* break (trap) */                                          // 0x00110cd0: break 0, 7
    /* mflo $v0 */                                              // 0x00110cd4
    /* mfhi $v1 */                                              // 0x00110cd8
    v1 = v1 << 0x10;                                            // 0x00110ce0: sll $v1, $v1, 0x10
    a0 = v1 | a0;                                               // 0x00110ce4: or $a0, $v1, $a0
    v0 = ((unsigned)a0 < (unsigned)t0) ? 1 : 0;                 // 0x00110ce8: sltu $v0, $a0, $t0
    if (v0 == 0) goto label_0x110d10;                           // 0x00110cec: beqz $v0, 0x110d10
    /* nop */                                                   // 0x00110cf0: nop 
    a0 = a0 + a3;                                               // 0x00110cf4: addu $a0, $a0, $a3
    v0 = ((unsigned)a0 < (unsigned)a3) ? 1 : 0;                 // 0x00110cf8: sltu $v0, $a0, $a3
    if (v0 != 0) goto label_0x110d10;                           // 0x00110cfc: bnez $v0, 0x110d10
    v0 = ((unsigned)a0 < (unsigned)t0) ? 1 : 0;                 // 0x00110d00: sltu $v0, $a0, $t0
    v1 = a0 + a3;                                               // 0x00110d04: addu $v1, $a0, $a3
    v0 = v0 ^ 0;                                                // 0x00110d08: xori $v0, $v0, 0
    if (v0 != 0) a0 = v1;                                       // 0x00110d0c: movn $a0, $v1, $v0
label_0x110d10:
    if (t8 == 0) goto label_0x110fc4;                           // 0x00110d10: beqz $t8, 0x110fc4
    t5 = a0 - t0;                                               // 0x00110d14: subu $t5, $a0, $t0
    v0 = (unsigned)t5 >> t4;                                    // 0x00110d18: srlv $v0, $t5, $t4
    v1 = -1;                                                    // 0x00110d1c: addiu $v1, $zero, -1
    t3 = t3 & v1;                                               // 0x00110d28: and $t3, $t3, $v1
    v1 = 0xffff << 16;                                          // 0x00110d30: lui $v1, 0xffff
    t3 = t3 | v0;                                               // 0x00110d38: or $t3, $t3, $v0
    goto label_0x110fc0;                                        // 0x00110d3c: b 0x110fc0
    t3 = t3 & v1;                                               // 0x00110d40: and $t3, $t3, $v1
    /* nop */                                                   // 0x00110d44: nop 
label_0x110d48:
    v0 = ((unsigned)t2 < (unsigned)t1) ? 1 : 0;                 // 0x00110d48: sltu $v0, $t2, $t1
    if (v0 == 0) goto label_0x110d88;                           // 0x00110d4c: beqz $v0, 0x110d88
    v0 = 0 | 0xffff;                                            // 0x00110d50: ori $v0, $zero, 0xffff
    v1 = -1;                                                    // 0x00110d54: addiu $v1, $zero, -1
    t3 = t3 & v1;                                               // 0x00110d64: and $t3, $t3, $v1
    t3 = t3 | v0;                                               // 0x00110d68: or $t3, $t3, $v0
    v1 = 0xffff << 16;                                          // 0x00110d70: lui $v1, 0xffff
    t3 = t3 & v1;                                               // 0x00110d78: and $t3, $t3, $v1
    t3 = t3 | v0;                                               // 0x00110d7c: or $t3, $t3, $v0
    goto label_0x110fc4;                                        // 0x00110d80: b 0x110fc4
label_0x110d88:
    v0 = ((unsigned)v0 < (unsigned)t1) ? 1 : 0;                 // 0x00110d88: sltu $v0, $v0, $t1
    if (v0 != 0) goto label_0x110da8;                           // 0x00110d8c: bnez $v0, 0x110da8
    v0 = 0xff << 16;                                            // 0x00110d90: lui $v0, 0xff
    v0 = ((unsigned)t1 < (unsigned)0x100) ? 1 : 0;              // 0x00110d94: sltiu $v0, $t1, 0x100
    a0 = 8;                                                     // 0x00110d98: addiu $a0, $zero, 8
    goto label_0x110dbc;                                        // 0x00110d9c: b 0x110dbc
    if (v0 != 0) a0 = 0;                                        // 0x00110da0: movn $a0, $zero, $v0
    /* nop */                                                   // 0x00110da4: nop 
label_0x110da8:
    v1 = 0x18;                                                  // 0x00110da8: addiu $v1, $zero, 0x18
    v0 = v0 | 0xffff;                                           // 0x00110dac: ori $v0, $v0, 0xffff
    a0 = 0x10;                                                  // 0x00110db0: addiu $a0, $zero, 0x10
    v0 = ((unsigned)v0 < (unsigned)t1) ? 1 : 0;                 // 0x00110db4: sltu $v0, $v0, $t1
    if (v0 != 0) a0 = v1;                                       // 0x00110db8: movn $a0, $v1, $v0
label_0x110dbc:
    v1 = (unsigned)t1 >> a0;                                    // 0x00110dbc: srlv $v1, $t1, $a0
    a1 = 0x20;                                                  // 0x00110dc0: addiu $a1, $zero, 0x20
    v0 = 0x22 << 16;                                            // 0x00110dc4: lui $v0, 0x22
    v0 = v0 + v1;                                               // 0x00110dc8: addu $v0, $v0, $v1
    v0 = g_00220d20;  // Global at 0x00220d20                   // 0x00110dcc: lbu $v0, 0xd20($v0)
    v0 = v0 + a0;                                               // 0x00110dd0: addu $v0, $v0, $a0
    t4 = a1 - v0;                                               // 0x00110dd4: subu $t4, $a1, $v0
    if (t4 != 0) goto label_0x110e40;                           // 0x00110dd8: bnez $t4, 0x110e40
    t7 = a1 - t4;                                               // 0x00110ddc: subu $t7, $a1, $t4
    v0 = ((unsigned)t1 < (unsigned)t2) ? 1 : 0;                 // 0x00110de0: sltu $v0, $t1, $t2
    if (v0 != 0) goto label_0x110df8;                           // 0x00110de4: bnez $v0, 0x110df8
    v0 = t5 - a3;                                               // 0x00110de8: subu $v0, $t5, $a3
    v0 = ((unsigned)t5 < (unsigned)a3) ? 1 : 0;                 // 0x00110dec: sltu $v0, $t5, $a3
    if (v0 != 0) goto label_0x110e08;                           // 0x00110df0: bnez $v0, 0x110e08
    v0 = t5 - a3;                                               // 0x00110df4: subu $v0, $t5, $a3
label_0x110df8:
    a0 = t2 - t1;                                               // 0x00110df8: subu $a0, $t2, $t1
    v1 = ((unsigned)t5 < (unsigned)v0) ? 1 : 0;                 // 0x00110dfc: sltu $v1, $t5, $v0
    t2 = a0 - v1;                                               // 0x00110e04: subu $t2, $a0, $v1
label_0x110e08:
    if (t8 == 0) goto label_0x110fc4;                           // 0x00110e08: beqz $t8, 0x110fc4
    v1 = -1;                                                    // 0x00110e10: addiu $v1, $zero, -1
    t3 = t3 & v1;                                               // 0x00110e1c: and $t3, $t3, $v1
    t3 = t3 | v0;                                               // 0x00110e20: or $t3, $t3, $v0
    v1 = 0xffff << 16;                                          // 0x00110e28: lui $v1, 0xffff
    t3 = t3 & v1;                                               // 0x00110e30: and $t3, $t3, $v1
    goto label_0x110fc0;                                        // 0x00110e34: b 0x110fc0
    t3 = t3 | v0;                                               // 0x00110e38: or $t3, $t3, $v0
    /* nop */                                                   // 0x00110e3c: nop 
label_0x110e40:
    a1 = t2 << t4;                                              // 0x00110e40: sllv $a1, $t2, $t4
    a0 = t1 << t4;                                              // 0x00110e44: sllv $a0, $t1, $t4
    v0 = (unsigned)a3 >> t7;                                    // 0x00110e48: srlv $v0, $a3, $t7
    v1 = (unsigned)t5 >> t7;                                    // 0x00110e4c: srlv $v1, $t5, $t7
    t5 = t5 << t4;                                              // 0x00110e50: sllv $t5, $t5, $t4
    t1 = a0 | v0;                                               // 0x00110e54: or $t1, $a0, $v0
    a0 = (unsigned)t2 >> t7;                                    // 0x00110e58: srlv $a0, $t2, $t7
    a3 = a3 << t4;                                              // 0x00110e5c: sllv $a3, $a3, $t4
    t2 = a1 | v1;                                               // 0x00110e60: or $t2, $a1, $v1
    a2 = (unsigned)t1 >> 0x10;                                  // 0x00110e64: srl $a2, $t1, 0x10
    /* divide: a0 / a2 -> hi:lo */                              // 0x00110e68: divu $zero, $a0, $a2
    a0 = (unsigned)t2 >> 0x10;                                  // 0x00110e6c: srl $a0, $t2, 0x10
    a1 = t1 & 0xffff;                                           // 0x00110e70: andi $a1, $t1, 0xffff
    /* beqzl $a2, 0x110e7c */                                   // 0x00110e74: beqzl $a2, 0x110e7c
    /* break (trap) */                                          // 0x00110e78: break 0, 7
    /* mflo $v0 */                                              // 0x00110e7c
    /* mfhi $v1 */                                              // 0x00110e80
    v1 = v1 << 0x10;                                            // 0x00110e88: sll $v1, $v1, 0x10
    v1 = v1 | a0;                                               // 0x00110e90: or $v1, $v1, $a0
    v0 = ((unsigned)v1 < (unsigned)t0) ? 1 : 0;                 // 0x00110e94: sltu $v0, $v1, $t0
    /* beqzl $v0, 0x110ecc */                                   // 0x00110e98: beqzl $v0, 0x110ecc
    v1 = v1 - t0;                                               // 0x00110e9c: subu $v1, $v1, $t0
    v1 = v1 + t1;                                               // 0x00110ea0: addu $v1, $v1, $t1
    v0 = ((unsigned)v1 < (unsigned)t1) ? 1 : 0;                 // 0x00110ea4: sltu $v0, $v1, $t1
    if (v0 != 0) goto label_0x110ec8;                           // 0x00110ea8: bnez $v0, 0x110ec8
    t6 = t6 + -1;                                               // 0x00110eac: addiu $t6, $t6, -1
    v0 = ((unsigned)v1 < (unsigned)t0) ? 1 : 0;                 // 0x00110eb0: sltu $v0, $v1, $t0
    /* beqzl $v0, 0x110ecc */                                   // 0x00110eb4: beqzl $v0, 0x110ecc
    v1 = v1 - t0;                                               // 0x00110eb8: subu $v1, $v1, $t0
    t6 = t6 + -1;                                               // 0x00110ebc: addiu $t6, $t6, -1
    v1 = v1 + t1;                                               // 0x00110ec0: addu $v1, $v1, $t1
    /* nop */                                                   // 0x00110ec4: nop 
label_0x110ec8:
    v1 = v1 - t0;                                               // 0x00110ec8: subu $v1, $v1, $t0
    /* beqzl $a2, 0x110ed4 */                                   // 0x00110ecc: beqzl $a2, 0x110ed4
    /* break (trap) */                                          // 0x00110ed0: break 0, 7
    /* divide: v1 / a2 -> hi:lo */                              // 0x00110ed4: divu $zero, $v1, $a2
    a0 = t2 & 0xffff;                                           // 0x00110ed8: andi $a0, $t2, 0xffff
    /* mflo $v0 */                                              // 0x00110edc
    /* mfhi $v1 */                                              // 0x00110ee0
    v1 = v1 << 0x10;                                            // 0x00110ee8: sll $v1, $v1, 0x10
    a1 = v1 | a0;                                               // 0x00110ef0: or $a1, $v1, $a0
    v0 = ((unsigned)a1 < (unsigned)t0) ? 1 : 0;                 // 0x00110ef4: sltu $v0, $a1, $t0
    /* beqzl $v0, 0x110f28 */                                   // 0x00110ef8: beqzl $v0, 0x110f28
    a1 = a1 - t0;                                               // 0x00110efc: subu $a1, $a1, $t0
    a1 = a1 + t1;                                               // 0x00110f00: addu $a1, $a1, $t1
    v0 = ((unsigned)a1 < (unsigned)t1) ? 1 : 0;                 // 0x00110f04: sltu $v0, $a1, $t1
    if (v0 != 0) goto label_0x110f24;                           // 0x00110f08: bnez $v0, 0x110f24
    a2 = a2 + -1;                                               // 0x00110f0c: addiu $a2, $a2, -1
    v0 = ((unsigned)a1 < (unsigned)t0) ? 1 : 0;                 // 0x00110f10: sltu $v0, $a1, $t0
    /* beqzl $v0, 0x110f28 */                                   // 0x00110f14: beqzl $v0, 0x110f28
    a1 = a1 - t0;                                               // 0x00110f18: subu $a1, $a1, $t0
    a2 = a2 + -1;                                               // 0x00110f1c: addiu $a2, $a2, -1
    a1 = a1 + t1;                                               // 0x00110f20: addu $a1, $a1, $t1
label_0x110f24:
    a1 = a1 - t0;                                               // 0x00110f24: subu $a1, $a1, $t0
    v0 = t6 << 0x10;                                            // 0x00110f28: sll $v0, $t6, 0x10
    v0 = v0 | a2;                                               // 0x00110f2c: or $v0, $v0, $a2
    /* multiply: a3 *  -> hi:lo */                              // 0x00110f34: multu $v0, $a3
    /* mfhi $a2 */                                              // 0x00110f38
    /* mflo $t0 */                                              // 0x00110f3c
    v1 = ((unsigned)t2 < (unsigned)a2) ? 1 : 0;                 // 0x00110f40: sltu $v1, $t2, $a2
    if (v1 != 0) goto label_0x110f60;                           // 0x00110f44: bnez $v1, 0x110f60
    v0 = t0 - a3;                                               // 0x00110f48: subu $v0, $t0, $a3
    if (a2 != t2) goto label_0x110f70;                          // 0x00110f4c: bne $a2, $t2, 0x110f70
    v0 = ((unsigned)t5 < (unsigned)t0) ? 1 : 0;                 // 0x00110f50: sltu $v0, $t5, $t0
    if (v0 == 0) goto label_0x110f70;                           // 0x00110f54: beqz $v0, 0x110f70
    v0 = t0 - a3;                                               // 0x00110f58: subu $v0, $t0, $a3
    /* nop */                                                   // 0x00110f5c: nop 
label_0x110f60:
    a0 = a2 - t1;                                               // 0x00110f60: subu $a0, $a2, $t1
    v1 = ((unsigned)t0 < (unsigned)v0) ? 1 : 0;                 // 0x00110f64: sltu $v1, $t0, $v0
    a2 = a0 - v1;                                               // 0x00110f6c: subu $a2, $a0, $v1
label_0x110f70:
    if (t8 == 0) goto label_0x110fc4;                           // 0x00110f70: beqz $t8, 0x110fc4
    a0 = t5 - t0;                                               // 0x00110f74: subu $a0, $t5, $t0
    a1 = a1 - a2;                                               // 0x00110f78: subu $a1, $a1, $a2
    v1 = ((unsigned)t5 < (unsigned)a0) ? 1 : 0;                 // 0x00110f7c: sltu $v1, $t5, $a0
    t2 = a1 - v1;                                               // 0x00110f80: subu $t2, $a1, $v1
    v0 = t2 << t7;                                              // 0x00110f84: sllv $v0, $t2, $t7
    v1 = -1;                                                    // 0x00110f88: addiu $v1, $zero, -1
    a0 = (unsigned)a0 >> t4;                                    // 0x00110f90: srlv $a0, $a0, $t4
    t3 = t3 & v1;                                               // 0x00110f94: and $t3, $t3, $v1
    v0 = v0 | a0;                                               // 0x00110f98: or $v0, $v0, $a0
    a0 = 0xffff << 16;                                          // 0x00110f9c: lui $a0, 0xffff
    v1 = (unsigned)t2 >> t4;                                    // 0x00110fa8: srlv $v1, $t2, $t4
    t3 = t3 | v0;                                               // 0x00110fb4: or $t3, $t3, $v0
    t3 = t3 & a0;                                               // 0x00110fb8: and $t3, $t3, $a0
    t3 = t3 | v1;                                               // 0x00110fbc: or $t3, $t3, $v1
label_0x110fc0:
label_0x110fc4:
    return;                                                     // 0x00110fc8: jr $ra
    sp = sp + 0x10;                                             // 0x00110fcc: addiu $sp, $sp, 0x10
}