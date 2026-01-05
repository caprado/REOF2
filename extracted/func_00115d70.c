void func_00115d70() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_1e, local_1f;
    
    sp = sp + -0x40;                                            // 0x00115d70: addiu $sp, $sp, -0x40
    func_00111f40();  // 111f40                                // 0x00115d90: jal 0x111f40
    if (v0 >= 0) goto label_0x115dbc;                           // 0x00115d98: bgez $v0, 0x115dbc
    func_001119f0();  // 1119f0                                // 0x00115da0: jal 0x1119f0
    v1 = 0x1f << 16;                                            // 0x00115da8: lui $v1, 0x1f
    v0 = g_001f0344;  // Global at 0x001f0344                   // 0x00115db0: lw $v0, 0x344($v1)
    /* call function at address in v0 */                        // 0x00115db4: jalr $v0
    a0 = 0x2d;                                                  // 0x00115db8: addiu $a0, $zero, 0x2d
label_0x115dbc:
    at = 0x22 << 16;                                            // 0x00115dbc: lui $at, 0x22
    func_00111f40();  // 111f40                                // 0x00115dc4: jal 0x111f40
    if (v0 >= 0) goto label_0x115e14;                           // 0x00115dcc: bgez $v0, 0x115e14
    s2 = 0x22 << 16;                                            // 0x00115dd0: lui $s2, 0x22
    goto label_0x115df4;                                        // 0x00115dd4: b 0x115df4
    /* nop */                                                   // 0x00115dd8: nop 
    /* nop */                                                   // 0x00115ddc: nop 
label_0x115de0:
    a1 = 0 | 0x8048;                                            // 0x00115de0: ori $a1, $zero, 0x8048
    func_00111a58();  // 111a58                                // 0x00115de8: jal 0x111a58
    s1 = s1 + -1;                                               // 0x00115dec: addiu $s1, $s1, -1
label_0x115df4:
    at = 0x22 << 16;                                            // 0x00115df4: lui $at, 0x22
    func_00111f40();  // 111f40                                // 0x00115dfc: jal 0x111f40
    if (v0 < 0) goto label_0x115de0;                            // 0x00115e04: bltz $v0, 0x115de0
    goto label_0x115e64;                                        // 0x00115e0c: b 0x115e64
    /* nop */                                                   // 0x00115e10: nop 
label_0x115e14:
    a1 = 0 | 0xffc0;                                            // 0x00115e14: ori $a1, $zero, 0xffc0
    func_00111f40();  // 111f40                                // 0x00115e1c: jal 0x111f40
    if (v0 < 0) goto label_0x115e64;                            // 0x00115e24: bltz $v0, 0x115e64
    s2 = 0x22 << 16;                                            // 0x00115e28: lui $s2, 0x22
    goto label_0x115e4c;                                        // 0x00115e2c: b 0x115e4c
    /* nop */                                                   // 0x00115e30: nop 
    /* nop */                                                   // 0x00115e34: nop 
label_0x115e38:
    a1 = 0 | 0x8048;                                            // 0x00115e38: ori $a1, $zero, 0x8048
    func_00111ce0();  // 111ce0                                // 0x00115e40: jal 0x111ce0
    s1 = s1 + 1;                                                // 0x00115e44: addiu $s1, $s1, 1
label_0x115e4c:
    a1 = 0 | 0xffc0;                                            // 0x00115e4c: ori $a1, $zero, 0xffc0
    func_00111f40();  // 111f40                                // 0x00115e54: jal 0x111f40
    if (v0 >= 0) goto label_0x115e38;                           // 0x00115e5c: bgez $v0, 0x115e38
label_0x115e64:
    at = 0x22 << 16;                                            // 0x00115e64: lui $at, 0x22
    func_00111a58();  // 111a58                                // 0x00115e6c: jal 0x111a58
    func_00111160();  // 111160                                // 0x00115e74: jal 0x111160
    func_00115cd8();  // 115cd8                                // 0x00115e7c: jal 0x115cd8
    a0 = s2 + 0x1240;                                           // 0x00115e84: addiu $a0, $s2, 0x1240
    func_001164d0();  // 1164d0                                // 0x00115e88: jal 0x1164d0
    if (s1 < 0) goto label_0x115eb8;                            // 0x00115e90: bltz $s1, 0x115eb8
    a0 = 0x22 << 16;                                            // 0x00115e98: lui $a0, 0x22
    a0 = a0 + 0x1248;                                           // 0x00115ea0: addiu $a0, $a0, 0x1248
    return func_00116508();  // Tail call                        // 0x00115eb0: j 0x1164d0
    sp = sp + 0x40;                                             // 0x00115eb4: addiu $sp, $sp, 0x40
