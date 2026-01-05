void func_001071e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = a1 + 0x13;                                             // 0x001071e0: addiu $v1, $a1, 0x13
    sp = sp + -0x30;                                            // 0x001071e4: addiu $sp, $sp, -0x30
    v0 = ((unsigned)v1 < (unsigned)0x1f) ? 1 : 0;               // 0x001071e8: sltiu $v0, $v1, 0x1f
    if (v0 != 0) goto label_0x107218;                           // 0x00107204: bnez $v0, 0x107218
    v0 = -0x10;                                                 // 0x0010720c: addiu $v0, $zero, -0x10
    goto label_0x10721c;                                        // 0x00107210: b 0x10721c
    s1 = v1 & v0;                                               // 0x00107214: and $s1, $v1, $v0
label_0x107218:
    s1 = 0x10;                                                  // 0x00107218: addiu $s1, $zero, 0x10
label_0x10721c:
    func_00107d30();  // 107d30                                // 0x0010721c: jal 0x107d30
    v0 = ((unsigned)s1 < (unsigned)0x1f8) ? 1 : 0;              // 0x00107224: sltiu $v0, $s1, 0x1f8
    if (v0 == 0) goto label_0x107288;                           // 0x00107228: beqz $v0, 0x107288
    v1 = (unsigned)s1 >> 9;                                     // 0x0010722c: srl $v1, $s1, 9
    t7 = 0x1f << 16;                                            // 0x00107230: lui $t7, 0x1f
    v0 = t7 + -0x1f8;                                           // 0x00107234: addiu $v0, $t7, -0x1f8
    v0 = v0 + -8;                                               // 0x00107238: addiu $v0, $v0, -8
    a0 = s1 + v0;                                               // 0x0010723c: addu $a0, $s1, $v0
    s0 = g_001efe0c;  // Global at 0x001efe0c                   // 0x00107240: lw $s0, 0xc($a0)
    if (s0 == a0) goto label_0x107280;                          // 0x00107244: beq $s0, $a0, 0x107280
    t2 = (unsigned)s1 >> 3;                                     // 0x00107248: srl $t2, $s1, 3
    v1 = g_001efe04;  // Global at 0x001efe04                   // 0x0010724c: lw $v1, 4($s0)
    v0 = -4;                                                    // 0x00107250: addiu $v0, $zero, -4
    t3 = g_001efe0c;  // Global at 0x001efe0c                   // 0x00107254: lw $t3, 0xc($s0)
    a2 = v1 & v0;                                               // 0x0010725c: and $a2, $v1, $v0
    t0 = g_001efe08;  // Global at 0x001efe08                   // 0x00107260: lw $t0, 8($s0)
    v1 = s0 + a2;                                               // 0x00107264: addu $v1, $s0, $a2
    v0 = g_001efe1f;  // Global at 0x001efe1f                   // 0x00107268: lw $v0, 4($v1)
    *(uint32_t*)((t0) + 0xc) = t3;                              // 0x0010726c: sw $t3, 0xc($t0)
    v0 = v0 | 1;                                                // 0x00107270: ori $v0, $v0, 1
    *(uint32_t*)((t3) + 8) = t0;                                // 0x00107274: sw $t0, 8($t3)
    goto label_0x1078dc;                                        // 0x00107278: b 0x1078dc
    g_001efe1f = v0;  // Global at 0x001efe1f                   // 0x0010727c: sw $v0, 4($v1)
label_0x107280:
    goto label_0x107364;                                        // 0x00107280: b 0x107364
    t2 = t2 + 2;                                                // 0x00107284: addiu $t2, $t2, 2
label_0x107288:
    if (v1 == 0) goto label_0x1072f0;                           // 0x00107288: beqz $v1, 0x1072f0
    t2 = (unsigned)s1 >> 3;                                     // 0x0010728c: srl $t2, $s1, 3
    v0 = ((unsigned)v1 < (unsigned)5) ? 1 : 0;                  // 0x00107290: sltiu $v0, $v1, 5
    if (v0 == 0) goto label_0x1072a8;                           // 0x00107294: beqz $v0, 0x1072a8
    v0 = ((unsigned)v1 < (unsigned)0x15) ? 1 : 0;               // 0x00107298: sltiu $v0, $v1, 0x15
    v0 = (unsigned)s1 >> 6;                                     // 0x0010729c: srl $v0, $s1, 6
    goto label_0x1072f0;                                        // 0x001072a0: b 0x1072f0
    t2 = v0 + 0x38;                                             // 0x001072a4: addiu $t2, $v0, 0x38
label_0x1072a8:
    if (v0 != 0) goto label_0x1072f0;                           // 0x001072a8: bnez $v0, 0x1072f0
    t2 = v1 + 0x5b;                                             // 0x001072ac: addiu $t2, $v1, 0x5b
    v0 = ((unsigned)v1 < (unsigned)0x55) ? 1 : 0;               // 0x001072b0: sltiu $v0, $v1, 0x55
    if (v0 == 0) goto label_0x1072c8;                           // 0x001072b4: beqz $v0, 0x1072c8
    v0 = ((unsigned)v1 < (unsigned)0x155) ? 1 : 0;              // 0x001072b8: sltiu $v0, $v1, 0x155
    v0 = (unsigned)s1 >> 0xc;                                   // 0x001072bc: srl $v0, $s1, 0xc
    goto label_0x1072f0;                                        // 0x001072c0: b 0x1072f0
    t2 = v0 + 0x6e;                                             // 0x001072c4: addiu $t2, $v0, 0x6e
