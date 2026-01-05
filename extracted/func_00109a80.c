void func_00109a80() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x00109a80: addiu $sp, $sp, -0x50
    if (s1 != 0) goto label_0x109af0;                           // 0x00109ab4: bnez $s1, 0x109af0
    return func_00107908();  // Tail call                        // 0x00109ae8: j 0x1071e0
    sp = sp + 0x50;                                             // 0x00109aec: addiu $sp, $sp, 0x50
label_0x109af0:
    func_00107d30();  // 107d30                                // 0x00109af0: jal 0x107d30
    s0 = s1 + -8;                                               // 0x00109af4: addiu $s0, $s1, -8
    a1 = *(int32_t*)((s0) + 4);                                 // 0x00109af8: lw $a1, 4($s0)
    v1 = -4;                                                    // 0x00109afc: addiu $v1, $zero, -4
    a0 = s2 + 0x13;                                             // 0x00109b00: addiu $a0, $s2, 0x13
    s7 = a1 & v1;                                               // 0x00109b08: and $s7, $a1, $v1
    v0 = ((unsigned)a0 < (unsigned)0x1f) ? 1 : 0;               // 0x00109b0c: sltiu $v0, $a0, 0x1f
    if (v0 != 0) goto label_0x109b28;                           // 0x00109b10: bnez $v0, 0x109b28
    v0 = -0x10;                                                 // 0x00109b18: addiu $v0, $zero, -0x10
    goto label_0x109b2c;                                        // 0x00109b1c: b 0x109b2c
    s6 = a0 & v0;                                               // 0x00109b20: and $s6, $a0, $v0
    /* nop */                                                   // 0x00109b24: nop 
label_0x109b28:
    s6 = 0x10;                                                  // 0x00109b28: addiu $s6, $zero, 0x10
label_0x109b2c:
    v0 = ((unsigned)s5 < (unsigned)s6) ? 1 : 0;                 // 0x00109b2c: sltu $v0, $s5, $s6
    /* beqzl $v0, 0x109f80 */                                   // 0x00109b30: beqzl $v0, 0x109f80
    s2 = s3 + 8;                                                // 0x00109b34: addiu $s2, $s3, 8
    v0 = 0x1f << 16;                                            // 0x00109b38: lui $v0, 0x1f
    a2 = s3 + s5;                                               // 0x00109b3c: addu $a2, $s3, $s5
    t1 = v0 + -0x200;                                           // 0x00109b40: addiu $t1, $v0, -0x200
    t0 = g_001efe08;  // Global at 0x001efe08                   // 0x00109b44: lw $t0, 8($t1)
    if (a2 == t0) goto label_0x109b78;                          // 0x00109b48: beq $a2, $t0, 0x109b78
    v0 = -2;                                                    // 0x00109b4c: addiu $v0, $zero, -2
    a0 = *(int32_t*)((a2) + 4);                                 // 0x00109b50: lw $a0, 4($a2)
    v0 = a0 & v0;                                               // 0x00109b54: and $v0, $a0, $v0
    v0 = a2 + v0;                                               // 0x00109b58: addu $v0, $a2, $v0
    v1 = g_001f0004;  // Global at 0x001f0004                   // 0x00109b5c: lw $v1, 4($v0)
    v1 = v1 & 1;                                                // 0x00109b60: andi $v1, $v1, 1
    /* bnezl $v1, 0x109c00 */                                   // 0x00109b64: bnezl $v1, 0x109c00
    goto label_0x109b80;                                        // 0x00109b6c: b 0x109b80
    v0 = -4;                                                    // 0x00109b70: addiu $v0, $zero, -4
    /* nop */                                                   // 0x00109b74: nop 
label_0x109b78:
    a0 = *(int32_t*)((a2) + 4);                                 // 0x00109b78: lw $a0, 4($a2)
    v0 = -4;                                                    // 0x00109b7c: addiu $v0, $zero, -4
