void func_00138c38() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00138c38: addiu $sp, $sp, -0x30
    v0 = s2 & 0x3f;                                             // 0x00138c48: andi $v0, $s2, 0x3f
    if (v0 == 0) goto label_0x138c78;                           // 0x00138c60: beqz $v0, 0x138c78
    a0 = 0x22 << 16;                                            // 0x00138c68: lui $a0, 0x22
    goto label_0x138d08;                                        // 0x00138c6c: b 0x138d08
    a0 = &str_002251e8;  // "iopwk is not alignment 32 byte\n"  // 0x00138c70: addiu $a0, $a0, 0x51e8
    /* nop */                                                   // 0x00138c74: nop 
label_0x138c78:
    v0 = s3 & 0x1f;                                             // 0x00138c78: andi $v0, $s3, 0x1f
    if (v0 == 0) goto label_0x138c90;                           // 0x00138c7c: beqz $v0, 0x138c90
    v0 = s1 & 0x3f;                                             // 0x00138c80: andi $v0, $s1, 0x3f
    a0 = 0x22 << 16;                                            // 0x00138c84: lui $a0, 0x22
    goto label_0x138d08;                                        // 0x00138c88: b 0x138d08
    a0 = &str_00225208;  // "wklen=%d is not 64*N\n"            // 0x00138c8c: addiu $a0, $a0, 0x5208
label_0x138c90:
    if (v0 == 0) goto label_0x138ca8;                           // 0x00138c90: beqz $v0, 0x138ca8
    v0 = ((unsigned)t0 < (unsigned)8) ? 1 : 0;                  // 0x00138c94: sltiu $v0, $t0, 8
    a0 = 0x22 << 16;                                            // 0x00138c98: lui $a0, 0x22
    goto label_0x138cbc;                                        // 0x00138ca0: b 0x138cbc
    a0 = &str_00225228;  // "illeagal ID (%d) \n"               // 0x00138ca4: addiu $a0, $a0, 0x5228
label_0x138ca8:
    if (v0 != 0) goto label_0x138cd0;                           // 0x00138ca8: bnez $v0, 0x138cd0
    v1 = t0 << 4;                                               // 0x00138cac: sll $v1, $t0, 4
    a0 = 0x22 << 16;                                            // 0x00138cb0: lui $a0, 0x22
    a0 = &str_00225240;  // "DTX_Create: can't create DTX of server\n" // 0x00138cb8: addiu $a0, $a0, 0x5240
label_0x138cbc:
    func_00116508();  // 116508                                // 0x00138cbc: jal 0x116508
    /* nop */                                                   // 0x00138cc0: nop 
    goto label_0x138db4;                                        // 0x00138cc4: b 0x138db4
    /* nop */                                                   // 0x00138ccc: nop 
label_0x138cd0:
    v1 = v1 + t0;                                               // 0x00138cd0: addu $v1, $v1, $t0
    v1 = v1 << 2;                                               // 0x00138cd4: sll $v1, $v1, 2
    s0 = 0x20 << 16;                                            // 0x00138cd8: lui $s0, 0x20
    s0 = s0 + 0x2a30;                                           // 0x00138cdc: addiu $s0, $s0, 0x2a30
    s0 = s0 + v1;                                               // 0x00138ce0: addu $s0, $s0, $v1
    t0 = g_00202a30;  // Global at 0x00202a30                   // 0x00138ce4: lb $t0, 0($s0)
    if (t0 != 0) goto label_0x138db4;                           // 0x00138ce8: bnez $t0, 0x138db4
    func_00138aa8();  // 138aa8                                // 0x00138cf0: jal 0x138aa8
    /* nop */                                                   // 0x00138cf4: nop 
    if (v0 != 0) goto label_0x138d18;                           // 0x00138cf8: bnez $v0, 0x138d18
    g_00202a34 = v0;  // Global at 0x00202a34                   // 0x00138cfc: sw $v0, 4($s0)
    a0 = 0x22 << 16;                                            // 0x00138d00: lui $a0, 0x22
    a0 = &str_00225258;  // "E0092101: DTX_Init bind errr\n"    // 0x00138d04: addiu $a0, $a0, 0x5258