label_0x1072c8:
    if (v0 == 0) goto label_0x1072e0;                           // 0x001072c8: beqz $v0, 0x1072e0
    v0 = ((unsigned)v1 < (unsigned)0x555) ? 1 : 0;              // 0x001072cc: sltiu $v0, $v1, 0x555
    v0 = (unsigned)s1 >> 0xf;                                   // 0x001072d0: srl $v0, $s1, 0xf
    goto label_0x1072f0;                                        // 0x001072d4: b 0x1072f0
    t2 = v0 + 0x77;                                             // 0x001072d8: addiu $t2, $v0, 0x77
    /* nop */                                                   // 0x001072dc: nop 
label_0x1072e0:
    /* beqzl $v0, 0x1072f0 */                                   // 0x001072e0: beqzl $v0, 0x1072f0
    t2 = 0x7e;                                                  // 0x001072e4: addiu $t2, $zero, 0x7e
    v0 = (unsigned)s1 >> 0x12;                                  // 0x001072e8: srl $v0, $s1, 0x12
    t2 = v0 + 0x7c;                                             // 0x001072ec: addiu $t2, $v0, 0x7c
label_0x1072f0:
    t7 = 0x1f << 16;                                            // 0x001072f0: lui $t7, 0x1f
    v1 = t2 << 3;                                               // 0x001072f4: sll $v1, $t2, 3
    v0 = t7 + -0x1f8;                                           // 0x001072f8: addiu $v0, $t7, -0x1f8
    a0 = -4;                                                    // 0x001072fc: addiu $a0, $zero, -4
    v0 = v0 + -8;                                               // 0x00107300: addiu $v0, $v0, -8
    a1 = v1 + v0;                                               // 0x00107304: addu $a1, $v1, $v0
    goto label_0x10731c;                                        // 0x00107308: b 0x10731c
    s0 = g_001efe14;  // Global at 0x001efe14                   // 0x0010730c: lw $s0, 0xc($a1)
label_0x107310:
    if (t0 >= 0) goto label_0x107808;                           // 0x00107310: bgez $t0, 0x107808
    v1 = s0 + a2;                                               // 0x00107314: addu $v1, $s0, $a2
    s0 = g_001efe0c;  // Global at 0x001efe0c                   // 0x00107318: lw $s0, 0xc($s0)
label_0x10731c:
    if (s0 == a1) goto label_0x107364;                          // 0x0010731c: beql $s0, $a1, 0x107364
    t2 = t2 + 1;                                                // 0x00107320: addiu $t2, $t2, 1
    v0 = g_001efe04;  // Global at 0x001efe04                   // 0x00107324: lw $v0, 4($s0)
    a2 = v0 & a0;                                               // 0x00107328: and $a2, $v0, $a0
    v1 = s1 - a2;                                               // 0x0010732c: subu $v1, $s1, $a2
    v0 = a2 - s1;                                               // 0x00107330: subu $v0, $a2, $s1
    v0 = ((unsigned)a2 < (unsigned)s1) ? 1 : 0;                 // 0x00107340: sltu $v0, $a2, $s1
    if (v0 != 0) goto label_0x107350;                           // 0x00107344: bnez $v0, 0x107350
label_0x107350:
    v0 = (t0 < 0x10) ? 1 : 0;                                   // 0x00107350: slti $v0, $t0, 0x10
    if (v0 != 0) goto label_0x107310;                           // 0x00107354: bnez $v0, 0x107310
    /* nop */                                                   // 0x00107358: nop 
    t2 = t2 + -1;                                               // 0x0010735c: addiu $t2, $t2, -1
    t2 = t2 + 1;                                                // 0x00107360: addiu $t2, $t2, 1
label_0x107364:
    v0 = t7 + -0x1f8;                                           // 0x00107364: addiu $v0, $t7, -0x1f8
    s0 = g_001efe10;  // Global at 0x001efe10                   // 0x00107368: lw $s0, 8($v0)
    if (s0 == v0) goto label_0x107570;                          // 0x0010736c: beq $s0, $v0, 0x107570
    v1 = -4;                                                    // 0x00107370: addiu $v1, $zero, -4
    v0 = g_001efe04;  // Global at 0x001efe04                   // 0x00107374: lw $v0, 4($s0)
    a2 = v0 & v1;                                               // 0x00107378: and $a2, $v0, $v1
    a0 = ((unsigned)a2 < (unsigned)s1) ? 1 : 0;                 // 0x0010737c: sltu $a0, $a2, $s1
    if (a0 == 0) goto label_0x1073a0;                           // 0x00107380: beqz $a0, 0x1073a0
    v0 = a2 - s1;                                               // 0x00107384: subu $v0, $a2, $s1
    v0 = s1 - a2;                                               // 0x00107388: subu $v0, $s1, $a2
    goto label_0x1073a8;                                        // 0x00107394: b 0x1073a8
    /* nop */                                                   // 0x0010739c: nop 