label_0x109b80:
    if (a2 != t0) goto label_0x109bd0;                          // 0x00109b80: bne $a2, $t0, 0x109bd0
    a3 = a0 & v0;                                               // 0x00109b84: and $a3, $a0, $v0
    v1 = a3 + s5;                                               // 0x00109b88: addu $v1, $a3, $s5
    v0 = s6 + 0x10;                                             // 0x00109b8c: addiu $v0, $s6, 0x10
    v0 = ((unsigned)v1 < (unsigned)v0) ? 1 : 0;                 // 0x00109b90: sltu $v0, $v1, $v0
    /* bnezl $v0, 0x109c08 */                                   // 0x00109b94: bnezl $v0, 0x109c08
    v0 = *(int32_t*)((s3) + 4);                                 // 0x00109b98: lw $v0, 4($s3)
    v0 = v1 - s6;                                               // 0x00109b9c: subu $v0, $v1, $s6
    v1 = s3 + s6;                                               // 0x00109ba0: addu $v1, $s3, $s6
    v0 = v0 | 1;                                                // 0x00109ba4: ori $v0, $v0, 1
    g_001efe08 = v1;  // Global at 0x001efe08                   // 0x00109ba8: sw $v1, 8($t1)
    g_001efe04 = v0;  // Global at 0x001efe04                   // 0x00109bac: sw $v0, 4($v1)
    v0 = *(int32_t*)((s3) + 4);                                 // 0x00109bb4: lw $v0, 4($s3)
    v0 = v0 & 1;                                                // 0x00109bb8: andi $v0, $v0, 1
    v0 = v0 | s6;                                               // 0x00109bbc: or $v0, $v0, $s6
    func_00107db0();  // 107db0                                // 0x00109bc0: jal 0x107db0
    *(uint32_t*)((s3) + 4) = v0;                                // 0x00109bc4: sw $v0, 4($s3)
    goto label_0x109ff0;                                        // 0x00109bc8: b 0x109ff0
    v0 = s3 + 8;                                                // 0x00109bcc: addiu $v0, $s3, 8