label_0x115eb8:
    a0 = 0x22 << 16;                                            // 0x00115eb8: lui $a0, 0x22
    a0 = a0 + 0x1250;                                           // 0x00115ec0: addiu $a0, $a0, 0x1250
    return func_00116508();  // Tail call                        // 0x00115ed0: j 0x1164d0
    sp = sp + 0x40;                                             // 0x00115ed4: addiu $sp, $sp, 0x40
    sp = sp + -0xa0;                                            // 0x00115ed8: addiu $sp, $sp, -0xa0
    func_0011d320();  // 11d320                                // 0x00115f00: jal 0x11d320
    v0 = g_00220002;  // Global at 0x00220002                   // 0x00115f0c: lb $v0, 0($s0)
    if (v0 == 0) goto label_0x116494;                           // 0x00115f10: beqz $v0, 0x116494
    v1 = g_00220002;  // Global at 0x00220002                   // 0x00115f14: lbu $v1, 0($s0)
label_0x115f18:
    v0 = v1 << 0x18;                                            // 0x00115f18: sll $v0, $v1, 0x18
    a0 = v0 >> 0x18;                                            // 0x00115f20: sra $a0, $v0, 0x18
    v0 = 0x25;                                                  // 0x00115f24: addiu $v0, $zero, 0x25
    if (a0 != v0) goto label_0x116460;                          // 0x00115f28: bne $a0, $v0, 0x116460
label_0x115f30:
    s2 = s0 + 1;                                                // 0x00115f30: addiu $s2, $s0, 1
label_0x115f34:
label_0x115f38:
    v0 = g_00220002;  // Global at 0x00220002                   // 0x00115f38: lbu $v0, 0($s0)
    v0 = v0 + -0x30;                                            // 0x00115f3c: addiu $v0, $v0, -0x30
    v0 = v0 << 0x18;                                            // 0x00115f40: sll $v0, $v0, 0x18
    a0 = v0 >> 0x18;                                            // 0x00115f44: sra $a0, $v0, 0x18
    v1 = ((unsigned)a0 < (unsigned)0x49) ? 1 : 0;               // 0x00115f48: sltiu $v1, $a0, 0x49
    if (v1 == 0) goto label_0x116478;                           // 0x00115f4c: beqz $v1, 0x116478
    v0 = 0x22 << 16;                                            // 0x00115f50: lui $v0, 0x22
    v1 = a0 << 2;                                               // 0x00115f54: sll $v1, $a0, 2
    v0 = v0 + 0x1270;                                           // 0x00115f58: addiu $v0, $v0, 0x1270
    v1 = v1 + v0;                                               // 0x00115f5c: addu $v1, $v1, $v0
    a0 = g_001f0000;  // Global at 0x001f0000                   // 0x00115f60: lw $a0, 0($v1)
    /* jump to address in a0 */                                 // 0x00115f64: jr $a0
    /* nop */                                                   // 0x00115f68: nop 
    v1 = g_00220004;  // Global at 0x00220004                   // 0x00115f6c: lb $v1, 1($s2)
    a1 = v1 + -0x30;                                            // 0x00115f70: addiu $a1, $v1, -0x30
    v0 = a1 & 0xff;                                             // 0x00115f74: andi $v0, $a1, 0xff
    v0 = ((unsigned)v0 < (unsigned)0xa) ? 1 : 0;                // 0x00115f78: sltiu $v0, $v0, 0xa
    if (v0 == 0) goto label_0x115ff4;                           // 0x00115f7c: beqz $v0, 0x115ff4
    a2 = g_00220005;  // Global at 0x00220005                   // 0x00115f80: lb $a2, 2($s2)
    v0 = a2 + -0x30;                                            // 0x00115f84: addiu $v0, $a2, -0x30
    v0 = ((unsigned)v0 < (unsigned)0xa) ? 1 : 0;                // 0x00115f88: sltiu $v0, $v0, 0xa
    if (v0 == 0) goto label_0x115fb4;                           // 0x00115f8c: beqz $v0, 0x115fb4
    v1 = 0xa;                                                   // 0x00115f90: addiu $v1, $zero, 0xa
    a0 = 0x1f;                                                  // 0x00115f94: addiu $a0, $zero, 0x1f
    /* multiply: a1 * v1 -> hi:lo */                            // 0x00115f98: mult $ac3, $a1, $v1
    s0 = s2 + 2;                                                // 0x00115f9c: addiu $s0, $s2, 2
    v1 = v1 + -0x30;                                            // 0x00115fa0: addiu $v1, $v1, -0x30
    a1 = v1 + a2;                                               // 0x00115fa4: addu $a1, $v1, $a2
    v0 = (a1 < 0x20) ? 1 : 0;                                   // 0x00115fa8: slti $v0, $a1, 0x20
    goto label_0x115fb8;                                        // 0x00115fac: b 0x115fb8
    if (v0 == 0) a1 = a0;                                       // 0x00115fb0: movz $a1, $a0, $v0