label_0x1073a0:
label_0x1073a8:
    v0 = (t0 < 0x10) ? 1 : 0;                                   // 0x001073a8: slti $v0, $t0, 0x10
    /* bnezl $v0, 0x107400 */                                   // 0x001073ac: bnezl $v0, 0x107400
    a0 = t7 + -0x1f8;                                           // 0x001073b0: addiu $a0, $t7, -0x1f8
    v1 = 1;                                                     // 0x001073b4: addiu $v1, $zero, 1
    t1 = s0 + s1;                                               // 0x001073b8: addu $t1, $s0, $s1
    v1 = t0 | v1;                                               // 0x001073c4: or $v1, $t0, $v1
    a1 = t7 + -0x1f8;                                           // 0x001073c8: addiu $a1, $t7, -0x1f8
    v0 = s1 | 1;                                                // 0x001073cc: ori $v0, $s1, 1
    a2 = t1 + a3;                                               // 0x001073d8: addu $a2, $t1, $a3
    g_001efe04 = v0;  // Global at 0x001efe04                   // 0x001073dc: sw $v0, 4($s0)
    g_001efe14 = t1;  // Global at 0x001efe14                   // 0x001073e4: sw $t1, 0xc($a1)
    g_001efe10 = t1;  // Global at 0x001efe10                   // 0x001073e8: sw $t1, 8($a1)
    *(uint32_t*)((t1) + 4) = v1;                                // 0x001073ec: sw $v1, 4($t1)
    *(uint32_t*)((t1) + 8) = a1;                                // 0x001073f0: sw $a1, 8($t1)
    g_001efe00 = a3;  // Global at 0x001efe00                   // 0x001073f4: sw $a3, 0($a2)
    goto label_0x1078dc;                                        // 0x001073f8: b 0x1078dc
    *(uint32_t*)((t1) + 0xc) = a1;                              // 0x001073fc: sw $a1, 0xc($t1)
    g_001efe14 = a0;  // Global at 0x001efe14                   // 0x00107400: sw $a0, 0xc($a0)
    if (t0 < 0) goto label_0x107428;                            // 0x00107404: bltz $t0, 0x107428
    g_001efe10 = a0;  // Global at 0x001efe10                   // 0x00107408: sw $a0, 8($a0)
    v1 = s0 + a2;                                               // 0x0010740c: addu $v1, $s0, $a2
    v0 = g_001efe1f;  // Global at 0x001efe1f                   // 0x00107414: lw $v0, 4($v1)
    v0 = v0 | 1;                                                // 0x00107418: ori $v0, $v0, 1
    goto label_0x1078dc;                                        // 0x0010741c: b 0x1078dc
    g_001efe1f = v0;  // Global at 0x001efe1f                   // 0x00107420: sw $v0, 4($v1)
    /* nop */                                                   // 0x00107424: nop 
label_0x107428:
    v0 = ((unsigned)a2 < (unsigned)0x200) ? 1 : 0;              // 0x00107428: sltiu $v0, $a2, 0x200
    if (v0 == 0) goto label_0x107478;                           // 0x0010742c: beqz $v0, 0x107478
    v1 = (unsigned)a2 >> 9;                                     // 0x00107430: srl $v1, $a2, 9
    a1 = (unsigned)a2 >> 3;                                     // 0x00107434: srl $a1, $a2, 3
    a0 = a0 + -8;                                               // 0x00107438: addiu $a0, $a0, -8
    v1 = a1 << 3;                                               // 0x0010743c: sll $v1, $a1, 3
    a1 = (unsigned)a1 >> 2;                                     // 0x00107440: srl $a1, $a1, 2
    v0 = 1;                                                     // 0x00107444: addiu $v0, $zero, 1
    t3 = v1 + a0;                                               // 0x00107448: addu $t3, $v1, $a0
    v1 = g_001efe04;  // Global at 0x001efe04                   // 0x00107450: lw $v1, 4($a0)
    t0 = *(int32_t*)((t3) + 8);                                 // 0x00107454: lw $t0, 8($t3)
    v1 = v1 | v0;                                               // 0x00107460: or $v1, $v1, $v0
    g_001efe0c = t3;  // Global at 0x001efe0c                   // 0x00107464: sw $t3, 0xc($s0)
    g_001efe08 = t0;  // Global at 0x001efe08                   // 0x00107468: sw $t0, 8($s0)
    goto label_0x107568;                                        // 0x0010746c: b 0x107568
    g_001efe04 = v1;  // Global at 0x001efe04                   // 0x00107470: sw $v1, 4($a0)
    /* nop */                                                   // 0x00107474: nop 