label_0x109bd0:
    v1 = a3 + s5;                                               // 0x00109bd0: addu $v1, $a3, $s5
    v0 = ((unsigned)v1 < (unsigned)s6) ? 1 : 0;                 // 0x00109bd4: sltu $v0, $v1, $s6
    /* bnezl $v0, 0x109c08 */                                   // 0x00109bd8: bnezl $v0, 0x109c08
    v0 = *(int32_t*)((s3) + 4);                                 // 0x00109bdc: lw $v0, 4($s3)
    a0 = *(int32_t*)((a2) + 8);                                 // 0x00109be0: lw $a0, 8($a2)
    v0 = *(int32_t*)((a2) + 0xc);                               // 0x00109be8: lw $v0, 0xc($a2)
    s2 = s3 + 8;                                                // 0x00109bec: addiu $s2, $s3, 8
    g_001f000c = v0;  // Global at 0x001f000c                   // 0x00109bf0: sw $v0, 0xc($a0)
    goto label_0x109f80;                                        // 0x00109bf4: b 0x109f80
    g_001f0008 = a0;  // Global at 0x001f0008                   // 0x00109bf8: sw $a0, 8($v0)
    /* nop */                                                   // 0x00109bfc: nop 
    v0 = *(int32_t*)((s3) + 4);                                 // 0x00109c04: lw $v0, 4($s3)
    v0 = v0 & 1;                                                // 0x00109c08: andi $v0, $v0, 1
    if (v0 != 0) goto label_0x109e64;                           // 0x00109c0c: bnez $v0, 0x109e64
    v0 = *(int32_t*)(s3);                                       // 0x00109c14: lw $v0, 0($s3)
    a0 = -4;                                                    // 0x00109c18: addiu $a0, $zero, -4
    s4 = s3 - v0;                                               // 0x00109c1c: subu $s4, $s3, $v0
    v1 = *(int32_t*)((s4) + 4);                                 // 0x00109c20: lw $v1, 4($s4)
    if (a2 == 0) goto label_0x109d80;                           // 0x00109c24: beqz $a2, 0x109d80
    a0 = v1 & a0;                                               // 0x00109c28: and $a0, $v1, $a0
    v1 = 0x1f << 16;                                            // 0x00109c2c: lui $v1, 0x1f
    v0 = v1 + -0x200;                                           // 0x00109c30: addiu $v0, $v1, -0x200
    v1 = g_001efe08;  // Global at 0x001efe08                   // 0x00109c34: lw $v1, 8($v0)
    if (a2 != v1) goto label_0x109d48;                          // 0x00109c38: bne $a2, $v1, 0x109d48
    v0 = a3 + a0;                                               // 0x00109c3c: addu $v0, $a3, $a0
    v1 = a3 + a0;                                               // 0x00109c40: addu $v1, $a3, $a0
    v0 = s6 + 0x10;                                             // 0x00109c44: addiu $v0, $s6, 0x10
    s7 = v1 + s5;                                               // 0x00109c48: addu $s7, $v1, $s5
    v0 = ((unsigned)s7 < (unsigned)v0) ? 1 : 0;                 // 0x00109c4c: sltu $v0, $s7, $v0
    if (v0 != 0) goto label_0x109d80;                           // 0x00109c50: bnez $v0, 0x109d80
    v0 = *(int32_t*)((s4) + 0xc);                               // 0x00109c58: lw $v0, 0xc($s4)
    a0 = *(int32_t*)((s4) + 8);                                 // 0x00109c5c: lw $a0, 8($s4)
    g_001f000c = v0;  // Global at 0x001f000c                   // 0x00109c60: sw $v0, 0xc($a0)
    g_001efe08 = a0;  // Global at 0x001efe08                   // 0x00109c64: sw $a0, 8($v0)
    a2 = s5 + -4;                                               // 0x00109c68: addiu $a2, $s5, -4
    v0 = ((unsigned)a2 < (unsigned)0x25) ? 1 : 0;               // 0x00109c6c: sltiu $v0, $a2, 0x25
    if (v0 == 0) goto label_0x109d08;                           // 0x00109c70: beqz $v0, 0x109d08
    s2 = s0 + 8;                                                // 0x00109c74: addiu $s2, $s0, 8
    v0 = ((unsigned)a2 < (unsigned)0x14) ? 1 : 0;               // 0x00109c78: sltiu $v0, $a2, 0x14
    if (v0 != 0) goto label_0x109ce0;                           // 0x00109c80: bnez $v0, 0x109ce0
    v0 = *(int32_t*)(s1);                                       // 0x00109c88: lw $v0, 0($s1)
    a0 = ((unsigned)a2 < (unsigned)0x1c) ? 1 : 0;               // 0x00109c8c: sltiu $a0, $a2, 0x1c
    t0 = s1 + 8;                                                // 0x00109c90: addiu $t0, $s1, 8
    a3 = s0 + 0x10;                                             // 0x00109c94: addiu $a3, $s0, 0x10
    *(uint32_t*)(s2) = v0;                                      // 0x00109c98: sw $v0, 0($s2)
    v1 = *(int32_t*)((s1) + 4);                                 // 0x00109c9c: lw $v1, 4($s1)
    if (a0 != 0) goto label_0x109ce0;                           // 0x00109ca0: bnez $a0, 0x109ce0
    *(uint32_t*)((s0) + 0xc) = v1;                              // 0x00109ca4: sw $v1, 0xc($s0)
    v0 = *(int32_t*)(t0);                                       // 0x00109ca8: lw $v0, 0($t0)
    t0 = s1 + 0x10;                                             // 0x00109cac: addiu $t0, $s1, 0x10
    v1 = ((unsigned)a2 < (unsigned)0x24) ? 1 : 0;               // 0x00109cb0: sltiu $v1, $a2, 0x24
    *(uint32_t*)(a3) = v0;                                      // 0x00109cb4: sw $v0, 0($a3)
    a3 = s0 + 0x18;                                             // 0x00109cb8: addiu $a3, $s0, 0x18
    v0 = *(int32_t*)((s1) + 0xc);                               // 0x00109cbc: lw $v0, 0xc($s1)
    if (v1 != 0) goto label_0x109ce0;                           // 0x00109cc0: bnez $v1, 0x109ce0
    *(uint32_t*)((s0) + 0x14) = v0;                             // 0x00109cc4: sw $v0, 0x14($s0)
    v0 = *(int32_t*)(t0);                                       // 0x00109cc8: lw $v0, 0($t0)
    t0 = s1 + 0x18;                                             // 0x00109ccc: addiu $t0, $s1, 0x18
    *(uint32_t*)(a3) = v0;                                      // 0x00109cd0: sw $v0, 0($a3)
    a3 = s0 + 0x20;                                             // 0x00109cd4: addiu $a3, $s0, 0x20
    v0 = *(int32_t*)((s1) + 0x14);                              // 0x00109cd8: lw $v0, 0x14($s1)
    *(uint32_t*)((s0) + 0x1c) = v0;                             // 0x00109cdc: sw $v0, 0x1c($s0)