label_0x138d08:
    func_00116508();  // 116508                                // 0x00138d08: jal 0x116508
    /* nop */                                                   // 0x00138d0c: nop 
    goto label_0x138db4;                                        // 0x00138d10: b 0x138db4
label_0x138d18:
    v1 = s1 + -0x40;                                            // 0x00138d18: addiu $v1, $s1, -0x40
    a0 = 0x2000 << 16;                                          // 0x00138d1c: lui $a0, 0x2000
    v0 = s2 + v1;                                               // 0x00138d20: addu $v0, $s2, $v1
    v0 = v0 | a0;                                               // 0x00138d28: or $v0, $v0, $a0
    g_00202a40 = v1;  // Global at 0x00202a40                   // 0x00138d34: sw $v1, 0x10($s0)
    g_00202a4c = s1;  // Global at 0x00202a4c                   // 0x00138d38: sw $s1, 0x1c($s0)
    g_00202a48 = s3;  // Global at 0x00202a48                   // 0x00138d3c: sw $s3, 0x18($s0)
    g_00202a44 = v0;  // Global at 0x00202a44                   // 0x00138d40: sw $v0, 0x14($s0)
    g_00202a38 = 0;  // Global at 0x00202a38                    // 0x00138d44: sw $zero, 8($s0)
    g_00202a3c = s2;  // Global at 0x00202a3c                   // 0x00138d48: sw $s2, 0xc($s0)
    func_00107c70();  // 107c70                                // 0x00138d4c: jal 0x107c70
    g_00202a31 = 0;  // Global at 0x00202a31                    // 0x00138d50: sb $zero, 1($s0)
    a1 = g_00202a3c;  // Global at 0x00202a3c                   // 0x00138d54: lw $a1, 0xc($s0)
    v0 = g_00202a40;  // Global at 0x00202a40                   // 0x00138d58: lw $v0, 0x10($s0)
    a1 = a1 + v0;                                               // 0x00138d60: addu $a1, $a1, $v0
    func_00114bd8();  // 114bd8                                // 0x00138d64: jal 0x114bd8
    a1 = a1 + 0x3f;                                             // 0x00138d68: addiu $a1, $a1, 0x3f
    a1 = g_00202a3c;  // Global at 0x00202a3c                   // 0x00138d6c: lw $a1, 0xc($s0)
    v0 = g_00202a40;  // Global at 0x00202a40                   // 0x00138d70: lw $v0, 0x10($s0)
    a1 = a1 + v0;                                               // 0x00138d78: addu $a1, $a1, $v0
    func_00114d18();  // 114d18                                // 0x00138d7c: jal 0x114d18
    a1 = a1 + 0x3f;                                             // 0x00138d80: addiu $a1, $a1, 0x3f
    v0 = 0x14 << 16;                                            // 0x00138d84: lui $v0, 0x14
    v1 = 0x14 << 16;                                            // 0x00138d88: lui $v1, 0x14
    a0 = 1;                                                     // 0x00138d8c: addiu $a0, $zero, 1
    v1 = v1 + -0x7480;                                          // 0x00138d90: addiu $v1, $v1, -0x7480
    v0 = v0 + -0x7498;                                          // 0x00138d94: addiu $v0, $v0, -0x7498
    g_00202a58 = v1;  // Global at 0x00202a58                   // 0x00138d98: sw $v1, 0x28($s0)
    g_00202a30 = a0;  // Global at 0x00202a30                   // 0x00138d9c: sb $a0, 0($s0)
    g_00202a54 = 0;  // Global at 0x00202a54                    // 0x00138da0: sw $zero, 0x24($s0)
    g_00202a5c = 0;  // Global at 0x00202a5c                    // 0x00138da4: sw $zero, 0x2c($s0)
    g_00202a32 = a0;  // Global at 0x00202a32                   // 0x00138da8: sb $a0, 2($s0)
    g_00202a50 = v0;  // Global at 0x00202a50                   // 0x00138dac: sw $v0, 0x20($s0)
label_0x138db4:
    return;                                                     // 0x00138dc8: jr $ra
    sp = sp + 0x30;                                             // 0x00138dcc: addiu $sp, $sp, 0x30
}