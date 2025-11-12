void func_00181b18() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x00181b18: addiu $sp, $sp, -0x50
    s3 = 0x23 << 16;                                            // 0x00181b24: lui $s3, 0x23
    s2 = 0x27 << 16;                                            // 0x00181b2c: lui $s2, 0x27
    s1 = 0x27 << 16;                                            // 0x00181b34: lui $s1, 0x27
    v0 = s2 + -0x4e60;                                          // 0x00181b3c: addiu $v0, $s2, -0x4e60
label_0x181b40:
    PollSema();  // 0x114320                                    // 0x00181b40: jal 0x114320
    a0 = g_0026b1a4;  // Global at 0x0026b1a4                   // 0x00181b44: lw $a0, 4($v0)
    v1 = s1 + -0x5380;                                          // 0x00181b48: addiu $v1, $s1, -0x5380
    v0 = g_0026ac84;  // Global at 0x0026ac84                   // 0x00181b4c: lw $v0, 4($v1)
    v0 = v0 + -2;                                               // 0x00181b50: addiu $v0, $v0, -2
    v1 = ((unsigned)v0 < (unsigned)0x17) ? 1 : 0;               // 0x00181b54: sltiu $v1, $v0, 0x17
    if (v1 == 0) goto label_0x181cf8;                           // 0x00181b58: beqz $v1, 0x181cf8
    v0 = v0 << 2;                                               // 0x00181b5c: sll $v0, $v0, 2
    v1 = s3 + -0x6100;                                          // 0x00181b60: addiu $v1, $s3, -0x6100
    v0 = v0 + v1;                                               // 0x00181b64: addu $v0, $v0, $v1
    a0 = g_0026b19e;  // Global at 0x0026b19e                   // 0x00181b68: lw $a0, 0($v0)
    /* jump to address in a0 */                                 // 0x00181b6c: jr $a0
    /* nop */                                                   // 0x00181b70: nop 
    s0 = s1 + -0x5380;                                          // 0x00181b74: addiu $s0, $s1, -0x5380
    a0 = g_0026ac80;  // Global at 0x0026ac80                   // 0x00181b78: lw $a0, -0x5380($s1)
    func_00183570();  // 0x1831d8                                // 0x00181b7c: jal 0x1831d8
    a1 = g_0026ac8c;  // Global at 0x0026ac8c                   // 0x00181b80: lw $a1, 0xc($s0)
    goto label_0x181cf8;                                        // 0x00181b84: b 0x181cf8
    g_0026ac88 = v0;  // Global at 0x0026ac88                   // 0x00181b88: sw $v0, 8($s0)
    s0 = s1 + -0x5380;                                          // 0x00181b8c: addiu $s0, $s1, -0x5380
    a0 = g_0026ac80;  // Global at 0x0026ac80                   // 0x00181b90: lw $a0, -0x5380($s1)
    a2 = g_0026ac8c;  // Global at 0x0026ac8c                   // 0x00181b94: lw $a2, 0xc($s0)
    a1 = s0 + 0x41c;                                            // 0x00181b98: addiu $a1, $s0, 0x41c
    a3 = g_0026ac90;  // Global at 0x0026ac90                   // 0x00181b9c: lw $a3, 0x10($s0)
    func_001858d0();  // 0x1856c8                                // 0x00181ba0: jal 0x1856c8
    t0 = g_0026ac94;  // Global at 0x0026ac94                   // 0x00181ba4: lw $t0, 0x14($s0)
    goto label_0x181cf8;                                        // 0x00181ba8: b 0x181cf8
    g_0026ac88 = v0;  // Global at 0x0026ac88                   // 0x00181bac: sw $v0, 8($s0)
    s0 = s1 + -0x5380;                                          // 0x00181bb0: addiu $s0, $s1, -0x5380
    a0 = g_0026ac80;  // Global at 0x0026ac80                   // 0x00181bb4: lw $a0, -0x5380($s1)
    a2 = g_0026ac8c;  // Global at 0x0026ac8c                   // 0x00181bb8: lw $a2, 0xc($s0)
    a1 = s0 + 0x41c;                                            // 0x00181bbc: addiu $a1, $s0, 0x41c
    a3 = g_0026ac90;  // Global at 0x0026ac90                   // 0x00181bc0: lw $a3, 0x10($s0)
    func_00185eb0();  // 0x1858d0                                // 0x00181bc4: jal 0x1858d0
    t0 = g_0026ac94;  // Global at 0x0026ac94                   // 0x00181bc8: lw $t0, 0x14($s0)
    goto label_0x181cf8;                                        // 0x00181bcc: b 0x181cf8
    g_0026ac88 = v0;  // Global at 0x0026ac88                   // 0x00181bd0: sw $v0, 8($s0)
    a0 = g_0026ac80;  // Global at 0x0026ac80                   // 0x00181bd4: lw $a0, -0x5380($s1)
    func_00183ea0();  // 0x183570                                // 0x00181bd8: jal 0x183570
    s0 = s1 + -0x5380;                                          // 0x00181bdc: addiu $s0, $s1, -0x5380
    goto label_0x181cf8;                                        // 0x00181be0: b 0x181cf8
    g_0026ac88 = v0;  // Global at 0x0026ac88                   // 0x00181be4: sw $v0, 8($s0)
    s0 = s1 + -0x5380;                                          // 0x00181be8: addiu $s0, $s1, -0x5380
    a0 = g_0026ac80;  // Global at 0x0026ac80                   // 0x00181bec: lw $a0, -0x5380($s1)
    a2 = g_0026ac8c;  // Global at 0x0026ac8c                   // 0x00181bf0: lw $a2, 0xc($s0)
    func_001856c8();  // 0x185138                                // 0x00181bf4: jal 0x185138
    a1 = s0 + 0x41c;                                            // 0x00181bf8: addiu $a1, $s0, 0x41c
    goto label_0x181cf8;                                        // 0x00181bfc: b 0x181cf8
    g_0026ac88 = v0;  // Global at 0x0026ac88                   // 0x00181c00: sw $v0, 8($s0)
    s0 = s1 + -0x5380;                                          // 0x00181c04: addiu $s0, $s1, -0x5380
    a0 = g_0026ac80;  // Global at 0x0026ac80                   // 0x00181c08: lw $a0, -0x5380($s1)
    func_001860e0();  // 0x185eb0                                // 0x00181c0c: jal 0x185eb0
    a1 = s0 + 0x41c;                                            // 0x00181c10: addiu $a1, $s0, 0x41c
    goto label_0x181cf8;                                        // 0x00181c14: b 0x181cf8
    g_0026ac88 = v0;  // Global at 0x0026ac88                   // 0x00181c18: sw $v0, 8($s0)
    s0 = s1 + -0x5380;                                          // 0x00181c1c: addiu $s0, $s1, -0x5380
    a0 = g_0026ac80;  // Global at 0x0026ac80                   // 0x00181c20: lw $a0, -0x5380($s1)
    a2 = g_0026ac8c;  // Global at 0x0026ac8c                   // 0x00181c24: lw $a2, 0xc($s0)
    func_001856c8();  // 0x185138                                // 0x00181c28: jal 0x185138
    a1 = s0 + 0x41c;                                            // 0x00181c2c: addiu $a1, $s0, 0x41c
    goto label_0x181cf8;                                        // 0x00181c30: b 0x181cf8
    g_0026ac88 = v0;  // Global at 0x0026ac88                   // 0x00181c34: sw $v0, 8($s0)
    s0 = s1 + -0x5380;                                          // 0x00181c38: addiu $s0, $s1, -0x5380
    a0 = g_0026ac80;  // Global at 0x0026ac80                   // 0x00181c3c: lw $a0, -0x5380($s1)
    a2 = g_0026ac8c;  // Global at 0x0026ac8c                   // 0x00181c40: lw $a2, 0xc($s0)
    func_00186208();  // 0x1860e0                                // 0x00181c44: jal 0x1860e0
    a1 = s0 + 0x41c;                                            // 0x00181c48: addiu $a1, $s0, 0x41c
    goto label_0x181cf8;                                        // 0x00181c4c: b 0x181cf8
    g_0026ac88 = v0;  // Global at 0x0026ac88                   // 0x00181c50: sw $v0, 8($s0)
    s0 = s1 + -0x5380;                                          // 0x00181c54: addiu $s0, $s1, -0x5380
    a0 = g_0026ac80;  // Global at 0x0026ac80                   // 0x00181c58: lw $a0, -0x5380($s1)
    a2 = g_0026ac8c;  // Global at 0x0026ac8c                   // 0x00181c5c: lw $a2, 0xc($s0)
    a1 = s0 + 0x41c;                                            // 0x00181c60: addiu $a1, $s0, 0x41c
    a3 = g_0026ac90;  // Global at 0x0026ac90                   // 0x00181c64: lw $a3, 0x10($s0)
    t0 = g_0026ac94;  // Global at 0x0026ac94                   // 0x00181c68: lw $t0, 0x14($s0)
    func_00186728();  // 0x186208                                // 0x00181c6c: jal 0x186208
    t1 = g_0026ac98;  // Global at 0x0026ac98                   // 0x00181c70: lw $t1, 0x18($s0)
    goto label_0x181cf8;                                        // 0x00181c74: b 0x181cf8
    g_0026ac88 = v0;  // Global at 0x0026ac88                   // 0x00181c78: sw $v0, 8($s0)
    s0 = s1 + -0x5380;                                          // 0x00181c7c: addiu $s0, $s1, -0x5380
    a0 = g_0026ac80;  // Global at 0x0026ac80                   // 0x00181c80: lw $a0, -0x5380($s1)
    a2 = g_0026ac8c;  // Global at 0x0026ac8c                   // 0x00181c84: lhu $a2, 0xc($s0)
    func_001868b0();  // 0x186728                                // 0x00181c88: jal 0x186728
    a1 = s0 + 0x41c;                                            // 0x00181c8c: addiu $a1, $s0, 0x41c
    goto label_0x181cf8;                                        // 0x00181c90: b 0x181cf8
    g_0026ac88 = v0;  // Global at 0x0026ac88                   // 0x00181c94: sw $v0, 8($s0)
    s0 = s1 + -0x5380;                                          // 0x00181c98: addiu $s0, $s1, -0x5380
    a0 = g_0026ac80;  // Global at 0x0026ac80                   // 0x00181c9c: lw $a0, -0x5380($s1)
    a1 = s0 + 0x41c;                                            // 0x00181ca0: addiu $a1, $s0, 0x41c
    func_00186a30();  // 0x1868b0                                // 0x00181ca4: jal 0x1868b0
    a2 = s0 + 0x49c;                                            // 0x00181ca8: addiu $a2, $s0, 0x49c
    goto label_0x181cf8;                                        // 0x00181cac: b 0x181cf8
    g_0026ac88 = v0;  // Global at 0x0026ac88                   // 0x00181cb0: sw $v0, 8($s0)
    a0 = g_0026ac80;  // Global at 0x0026ac80                   // 0x00181cb4: lw $a0, -0x5380($s1)
    func_00183fa0();  // 0x183ea0                                // 0x00181cb8: jal 0x183ea0
    s0 = s1 + -0x5380;                                          // 0x00181cbc: addiu $s0, $s1, -0x5380
    goto label_0x181cf8;                                        // 0x00181cc0: b 0x181cf8
    g_0026ac88 = v0;  // Global at 0x0026ac88                   // 0x00181cc4: sw $v0, 8($s0)
    s0 = s1 + -0x5380;                                          // 0x00181cc8: addiu $s0, $s1, -0x5380
    a0 = g_0026ac80;  // Global at 0x0026ac80                   // 0x00181ccc: lw $a0, -0x5380($s1)
    a2 = g_0026ac8c;  // Global at 0x0026ac8c                   // 0x00181cd0: lw $a2, 0xc($s0)
    func_00185138();  // 0x185048                                // 0x00181cd4: jal 0x185048
    a1 = s0 + 0x41c;                                            // 0x00181cd8: addiu $a1, $s0, 0x41c
    goto label_0x181cf8;                                        // 0x00181cdc: b 0x181cf8
    g_0026ac88 = v0;  // Global at 0x0026ac88                   // 0x00181ce0: sw $v0, 8($s0)
    s0 = s1 + -0x5380;                                          // 0x00181ce4: addiu $s0, $s1, -0x5380
    a0 = g_0026ac80;  // Global at 0x0026ac80                   // 0x00181ce8: lw $a0, -0x5380($s1)
    func_00186af8();  // 0x186a30                                // 0x00181cec: jal 0x186a30
    a1 = s0 + 0x41c;                                            // 0x00181cf0: addiu $a1, $s0, 0x41c
    g_0026ac88 = v0;  // Global at 0x0026ac88                   // 0x00181cf4: sw $v0, 8($s0)