label_0x109ce0:
    v0 = *(int32_t*)(t0);                                       // 0x00109ce0: lw $v0, 0($t0)
    t0 = t0 + 4;                                                // 0x00109ce4: addiu $t0, $t0, 4
    *(uint32_t*)(a3) = v0;                                      // 0x00109ce8: sw $v0, 0($a3)
    a3 = a3 + 4;                                                // 0x00109cec: addiu $a3, $a3, 4
    v0 = *(int32_t*)(t0);                                       // 0x00109cf0: lw $v0, 0($t0)
    *(uint32_t*)(a3) = v0;                                      // 0x00109cf4: sw $v0, 0($a3)
    v1 = *(int32_t*)((t0) + 4);                                 // 0x00109cf8: lw $v1, 4($t0)
    goto label_0x109d14;                                        // 0x00109cfc: b 0x109d14
    *(uint32_t*)((a3) + 4) = v1;                                // 0x00109d00: sw $v1, 4($a3)
    /* nop */                                                   // 0x00109d04: nop 
label_0x109d08:
    func_00107ab8();  // 107ab8                                // 0x00109d0c: jal 0x107ab8
label_0x109d14:
    v0 = s7 - s6;                                               // 0x00109d14: subu $v0, $s7, $s6
    a1 = s4 + s6;                                               // 0x00109d18: addu $a1, $s4, $s6
    v0 = v0 | 1;                                                // 0x00109d1c: ori $v0, $v0, 1
    a0 = 0x1f << 16;                                            // 0x00109d20: lui $a0, 0x1f
    *(uint32_t*)((a1) + 4) = v0;                                // 0x00109d24: sw $v0, 4($a1)
    v1 = a0 + -0x200;                                           // 0x00109d28: addiu $v1, $a0, -0x200
    g_001efe08 = a1;  // Global at 0x001efe08                   // 0x00109d2c: sw $a1, 8($v1)
    v0 = *(int32_t*)((s4) + 4);                                 // 0x00109d34: lw $v0, 4($s4)
    v0 = v0 & 1;                                                // 0x00109d38: andi $v0, $v0, 1
    v0 = v0 | s6;                                               // 0x00109d3c: or $v0, $v0, $s6
    goto label_0x109fe4;                                        // 0x00109d40: b 0x109fe4
    *(uint32_t*)((s4) + 4) = v0;                                // 0x00109d44: sw $v0, 4($s4)