label_0x107478:
    if (v1 == 0) goto label_0x1074e0;                           // 0x00107478: beqz $v1, 0x1074e0
    a1 = (unsigned)a2 >> 3;                                     // 0x0010747c: srl $a1, $a2, 3
    v0 = ((unsigned)v1 < (unsigned)5) ? 1 : 0;                  // 0x00107480: sltiu $v0, $v1, 5
    if (v0 == 0) goto label_0x107498;                           // 0x00107484: beqz $v0, 0x107498
    v0 = ((unsigned)v1 < (unsigned)0x15) ? 1 : 0;               // 0x00107488: sltiu $v0, $v1, 0x15
    v0 = (unsigned)a2 >> 6;                                     // 0x0010748c: srl $v0, $a2, 6
    goto label_0x1074e0;                                        // 0x00107490: b 0x1074e0
    a1 = v0 + 0x38;                                             // 0x00107494: addiu $a1, $v0, 0x38
label_0x107498:
    if (v0 != 0) goto label_0x1074e0;                           // 0x00107498: bnez $v0, 0x1074e0
    a1 = v1 + 0x5b;                                             // 0x0010749c: addiu $a1, $v1, 0x5b
    v0 = ((unsigned)v1 < (unsigned)0x55) ? 1 : 0;               // 0x001074a0: sltiu $v0, $v1, 0x55
    if (v0 == 0) goto label_0x1074b8;                           // 0x001074a4: beqz $v0, 0x1074b8
    v0 = ((unsigned)v1 < (unsigned)0x155) ? 1 : 0;              // 0x001074a8: sltiu $v0, $v1, 0x155
    v0 = (unsigned)a2 >> 0xc;                                   // 0x001074ac: srl $v0, $a2, 0xc
    goto label_0x1074e0;                                        // 0x001074b0: b 0x1074e0
    a1 = v0 + 0x6e;                                             // 0x001074b4: addiu $a1, $v0, 0x6e
label_0x1074b8:
    if (v0 == 0) goto label_0x1074d0;                           // 0x001074b8: beqz $v0, 0x1074d0
    v0 = ((unsigned)v1 < (unsigned)0x555) ? 1 : 0;              // 0x001074bc: sltiu $v0, $v1, 0x555
    v0 = (unsigned)a2 >> 0xf;                                   // 0x001074c0: srl $v0, $a2, 0xf
    goto label_0x1074e0;                                        // 0x001074c4: b 0x1074e0
    a1 = v0 + 0x77;                                             // 0x001074c8: addiu $a1, $v0, 0x77
    /* nop */                                                   // 0x001074cc: nop 
label_0x1074d0:
    /* beqzl $v0, 0x1074e0 */                                   // 0x001074d0: beqzl $v0, 0x1074e0
    a1 = 0x7e;                                                  // 0x001074d4: addiu $a1, $zero, 0x7e
    v0 = (unsigned)a2 >> 0x12;                                  // 0x001074d8: srl $v0, $a2, 0x12
    a1 = v0 + 0x7c;                                             // 0x001074dc: addiu $a1, $v0, 0x7c
label_0x1074e0:
    v0 = t7 + -0x1f8;                                           // 0x001074e0: addiu $v0, $t7, -0x1f8
    v1 = a1 << 3;                                               // 0x001074e4: sll $v1, $a1, 3
    a3 = v0 + -8;                                               // 0x001074e8: addiu $a3, $v0, -8
    t3 = v1 + a3;                                               // 0x001074ec: addu $t3, $v1, $a3
    t0 = *(int32_t*)((t3) + 8);                                 // 0x001074f0: lw $t0, 8($t3)
    if (t0 != t3) goto label_0x107530;                          // 0x001074f4: bnel $t0, $t3, 0x107530
    v0 = *(int32_t*)((t0) + 4);                                 // 0x001074f8: lw $v0, 4($t0)
    a0 = a1 + 3;                                                // 0x001074fc: addiu $a0, $a1, 3
    v1 = (a1 < 0) ? 1 : 0;                                      // 0x00107500: slti $v1, $a1, 0
    if (v1 != 0) a1 = a0;                                       // 0x00107504: movn $a1, $a0, $v1
    v1 = g_001efe04;  // Global at 0x001efe04                   // 0x00107508: lw $v1, 4($a3)
    v0 = 1;                                                     // 0x0010750c: addiu $v0, $zero, 1
    a0 = a1 >> 2;                                               // 0x00107510: sra $a0, $a1, 2
    v1 = v1 | v0;                                               // 0x00107520: or $v1, $v1, $v0
    goto label_0x107560;                                        // 0x00107524: b 0x107560
    g_001efe04 = v1;  // Global at 0x001efe04                   // 0x00107528: sw $v1, 4($a3)
    /* nop */                                                   // 0x0010752c: nop 
label_0x107530:
    goto label_0x107544;                                        // 0x00107530: b 0x107544
    v1 = -4;                                                    // 0x00107534: addiu $v1, $zero, -4
    if (t0 == t3) goto label_0x107560;                          // 0x00107538: beql $t0, $t3, 0x107560
    t3 = *(int32_t*)((t0) + 0xc);                               // 0x0010753c: lw $t3, 0xc($t0)
    v0 = *(int32_t*)((t0) + 4);                                 // 0x00107540: lw $v0, 4($t0)