label_0x181cf8:
    a0 = s1 + -0x5380;                                          // 0x00181cf8: addiu $a0, $s1, -0x5380
    v0 = 0x8101 << 16;                                          // 0x00181cfc: lui $v0, 0x8101
    v1 = g_0026ac88;  // Global at 0x0026ac88                   // 0x00181d00: lw $v1, 8($a0)
    v0 = v0 | 0x9fff;                                           // 0x00181d04: ori $v0, $v0, 0x9fff
    if (v1 != v0) goto label_0x181d20;                          // 0x00181d08: bne $v1, $v0, 0x181d20
    v0 = s2 + -0x4e60;                                          // 0x00181d0c: addiu $v0, $s2, -0x4e60
    v0 = 0x8101 << 16;                                          // 0x00181d10: lui $v0, 0x8101
    v0 = v0 | 2;                                                // 0x00181d14: ori $v0, $v0, 2
    g_0026ac88 = v0;  // Global at 0x0026ac88                   // 0x00181d18: sw $v0, 8($a0)
    v0 = s2 + -0x4e60;                                          // 0x00181d1c: addiu $v0, $s2, -0x4e60
label_0x181d20:
    iSignalSema();  // 0x114300                                 // 0x00181d20: jal 0x114300
    a0 = g_0026b1a8;  // Global at 0x0026b1a8                   // 0x00181d24: lw $a0, 8($v0)
    goto label_0x181b40;                                        // 0x00181d28: b 0x181b40
    v0 = s2 + -0x4e60;                                          // 0x00181d2c: addiu $v0, $s2, -0x4e60
    sp = sp + -0x40;                                            // 0x00181d30: addiu $sp, $sp, -0x40
    v0 = 0x27 << 16;                                            // 0x00181d34: lui $v0, 0x27
    s2 = v0 + -0x5380;                                          // 0x00181d40: addiu $s2, $v0, -0x5380
    v0 = g_0026ac84;  // Global at 0x0026ac84                   // 0x00181d50: lw $v0, 4($s2)
    if (v0 != 0) goto label_0x181d64;                           // 0x00181d54: bnez $v0, 0x181d64
    goto label_0x181dbc;                                        // 0x00181d5c: b 0x181dbc
    v0 = -1;                                                    // 0x00181d60: addiu $v0, $zero, -1