label_0x109d48:
    a1 = v0 + s5;                                               // 0x00109d48: addu $a1, $v0, $s5
    v1 = ((unsigned)a1 < (unsigned)s6) ? 1 : 0;                 // 0x00109d4c: sltu $v1, $a1, $s6
    if (v1 != 0) goto label_0x109d80;                           // 0x00109d50: bnez $v1, 0x109d80
    a0 = *(int32_t*)((a2) + 8);                                 // 0x00109d58: lw $a0, 8($a2)
    v0 = *(int32_t*)((a2) + 0xc);                               // 0x00109d5c: lw $v0, 0xc($a2)
    s2 = s0 + 8;                                                // 0x00109d64: addiu $s2, $s0, 8
    g_001f000c = v0;  // Global at 0x001f000c                   // 0x00109d68: sw $v0, 0xc($a0)
    g_001efe08 = a0;  // Global at 0x001efe08                   // 0x00109d6c: sw $a0, 8($v0)
    v0 = *(int32_t*)((s4) + 0xc);                               // 0x00109d70: lw $v0, 0xc($s4)
    goto label_0x109da8;                                        // 0x00109d74: b 0x109da8
    a0 = *(int32_t*)((s4) + 8);                                 // 0x00109d78: lw $a0, 8($s4)
    /* nop */                                                   // 0x00109d7c: nop 
label_0x109d80:
    if (s4 == 0) goto label_0x109e60;                           // 0x00109d80: beqz $s4, 0x109e60
    v1 = a0 + s5;                                               // 0x00109d84: addu $v1, $a0, $s5
    v0 = ((unsigned)v1 < (unsigned)s6) ? 1 : 0;                 // 0x00109d88: sltu $v0, $v1, $s6
    if (v0 != 0) goto label_0x109e64;                           // 0x00109d8c: bnez $v0, 0x109e64
    v0 = *(int32_t*)((s4) + 0xc);                               // 0x00109d94: lw $v0, 0xc($s4)
    a0 = *(int32_t*)((s4) + 8);                                 // 0x00109d9c: lw $a0, 8($s4)
    s2 = s0 + 8;                                                // 0x00109da4: addiu $s2, $s0, 8
label_0x109da8:
    g_001f000c = v0;  // Global at 0x001f000c                   // 0x00109da8: sw $v0, 0xc($a0)
    g_001efe08 = a0;  // Global at 0x001efe08                   // 0x00109dac: sw $a0, 8($v0)
    a2 = s5 + -4;                                               // 0x00109db0: addiu $a2, $s5, -4
    v0 = ((unsigned)a2 < (unsigned)0x25) ? 1 : 0;               // 0x00109db4: sltiu $v0, $a2, 0x25
    if (v0 == 0) goto label_0x109e50;                           // 0x00109db8: beqz $v0, 0x109e50
    v0 = ((unsigned)a2 < (unsigned)0x14) ? 1 : 0;               // 0x00109dc0: sltiu $v0, $a2, 0x14
    if (v0 != 0) goto label_0x109e28;                           // 0x00109dc8: bnez $v0, 0x109e28
    v0 = *(int32_t*)(s1);                                       // 0x00109dd0: lw $v0, 0($s1)
    a0 = ((unsigned)a2 < (unsigned)0x1c) ? 1 : 0;               // 0x00109dd4: sltiu $a0, $a2, 0x1c
    t0 = s1 + 8;                                                // 0x00109dd8: addiu $t0, $s1, 8
    a3 = s0 + 0x10;                                             // 0x00109ddc: addiu $a3, $s0, 0x10
    *(uint32_t*)(s2) = v0;                                      // 0x00109de0: sw $v0, 0($s2)
    v1 = *(int32_t*)((s1) + 4);                                 // 0x00109de4: lw $v1, 4($s1)
    if (a0 != 0) goto label_0x109e28;                           // 0x00109de8: bnez $a0, 0x109e28
    *(uint32_t*)((s0) + 0xc) = v1;                              // 0x00109dec: sw $v1, 0xc($s0)
    v0 = *(int32_t*)(t0);                                       // 0x00109df0: lw $v0, 0($t0)
    t0 = s1 + 0x10;                                             // 0x00109df4: addiu $t0, $s1, 0x10
    v1 = ((unsigned)a2 < (unsigned)0x24) ? 1 : 0;               // 0x00109df8: sltiu $v1, $a2, 0x24
    *(uint32_t*)(a3) = v0;                                      // 0x00109dfc: sw $v0, 0($a3)
    a3 = s0 + 0x18;                                             // 0x00109e00: addiu $a3, $s0, 0x18
    v0 = *(int32_t*)((s1) + 0xc);                               // 0x00109e04: lw $v0, 0xc($s1)
    if (v1 != 0) goto label_0x109e28;                           // 0x00109e08: bnez $v1, 0x109e28
    *(uint32_t*)((s0) + 0x14) = v0;                             // 0x00109e0c: sw $v0, 0x14($s0)
    v0 = *(int32_t*)(t0);                                       // 0x00109e10: lw $v0, 0($t0)
    t0 = s1 + 0x18;                                             // 0x00109e14: addiu $t0, $s1, 0x18
    *(uint32_t*)(a3) = v0;                                      // 0x00109e18: sw $v0, 0($a3)
    a3 = s0 + 0x20;                                             // 0x00109e1c: addiu $a3, $s0, 0x20
    v0 = *(int32_t*)((s1) + 0x14);                              // 0x00109e20: lw $v0, 0x14($s1)
    *(uint32_t*)((s0) + 0x1c) = v0;                             // 0x00109e24: sw $v0, 0x1c($s0)