label_0x107544:
    v0 = v0 & v1;                                               // 0x00107544: and $v0, $v0, $v1
    v0 = ((unsigned)a2 < (unsigned)v0) ? 1 : 0;                 // 0x00107548: sltu $v0, $a2, $v0
    /* nop */                                                   // 0x0010754c: nop 
    /* nop */                                                   // 0x00107550: nop 
    /* bnezl $v0, 0x107538 */                                   // 0x00107554: bnezl $v0, 0x107538
    t0 = *(int32_t*)((t0) + 8);                                 // 0x00107558: lw $t0, 8($t0)
    t3 = *(int32_t*)((t0) + 0xc);                               // 0x0010755c: lw $t3, 0xc($t0)
label_0x107560:
    g_001efe0c = t3;  // Global at 0x001efe0c                   // 0x00107560: sw $t3, 0xc($s0)
    g_001efe08 = t0;  // Global at 0x001efe08                   // 0x00107564: sw $t0, 8($s0)
label_0x107568:
    *(uint32_t*)((t3) + 8) = s0;                                // 0x00107568: sw $s0, 8($t3)
    *(uint32_t*)((t0) + 0xc) = s0;                              // 0x0010756c: sw $s0, 0xc($t0)
label_0x107570:
    v0 = (t2 < 0) ? 1 : 0;                                      // 0x00107570: slti $v0, $t2, 0
    a1 = t2 + 3;                                                // 0x00107574: addiu $a1, $t2, 3
    s4 = 0x1f << 16;                                            // 0x0010757c: lui $s4, 0x1f
    if (v0 != 0) a0 = a1;                                       // 0x00107580: movn $a0, $a1, $v0
    v0 = 1;                                                     // 0x00107584: addiu $v0, $zero, 1
    v1 = s4 + -0x200;                                           // 0x00107588: addiu $v1, $s4, -0x200
    a0 = a0 >> 2;                                               // 0x0010758c: sra $a0, $a0, 2
    v1 = ((unsigned)a2 < (unsigned)t1) ? 1 : 0;                 // 0x00107598: sltu $v1, $a2, $t1
    /* bnezl $v1, 0x107724 */                                   // 0x0010759c: bnezl $v1, 0x107724
    a0 = s4 + -0x200;                                           // 0x001075a0: addiu $a0, $s4, -0x200
    v0 = t1 & a2;                                               // 0x001075a4: and $v0, $t1, $a2
    if (v0 != 0) goto label_0x1075f0;                           // 0x001075a8: bnez $v0, 0x1075f0
    v0 = 0x1f << 16;                                            // 0x001075ac: lui $v0, 0x1f
    v0 = -4;                                                    // 0x001075b0: addiu $v0, $zero, -4
    v0 = t2 & v0;                                               // 0x001075b8: and $v0, $t2, $v0
    v1 = t1 & a2;                                               // 0x001075bc: and $v1, $t1, $a2
    if (v1 != 0) goto label_0x1075ec;                           // 0x001075c0: bnez $v1, 0x1075ec
    t2 = v0 + 4;                                                // 0x001075c4: addiu $t2, $v0, 4
    /* nop */                                                   // 0x001075cc: nop 
label_0x1075d0:
    v0 = t1 & v1;                                               // 0x001075d4: and $v0, $t1, $v1
    /* nop */                                                   // 0x001075d8: nop 
    /* nop */                                                   // 0x001075dc: nop 
    /* nop */                                                   // 0x001075e0: nop 
    if (v0 == 0) goto label_0x1075d0;                           // 0x001075e4: beqz $v0, 0x1075d0
    t2 = t2 + 4;                                                // 0x001075e8: addiu $t2, $t2, 4
label_0x1075ec:
    v0 = 0x1f << 16;                                            // 0x001075ec: lui $v0, 0x1f
label_0x1075f0:
    t5 = v0 + -0x200;                                           // 0x001075f0: addiu $t5, $v0, -0x200
    v0 = t2 << 3;                                               // 0x001075fc: sll $v0, $t2, 3
label_0x107600:
    a0 = v0 + t5;                                               // 0x00107604: addu $a0, $v0, $t5
    s0 = g_001efe8c;  // Global at 0x001efe8c                   // 0x0010760c: lw $s0, 0xc($a1)
    if (s0 == a1) goto label_0x10766c;                          // 0x00107610: beq $s0, $a1, 0x10766c
    v0 = (t2 < 0x3f) ? 1 : 0;                                   // 0x00107614: slti $v0, $t2, 0x3f
    t4 = -4;                                                    // 0x00107618: addiu $t4, $zero, -4
    v0 = g_001efe04;  // Global at 0x001efe04                   // 0x0010761c: lw $v0, 4($s0)