label_0x115fb4:
    s0 = s2 + 1;                                                // 0x00115fb4: addiu $s0, $s2, 1
label_0x115fb8:
    v0 = sp + 0x1f;                                             // 0x00115fb8: addiu $v0, $sp, 0x1f
    if (a1 <= 0) goto label_0x115f30;                           // 0x00115fbc: blez $a1, 0x115f30
    s4 = v0 - a1;                                               // 0x00115fc0: subu $s4, $v0, $a1
    s2 = s0 + 1;                                                // 0x00115fc4: addiu $s2, $s0, 1
label_0x115fc8:
    v0 = 0x1f;                                                  // 0x00115fc8: addiu $v0, $zero, 0x1f
    a0 = 0x30;                                                  // 0x00115fcc: addiu $a0, $zero, 0x30
    v0 = v0 - a1;                                               // 0x00115fd0: subu $v0, $v0, $a1
    v1 = sp + v0;                                               // 0x00115fd4: addu $v1, $sp, $v0
    a1 = a1 + -1;                                               // 0x00115fd8: addiu $a1, $a1, -1
    g_001effd0 = a0;  // Global at 0x001effd0                   // 0x00115fdc: sb $a0, 0($v1)
    if (a1 > 0) goto label_0x115fc8;                            // 0x00115fe0: bgtz $a1, 0x115fc8
    /* nop */                                                   // 0x00115fe4: nop 
    goto label_0x115f38;                                        // 0x00115fe8: b 0x115f38
    a3 = 0x6c;                                                  // 0x00115ff0: addiu $a3, $zero, 0x6c
label_0x115ff4:
    goto label_0x115f34;                                        // 0x00115ff4: b 0x115f34
    s2 = s2 + 1;                                                // 0x00115ff8: addiu $s2, $s2, 1
    goto label_0x115ff4;                                        // 0x00115ffc: b 0x115ff4
    a3 = 0x68;                                                  // 0x00116000: addiu $a3, $zero, 0x68
    v0 = 0x6c;                                                  // 0x00116004: addiu $v0, $zero, 0x6c
    if (a3 != v0) goto label_0x11601c;                          // 0x00116008: bne $a3, $v0, 0x11601c
    v0 = 0x68;                                                  // 0x0011600c: addiu $v0, $zero, 0x68
    s3 = s3 + 8;                                                // 0x00116010: addiu $s3, $s3, 8
    goto label_0x116030;                                        // 0x00116014: b 0x116030
label_0x11601c:
    if (a3 != v0) goto label_0x11602c;                          // 0x0011601c: bne $a3, $v0, 0x11602c
    s3 = s3 + 8;                                                // 0x00116020: addiu $s3, $s3, 8
    goto label_0x116030;                                        // 0x00116024: b 0x116030
    s1 = *(uint16_t*)((s3) + -8);                               // 0x00116028: lhu $s1, -8($s3)
label_0x11602c:
label_0x116030:
    s0 = sp + 0x1f;                                             // 0x00116030: addiu $s0, $sp, 0x1f
    if (s1 != 0) goto label_0x116050;                           // 0x00116034: bnez $s1, 0x116050
    local_1f = 0;                                               // 0x00116038: sb $zero, 0x1f($sp)
    v0 = 0x30;                                                  // 0x0011603c: addiu $v0, $zero, 0x30
    s0 = sp + 0x1e;                                             // 0x00116040: addiu $s0, $sp, 0x1e
    local_1e = v0;                                              // 0x00116044: sb $v0, 0x1e($sp)
    goto label_0x116078;                                        // 0x00116048: b 0x116078
    s2 = s2 + 1;                                                // 0x0011604c: addiu $s2, $s2, 1
label_0x116050:
    s2 = s2 + 1;                                                // 0x00116050: addiu $s2, $s2, 1
    /* nop */                                                   // 0x00116054: nop 
label_0x116058:
    v0 = s1 & 7;                                                // 0x00116058: andi $v0, $s1, 7
    s0 = s0 + -1;                                               // 0x0011605c: addiu $s0, $s0, -1
    v0 = v0 & 0xff;                                             // 0x00116068: andi $v0, $v0, 0xff
    g_00220003 = v0;  // Global at 0x00220003                   // 0x0011606c: sb $v0, 0($s0)
    if (s1 != 0) goto label_0x116058;                           // 0x00116070: bnez $s1, 0x116058
    /* nop */                                                   // 0x00116074: nop 