label_0x109e28:
    v0 = *(int32_t*)(t0);                                       // 0x00109e28: lw $v0, 0($t0)
    t0 = t0 + 4;                                                // 0x00109e2c: addiu $t0, $t0, 4
    *(uint32_t*)(a3) = v0;                                      // 0x00109e30: sw $v0, 0($a3)
    a3 = a3 + 4;                                                // 0x00109e34: addiu $a3, $a3, 4
    v0 = *(int32_t*)(t0);                                       // 0x00109e38: lw $v0, 0($t0)
    *(uint32_t*)(a3) = v0;                                      // 0x00109e3c: sw $v0, 0($a3)
    v1 = *(int32_t*)((t0) + 4);                                 // 0x00109e40: lw $v1, 4($t0)
    *(uint32_t*)((a3) + 4) = v1;                                // 0x00109e44: sw $v1, 4($a3)
    goto label_0x109f80;                                        // 0x00109e48: b 0x109f80
    a1 = *(int32_t*)((s4) + 4);                                 // 0x00109e4c: lw $a1, 4($s4)
label_0x109e50:
    func_00107ab8();  // 107ab8                                // 0x00109e50: jal 0x107ab8
    goto label_0x109f80;                                        // 0x00109e58: b 0x109f80
    a1 = *(int32_t*)((s0) + 4);                                 // 0x00109e5c: lw $a1, 4($s0)
label_0x109e60:
label_0x109e64:
    func_001071e0();  // 1071e0                                // 0x00109e64: jal 0x1071e0
    /* bnezl $s2, 0x109e88 */                                   // 0x00109e70: bnezl $s2, 0x109e88
    a1 = *(int32_t*)((s3) + 4);                                 // 0x00109e74: lw $a1, 4($s3)
    func_00107db0();  // 107db0                                // 0x00109e78: jal 0x107db0
    goto label_0x109ff0;                                        // 0x00109e80: b 0x109ff0
    v0 = -2;                                                    // 0x00109e88: addiu $v0, $zero, -2
    s0 = s2 + -8;                                               // 0x00109e8c: addiu $s0, $s2, -8
    v0 = a1 & v0;                                               // 0x00109e90: and $v0, $a1, $v0
    v0 = s3 + v0;                                               // 0x00109e94: addu $v0, $s3, $v0
    if (s0 != v0) goto label_0x109ec0;                          // 0x00109e98: bne $s0, $v0, 0x109ec0
    a2 = s5 + -4;                                               // 0x00109e9c: addiu $a2, $s5, -4
    v0 = *(int32_t*)((s0) + 4);                                 // 0x00109ea0: lw $v0, 4($s0)
    v1 = -4;                                                    // 0x00109ea8: addiu $v1, $zero, -4
    s2 = s0 + 8;                                                // 0x00109eac: addiu $s2, $s0, 8
    v0 = v0 & v1;                                               // 0x00109eb0: and $v0, $v0, $v1
    goto label_0x109f80;                                        // 0x00109eb4: b 0x109f80
    s7 = s5 + v0;                                               // 0x00109eb8: addu $s7, $s5, $v0
    /* nop */                                                   // 0x00109ebc: nop 
