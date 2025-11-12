void func_001287d8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x10;                                            // 0x001287d8: addiu $sp, $sp, -0x10
    goto label_0x1287f0;                                        // 0x001287e4: j 0x1287f0
    sp = sp + 0x10;                                             // 0x001287e8: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x001287ec: nop 
label_0x1287f0:
    v0 = 0x1f << 16;                                            // 0x001287f0: lui $v0, 0x1f
    sp = sp + -0x60;                                            // 0x001287f4: addiu $sp, $sp, -0x60
    v1 = g_001f3834;  // Global at 0x001f3834                   // 0x001287f8: lw $v1, 0x3834($v0)
    if (s0 == v1) goto label_0x128850;                          // 0x00128834: beq $s0, $v1, 0x128850
    local_0 = 0;                                                // 0x00128838: sw $zero, 0($sp)
    a0 = 0x22 << 16;                                            // 0x0012883c: lui $a0, 0x22
    func_00127de8();  // 0x127d90                                // 0x00128840: jal 0x127d90
    a0 = &str_00222608;  // "E0040701:Illigal format(not AFS).(ADXF_GetPtStat)" // 0x00128844: addiu $a0, $a0, 0x2608
    goto label_0x128ba0;                                        // 0x00128848: b 0x128ba0
    v0 = -3;                                                    // 0x0012884c: addiu $v0, $zero, -3
label_0x128850:
    v0 = 0x1f << 16;                                            // 0x00128850: lui $v0, 0x1f
    func_00129a38();  // 0x129a08                                // 0x00128854: jal 0x129a08
    a0 = g_001f3830;  // Global at 0x001f3830                   // 0x00128858: lw $a0, 0x3830($v0)
    v1 = 3;                                                     // 0x0012885c: addiu $v1, $zero, 3
    if (s6 != v1) goto label_0x128ba4;                          // 0x00128864: bnel $s6, $v1, 0x128ba4
    v0 = s0 << 2;                                               // 0x0012886c: sll $v0, $s0, 2
    a0 = 1;                                                     // 0x00128870: addiu $a0, $zero, 1
    s0 = 0x1f << 16;                                            // 0x00128874: lui $s0, 0x1f
    s0 = s0 + v0;                                               // 0x00128878: addu $s0, $s0, $v0
    s0 = g_001f3300;  // Global at 0x001f3300                   // 0x0012887c: lw $s0, 0x3300($s0)
    v1 = g_001f000f;  // Global at 0x001f000f                   // 0x00128880: lb $v1, 0xf($s0)
    if (v1 != a0) goto label_0x128898;                          // 0x00128884: bne $v1, $a0, 0x128898
    v1 = s0 + 0x11a;                                            // 0x00128888: addiu $v1, $s0, 0x11a
    s3 = s0 + 0x118;                                            // 0x0012888c: addiu $s3, $s0, 0x118
    goto label_0x1288a0;                                        // 0x00128890: b 0x1288a0
    fp = s0 + 0x11c;                                            // 0x00128894: addiu $fp, $s0, 0x11c
label_0x128898:
    s4 = s0 + 0x118;                                            // 0x00128898: addiu $s4, $s0, 0x118
    local_0 = v1;                                               // 0x0012889c: sw $v1, 0($sp)
label_0x1288a0:
    v0 = g_001f0008;  // Global at 0x001f0008                   // 0x001288a0: lw $v0, 8($s0)
    if (v0 != 0) goto label_0x128a28;                           // 0x001288a4: bnez $v0, 0x128a28
    s1 = 1;                                                     // 0x001288a8: addiu $s1, $zero, 1
    s7 = 0x1f << 16;                                            // 0x001288ac: lui $s7, 0x1f
    a1 = 0x22 << 16;                                            // 0x001288b0: lui $a1, 0x22
    s1 = s7 + 0x3838;                                           // 0x001288b4: addiu $s1, $s7, 0x3838
    a1 = a1 + 0x2640;                                           // 0x001288b8: addiu $a1, $a1, 0x2640
    a0 = g_001f3838;  // Global at 0x001f3838                   // 0x001288bc: lw $a0, 0($s1)
    a2 = 3;                                                     // 0x001288c0: addiu $a2, $zero, 3
    func_00107ab8();  // 0x107a20                                // 0x001288c4: jal 0x107a20
    if (v0 == 0) goto label_0x1288e0;                           // 0x001288cc: beqz $v0, 0x1288e0
    a0 = 0x22 << 16;                                            // 0x001288d0: lui $a0, 0x22
    goto label_0x128b80;                                        // 0x001288d4: b 0x128b80
    a0 = &str_00222648;  // "E0040702:Illigal number of file.(ADXF_GetPtStat)" // 0x001288d8: addiu $a0, $a0, 0x2648
    /* nop */                                                   // 0x001288dc: nop 