label_0x107620:
    a2 = v0 & t4;                                               // 0x00107620: and $a2, $v0, $t4
    v1 = s1 - a2;                                               // 0x00107624: subu $v1, $s1, $a2
    v0 = a2 - s1;                                               // 0x00107628: subu $v0, $a2, $s1
    v0 = ((unsigned)a2 < (unsigned)s1) ? 1 : 0;                 // 0x00107638: sltu $v0, $a2, $s1
    if (v0 != 0) goto label_0x107648;                           // 0x0010763c: bnez $v0, 0x107648
label_0x107648:
    v0 = (t0 < 0x10) ? 1 : 0;                                   // 0x00107648: slti $v0, $t0, 0x10
    /* beqzl $v0, 0x107830 */                                   // 0x0010764c: beqzl $v0, 0x107830
    v1 = 1;                                                     // 0x00107650: addiu $v1, $zero, 1
    if (t0 >= 0) goto label_0x107888;                           // 0x00107654: bgezl $t0, 0x107888
    v1 = s0 + a2;                                               // 0x00107658: addu $v1, $s0, $a2
    s0 = g_001efe0c;  // Global at 0x001efe0c                   // 0x0010765c: lw $s0, 0xc($s0)
    if (s0 != a1) goto label_0x107620;                          // 0x00107660: bnel $s0, $a1, 0x107620
    v0 = g_001efe04;  // Global at 0x001efe04                   // 0x00107664: lw $v0, 4($s0)
    v0 = (t2 < 0x3f) ? 1 : 0;                                   // 0x00107668: slti $v0, $t2, 0x3f
label_0x10766c:
    if (v0 == 0) goto label_0x10767c;                           // 0x0010766c: beqz $v0, 0x10767c
    a1 = a1 + 8;                                                // 0x00107670: addiu $a1, $a1, 8
    a1 = a1 + 8;                                                // 0x00107674: addiu $a1, $a1, 8
    t2 = t2 + 1;                                                // 0x00107678: addiu $t2, $t2, 1
label_0x10767c:
    t2 = t2 + 1;                                                // 0x0010767c: addiu $t2, $t2, 1
    v0 = t2 & 3;                                                // 0x00107680: andi $v0, $t2, 3
    /* bnezl $v0, 0x107610 */                                   // 0x00107684: bnezl $v0, 0x107610
    s0 = g_001efe9c;  // Global at 0x001efe9c                   // 0x00107688: lw $s0, 0xc($a1)
    a1 = t6 + -0x200;                                           // 0x00107694: addiu $a1, $t6, -0x200
    v1 = ~(0 | v0);                                             // 0x00107698: nor $v1, $zero, $v0
    v0 = t3 & 3;                                                // 0x0010769c: andi $v0, $t3, 3
label_0x1076a0:
    if (v0 != 0) goto label_0x1076b8;                           // 0x001076a0: bnez $v0, 0x1076b8
    t3 = t3 + -1;                                               // 0x001076a4: addiu $t3, $t3, -1
    v0 = g_001efe94;  // Global at 0x001efe94                   // 0x001076a8: lw $v0, 4($a1)
    v0 = v0 & v1;                                               // 0x001076ac: and $v0, $v0, $v1
    goto label_0x1076cc;                                        // 0x001076b0: b 0x1076cc
    g_001efe94 = v0;  // Global at 0x001efe94                   // 0x001076b4: sw $v0, 4($a1)
label_0x1076b8:
    a0 = a0 + -8;                                               // 0x001076b8: addiu $a0, $a0, -8
    v0 = g_001efe00;  // Global at 0x001efe00                   // 0x001076bc: lw $v0, 8($a0)
    /* nop */                                                   // 0x001076c0: nop 
    if (v0 == a0) goto label_0x1076a0;                          // 0x001076c4: beq $v0, $a0, 0x1076a0
    v0 = t3 & 3;                                                // 0x001076c8: andi $v0, $t3, 3
label_0x1076cc:
    v0 = ((unsigned)v1 < (unsigned)t1) ? 1 : 0;                 // 0x001076d4: sltu $v0, $v1, $t1
    /* bnezl $v0, 0x107724 */                                   // 0x001076d8: bnezl $v0, 0x107724
    a0 = s4 + -0x200;                                           // 0x001076dc: addiu $a0, $s4, -0x200
    if (t1 == 0) goto label_0x107720;                           // 0x001076e0: beqz $t1, 0x107720
    v0 = t1 & v1;                                               // 0x001076e4: and $v0, $t1, $v1
    if (v0 != 0) goto label_0x107600;                           // 0x001076e8: bnez $v0, 0x107600
    v0 = t2 << 3;                                               // 0x001076ec: sll $v0, $t2, 3
    /* nop */                                                   // 0x001076f4: nop 
label_0x1076f8:
    v0 = t1 & v1;                                               // 0x001076fc: and $v0, $t1, $v1
    /* nop */                                                   // 0x00107700: nop 
    /* nop */                                                   // 0x00107704: nop 
    /* nop */                                                   // 0x00107708: nop 
    if (v0 == 0) goto label_0x1076f8;                           // 0x0010770c: beqz $v0, 0x1076f8
    t2 = t2 + 4;                                                // 0x00107710: addiu $t2, $t2, 4
    goto label_0x107600;                                        // 0x00107714: b 0x107600
    v0 = t2 << 3;                                               // 0x00107718: sll $v0, $t2, 3
    /* nop */                                                   // 0x0010771c: nop 