label_0x116078:
    if (s4 == 0) goto label_0x116084;                           // 0x00116078: beqz $s4, 0x116084
    v0 = ((unsigned)s4 < (unsigned)s0) ? 1 : 0;                 // 0x0011607c: sltu $v0, $s4, $s0
    if (v0 != 0) s0 = s4;                                       // 0x00116080: movn $s0, $s4, $v0
label_0x116084:
    v0 = g_00220003;  // Global at 0x00220003                   // 0x00116084: lb $v0, 0($s0)
    if (v0 == 0) goto label_0x116484;                           // 0x00116088: beqz $v0, 0x116484
    a0 = g_00220003;  // Global at 0x00220003                   // 0x0011608c: lbu $a0, 0($s0)
    s5 = 0x1f << 16;                                            // 0x00116090: lui $s5, 0x1f
    /* nop */                                                   // 0x00116094: nop 
label_0x116098:
    a0 = a0 << 0x18;                                            // 0x00116098: sll $a0, $a0, 0x18
    v0 = g_001f0344;  // Global at 0x001f0344                   // 0x0011609c: lw $v0, 0x344($s5)
    a0 = a0 >> 0x18;                                            // 0x001160a0: sra $a0, $a0, 0x18
    /* call function at address in v0 */                        // 0x001160a4: jalr $v0
    s0 = s0 + 1;                                                // 0x001160a8: addiu $s0, $s0, 1
    v0 = g_00220004;  // Global at 0x00220004                   // 0x001160ac: lb $v0, 0($s0)
    if (v0 != 0) goto label_0x116098;                           // 0x001160b0: bnez $v0, 0x116098
    a0 = g_00220004;  // Global at 0x00220004                   // 0x001160b4: lbu $a0, 0($s0)
    goto label_0x116488;                                        // 0x001160b8: b 0x116488
    v0 = 0x6c;                                                  // 0x001160c0: addiu $v0, $zero, 0x6c
    if (a3 != v0) goto label_0x1160d8;                          // 0x001160c4: bne $a3, $v0, 0x1160d8
    v0 = 0x68;                                                  // 0x001160c8: addiu $v0, $zero, 0x68
    s3 = s3 + 8;                                                // 0x001160cc: addiu $s3, $s3, 8
    goto label_0x1160ec;                                        // 0x001160d0: b 0x1160ec
label_0x1160d8:
    if (a3 != v0) goto label_0x1160e8;                          // 0x001160d8: bne $a3, $v0, 0x1160e8
    s3 = s3 + 8;                                                // 0x001160dc: addiu $s3, $s3, 8
    goto label_0x1160ec;                                        // 0x001160e0: b 0x1160ec
    s1 = *(uint16_t*)((s3) + -8);                               // 0x001160e4: lhu $s1, -8($s3)
label_0x1160e8:
label_0x1160ec:
    s0 = sp + 0x1f;                                             // 0x001160ec: addiu $s0, $sp, 0x1f
    if (s1 != 0) goto label_0x11610c;                           // 0x001160f0: bnez $s1, 0x11610c
    local_1f = 0;                                               // 0x001160f4: sb $zero, 0x1f($sp)
    v0 = 0x30;                                                  // 0x001160f8: addiu $v0, $zero, 0x30
    s0 = sp + 0x1e;                                             // 0x001160fc: addiu $s0, $sp, 0x1e
    local_1e = v0;                                              // 0x00116100: sb $v0, 0x1e($sp)
    goto label_0x116138;                                        // 0x00116104: b 0x116138
    s2 = s2 + 1;                                                // 0x00116108: addiu $s2, $s2, 1
label_0x11610c:
    s2 = s2 + 1;                                                // 0x0011610c: addiu $s2, $s2, 1
label_0x116110:
    v1 = s1 & 0xf;                                              // 0x00116110: andi $v1, $s1, 0xf
    v0 = ((unsigned)v1 < (unsigned)0xa) ? 1 : 0;                // 0x00116114: sltiu $v0, $v1, 0xa
    if (v0 != 0) goto label_0x116124;                           // 0x00116118: bnez $v0, 0x116124
label_0x116124:
    s0 = s0 + -1;                                               // 0x00116124: addiu $s0, $s0, -1
    v0 = v0 & 0xff;                                             // 0x00116128: andi $v0, $v0, 0xff
    if (s1 != 0) goto label_0x116110;                           // 0x00116130: bnez $s1, 0x116110
    g_00220003 = v0;  // Global at 0x00220003                   // 0x00116134: sb $v0, 0($s0)
label_0x116138:
    if (s4 == 0) goto label_0x116144;                           // 0x00116138: beqz $s4, 0x116144
    v0 = ((unsigned)s4 < (unsigned)s0) ? 1 : 0;                 // 0x0011613c: sltu $v0, $s4, $s0
    if (v0 != 0) s0 = s4;                                       // 0x00116140: movn $s0, $s4, $v0