label_0x1288e0:
    v0 = g_001f3838;  // Global at 0x001f3838                   // 0x001288e0: lw $v0, 0($s1)
    a2 = 1 << 16;                                               // 0x001288e4: lui $a2, 1
    t0 = v0 + 5;                                                // 0x001288e8: addiu $t0, $v0, 5
    a1 = g_001f0007;  // Global at 0x001f0007                   // 0x001288ec: lbu $a1, 7($v0)
    v1 = g_001f0006;  // Global at 0x001f0006                   // 0x001288f0: lbu $v1, 6($v0)
    a3 = v0 + 4;                                                // 0x001288f4: addiu $a3, $v0, 4
    a0 = g_001f0005;  // Global at 0x001f0005                   // 0x001288f8: lbu $a0, 0($t0)
    a1 = a1 << 0x18;                                            // 0x001288fc: sll $a1, $a1, 0x18
    v0 = g_001f0004;  // Global at 0x001f0004                   // 0x00128900: lbu $v0, 0($a3)
    v1 = v1 << 0x10;                                            // 0x00128904: sll $v1, $v1, 0x10
    a0 = a0 << 8;                                               // 0x00128908: sll $a0, $a0, 8
    v0 = v0 | a1;                                               // 0x0012890c: or $v0, $v0, $a1
    v1 = v1 | a0;                                               // 0x00128910: or $v1, $v1, $a0
    v0 = v0 | v1;                                               // 0x00128914: or $v0, $v0, $v1
    a2 = (a2 < v0) ? 1 : 0;                                     // 0x00128918: slt $a2, $a2, $v0
    if (a2 == 0) goto label_0x128930;                           // 0x0012891c: beqz $a2, 0x128930
    s1 = 1;                                                     // 0x00128920: addiu $s1, $zero, 1
    a0 = 0x22 << 16;                                            // 0x00128924: lui $a0, 0x22
    goto label_0x128b80;                                        // 0x00128928: b 0x128b80
    a0 = &str_00222680;  // "E2122501:AFS file has 128MB or more of inside file.(ADXF_GetPtStat)" // 0x0012892c: addiu $a0, $a0, 0x2680
label_0x128930:
    v0 = g_001f0005;  // Global at 0x001f0005                   // 0x00128930: lbu $v0, 0($t0)
    v1 = g_001f0004;  // Global at 0x001f0004                   // 0x00128934: lbu $v1, 0($a3)
    v0 = v0 << 8;                                               // 0x00128938: sll $v0, $v0, 8
    a0 = g_001f000f;  // Global at 0x001f000f                   // 0x0012893c: lb $a0, 0xf($s0)
    v1 = v1 | v0;                                               // 0x00128940: or $v1, $v1, $v0
    a1 = g_001f000f;  // Global at 0x001f000f                   // 0x00128944: lbu $a1, 0xf($s0)
    g_001f000c = v1;  // Global at 0x001f000c                   // 0x0012894c: sh $v1, 0xc($s0)
    if (a0 != s1) goto label_0x128968;                          // 0x00128950: bne $a0, $s1, 0x128968
    g_001f0008 = v0;  // Global at 0x001f0008                   // 0x00128954: sw $v0, 8($s0)
    v0 = v0 << 2;                                               // 0x00128958: sll $v0, $v0, 2
    goto label_0x128978;                                        // 0x0012895c: b 0x128978
    v0 = v0 + 0x120;                                            // 0x00128960: addiu $v0, $v0, 0x120
    /* nop */                                                   // 0x00128964: nop 
label_0x128968:
    v0 = v0 << 1;                                               // 0x00128968: sll $v0, $v0, 1
    v0 = v0 + 0x11c;                                            // 0x0012896c: addiu $v0, $v0, 0x11c
    v0 = (unsigned)v0 >> 2;                                     // 0x00128970: srl $v0, $v0, 2
    v0 = v0 << 2;                                               // 0x00128974: sll $v0, $v0, 2