label_0x107720:
    a0 = s4 + -0x200;                                           // 0x00107720: addiu $a0, $s4, -0x200
    a1 = -4;                                                    // 0x00107724: addiu $a1, $zero, -4
    v0 = g_001efe08;  // Global at 0x001efe08                   // 0x00107728: lw $v0, 8($a0)
    v1 = g_001f0004;  // Global at 0x001f0004                   // 0x0010772c: lw $v1, 4($v0)
    v1 = v1 & a1;                                               // 0x00107730: and $v1, $v1, $a1
    v0 = ((unsigned)v1 < (unsigned)s1) ? 1 : 0;                 // 0x00107734: sltu $v0, $v1, $s1
    if (v0 == 0) goto label_0x107758;                           // 0x00107738: beqz $v0, 0x107758
    v0 = v1 - s1;                                               // 0x0010773c: subu $v0, $v1, $s1
    v0 = s1 - v1;                                               // 0x00107740: subu $v0, $s1, $v1
    goto label_0x107760;                                        // 0x0010774c: b 0x107760
    /* nop */                                                   // 0x00107754: nop 
label_0x107758:
label_0x107760:
    s0 = s4 + -0x200;                                           // 0x00107760: addiu $s0, $s4, -0x200
    s2 = -4;                                                    // 0x00107764: addiu $s2, $zero, -4
    v1 = g_001efe08;  // Global at 0x001efe08                   // 0x00107768: lw $v1, 8($s0)
    v0 = g_001efe04;  // Global at 0x001efe04                   // 0x0010776c: lw $v0, 4($v1)
    v0 = v0 & s2;                                               // 0x00107770: and $v0, $v0, $s2
    v0 = ((unsigned)v0 < (unsigned)s1) ? 1 : 0;                 // 0x00107774: sltu $v0, $v0, $s1
    if (v0 != 0) goto label_0x107790;                           // 0x00107778: bnez $v0, 0x107790
    v0 = (t0 < 0x10) ? 1 : 0;                                   // 0x00107780: slti $v0, $t0, 0x10
    if (v0 == 0) goto label_0x1078b0;                           // 0x00107784: beqz $v0, 0x1078b0
    a2 = s4 + -0x200;                                           // 0x00107788: addiu $a2, $s4, -0x200
label_0x107790:
    func_00106f88();  // 106f88                                // 0x00107790: jal 0x106f88
    v0 = g_001efe08;  // Global at 0x001efe08                   // 0x00107798: lw $v0, 8($s0)
    v1 = g_001f0004;  // Global at 0x001f0004                   // 0x0010779c: lw $v1, 4($v0)
    v1 = v1 & s2;                                               // 0x001077a0: and $v1, $v1, $s2
    v0 = ((unsigned)v1 < (unsigned)s1) ? 1 : 0;                 // 0x001077a4: sltu $v0, $v1, $s1
    if (v0 == 0) goto label_0x1077c8;                           // 0x001077a8: beqz $v0, 0x1077c8
    v0 = v1 - s1;                                               // 0x001077ac: subu $v0, $v1, $s1
    v0 = s1 - v1;                                               // 0x001077b0: subu $v0, $s1, $v1
    goto label_0x1077d0;                                        // 0x001077bc: b 0x1077d0
    /* nop */                                                   // 0x001077c4: nop 
label_0x1077c8:
label_0x1077d0:
    a0 = s4 + -0x200;                                           // 0x001077d0: addiu $a0, $s4, -0x200
    a1 = -4;                                                    // 0x001077d4: addiu $a1, $zero, -4
    v1 = g_001efe08;  // Global at 0x001efe08                   // 0x001077d8: lw $v1, 8($a0)
    v0 = g_001efe04;  // Global at 0x001efe04                   // 0x001077dc: lw $v0, 4($v1)
    v0 = v0 & a1;                                               // 0x001077e0: and $v0, $v0, $a1
    v0 = ((unsigned)v0 < (unsigned)s1) ? 1 : 0;                 // 0x001077e4: sltu $v0, $v0, $s1
    if (v0 != 0) goto label_0x1077f8;                           // 0x001077e8: bnez $v0, 0x1077f8
    v0 = (t0 < 0x10) ? 1 : 0;                                   // 0x001077ec: slti $v0, $t0, 0x10
    if (v0 == 0) goto label_0x1078b0;                           // 0x001077f0: beqz $v0, 0x1078b0
    a2 = s4 + -0x200;                                           // 0x001077f4: addiu $a2, $s4, -0x200
label_0x1077f8:
    func_00107db0();  // 107db0                                // 0x001077f8: jal 0x107db0
    goto label_0x1078e8;                                        // 0x00107800: b 0x1078e8