label_0x116144:
    v0 = g_00220003;  // Global at 0x00220003                   // 0x00116144: lb $v0, 0($s0)
    if (v0 == 0) goto label_0x116484;                           // 0x00116148: beqz $v0, 0x116484
    a0 = g_00220003;  // Global at 0x00220003                   // 0x0011614c: lbu $a0, 0($s0)
    s5 = 0x1f << 16;                                            // 0x00116150: lui $s5, 0x1f
    /* nop */                                                   // 0x00116154: nop 
label_0x116158:
    a0 = a0 << 0x18;                                            // 0x00116158: sll $a0, $a0, 0x18
    v0 = g_001f0344;  // Global at 0x001f0344                   // 0x0011615c: lw $v0, 0x344($s5)
    a0 = a0 >> 0x18;                                            // 0x00116160: sra $a0, $a0, 0x18
    /* call function at address in v0 */                        // 0x00116164: jalr $v0
    s0 = s0 + 1;                                                // 0x00116168: addiu $s0, $s0, 1
    v0 = g_00220004;  // Global at 0x00220004                   // 0x0011616c: lb $v0, 0($s0)
    if (v0 != 0) goto label_0x116158;                           // 0x00116170: bnez $v0, 0x116158
    a0 = g_00220004;  // Global at 0x00220004                   // 0x00116174: lbu $a0, 0($s0)
    goto label_0x116488;                                        // 0x00116178: b 0x116488
    v0 = 0x6c;                                                  // 0x00116180: addiu $v0, $zero, 0x6c
    if (a3 != v0) goto label_0x116198;                          // 0x00116184: bne $a3, $v0, 0x116198
    v0 = 0x68;                                                  // 0x00116188: addiu $v0, $zero, 0x68
    s3 = s3 + 8;                                                // 0x0011618c: addiu $s3, $s3, 8
    goto label_0x1161ac;                                        // 0x00116190: b 0x1161ac
label_0x116198:
    if (a3 != v0) goto label_0x1161a8;                          // 0x00116198: bne $a3, $v0, 0x1161a8
    s3 = s3 + 8;                                                // 0x0011619c: addiu $s3, $s3, 8
    goto label_0x1161ac;                                        // 0x001161a0: b 0x1161ac
    s1 = *(int16_t*)((s3) + -8);                                // 0x001161a4: lh $s1, -8($s3)
label_0x1161a8:
    s1 = *(int32_t*)((s3) + -8);                                // 0x001161a8: lw $s1, -8($s3)
label_0x1161ac:
    s0 = sp + 0x1f;                                             // 0x001161ac: addiu $s0, $sp, 0x1f
    if (s1 != 0) goto label_0x1161c8;                           // 0x001161b0: bnez $s1, 0x1161c8
    local_1f = 0;                                               // 0x001161b4: sb $zero, 0x1f($sp)
    v0 = 0x30;                                                  // 0x001161b8: addiu $v0, $zero, 0x30
    s0 = sp + 0x1e;                                             // 0x001161bc: addiu $s0, $sp, 0x1e
    goto label_0x116228;                                        // 0x001161c0: b 0x116228
    local_1e = v0;                                              // 0x001161c4: sb $v0, 0x1e($sp)
label_0x1161c8:
    if (s1 >= 0) goto label_0x1161e0;                           // 0x001161c8: bgez $s1, 0x1161e0
    s5 = 0x1f << 16;                                            // 0x001161cc: lui $s5, 0x1f
    v0 = g_001f0344;  // Global at 0x001f0344                   // 0x001161d4: lw $v0, 0x344($s5)
    /* call function at address in v0 */                        // 0x001161d8: jalr $v0
    a0 = 0x2d;                                                  // 0x001161dc: addiu $a0, $zero, 0x2d
label_0x1161e0:
    if (s1 == 0) goto label_0x11622c;                           // 0x001161e0: beqz $s1, 0x11622c
    s2 = s2 + 1;                                                // 0x001161e4: addiu $s2, $s2, 1
    /* nop */                                                   // 0x001161ec: nop 
label_0x1161f0:
    func_0010fe58();  // 10fe58                                // 0x001161f0: jal 0x10fe58
    a1 = 0xa;                                                   // 0x001161f4: addiu $a1, $zero, 0xa
    s0 = s0 + -1;                                               // 0x001161f8: addiu $s0, $s0, -1
    v0 = v0 & 0xff;                                             // 0x00116204: andi $v0, $v0, 0xff
    a1 = 0xa;                                                   // 0x00116208: addiu $a1, $zero, 0xa
    func_0010f7c0();  // 10f7c0                                // 0x0011620c: jal 0x10f7c0
    g_00220003 = v0;  // Global at 0x00220003                   // 0x00116210: sb $v0, 0($s0)
    if (s1 != 0) goto label_0x1161f0;                           // 0x00116218: bnez $s1, 0x1161f0
    goto label_0x11622c;                                        // 0x00116220: b 0x11622c
    /* nop */                                                   // 0x00116224: nop 