label_0x128978:
    g_001f0004 = v0;  // Global at 0x001f0004                   // 0x00128978: sw $v0, 4($s0)
    v0 = a1 << 0x18;                                            // 0x0012897c: sll $v0, $a1, 0x18
    v1 = 1;                                                     // 0x00128980: addiu $v1, $zero, 1
    v0 = v0 >> 0x18;                                            // 0x00128984: sra $v0, $v0, 0x18
    if (v0 != v1) goto label_0x1289d0;                          // 0x00128988: bne $v0, $v1, 0x1289d0
    v1 = g_001f7064;  // Global at 0x001f7064                   // 0x0012898c: lw $v1, 0x3838($s2)
    a2 = g_001f0123;  // Global at 0x001f0123                   // 0x00128990: lbu $a2, 9($v1)
    a1 = g_001f0125;  // Global at 0x001f0125                   // 0x00128994: lbu $a1, 0xb($v1)
    a0 = g_001f0124;  // Global at 0x001f0124                   // 0x00128998: lbu $a0, 0xa($v1)
    a2 = a2 << 8;                                               // 0x0012899c: sll $a2, $a2, 8
    v0 = g_001f0122;  // Global at 0x001f0122                   // 0x001289a0: lbu $v0, 8($v1)
    a1 = a1 << 0x18;                                            // 0x001289a4: sll $a1, $a1, 0x18
    a0 = a0 << 0x10;                                            // 0x001289a8: sll $a0, $a0, 0x10
    v0 = v0 | a1;                                               // 0x001289ac: or $v0, $v0, $a1
    a0 = a0 | a2;                                               // 0x001289b0: or $a0, $a0, $a2
    v0 = v0 | a0;                                               // 0x001289b4: or $v0, $v0, $a0
    a1 = v0 + 0x7ff;                                            // 0x001289b8: addiu $a1, $v0, 0x7ff
    v1 = (v0 < 0) ? 1 : 0;                                      // 0x001289bc: slti $v1, $v0, 0
    if (v1 != 0) v0 = a1;                                       // 0x001289c0: movn $v0, $a1, $v1
    v0 = v0 >> 0xb;                                             // 0x001289c4: sra $v0, $v0, 0xb
    goto label_0x128a0c;                                        // 0x001289c8: b 0x128a0c
    g_001f0118 = v0;  // Global at 0x001f0118                   // 0x001289cc: sw $v0, 0($s3)
label_0x1289d0:
    a2 = g_001f0123;  // Global at 0x001f0123                   // 0x001289d0: lbu $a2, 9($v1)
    a1 = g_001f0125;  // Global at 0x001f0125                   // 0x001289d4: lbu $a1, 0xb($v1)
    a0 = g_001f0124;  // Global at 0x001f0124                   // 0x001289d8: lbu $a0, 0xa($v1)
    a2 = a2 << 8;                                               // 0x001289dc: sll $a2, $a2, 8
    v0 = g_001f0122;  // Global at 0x001f0122                   // 0x001289e0: lbu $v0, 8($v1)
    a1 = a1 << 0x18;                                            // 0x001289e4: sll $a1, $a1, 0x18
    a0 = a0 << 0x10;                                            // 0x001289e8: sll $a0, $a0, 0x10
    v0 = v0 | a1;                                               // 0x001289ec: or $v0, $v0, $a1
    a0 = a0 | a2;                                               // 0x001289f0: or $a0, $a0, $a2
    v0 = v0 | a0;                                               // 0x001289f4: or $v0, $v0, $a0
    a1 = v0 + 0x7ff;                                            // 0x001289f8: addiu $a1, $v0, 0x7ff
    v1 = (v0 < 0) ? 1 : 0;                                      // 0x001289fc: slti $v1, $v0, 0
    if (v1 != 0) v0 = a1;                                       // 0x00128a00: movn $v0, $a1, $v1
    v0 = v0 >> 0xb;                                             // 0x00128a04: sra $v0, $v0, 0xb
    g_001f0118 = v0;  // Global at 0x001f0118                   // 0x00128a08: sh $v0, 0($s4)
label_0x128a0c:
    goto label_0x128a2c;                                        // 0x00128a0c: b 0x128a2c
    s1 = 3;                                                     // 0x00128a10: addiu $s1, $zero, 3
    /* nop */                                                   // 0x00128a14: nop 
label_0x128a18:
    func_00128770();  // 0x128720                                // 0x00128a18: jal 0x128720
    s6 = 3;                                                     // 0x00128a1c: addiu $s6, $zero, 3
    goto label_0x128b38;                                        // 0x00128a20: b 0x128b38
    /* nop */                                                   // 0x00128a24: nop 
label_0x128a28:
    s7 = 0x1f << 16;                                            // 0x00128a28: lui $s7, 0x1f