label_0x107808:
    t3 = g_001efe0c;  // Global at 0x001efe0c                   // 0x00107808: lw $t3, 0xc($s0)
    v0 = g_001efe04;  // Global at 0x001efe04                   // 0x0010780c: lw $v0, 4($v1)
    t0 = g_001efe08;  // Global at 0x001efe08                   // 0x00107814: lw $t0, 8($s0)
    v0 = v0 | 1;                                                // 0x00107818: ori $v0, $v0, 1
    g_001efe04 = v0;  // Global at 0x001efe04                   // 0x0010781c: sw $v0, 4($v1)
    *(uint32_t*)((t0) + 0xc) = t3;                              // 0x00107820: sw $t3, 0xc($t0)
    goto label_0x1078dc;                                        // 0x00107824: b 0x1078dc
    *(uint32_t*)((t3) + 8) = t0;                                // 0x00107828: sw $t0, 8($t3)
    /* nop */                                                   // 0x0010782c: nop 
    t3 = g_001efe0c;  // Global at 0x001efe0c                   // 0x00107830: lw $t3, 0xc($s0)
    t1 = s0 + s1;                                               // 0x00107834: addu $t1, $s0, $s1
    v1 = t0 | v1;                                               // 0x00107840: or $v1, $t0, $v1
    t0 = g_001efe08;  // Global at 0x001efe08                   // 0x00107844: lw $t0, 8($s0)
    a1 = t7 + -0x1f8;                                           // 0x00107848: addiu $a1, $t7, -0x1f8
    v0 = s1 | 1;                                                // 0x0010784c: ori $v0, $s1, 1
    a2 = t1 + a3;                                               // 0x00107858: addu $a2, $t1, $a3
    *(uint32_t*)((t0) + 0xc) = t3;                              // 0x0010785c: sw $t3, 0xc($t0)
    *(uint32_t*)((t3) + 8) = t0;                                // 0x00107864: sw $t0, 8($t3)
    g_001efe04 = v0;  // Global at 0x001efe04                   // 0x00107868: sw $v0, 4($s0)
    g_001efe14 = t1;  // Global at 0x001efe14                   // 0x0010786c: sw $t1, 0xc($a1)
    g_001efe10 = t1;  // Global at 0x001efe10                   // 0x00107870: sw $t1, 8($a1)
    *(uint32_t*)((t1) + 4) = v1;                                // 0x00107874: sw $v1, 4($t1)
    *(uint32_t*)((t1) + 8) = a1;                                // 0x00107878: sw $a1, 8($t1)
    g_001efe00 = a3;  // Global at 0x001efe00                   // 0x0010787c: sw $a3, 0($a2)
    goto label_0x1078dc;                                        // 0x00107880: b 0x1078dc
    *(uint32_t*)((t1) + 0xc) = a1;                              // 0x00107884: sw $a1, 0xc($t1)
label_0x107888:
    t3 = g_001efe0c;  // Global at 0x001efe0c                   // 0x00107888: lw $t3, 0xc($s0)
    v0 = g_001efe04;  // Global at 0x001efe04                   // 0x0010788c: lw $v0, 4($v1)
    t0 = g_001efe08;  // Global at 0x001efe08                   // 0x00107894: lw $t0, 8($s0)
    v0 = v0 | 1;                                                // 0x00107898: ori $v0, $v0, 1
    g_001efe04 = v0;  // Global at 0x001efe04                   // 0x0010789c: sw $v0, 4($v1)
    *(uint32_t*)((t0) + 0xc) = t3;                              // 0x001078a0: sw $t3, 0xc($t0)
    goto label_0x1078dc;                                        // 0x001078a4: b 0x1078dc
    *(uint32_t*)((t3) + 8) = t0;                                // 0x001078a8: sw $t0, 8($t3)
    /* nop */                                                   // 0x001078ac: nop 
label_0x1078b0:
    v0 = 1;                                                     // 0x001078b0: addiu $v0, $zero, 1
    s0 = g_001efe08;  // Global at 0x001efe08                   // 0x001078b4: lw $s0, 8($a2)
    v0 = t0 | v0;                                               // 0x001078b8: or $v0, $t0, $v0
    v1 = s1 | 1;                                                // 0x001078c4: ori $v1, $s1, 1
    a1 = s0 + s1;                                               // 0x001078c8: addu $a1, $s0, $s1
    g_001efe04 = v1;  // Global at 0x001efe04                   // 0x001078cc: sw $v1, 4($s0)
    g_001efe08 = a1;  // Global at 0x001efe08                   // 0x001078d0: sw $a1, 8($a2)
    g_001efe0c = v0;  // Global at 0x001efe0c                   // 0x001078d8: sw $v0, 4($a1)
label_0x1078dc:
    func_00107db0();  // 107db0                                // 0x001078dc: jal 0x107db0
    /* nop */                                                   // 0x001078e0: nop 
    v0 = s0 + 8;                                                // 0x001078e4: addiu $v0, $s0, 8
label_0x1078e8:
    return;                                                     // 0x00107900: jr $ra
    sp = sp + 0x30;                                             // 0x00107904: addiu $sp, $sp, 0x30
}