label_0x116228:
    s2 = s2 + 1;                                                // 0x00116228: addiu $s2, $s2, 1
label_0x11622c:
    if (s4 == 0) goto label_0x116238;                           // 0x0011622c: beqz $s4, 0x116238
    v0 = ((unsigned)s4 < (unsigned)s0) ? 1 : 0;                 // 0x00116230: sltu $v0, $s4, $s0
    if (v0 != 0) s0 = s4;                                       // 0x00116234: movn $s0, $s4, $v0
label_0x116238:
    v0 = g_00220003;  // Global at 0x00220003                   // 0x00116238: lb $v0, 0($s0)
    if (v0 == 0) goto label_0x116484;                           // 0x0011623c: beqz $v0, 0x116484
    a0 = g_00220003;  // Global at 0x00220003                   // 0x00116240: lbu $a0, 0($s0)
    s5 = 0x1f << 16;                                            // 0x00116244: lui $s5, 0x1f
label_0x116248:
    a0 = a0 << 0x18;                                            // 0x00116248: sll $a0, $a0, 0x18
    v0 = g_001f0344;  // Global at 0x001f0344                   // 0x0011624c: lw $v0, 0x344($s5)
    a0 = a0 >> 0x18;                                            // 0x00116250: sra $a0, $a0, 0x18
    /* call function at address in v0 */                        // 0x00116254: jalr $v0
    s0 = s0 + 1;                                                // 0x00116258: addiu $s0, $s0, 1
    v0 = g_00220004;  // Global at 0x00220004                   // 0x0011625c: lb $v0, 0($s0)
    if (v0 != 0) goto label_0x116248;                           // 0x00116260: bnez $v0, 0x116248
    a0 = g_00220004;  // Global at 0x00220004                   // 0x00116264: lbu $a0, 0($s0)
    goto label_0x116488;                                        // 0x00116268: b 0x116488
    v0 = 0x6c;                                                  // 0x00116270: addiu $v0, $zero, 0x6c
    if (a3 != v0) goto label_0x116288;                          // 0x00116274: bne $a3, $v0, 0x116288
    v0 = 0x68;                                                  // 0x00116278: addiu $v0, $zero, 0x68
    s3 = s3 + 8;                                                // 0x0011627c: addiu $s3, $s3, 8
    goto label_0x11629c;                                        // 0x00116280: b 0x11629c
label_0x116288:
    if (a3 != v0) goto label_0x116298;                          // 0x00116288: bne $a3, $v0, 0x116298
    s3 = s3 + 8;                                                // 0x0011628c: addiu $s3, $s3, 8
    goto label_0x11629c;                                        // 0x00116290: b 0x11629c
    s1 = *(uint16_t*)((s3) + -8);                               // 0x00116294: lhu $s1, -8($s3)
label_0x116298:
label_0x11629c:
    s0 = sp + 0x1f;                                             // 0x0011629c: addiu $s0, $sp, 0x1f
    if (s1 != 0) goto label_0x1162bc;                           // 0x001162a0: bnez $s1, 0x1162bc
    local_1f = 0;                                               // 0x001162a4: sb $zero, 0x1f($sp)
    v0 = 0x30;                                                  // 0x001162a8: addiu $v0, $zero, 0x30
    s0 = sp + 0x1e;                                             // 0x001162ac: addiu $s0, $sp, 0x1e
    local_1e = v0;                                              // 0x001162b0: sb $v0, 0x1e($sp)
    goto label_0x1162f8;                                        // 0x001162b4: b 0x1162f8
    s2 = s2 + 1;                                                // 0x001162b8: addiu $s2, $s2, 1
label_0x1162bc:
    s2 = s2 + 1;                                                // 0x001162bc: addiu $s2, $s2, 1
    /* nop */                                                   // 0x001162c4: nop 
label_0x1162c8:
    func_00110a68();  // 110a68                                // 0x001162c8: jal 0x110a68
    a1 = 0xa;                                                   // 0x001162cc: addiu $a1, $zero, 0xa
    s0 = s0 + -1;                                               // 0x001162d0: addiu $s0, $s0, -1
    v0 = v0 & 0xff;                                             // 0x001162dc: andi $v0, $v0, 0xff
    a1 = 0xa;                                                   // 0x001162e0: addiu $a1, $zero, 0xa
    func_001104e8();  // 1104e8                                // 0x001162e4: jal 0x1104e8
    g_00220003 = v0;  // Global at 0x00220003                   // 0x001162e8: sb $v0, 0($s0)
    if (s1 != 0) goto label_0x1162c8;                           // 0x001162f0: bnez $s1, 0x1162c8