label_0x128a2c:
    a2 = 0x1f << 16;                                            // 0x00128a2c: lui $a2, 0x1f
    v0 = g_001f383c;  // Global at 0x001f383c                   // 0x00128a30: lw $v0, 0x383c($a2)
    s4 = v0 << 9;                                               // 0x00128a34: sll $s4, $v0, 9
    s3 = (s1 < s4) ? 1 : 0;                                     // 0x00128a38: slt $s3, $s1, $s4
    if (s3 == 0) goto label_0x128b44;                           // 0x00128a3c: beqz $s3, 0x128b44
    v0 = 0x1f << 16;                                            // 0x00128a40: lui $v0, 0x1f
    s5 = 0x1f << 16;                                            // 0x00128a44: lui $s5, 0x1f
    s2 = s5 + 0x382c;                                           // 0x00128a48: addiu $s2, $s5, 0x382c
    v1 = g_001f000f;  // Global at 0x001f000f                   // 0x00128a4c: lb $v1, 0xf($s0)
    v0 = 1;                                                     // 0x00128a50: addiu $v0, $zero, 1
    if (v1 != v0) goto label_0x128ab0;                          // 0x00128a54: bne $v1, $v0, 0x128ab0
    v1 = g_001f3838;  // Global at 0x001f3838                   // 0x00128a58: lw $v1, 0x3838($s7)
    v0 = s1 << 2;                                               // 0x00128a5c: sll $v0, $s1, 2
    v0 = v0 + v1;                                               // 0x00128a60: addu $v0, $v0, $v1
    a2 = g_001f0001;  // Global at 0x001f0001                   // 0x00128a64: lbu $a2, 1($v0)
    a1 = g_001f0003;  // Global at 0x001f0003                   // 0x00128a68: lbu $a1, 3($v0)
    a0 = g_001f0002;  // Global at 0x001f0002                   // 0x00128a6c: lbu $a0, 2($v0)
    a2 = a2 << 8;                                               // 0x00128a70: sll $a2, $a2, 8
    v1 = g_001f0000;  // Global at 0x001f0000                   // 0x00128a74: lbu $v1, 0($v0)
    a1 = a1 << 0x18;                                            // 0x00128a78: sll $a1, $a1, 0x18
    a0 = a0 << 0x10;                                            // 0x00128a7c: sll $a0, $a0, 0x10
    v1 = v1 | a1;                                               // 0x00128a80: or $v1, $v1, $a1
    a0 = a0 | a2;                                               // 0x00128a84: or $a0, $a0, $a2
    func_001281b8();  // 0x128190                                // 0x00128a88: jal 0x128190
    a0 = v1 | a0;                                               // 0x00128a8c: or $a0, $v1, $a0
    a0 = g_001f382c;  // Global at 0x001f382c                   // 0x00128a94: lw $a0, 0($s2)
    v1 = a0 << 2;                                               // 0x00128a98: sll $v1, $a0, 2
    a0 = a0 + 1;                                                // 0x00128a9c: addiu $a0, $a0, 1
    v1 = v1 + fp;                                               // 0x00128aa0: addu $v1, $v1, $fp
    g_001f011a = v0;  // Global at 0x001f011a                   // 0x00128aa4: sw $v0, 0($v1)
    goto label_0x128b14;                                        // 0x00128aa8: b 0x128b14
    g_001f382c = a0;  // Global at 0x001f382c                   // 0x00128aac: sw $a0, 0($s2)
label_0x128ab0:
    v0 = s1 << 2;                                               // 0x00128ab0: sll $v0, $s1, 2
    v0 = v0 + v1;                                               // 0x00128ab4: addu $v0, $v0, $v1
    a2 = g_001f0001;  // Global at 0x001f0001                   // 0x00128ab8: lbu $a2, 1($v0)
    a1 = g_001f0003;  // Global at 0x001f0003                   // 0x00128abc: lbu $a1, 3($v0)
    a0 = g_001f0002;  // Global at 0x001f0002                   // 0x00128ac0: lbu $a0, 2($v0)
    a2 = a2 << 8;                                               // 0x00128ac4: sll $a2, $a2, 8
    v1 = g_001f0000;  // Global at 0x001f0000                   // 0x00128ac8: lbu $v1, 0($v0)
    a1 = a1 << 0x18;                                            // 0x00128acc: sll $a1, $a1, 0x18
    a0 = a0 << 0x10;                                            // 0x00128ad0: sll $a0, $a0, 0x10
    v1 = v1 | a1;                                               // 0x00128ad4: or $v1, $v1, $a1
    a0 = a0 | a2;                                               // 0x00128ad8: or $a0, $a0, $a2
    func_001281b8();  // 0x128190                                // 0x00128adc: jal 0x128190
    a0 = v1 | a0;                                               // 0x00128ae0: or $a0, $v1, $a0
    v0 = 0xffff << 16;                                          // 0x00128ae8: lui $v0, 0xffff
    v0 = a0 & v0;                                               // 0x00128aec: and $v0, $a0, $v0
    if (v0 != 0) goto label_0x128b78;                           // 0x00128af0: bnez $v0, 0x128b78
    v1 = g_001f382c;  // Global at 0x001f382c                   // 0x00128af8: lw $v1, 0($s2)
    a2 = local_0;                                               // 0x00128afc: lw $a2, 0($sp)
    v0 = v1 << 1;                                               // 0x00128b00: sll $v0, $v1, 1
    v1 = v1 + 1;                                                // 0x00128b04: addiu $v1, $v1, 1
    v0 = v0 + a2;                                               // 0x00128b08: addu $v0, $v0, $a2
    g_ffff0000 = a0;  // Global at 0xffff0000                   // 0x00128b0c: sh $a0, 0($v0)
    g_001f382c = v1;  // Global at 0x001f382c                   // 0x00128b10: sw $v1, 0($s2)