label_0x181d64:
    /* bnezl $s1, 0x181d6c */                                   // 0x00181d64: bnezl $s1, 0x181d6c
    g_00270000 = v0;  // Global at 0x00270000                   // 0x00181d68: sw $v0, 0($s1)
    if (a0 != 0) goto label_0x181d84;                           // 0x00181d6c: bnez $a0, 0x181d84
    v0 = 0x27 << 16;                                            // 0x00181d70: lui $v0, 0x27
    PollSema();  // 0x114320                                    // 0x00181d74: jal 0x114320
    a0 = g_0026b1a8;  // Global at 0x0026b1a8                   // 0x00181d78: lw $a0, -0x4e58($v0)
    goto label_0x181d94;                                        // 0x00181d7c: b 0x181d94
    /* nop */                                                   // 0x00181d80: nop 
label_0x181d84:
    SetOsdConfigParam();  // 0x114330                           // 0x00181d84: jal 0x114330
    a0 = g_0026b1a8;  // Global at 0x0026b1a8                   // 0x00181d88: lw $a0, -0x4e58($v0)
    if (v0 < 0) goto label_0x181dbc;                            // 0x00181d8c: bltz $v0, 0x181dbc
label_0x181d94:
    if (s0 == 0) goto label_0x181da4;                           // 0x00181d94: beqz $s0, 0x181da4
    /* nop */                                                   // 0x00181d98: nop 
    v0 = g_0026ac88;  // Global at 0x0026ac88                   // 0x00181d9c: lw $v0, 8($s2)
    g_0026ac80 = v0;  // Global at 0x0026ac80                   // 0x00181da0: sw $v0, 0($s0)
label_0x181da4:
    /* beqzl $s1, 0x181db8 */                                   // 0x00181da4: beqzl $s1, 0x181db8
    g_0026ac84 = 0;  // Global at 0x0026ac84                    // 0x00181da8: sw $zero, 4($s2)
    v0 = g_0026ac84;  // Global at 0x0026ac84                   // 0x00181dac: lw $v0, 4($s2)
    g_00270000 = v0;  // Global at 0x00270000                   // 0x00181db0: sw $v0, 0($s1)
    g_0026ac84 = 0;  // Global at 0x0026ac84                    // 0x00181db4: sw $zero, 4($s2)
    v0 = 1;                                                     // 0x00181db8: addiu $v0, $zero, 1
label_0x181dbc:
    return;                                                     // 0x00181dcc: jr $ra
    sp = sp + 0x40;                                             // 0x00181dd0: addiu $sp, $sp, 0x40
}