label_0x109ec0:
    v0 = ((unsigned)a2 < (unsigned)0x25) ? 1 : 0;               // 0x00109ec0: sltiu $v0, $a2, 0x25
    if (v0 == 0) goto label_0x109f60;                           // 0x00109ec4: beqz $v0, 0x109f60
    v0 = ((unsigned)a2 < (unsigned)0x14) ? 1 : 0;               // 0x00109ecc: sltiu $v0, $a2, 0x14
    if (v0 != 0) goto label_0x109f38;                           // 0x00109ed4: bnez $v0, 0x109f38
    v0 = *(int32_t*)(s1);                                       // 0x00109edc: lw $v0, 0($s1)
    a0 = ((unsigned)a2 < (unsigned)0x1c) ? 1 : 0;               // 0x00109ee0: sltiu $a0, $a2, 0x1c
    a3 = s1 + 8;                                                // 0x00109ee4: addiu $a3, $s1, 8
    a1 = s2 + 8;                                                // 0x00109ee8: addiu $a1, $s2, 8
    *(uint32_t*)(s2) = v0;                                      // 0x00109eec: sw $v0, 0($s2)
    v1 = *(int32_t*)((s1) + 4);                                 // 0x00109ef0: lw $v1, 4($s1)
    if (a0 != 0) goto label_0x109f38;                           // 0x00109ef4: bnez $a0, 0x109f38
    *(uint32_t*)((s2) + 4) = v1;                                // 0x00109ef8: sw $v1, 4($s2)
    v0 = *(int32_t*)(a3);                                       // 0x00109efc: lw $v0, 0($a3)
    a3 = s1 + 0x10;                                             // 0x00109f00: addiu $a3, $s1, 0x10
    v1 = ((unsigned)a2 < (unsigned)0x24) ? 1 : 0;               // 0x00109f04: sltiu $v1, $a2, 0x24
    *(uint32_t*)(a1) = v0;                                      // 0x00109f08: sw $v0, 0($a1)
    a1 = s2 + 0x10;                                             // 0x00109f0c: addiu $a1, $s2, 0x10
    v0 = *(int32_t*)((s1) + 0xc);                               // 0x00109f10: lw $v0, 0xc($s1)
    if (v1 != 0) goto label_0x109f38;                           // 0x00109f14: bnez $v1, 0x109f38
    *(uint32_t*)((s2) + 0xc) = v0;                              // 0x00109f18: sw $v0, 0xc($s2)
    v0 = *(int32_t*)(a3);                                       // 0x00109f1c: lw $v0, 0($a3)
    a3 = s1 + 0x18;                                             // 0x00109f20: addiu $a3, $s1, 0x18
    *(uint32_t*)(a1) = v0;                                      // 0x00109f24: sw $v0, 0($a1)
    a1 = s2 + 0x18;                                             // 0x00109f28: addiu $a1, $s2, 0x18
    v0 = *(int32_t*)((s1) + 0x14);                              // 0x00109f2c: lw $v0, 0x14($s1)
    *(uint32_t*)((s2) + 0x14) = v0;                             // 0x00109f30: sw $v0, 0x14($s2)
    /* nop */                                                   // 0x00109f34: nop 