label_0x1162f8:
    if (s4 == 0) goto label_0x116304;                           // 0x001162f8: beqz $s4, 0x116304
    v0 = ((unsigned)s4 < (unsigned)s0) ? 1 : 0;                 // 0x001162fc: sltu $v0, $s4, $s0
    if (v0 != 0) s0 = s4;                                       // 0x00116300: movn $s0, $s4, $v0
label_0x116304:
    v0 = g_00220003;  // Global at 0x00220003                   // 0x00116304: lb $v0, 0($s0)
    if (v0 == 0) goto label_0x116484;                           // 0x00116308: beqz $v0, 0x116484
    a0 = g_00220003;  // Global at 0x00220003                   // 0x0011630c: lbu $a0, 0($s0)
    s5 = 0x1f << 16;                                            // 0x00116310: lui $s5, 0x1f
    /* nop */                                                   // 0x00116314: nop 
label_0x116318:
    a0 = a0 << 0x18;                                            // 0x00116318: sll $a0, $a0, 0x18
    v0 = g_001f0344;  // Global at 0x001f0344                   // 0x0011631c: lw $v0, 0x344($s5)
    a0 = a0 >> 0x18;                                            // 0x00116320: sra $a0, $a0, 0x18
    /* call function at address in v0 */                        // 0x00116324: jalr $v0
    s0 = s0 + 1;                                                // 0x00116328: addiu $s0, $s0, 1
    v0 = g_00220004;  // Global at 0x00220004                   // 0x0011632c: lb $v0, 0($s0)
    if (v0 != 0) goto label_0x116318;                           // 0x00116330: bnez $v0, 0x116318
    a0 = g_00220004;  // Global at 0x00220004                   // 0x00116334: lbu $a0, 0($s0)
    goto label_0x116488;                                        // 0x00116338: b 0x116488
    s3 = s3 + 8;                                                // 0x00116340: addiu $s3, $s3, 8
    func_00112118();  // 112118                                // 0x00116344: jal 0x112118
    /* FPU: mov.s $f12, $f0 */                                  // 0x0011634c: mov.s $f12, $f0
    /* move to FPU: $zero, $f0 */                               // 0x00116350: mtc1 $zero, $f0
    /* FPU: c.eq.s $f12, $f0 */                                 // 0x00116354: c.eq.s $f12, $f0
    /* nop */                                                   // 0x00116358: nop 
    /* bc1f 0x11637c */                                         // 0x0011635c: bc1f 0x11637c
    s5 = 0x1f << 16;                                            // 0x00116360: lui $s5, 0x1f
    a0 = 0x30;                                                  // 0x00116364: addiu $a0, $zero, 0x30
    v0 = g_001f0344;  // Global at 0x001f0344                   // 0x00116368: lw $v0, 0x344($s5)
    /* call function at address in v0 */                        // 0x0011636c: jalr $v0
    s2 = s2 + 1;                                                // 0x00116370: addiu $s2, $s2, 1
    goto label_0x116488;                                        // 0x00116374: b 0x116488
    func_00111560();  // 111560                                // 0x0011637c: jal 0x111560
    s2 = s2 + 1;                                                // 0x00116380: addiu $s2, $s2, 1
    func_00115d70();  // 115d70                                // 0x00116384: jal 0x115d70
    goto label_0x116488;                                        // 0x0011638c: b 0x116488
    s3 = s3 + 8;                                                // 0x00116394: addiu $s3, $s3, 8
    v1 = *(int32_t*)((s3) + -8);                                // 0x00116398: lw $v1, -8($s3)
    v0 = g_001effd0;  // Global at 0x001effd0                   // 0x0011639c: lb $v0, 0($v1)
    if (v0 != 0) goto label_0x116400;                           // 0x001163a0: bnez $v0, 0x116400
    a0 = g_001effd0;  // Global at 0x001effd0                   // 0x001163a4: lbu $a0, 0($v1)
    s5 = 0x1f << 16;                                            // 0x001163a8: lui $s5, 0x1f
    a0 = 0x28;                                                  // 0x001163ac: addiu $a0, $zero, 0x28
    v0 = g_001f0344;  // Global at 0x001f0344                   // 0x001163b0: lw $v0, 0x344($s5)
    /* call function at address in v0 */                        // 0x001163b4: jalr $v0
    s2 = s2 + 1;                                                // 0x001163b8: addiu $s2, $s2, 1
    v1 = g_001f0344;  // Global at 0x001f0344                   // 0x001163bc: lw $v1, 0x344($s5)
    /* call function at address in v1 */                        // 0x001163c0: jalr $v1
    a0 = 0x6e;                                                  // 0x001163c4: addiu $a0, $zero, 0x6e
    v0 = g_001f0344;  // Global at 0x001f0344                   // 0x001163c8: lw $v0, 0x344($s5)
    /* call function at address in v0 */                        // 0x001163cc: jalr $v0
    a0 = 0x75;                                                  // 0x001163d0: addiu $a0, $zero, 0x75
    v1 = g_001f0344;  // Global at 0x001f0344                   // 0x001163d4: lw $v1, 0x344($s5)
    /* call function at address in v1 */                        // 0x001163d8: jalr $v1
    a0 = 0x6c;                                                  // 0x001163dc: addiu $a0, $zero, 0x6c
    v0 = g_001f0344;  // Global at 0x001f0344                   // 0x001163e0: lw $v0, 0x344($s5)
    /* call function at address in v0 */                        // 0x001163e4: jalr $v0
    a0 = 0x6c;                                                  // 0x001163e8: addiu $a0, $zero, 0x6c
    v1 = g_001f0344;  // Global at 0x001f0344                   // 0x001163ec: lw $v1, 0x344($s5)
    /* call function at address in v1 */                        // 0x001163f0: jalr $v1
    a0 = 0x29;                                                  // 0x001163f4: addiu $a0, $zero, 0x29
    goto label_0x116488;                                        // 0x001163f8: b 0x116488