label_0x128b14:
    v0 = g_001f4267;  // Global at 0x001f4267                   // 0x00128b14: lw $v0, 0x382c($a1)
    v1 = g_001f0008;  // Global at 0x001f0008                   // 0x00128b18: lw $v1, 8($s0)
    v0 = (v0 < v1) ? 1 : 0;                                     // 0x00128b1c: slt $v0, $v0, $v1
    if (v0 == 0) goto label_0x128a18;                           // 0x00128b20: beqz $v0, 0x128a18
    /* nop */                                                   // 0x00128b24: nop 
    s1 = s1 + 2;                                                // 0x00128b28: addiu $s1, $s1, 2
    s3 = (s1 < s4) ? 1 : 0;                                     // 0x00128b2c: slt $s3, $s1, $s4
    /* bnezl $s3, 0x128a50 */                                   // 0x00128b30: bnezl $s3, 0x128a50
    v1 = g_001f000f;  // Global at 0x001f000f                   // 0x00128b34: lb $v1, 0xf($s0)
label_0x128b38:
    if (s3 != 0) goto label_0x128ba0;                           // 0x00128b38: bnez $s3, 0x128ba0
    v0 = 0x1f << 16;                                            // 0x00128b40: lui $v0, 0x1f
label_0x128b44:
    v1 = 0x1f << 16;                                            // 0x00128b44: lui $v1, 0x1f
    s0 = v0 + 0x3830;                                           // 0x00128b48: addiu $s0, $v0, 0x3830
    a1 = g_001f383c;  // Global at 0x001f383c                   // 0x00128b4c: lw $a1, 0x383c($v1)
    a2 = g_001f3838;  // Global at 0x001f3838                   // 0x00128b50: lw $a2, 0x3838($s7)
    func_001294a0();  // 0x129460                                // 0x00128b54: jal 0x129460
    a0 = g_001f3830;  // Global at 0x001f3830                   // 0x00128b58: lw $a0, 0($s0)
    if (v0 >= 0) goto label_0x128b98;                           // 0x00128b5c: bgezl $v0, 0x128b98
    v0 = g_001f3830;  // Global at 0x001f3830                   // 0x00128b60: lw $v0, 0($s0)
    func_00128770();  // 0x128720                                // 0x00128b64: jal 0x128720
    s6 = 4;                                                     // 0x00128b68: addiu $s6, $zero, 4
    goto label_0x128ba0;                                        // 0x00128b6c: b 0x128ba0
    /* nop */                                                   // 0x00128b74: nop 
label_0x128b78:
    a0 = 0x22 << 16;                                            // 0x00128b78: lui $a0, 0x22
    a0 = &str_002226b8;  // "E02111001:can't create stm handle (adxf_CreateAdxFs)" // 0x00128b7c: addiu $a0, $a0, 0x26b8
label_0x128b80:
    func_00127de8();  // 0x127d90                                // 0x00128b80: jal 0x127d90
    /* nop */                                                   // 0x00128b84: nop 
    func_00128770();  // 0x128720                                // 0x00128b88: jal 0x128720
    /* nop */                                                   // 0x00128b8c: nop 
    goto label_0x128ba0;                                        // 0x00128b90: b 0x128ba0
    v0 = 4;                                                     // 0x00128b94: addiu $v0, $zero, 4
label_0x128b98:
    s6 = g_001f0001;  // Global at 0x001f0001                   // 0x00128b98: lb $s6, 1($v0)
label_0x128ba0:
label_0x128ba4:
    return;                                                     // 0x00128bc8: jr $ra
    sp = sp + 0x60;                                             // 0x00128bcc: addiu $sp, $sp, 0x60
}