label_0x109f38:
    v0 = *(int32_t*)(a3);                                       // 0x00109f38: lw $v0, 0($a3)
    a3 = a3 + 4;                                                // 0x00109f3c: addiu $a3, $a3, 4
    *(uint32_t*)(a1) = v0;                                      // 0x00109f40: sw $v0, 0($a1)
    a1 = a1 + 4;                                                // 0x00109f44: addiu $a1, $a1, 4
    v0 = *(int32_t*)(a3);                                       // 0x00109f48: lw $v0, 0($a3)
    *(uint32_t*)(a1) = v0;                                      // 0x00109f4c: sw $v0, 0($a1)
    v1 = *(int32_t*)((a3) + 4);                                 // 0x00109f50: lw $v1, 4($a3)
    goto label_0x109f68;                                        // 0x00109f54: b 0x109f68
    *(uint32_t*)((a1) + 4) = v1;                                // 0x00109f58: sw $v1, 4($a1)
    /* nop */                                                   // 0x00109f5c: nop 
label_0x109f60:
    func_00107ab8();  // 107ab8                                // 0x00109f60: jal 0x107ab8
label_0x109f68:
    func_001058e0();  // 1058e0                                // 0x00109f6c: jal 0x1058e0
    goto label_0x109fe4;                                        // 0x00109f74: b 0x109fe4
    /* nop */                                                   // 0x00109f7c: nop 
label_0x109f80:
    a0 = s7 - s6;                                               // 0x00109f80: subu $a0, $s7, $s6
    v0 = ((unsigned)a0 < (unsigned)0x10) ? 1 : 0;               // 0x00109f84: sltiu $v0, $a0, 0x10
    if (v0 != 0) goto label_0x109fc8;                           // 0x00109f88: bnez $v0, 0x109fc8
    v0 = a1 & 1;                                                // 0x00109f8c: andi $v0, $a1, 1
    a1 = s0 + s6;                                               // 0x00109f90: addu $a1, $s0, $s6
    v0 = v0 | s6;                                               // 0x00109f94: or $v0, $v0, $s6
    v1 = a0 | 1;                                                // 0x00109f98: ori $v1, $a0, 1
    *(uint32_t*)((s0) + 4) = v0;                                // 0x00109f9c: sw $v0, 4($s0)
    a2 = a1 + a0;                                               // 0x00109fa0: addu $a2, $a1, $a0
    *(uint32_t*)((a1) + 4) = v1;                                // 0x00109fa4: sw $v1, 4($a1)
    a1 = a1 + 8;                                                // 0x00109fa8: addiu $a1, $a1, 8
    v0 = *(int32_t*)((a2) + 4);                                 // 0x00109fb0: lw $v0, 4($a2)
    v0 = v0 | 1;                                                // 0x00109fb4: ori $v0, $v0, 1
    func_001058e0();  // 1058e0                                // 0x00109fb8: jal 0x1058e0
    *(uint32_t*)((a2) + 4) = v0;                                // 0x00109fbc: sw $v0, 4($a2)
    goto label_0x109fe4;                                        // 0x00109fc0: b 0x109fe4
label_0x109fc8:
    a0 = s0 + s7;                                               // 0x00109fc8: addu $a0, $s0, $s7
    v0 = v0 | s7;                                               // 0x00109fcc: or $v0, $v0, $s7
    *(uint32_t*)((s0) + 4) = v0;                                // 0x00109fd0: sw $v0, 4($s0)
    v1 = g_001f0004;  // Global at 0x001f0004                   // 0x00109fd4: lw $v1, 4($a0)
    v1 = v1 | 1;                                                // 0x00109fd8: ori $v1, $v1, 1
    g_001f0004 = v1;  // Global at 0x001f0004                   // 0x00109fdc: sw $v1, 4($a0)
label_0x109fe4:
    func_00107db0();  // 107db0                                // 0x00109fe4: jal 0x107db0
    /* nop */                                                   // 0x00109fe8: nop 
label_0x109ff0:
    return;                                                     // 0x0010a018: jr $ra
    sp = sp + 0x50;                                             // 0x0010a01c: addiu $sp, $sp, 0x50
}