label_0x116400:
    s2 = s2 + 1;                                                // 0x00116404: addiu $s2, $s2, 1
    s5 = 0x1f << 16;                                            // 0x00116408: lui $s5, 0x1f
    /* nop */                                                   // 0x0011640c: nop 
label_0x116410:
    a0 = a0 << 0x18;                                            // 0x00116410: sll $a0, $a0, 0x18
    v1 = g_001f0344;  // Global at 0x001f0344                   // 0x00116414: lw $v1, 0x344($s5)
    a0 = a0 >> 0x18;                                            // 0x00116418: sra $a0, $a0, 0x18
    /* call function at address in v1 */                        // 0x0011641c: jalr $v1
    s0 = s0 + 1;                                                // 0x00116420: addiu $s0, $s0, 1
    v0 = g_00220005;  // Global at 0x00220005                   // 0x00116424: lbu $v0, 0($s0)
    if (v0 != 0) goto label_0x116410;                           // 0x00116428: bnez $v0, 0x116410
    goto label_0x116488;                                        // 0x00116430: b 0x116488
    s3 = s3 + 8;                                                // 0x00116438: addiu $s3, $s3, 8
    s5 = 0x1f << 16;                                            // 0x0011643c: lui $s5, 0x1f
    s1 = *(int8_t*)((s3) + -8);                                 // 0x00116440: lb $s1, -8($s3)
    v0 = g_001f0344;  // Global at 0x001f0344                   // 0x00116444: lw $v0, 0x344($s5)
    /* call function at address in v0 */                        // 0x00116450: jalr $v0
    s2 = s2 + 1;                                                // 0x00116454: addiu $s2, $s2, 1
    goto label_0x116488;                                        // 0x00116458: b 0x116488
label_0x116460:
    v0 = 0x1f << 16;                                            // 0x00116460: lui $v0, 0x1f
    v1 = g_001f0344;  // Global at 0x001f0344                   // 0x00116464: lw $v1, 0x344($v0)
    /* call function at address in v1 */                        // 0x00116468: jalr $v1
    s2 = s0 + 1;                                                // 0x0011646c: addiu $s2, $s0, 1
    goto label_0x116488;                                        // 0x00116470: b 0x116488
label_0x116478:
    goto label_0x116484;                                        // 0x00116478: b 0x116484
    s2 = s0 + 1;                                                // 0x0011647c: addiu $s2, $s0, 1
    s2 = s2 + 1;                                                // 0x00116480: addiu $s2, $s2, 1
label_0x116484:
label_0x116488:
    v0 = g_00220005;  // Global at 0x00220005                   // 0x00116488: lb $v0, 0($s0)
    if (v0 != 0) goto label_0x115f18;                           // 0x0011648c: bnez $v0, 0x115f18
    v1 = g_00220005;  // Global at 0x00220005                   // 0x00116490: lbu $v1, 0($s0)
label_0x116494:
    if (s6 == 0) goto label_0x1164a8;                           // 0x00116494: beqz $s6, 0x1164a8
    func_0011d378();  // 11d378                                // 0x0011649c: jal 0x11d378
    /* nop */                                                   // 0x001164a0: nop 
label_0x1164a8:
    return;                                                     // 0x001164c4: jr $ra
    sp = sp + 0xa0;                                             // 0x001164c8: addiu $sp, $sp, 0xa0
}