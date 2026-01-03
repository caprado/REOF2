void func_00183570() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_11, local_12, local_13, local_15, local_16, local_17, local_30;
    uint32_t local_34, local_4, local_8;
    
    sp = sp + -0xe0;                                            // 0x00183570: addiu $sp, $sp, -0xe0
    v1 = 0x184;                                                 // 0x00183574: addiu $v1, $zero, 0x184
    v0 = 0x21 << 16;                                            // 0x0018357c: lui $v0, 0x21
    /* multiply: s6 * v1 -> hi:lo */                            // 0x00183588: mult $ac3, $s6, $v1
    v0 = v0 + 0x6018;                                           // 0x0018358c: addiu $v0, $v0, 0x6018
    s2 = v1 + v0;                                               // 0x001835a0: addu $s2, $v1, $v0
    func_00188530();  // 188530                                // 0x001835b0: jal 0x188530
    if (v0 != 0) goto label_0x1835cc;                           // 0x001835b8: bnez $v0, 0x1835cc
    v1 = 0x898;                                                 // 0x001835bc: addiu $v1, $zero, 0x898
    v0 = 0x8101 << 16;                                          // 0x001835c0: lui $v0, 0x8101
    goto label_0x183e6c;                                        // 0x001835c4: b 0x183e6c
    v0 = v0 | 0x13;                                             // 0x001835c8: ori $v0, $v0, 0x13
label_0x1835cc:
    a0 = 0x27 << 16;                                            // 0x001835cc: lui $a0, 0x27
    /* multiply: s6 * v1 -> hi:lo */                            // 0x001835d0: mult $ac3, $s6, $v1
    v0 = a0 + 0x72c8;                                           // 0x001835d4: addiu $v0, $a0, 0x72c8
    t1 = -1;                                                    // 0x001835d8: addiu $t1, $zero, -1
    t2 = v0 + 0x808;                                            // 0x001835dc: addiu $t2, $v0, 0x808
    t3 = 0x23 << 16;                                            // 0x001835e0: lui $t3, 0x23
    a2 = v0 + v1;                                               // 0x001835e8: addu $a2, $v0, $v1
    g_7fff0894 = 0;  // Global at 0x7fff0894                    // 0x001835ec: sw $zero, 0x894($a2)
    g_0022a760 = t1;  // Global at 0x0022a760                   // 0x001835f4: sw $t1, 0x800($a3)
    *(uint32_t*)((t0) + 0x804) = t1;                            // 0x00183600: sw $t1, 0x804($t0)
    v1 = v1 + t2;                                               // 0x00183604: addu $v1, $v1, $t2
    g_00277b58 = 0;  // Global at 0x00277b58                    // 0x00183608: sw $zero, 0x890($v0)
    t1 = t3 + -0x6088;                                          // 0x0018360c: addiu $t1, $t3, -0x6088
    a2 = g_00229f78;  // Global at 0x00229f78                   // 0x00183610: lb $a2, 0($t1)
    a3 = g_00229f79;  // Global at 0x00229f79                   // 0x00183614: lb $a3, 1($t1)
    g_81010000 = a2;  // Global at 0x81010000                   // 0x00183618: sb $a2, 0($v1)
    g_81010001 = a3;  // Global at 0x81010001                   // 0x0018361c: sb $a3, 1($v1)
    func_00186b30();  // 186b30                                // 0x00183620: jal 0x186b30
    if (v0 == 0) goto label_0x183e1c;                           // 0x00183628: beqz $v0, 0x183e1c
    /* nop */                                                   // 0x0018362c: nop 
    func_00186b90();  // 186b90                                // 0x00183630: jal 0x186b90
    if (v0 == 0) goto label_0x183e1c;                           // 0x00183638: beqz $v0, 0x183e1c
    s0 = 0x23 << 16;                                            // 0x0018363c: lui $s0, 0x23
    a1 = &str_00229f80;  // " 1.2.0.0"                          // 0x00183644: addiu $a1, $s0, -0x6080
    func_0010b0e8();  // 10b0e8                                // 0x00183648: jal 0x10b0e8
    a2 = 0x1b;                                                  // 0x0018364c: addiu $a2, $zero, 0x1b
    if (v0 == 0) goto label_0x183698;                           // 0x00183650: beqz $v0, 0x183698
    a2 = s2 + 0xd0;                                             // 0x00183654: addiu $a2, $s2, 0xd0
    v1 = 0xffff << 16;                                          // 0x00183658: lui $v1, 0xffff
    v1 = v1 | 0xffff;                                           // 0x0018365c: ori $v1, $v1, 0xffff
    s3 = 0x1f;                                                  // 0x00183660: addiu $s3, $zero, 0x1f
    v0 = s2 + 0x14c;                                            // 0x00183664: addiu $v0, $s2, 0x14c
label_0x183668:
    g_0028014c = v1;  // Global at 0x0028014c                   // 0x00183668: sw $v1, 0($v0)
    s3 = s3 + -1;                                               // 0x0018366c: addiu $s3, $s3, -1
    v0 = v0 + -4;                                               // 0x00183670: addiu $v0, $v0, -4
    /* nop */                                                   // 0x00183674: nop 
    /* nop */                                                   // 0x00183678: nop 
    if (s3 >= 0) goto label_0x183668;                           // 0x0018367c: bgez $s3, 0x183668
    /* nop */                                                   // 0x00183680: nop 
    func_00187460();  // 187460                                // 0x00183688: jal 0x187460
    if (v0 == 0) goto label_0x183e1c;                           // 0x00183690: beqz $v0, 0x183e1c
    /* nop */                                                   // 0x00183694: nop 
label_0x183698:
    func_00107c70();  // 107c70                                // 0x001836a0: jal 0x107c70
    a2 = 0x28;                                                  // 0x001836a4: addiu $a2, $zero, 0x28
    a1 = 0x23 << 16;                                            // 0x001836a8: lui $a1, 0x23
    a3 = &str_00229f80;  // " 1.2.0.0"                          // 0x001836b0: addiu $a3, $s0, -0x6080
    v0 = g_00229f98;  // Global at 0x00229f98                   // 0x001836e4: lw $v0, 0x18($a3)
    g_00280018 = v0;  // Global at 0x00280018                   // 0x001836e8: sw $v0, 0x18($s2)
    func_0010a860();  // 10a860                                // 0x001836ec: jal 0x10a860
    a1 = &str_00229fa0;  // "libmc2: Fatal Error [%08x]\n"      // 0x001836f0: addiu $a1, $a1, -0x6060
    v1 = local_0;                                               // 0x001836f4: lw $v1, 0($sp)
    a0 = 0x400;                                                 // 0x001836f8: addiu $a0, $zero, 0x400
    v0 = local_0;                                               // 0x001836fc: lhu $v0, 0($sp)
    a1 = 0 | 0xff00;                                            // 0x00183700: ori $a1, $zero, 0xff00
    /* divide: a0 / v1 -> hi:lo */                              // 0x00183704: div $zero, $a0, $v1
    t2 = 2;                                                     // 0x00183708: addiu $t2, $zero, 2
    g_00280028 = v0;  // Global at 0x00280028                   // 0x0018370c: sh $v0, 0x28($s2)
    t0 = 0x2b;                                                  // 0x00183710: addiu $t0, $zero, 0x2b
    /* beqzl $v1, 0x18371c */                                   // 0x00183714: beqzl $v1, 0x18371c
    /* break (trap) */                                          // 0x00183718: break 0, 7
    t1 = 0x100;                                                 // 0x0018371c: addiu $t1, $zero, 0x100
    v1 = local_8;                                               // 0x00183720: lw $v1, 8($sp)
    a2 = -1;                                                    // 0x00183724: addiu $a2, $zero, -1
    v0 = local_4;                                               // 0x00183728: lhu $v0, 4($sp)
    g_0028002e = a1;  // Global at 0x0028002e                   // 0x0018372c: sh $a1, 0x2e($s2)
    g_0028002c = v0;  // Global at 0x0028002c                   // 0x00183730: sh $v0, 0x2c($s2)
    /* mflo $a3 */                                              // 0x00183734
    g_0028002a = a3;  // Global at 0x0028002a                   // 0x00183738: sh $a3, 0x2a($s2)
    v0 = a3 & 0xffff;                                           // 0x0018373c: andi $v0, $a3, 0xffff
    /* divide: v1 / v0 -> hi:lo */                              // 0x00183740: div $zero, $v1, $v0
    g_00280154 = a0;  // Global at 0x00280154                   // 0x00183744: sw $a0, 0x154($s2)
    a1 = g_0028002a;  // Global at 0x0028002a                   // 0x00183748: lhu $a1, 0x2a($s2)
    a0 = g_0028002c;  // Global at 0x0028002c                   // 0x0018374c: lhu $a0, 0x2c($s2)
    g_00280150 = t2;  // Global at 0x00280150                   // 0x00183750: sb $t2, 0x150($s2)
    g_00280151 = t0;  // Global at 0x00280151                   // 0x00183754: sb $t0, 0x151($s2)
    g_00280158 = t1;  // Global at 0x00280158                   // 0x00183758: sw $t1, 0x158($s2)
    g_0028003c = 0;  // Global at 0x0028003c                    // 0x0018375c: sw $zero, 0x3c($s2)
    g_00280048 = 0;  // Global at 0x00280048                    // 0x00183760: sw $zero, 0x48($s2)
    g_0028004c = 0;  // Global at 0x0028004c                    // 0x00183764: sw $zero, 0x4c($s2)
    g_00280170 = 0;  // Global at 0x00280170                    // 0x00183768: sw $zero, 0x170($s2)
    /* mflo $a3 */                                              // 0x0018376c
    /* divide: a0 / a1 -> hi:lo */                              // 0x00183770: divu $zero, $a0, $a1
    g_00280030 = a3;  // Global at 0x00280030                   // 0x00183774: sw $a3, 0x30($s2)
    v0 = local_4;                                               // 0x00183778: lw $v0, 4($sp)
    g_00280180 = a2;  // Global at 0x00280180                   // 0x0018377c: sw $a2, 0x180($s2)
    g_00280164 = 0;  // Global at 0x00280164                    // 0x00183780: sw $zero, 0x164($s2)
    g_00280168 = 0;  // Global at 0x00280168                    // 0x00183784: sw $zero, 0x168($s2)
    g_0028016c = 0;  // Global at 0x0028016c                    // 0x00183788: sw $zero, 0x16c($s2)
    g_00280174 = a2;  // Global at 0x00280174                   // 0x0018378c: sw $a2, 0x174($s2)
    g_00280178 = a2;  // Global at 0x00280178                   // 0x00183790: sw $a2, 0x178($s2)
    g_0028017c = a2;  // Global at 0x0028017c                   // 0x00183794: sw $a2, 0x17c($s2)
    /* mflo $a0 */                                              // 0x00183798
    /* divide: v1 / v0 -> hi:lo */                              // 0x0018379c: div $zero, $v1, $v0
    g_0028015c = a0;  // Global at 0x0028015c                   // 0x001837a0: sw $a0, 0x15c($s2)
    /* mflo $v1 */                                              // 0x001837a4
    v1 = v1 + -1;                                               // 0x001837a8: addiu $v1, $v1, -1
    g_00280040 = v1;  // Global at 0x00280040                   // 0x001837ac: sw $v1, 0x40($s2)
    v0 = s2 + 0x50;                                             // 0x001837b0: addiu $v0, $s2, 0x50
    goto label_0x1837c8;                                        // 0x001837b4: b 0x1837c8
    local_34 = v0;                                              // 0x001837b8: sw $v0, 0x34($sp)
    /* nop */                                                   // 0x001837bc: nop 
label_0x1837c0:
    v0 = v0 + -1;                                               // 0x001837c0: addiu $v0, $v0, -1
    g_00280040 = v0;  // Global at 0x00280040                   // 0x001837c4: sw $v0, 0x40($s2)
label_0x1837c8:
    a1 = g_00280040;  // Global at 0x00280040                   // 0x001837c8: lw $a1, 0x40($s2)
    func_001873d0();  // 1873d0                                // 0x001837cc: jal 0x1873d0
    if (v0 != 0) goto label_0x1837c0;                           // 0x001837d4: bnez $v0, 0x1837c0
    v0 = g_00280040;  // Global at 0x00280040                   // 0x001837d8: lw $v0, 0x40($s2)
    /* nop */                                                   // 0x001837dc: nop 
    v0 = v0 + -1;                                               // 0x001837e0: addiu $v0, $v0, -1
    g_00280044 = v0;  // Global at 0x00280044                   // 0x001837e4: sw $v0, 0x44($s2)
    a1 = g_00280044;  // Global at 0x00280044                   // 0x001837e8: lw $a1, 0x44($s2)
    func_001873d0();  // 1873d0                                // 0x001837ec: jal 0x1873d0
    /* bnezl $s1, 0x1837e0 */                                   // 0x001837f8: bnezl $s1, 0x1837e0
    v0 = g_00280044;  // Global at 0x00280044                   // 0x001837fc: lw $v0, 0x44($s2)
    a1 = g_00280044;  // Global at 0x00280044                   // 0x00183800: lw $a1, 0x44($s2)
    func_00187838();  // 187838                                // 0x00183808: jal 0x187838
    a2 = g_00280040;  // Global at 0x00280040                   // 0x0018380c: lw $a2, 0x40($s2)
    v1 = g_00280030;  // Global at 0x00280030                   // 0x00183810: lw $v1, 0x30($s2)
    a3 = -1;                                                    // 0x00183814: addiu $a3, $zero, -1
    a1 = local_0;                                               // 0x00183818: lw $a1, 0($sp)
    v1 = v1 << 2;                                               // 0x0018381c: sll $v1, $v1, 2
    a2 = local_4;                                               // 0x00183820: lw $a2, 4($sp)
    a0 = v1 + -1;                                               // 0x00183824: addiu $a0, $v1, -1
    v0 = (a3 < a0) ? 1 : 0;                                     // 0x00183828: slt $v0, $a3, $a0
    v1 = v1 + 0x3fe;                                            // 0x0018382c: addiu $v1, $v1, 0x3fe
    if (v0 != 0) v1 = a0;                                       // 0x00183830: movn $v1, $a0, $v0
    v1 = v1 >> 0xa;                                             // 0x00183838: sra $v1, $v1, 0xa
    s4 = v1 + 1;                                                // 0x0018383c: addiu $s4, $v1, 1
    v0 = s4 << 2;                                               // 0x00183840: sll $v0, $s4, 2
    a1 = v0 + -1;                                               // 0x00183844: addiu $a1, $v0, -1
    v1 = a2 + 0x3ff;                                            // 0x00183848: addiu $v1, $a2, 0x3ff
    a0 = (a3 < a1) ? 1 : 0;                                     // 0x0018384c: slt $a0, $a3, $a1
    v0 = v0 + 0x3fe;                                            // 0x00183850: addiu $v0, $v0, 0x3fe
    if (a0 != 0) v0 = a1;                                       // 0x00183854: movn $v0, $a1, $a0
    a3 = (a3 < a2) ? 1 : 0;                                     // 0x00183858: slt $a3, $a3, $a2
    if (a3 != 0) v1 = a2;                                       // 0x0018385c: movn $v1, $a2, $a3
    v0 = v0 >> 0xa;                                             // 0x00183860: sra $v0, $v0, 0xa
    a1 = v1 >> 0xa;                                             // 0x00183864: sra $a1, $v1, 0xa
    s5 = v0 + 1;                                                // 0x00183868: addiu $s5, $v0, 1
    v1 = (s5 < 0x21) ? 1 : 0;                                   // 0x0018386c: slti $v1, $s5, 0x21
    if (v1 != 0) goto label_0x183880;                           // 0x00183870: bnez $v1, 0x183880
    s5 = 0x20;                                                  // 0x00183878: addiu $s5, $zero, 0x20
    s4 = 0x2000;                                                // 0x0018387c: addiu $s4, $zero, 0x2000
label_0x183880:
    a0 = local_34;                                              // 0x00183880: lw $a0, 0x34($sp)
    func_00107c70();  // 107c70                                // 0x00183888: jal 0x107c70
    a2 = 0x80;                                                  // 0x0018388c: addiu $a2, $zero, 0x80
    v0 = (s1 < s5) ? 1 : 0;                                     // 0x00183890: slt $v0, $s1, $s5
    if (v0 == 0) goto label_0x1838ec;                           // 0x00183894: beqz $v0, 0x1838ec
    s7 = s4 + -1;                                               // 0x0018389c: addiu $s7, $s4, -1
label_0x1838a0:
    s4 = s3 + 1;                                                // 0x001838a0: addiu $s4, $s3, 1
    s3 = s3 << 2;                                               // 0x001838a4: sll $s3, $s3, 2
label_0x1838a8:
    func_00187418();  // 187418                                // 0x001838ac: jal 0x187418
    v1 = s0 + 1;                                                // 0x001838b8: addiu $v1, $s0, 1
    v0 = s1 ^ 1;                                                // 0x001838bc: xori $v0, $s1, 1
    if (s1 != 0) goto label_0x1838a8;                           // 0x001838c0: bnez $s1, 0x1838a8
    if (v0 == 0) s0 = v1;                                       // 0x001838c4: movz $s0, $v1, $v0
    v1 = local_34;                                              // 0x001838c8: lw $v1, 0x34($sp)
    v0 = v1 + s3;                                               // 0x001838cc: addu $v0, $v1, $s3
    g_0028044c = s0;  // Global at 0x0028044c                   // 0x001838d4: sw $s0, 0($v0)
    v1 = (s3 < s5) ? 1 : 0;                                     // 0x001838d8: slt $v1, $s3, $s5
    if (v1 != 0) goto label_0x1838a0;                           // 0x001838dc: bnez $v1, 0x1838a0
    s0 = s0 + 1;                                                // 0x001838e0: addiu $s0, $s0, 1
    goto label_0x1838f4;                                        // 0x001838e4: b 0x1838f4
    v0 = 0x898;                                                 // 0x001838e8: addiu $v0, $zero, 0x898
label_0x1838ec:
    s7 = s4 + -1;                                               // 0x001838ec: addiu $s7, $s4, -1
    v0 = 0x898;                                                 // 0x001838f0: addiu $v0, $zero, 0x898
label_0x1838f4:
    v1 = 0x27 << 16;                                            // 0x001838f4: lui $v1, 0x27
    /* multiply: s6 * v0 -> hi:lo */                            // 0x001838f8: mult $ac2, $s6, $v0
    v1 = v1 + 0x72c8;                                           // 0x001838fc: addiu $v1, $v1, 0x72c8
    a0 = -1;                                                    // 0x00183908: addiu $a0, $zero, -1
    s3 = 0xff;                                                  // 0x0018390c: addiu $s3, $zero, 0xff
    v0 = v0 + v1;                                               // 0x00183910: addu $v0, $v0, $v1
    v0 = v0 + 0x3fc;                                            // 0x00183914: addiu $v0, $v0, 0x3fc
label_0x183918:
    g_00280848 = a0;  // Global at 0x00280848                   // 0x00183918: sw $a0, 0($v0)
    s3 = s3 + -1;                                               // 0x0018391c: addiu $s3, $s3, -1
    v0 = v0 + -4;                                               // 0x00183920: addiu $v0, $v0, -4
    /* nop */                                                   // 0x00183924: nop 
    /* nop */                                                   // 0x00183928: nop 
    if (s3 >= 0) goto label_0x183918;                           // 0x0018392c: bgez $s3, 0x183918
    /* nop */                                                   // 0x00183930: nop 
    v0 = 0x898;                                                 // 0x00183934: addiu $v0, $zero, 0x898
    v1 = 0x27 << 16;                                            // 0x00183938: lui $v1, 0x27
    /* multiply: s6 * v0 -> hi:lo */                            // 0x0018393c: mult $ac2, $s6, $v0
    v1 = v1 + 0x72c8;                                           // 0x00183940: addiu $v1, $v1, 0x72c8
    a0 = -1;                                                    // 0x00183944: addiu $a0, $zero, -1
    s3 = 0xff;                                                  // 0x00183948: addiu $s3, $zero, 0xff
    v0 = v0 + v1;                                               // 0x0018394c: addu $v0, $v0, $v1
    v0 = v0 + 0x7fc;                                            // 0x00183950: addiu $v0, $v0, 0x7fc
    /* nop */                                                   // 0x00183954: nop 
label_0x183958:
    g_00281040 = a0;  // Global at 0x00281040                   // 0x00183958: sw $a0, 0($v0)
    s3 = s3 + -1;                                               // 0x0018395c: addiu $s3, $s3, -1
    v0 = v0 + -4;                                               // 0x00183960: addiu $v0, $v0, -4
    /* nop */                                                   // 0x00183964: nop 
    /* nop */                                                   // 0x00183968: nop 
    if (s3 >= 0) goto label_0x183958;                           // 0x0018396c: bgez $s3, 0x183958
    /* nop */                                                   // 0x00183970: nop 
    if (s3 < 0) goto label_0x183a60;                            // 0x00183978: bltzl $s3, 0x183a60
    a0 = g_0028002a;  // Global at 0x0028002a                   // 0x0018397c: lhu $a0, 0x2a($s2)
    s7 = 0x27 << 16;                                            // 0x00183980: lui $s7, 0x27
    /* nop */                                                   // 0x00183984: nop 
label_0x183988:
    func_00187418();  // 187418                                // 0x0018398c: jal 0x187418
    /* bnezl $v0, 0x183988 */                                   // 0x00183994: bnezl $v0, 0x183988
    s0 = s0 + 1;                                                // 0x00183998: addiu $s0, $s0, 1
    v0 = 0x898;                                                 // 0x0018399c: addiu $v0, $zero, 0x898
    s5 = s7 + 0x76c8;                                           // 0x001839a0: addiu $s5, $s7, 0x76c8
    a3 = 1;                                                     // 0x001839b0: addiu $a3, $zero, 1
    func_00186e08();  // 186e08                                // 0x001839b4: jal 0x186e08
    a1 = s1 + s5;                                               // 0x001839b8: addu $a1, $s1, $s5
    if (v0 == 0) goto label_0x183e1c;                           // 0x001839bc: beqz $v0, 0x183e1c
    a1 = s5 + -0x400;                                           // 0x001839c0: addiu $a1, $s5, -0x400
    v0 = s4 << 2;                                               // 0x001839c4: sll $v0, $s4, 2
    v0 = v0 + s1;                                               // 0x001839c8: addu $v0, $v0, $s1
    s4 = s4 + 1;                                                // 0x001839cc: addiu $s4, $s4, 1
    v0 = v0 + a1;                                               // 0x001839d0: addu $v0, $v0, $a1
    v1 = (s4 < 0x100) ? 1 : 0;                                  // 0x001839d4: slti $v1, $s4, 0x100
    if (v1 == 0) goto label_0x1839e8;                           // 0x001839d8: beqz $v1, 0x1839e8
    g_0028103c = s0;  // Global at 0x0028103c                   // 0x001839dc: sw $s0, 0($v0)
    if (s3 != 0) goto label_0x183a4c;                           // 0x001839e0: bnez $s3, 0x183a4c
    a2 = s0 + 1;                                                // 0x001839e4: addiu $a2, $s0, 1
label_0x1839e8:
    a0 = local_34;                                              // 0x001839e8: lw $a0, 0x34($sp)
    v0 = fp << 2;                                               // 0x001839ec: sll $v0, $fp, 2
    s1 = s1 + a1;                                               // 0x001839f0: addu $s1, $s1, $a1
    fp = fp + 1;                                                // 0x001839f4: addiu $fp, $fp, 1
    v0 = a0 + v0;                                               // 0x001839f8: addu $v0, $a0, $v0
    a2 = g_0028103c;  // Global at 0x0028103c                   // 0x00183a00: lw $a2, 0($v0)
    func_00186e08();  // 186e08                                // 0x00183a08: jal 0x186e08
    a3 = 1;                                                     // 0x00183a0c: addiu $a3, $zero, 1
    if (v0 == 0) goto label_0x183e1c;                           // 0x00183a10: beqz $v0, 0x183e1c
    a2 = s0 + 1;                                                // 0x00183a14: addiu $a2, $s0, 1
    v0 = s3 + -1;                                               // 0x00183a18: addiu $v0, $s3, -1
    a1 = s1 + 0x3fc;                                            // 0x00183a1c: addiu $a1, $s1, 0x3fc
    v1 = -1;                                                    // 0x00183a20: addiu $v1, $zero, -1
    s4 = 0xff;                                                  // 0x00183a24: addiu $s4, $zero, 0xff
label_0x183a28:
    g_002772c8 = v1;  // Global at 0x002772c8                   // 0x00183a28: sw $v1, 0($a1)
    s4 = s4 + -1;                                               // 0x00183a2c: addiu $s4, $s4, -1
    a1 = a1 + -4;                                               // 0x00183a30: addiu $a1, $a1, -4
    /* nop */                                                   // 0x00183a34: nop 
    /* nop */                                                   // 0x00183a38: nop 
    if (s4 >= 0) goto label_0x183a28;                           // 0x00183a3c: bgez $s4, 0x183a28
    /* nop */                                                   // 0x00183a40: nop 
    goto label_0x183a50;                                        // 0x00183a44: b 0x183a50
label_0x183a4c:
    v0 = s3 + -1;                                               // 0x00183a4c: addiu $v0, $s3, -1
label_0x183a50:
    if (s3 >= 0) goto label_0x183988;                           // 0x00183a54: bgez $s3, 0x183988
    a0 = g_0028002a;  // Global at 0x0028002a                   // 0x00183a5c: lhu $a0, 0x2a($s2)
label_0x183a60:
    a1 = 0x3e8;                                                 // 0x00183a60: addiu $a1, $zero, 0x3e8
    g_00280034 = s0;  // Global at 0x00280034                   // 0x00183a64: sw $s0, 0x34($s2)
    /* beqzl $a0, 0x183a74 */                                   // 0x00183a6c: beqzl $a0, 0x183a74
    /* break (trap) */                                          // 0x00183a70: break 0, 7
    a2 = g_0028002c;  // Global at 0x0028002c                   // 0x00183a74: lhu $a2, 0x2c($s2)
    v0 = g_00280044;  // Global at 0x00280044                   // 0x00183a78: lw $v0, 0x44($s2)
    v1 = g_00280030;  // Global at 0x00280030                   // 0x00183a80: lw $v1, 0x30($s2)
    /* multiply: v0 * a2 -> hi:lo */                            // 0x00183a84: mult $ac2, $v0, $a2
    /* divide: v0 / a0 -> hi:lo */                              // 0x00183a8c: div $zero, $v0, $a0
    /* mflo $v0 */                                              // 0x00183a94
    /* multiply: v1 * a1 -> hi:lo */                            // 0x00183a98: mult $ac3, $v1, $a1
    v0 = v0 - s0;                                               // 0x00183a9c: subu $v0, $v0, $s0
    g_00280038 = v0;  // Global at 0x00280038                   // 0x00183aa0: sw $v0, 0x38($s2)
    if (v0 <= 0) goto label_0x183b3c;                           // 0x00183aa4: blez $v0, 0x183b3c
    s5 = v1 + 1;                                                // 0x00183aa8: addiu $s5, $v1, 1
    s4 = sp + 0x30;                                             // 0x00183aac: addiu $s4, $sp, 0x30
label_0x183ab0:
    if (s1 != s5) goto label_0x183ac4;                          // 0x00183ab0: bne $s1, $s5, 0x183ac4
    v0 = g_00280034;  // Global at 0x00280034                   // 0x00183ab8: lw $v0, 0x34($s2)
    v0 = s0 - v0;                                               // 0x00183abc: subu $v0, $s0, $v0
    g_00280170 = v0;  // Global at 0x00280170                   // 0x00183ac0: sw $v0, 0x170($s2)
label_0x183ac4:
    func_00187418();  // 187418                                // 0x00183ac4: jal 0x187418
    v1 = 1;                                                     // 0x00183acc: addiu $v1, $zero, 1
    if (v0 != v1) goto label_0x183afc;                          // 0x00183ad0: bne $v0, $v1, 0x183afc
    a2 = -3;                                                    // 0x00183adc: addiu $a2, $zero, -3
    func_00182c38();  // 182c38                                // 0x00183ae0: jal 0x182c38
    v0 = local_30;                                              // 0x00183ae8: lw $v0, 0x30($sp)
    if (v0 == 0) goto label_0x183b28;                           // 0x00183aec: beqz $v0, 0x183b28
    goto label_0x183e74;                                        // 0x00183af4: b 0x183e74
label_0x183afc:
    /* beqzl $s1, 0x183b04 */                                   // 0x00183afc: beqzl $s1, 0x183b04
    g_00280034 = s0;  // Global at 0x00280034                   // 0x00183b00: sw $s0, 0x34($s2)
    a2 = 0x7fff << 16;                                          // 0x00183b04: lui $a2, 0x7fff
    a2 = a2 | 0xffff;                                           // 0x00183b10: ori $a2, $a2, 0xffff
    func_00182c38();  // 182c38                                // 0x00183b14: jal 0x182c38
    v0 = local_30;                                              // 0x00183b1c: lw $v0, 0x30($sp)
    if (v0 != 0) goto label_0x183e6c;                           // 0x00183b20: bnez $v0, 0x183e6c
    s1 = s1 + 1;                                                // 0x00183b24: addiu $s1, $s1, 1
label_0x183b28:
    v0 = g_00280038;  // Global at 0x00280038                   // 0x00183b28: lw $v0, 0x38($s2)
    s3 = s3 + 1;                                                // 0x00183b2c: addiu $s3, $s3, 1
    v0 = (s3 < v0) ? 1 : 0;                                     // 0x00183b30: slt $v0, $s3, $v0
    if (v0 != 0) goto label_0x183ab0;                           // 0x00183b34: bnez $v0, 0x183ab0
    s0 = s0 + 1;                                                // 0x00183b38: addiu $s0, $s0, 1
label_0x183b3c:
    v0 = (s1 < s5) ? 1 : 0;                                     // 0x00183b3c: slt $v0, $s1, $s5
    if (v0 != 0) goto label_0x183ba8;                           // 0x00183b40: bnez $v0, 0x183ba8
    s3 = sp + 0x30;                                             // 0x00183b44: addiu $s3, $sp, 0x30
    a2 = g_0028002c;  // Global at 0x0028002c                   // 0x00183b48: lhu $a2, 0x2c($s2)
    v0 = g_00280044;  // Global at 0x00280044                   // 0x00183b4c: lw $v0, 0x44($s2)
    v1 = g_0028002a;  // Global at 0x0028002a                   // 0x00183b54: lhu $v1, 0x2a($s2)
    /* multiply: v0 * a2 -> hi:lo */                            // 0x00183b5c: mult $ac2, $v0, $a2
    /* beqzl $v1, 0x183b68 */                                   // 0x00183b60: beqzl $v1, 0x183b68
    /* break (trap) */                                          // 0x00183b64: break 0, 7
    a2 = g_00280034;  // Global at 0x00280034                   // 0x00183b68: lw $a2, 0x34($s2)
    /* divide: v0 / v1 -> hi:lo */                              // 0x00183b6c: div $zero, $v0, $v1
    /* mflo $v0 */                                              // 0x00183b70
    v0 = v0 - a2;                                               // 0x00183b74: subu $v0, $v0, $a2
    func_00182d68();  // 182d68                                // 0x00183b78: jal 0x182d68
    g_00280038 = v0;  // Global at 0x00280038                   // 0x00183b7c: sw $v0, 0x38($s2)
    v1 = local_30;                                              // 0x00183b80: lw $v1, 0x30($sp)
    if (v1 == 0) goto label_0x183b94;                           // 0x00183b84: beqz $v1, 0x183b94
    goto label_0x183e6c;                                        // 0x00183b8c: b 0x183e6c
label_0x183b94:
    if (s0 == 0) goto label_0x183bb4;                           // 0x00183b94: beqz $s0, 0x183bb4
    a0 = 0x23 << 16;                                            // 0x00183b9c: lui $a0, 0x23
    func_00116508();  // 116508                                // 0x00183ba0: jal 0x116508
    a0 = &str_00229fb0;  // "sceMc2_sema_subs"                  // 0x00183ba4: addiu $a0, $a0, -0x6050
label_0x183ba8:
    v0 = 0x8101 << 16;                                          // 0x00183ba8: lui $v0, 0x8101
    goto label_0x183e6c;                                        // 0x00183bac: b 0x183e6c
    v0 = v0 | 0x9001;                                           // 0x00183bb0: ori $v0, $v0, 0x9001
label_0x183bb4:
    s2 = 0x28 << 16;                                            // 0x00183bb4: lui $s2, 0x28
    a1 = sp + 0x10;                                             // 0x00183bbc: addiu $a1, $sp, 0x10
    func_00187e78();  // 187e78                                // 0x00183bc0: jal 0x187e78
    s0 = s2 + -0x7c00;                                          // 0x00183bc4: addiu $s0, $s2, -0x7c00
    s1 = 0xa;                                                   // 0x00183bc8: addiu $s1, $zero, 0xa
    func_00107c70();  // 107c70                                // 0x00183bd4: jal 0x107c70
    a2 = 0x200;                                                 // 0x00183bd8: addiu $a2, $zero, 0x200
    v1 = local_17;                                              // 0x00183bdc: lbu $v1, 0x17($sp)
    t6 = 0 | 0x8427;                                            // 0x00183be0: ori $t6, $zero, 0x8427
    t5 = local_16;                                              // 0x00183be4: lbu $t5, 0x16($sp)
    t7 = 2;                                                     // 0x00183be8: addiu $t7, $zero, 2
    t0 = local_15;                                              // 0x00183bec: lbu $t0, 0x15($sp)
    v0 = (unsigned)v1 >> 4;                                     // 0x00183bf0: srl $v0, $v1, 4
    a2 = local_13;                                              // 0x00183bf4: lbu $a2, 0x13($sp)
    t1 = (unsigned)t5 >> 4;                                     // 0x00183bf8: srl $t1, $t5, 4
    a1 = local_12;                                              // 0x00183bfc: lbu $a1, 0x12($sp)
    t2 = (unsigned)t0 >> 4;                                     // 0x00183c00: srl $t2, $t0, 4
    a0 = local_11;                                              // 0x00183c04: lbu $a0, 0x11($sp)
    t3 = (unsigned)a2 >> 4;                                     // 0x00183c08: srl $t3, $a2, 4
    t4 = (unsigned)a1 >> 4;                                     // 0x00183c0c: srl $t4, $a1, 4
    /* multiply: v0 * s1 -> hi:lo */                            // 0x00183c10: mult $ac2, $v0, $s1
    a3 = (unsigned)a0 >> 4;                                     // 0x00183c14: srl $a3, $a0, 4
    v1 = v1 & 0xf;                                              // 0x00183c20: andi $v1, $v1, 0xf
    a0 = a0 & 0xf;                                              // 0x00183c28: andi $a0, $a0, 0xf
    v0 = v0 + v1;                                               // 0x00183c30: addu $v0, $v0, $v1
    t0 = t0 & 0xf;                                              // 0x00183c38: andi $t0, $t0, 0xf
    a2 = a2 & 0xf;                                              // 0x00183c3c: andi $a2, $a2, 0xf
    a1 = a1 & 0xf;                                              // 0x00183c40: andi $a1, $a1, 0xf
    t5 = t5 & 0xf;                                              // 0x00183c44: andi $t5, $t5, 0xf
    g_00278400 = t6;  // Global at 0x00278400                   // 0x00183c48: sh $t6, -0x7c00($s2)
    v0 = v0 + 0x7d0;                                            // 0x00183c4c: addiu $v0, $v0, 0x7d0
    t1 = t1 + t5;                                               // 0x00183c50: addu $t1, $t1, $t5
    a3 = a3 + a0;                                               // 0x00183c54: addu $a3, $a3, $a0
    t2 = t2 + t0;                                               // 0x00183c58: addu $t2, $t2, $t0
    t3 = t3 + a2;                                               // 0x00183c5c: addu $t3, $t3, $a2
    t4 = t4 + a1;                                               // 0x00183c60: addu $t4, $t4, $a1
    g_00278404 = t7;  // Global at 0x00278404                   // 0x00183c64: sw $t7, 4($s0)
    v1 = 0x23 << 16;                                            // 0x00183c68: lui $v1, 0x23
    g_0027840e = v0;  // Global at 0x0027840e                   // 0x00183c6c: sh $v0, 0xe($s0)
    g_0027840d = t1;  // Global at 0x0027840d                   // 0x00183c74: sb $t1, 0xd($s0)
    a2 = 0x200;                                                 // 0x00183c78: addiu $a2, $zero, 0x200
    g_0027840c = t2;  // Global at 0x0027840c                   // 0x00183c7c: sb $t2, 0xc($s0)
    g_0027840b = t3;  // Global at 0x0027840b                   // 0x00183c80: sb $t3, 0xb($s0)
    g_0027840a = t4;  // Global at 0x0027840a                   // 0x00183c84: sb $t4, 0xa($s0)
    g_00278409 = a3;  // Global at 0x00278409                   // 0x00183c88: sb $a3, 9($s0)
    g_00278402 = 0;  // Global at 0x00278402                    // 0x00183c8c: sh $zero, 2($s0)
    g_00278408 = 0;  // Global at 0x00278408                    // 0x00183c90: sb $zero, 8($s0)
    g_00278410 = 0;  // Global at 0x00278410                    // 0x00183c94: sw $zero, 0x10($s0)
    g_00278414 = 0;  // Global at 0x00278414                    // 0x00183c98: sw $zero, 0x14($s0)
    g_00278420 = 0;  // Global at 0x00278420                    // 0x00183cac: sw $zero, 0x20($s0)
    a3 = v1 + -0x60a0;                                          // 0x00183cb0: addiu $a3, $v1, -0x60a0
    t1 = g_00229f60;  // Global at 0x00229f60                   // 0x00183cb4: lb $t1, 0($a3)
    v0 = g_00229f61;  // Global at 0x00229f61                   // 0x00183cb8: lb $v0, 1($a3)
    g_00278440 = t1;  // Global at 0x00278440                   // 0x00183cbc: sb $t1, 0x40($s0)
    g_00278441 = v0;  // Global at 0x00278441                   // 0x00183cc0: sb $v0, 0x41($s0)
    s0 = s0 + 0x200;                                            // 0x00183cc4: addiu $s0, $s0, 0x200
    func_00107c70();  // 107c70                                // 0x00183cc8: jal 0x107c70
    v1 = local_17;                                              // 0x00183cd0: lbu $v1, 0x17($sp)
    t6 = 0 | 0xa426;                                            // 0x00183cd4: ori $t6, $zero, 0xa426
    t5 = local_16;                                              // 0x00183cd8: lbu $t5, 0x16($sp)
    t7 = 0x23 << 16;                                            // 0x00183cdc: lui $t7, 0x23
    t3 = local_15;                                              // 0x00183ce0: lbu $t3, 0x15($sp)
    v0 = (unsigned)v1 >> 4;                                     // 0x00183ce4: srl $v0, $v1, 4
    t1 = local_13;                                              // 0x00183ce8: lbu $t1, 0x13($sp)
    a2 = (unsigned)t5 >> 4;                                     // 0x00183cec: srl $a2, $t5, 4
    a1 = local_12;                                              // 0x00183cf0: lbu $a1, 0x12($sp)
    a3 = (unsigned)t3 >> 4;                                     // 0x00183cf4: srl $a3, $t3, 4
    a0 = local_11;                                              // 0x00183cf8: lbu $a0, 0x11($sp)
    t2 = (unsigned)t1 >> 4;                                     // 0x00183cfc: srl $t2, $t1, 4
    t4 = (unsigned)a1 >> 4;                                     // 0x00183d00: srl $t4, $a1, 4
    /* multiply: v0 * s1 -> hi:lo */                            // 0x00183d04: mult $ac2, $v0, $s1
    t0 = (unsigned)a0 >> 4;                                     // 0x00183d08: srl $t0, $a0, 4
    v1 = v1 & 0xf;                                              // 0x00183d14: andi $v1, $v1, 0xf
    t1 = t1 & 0xf;                                              // 0x00183d1c: andi $t1, $t1, 0xf
    v0 = v0 + v1;                                               // 0x00183d24: addu $v0, $v0, $v1
    a1 = a1 & 0xf;                                              // 0x00183d2c: andi $a1, $a1, 0xf
    a0 = a0 & 0xf;                                              // 0x00183d30: andi $a0, $a0, 0xf
    t5 = t5 & 0xf;                                              // 0x00183d34: andi $t5, $t5, 0xf
    t3 = t3 & 0xf;                                              // 0x00183d38: andi $t3, $t3, 0xf
    t0 = t0 + a0;                                               // 0x00183d3c: addu $t0, $t0, $a0
    t2 = t2 + t1;                                               // 0x00183d40: addu $t2, $t2, $t1
    v0 = v0 + 0x7d0;                                            // 0x00183d44: addiu $v0, $v0, 0x7d0
    a2 = a2 + t5;                                               // 0x00183d48: addu $a2, $a2, $t5
    a3 = a3 + t3;                                               // 0x00183d4c: addu $a3, $a3, $t3
    t4 = t4 + a1;                                               // 0x00183d50: addu $t4, $t4, $a1
    g_0027860d = a2;  // Global at 0x0027860d                   // 0x00183d54: sb $a2, 0xd($s0)
    g_0027860c = a3;  // Global at 0x0027860c                   // 0x00183d58: sb $a3, 0xc($s0)
    a1 = s2 + -0x7c00;                                          // 0x00183d5c: addiu $a1, $s2, -0x7c00
    g_00278600 = t6;  // Global at 0x00278600                   // 0x00183d60: sh $t6, 0($s0)
    g_0027860e = v0;  // Global at 0x0027860e                   // 0x00183d68: sh $v0, 0xe($s0)
    g_0027860b = t2;  // Global at 0x0027860b                   // 0x00183d70: sb $t2, 0xb($s0)
    g_0027860a = t4;  // Global at 0x0027860a                   // 0x00183d74: sb $t4, 0xa($s0)
    g_00278609 = t0;  // Global at 0x00278609                   // 0x00183d78: sb $t0, 9($s0)
    g_00278604 = 0;  // Global at 0x00278604                    // 0x00183d7c: sw $zero, 4($s0)
    g_00278602 = 0;  // Global at 0x00278602                    // 0x00183d80: sh $zero, 2($s0)
    g_00278608 = 0;  // Global at 0x00278608                    // 0x00183d84: sb $zero, 8($s0)
    g_00278610 = 0;  // Global at 0x00278610                    // 0x00183d88: sw $zero, 0x10($s0)
    g_00278614 = 0;  // Global at 0x00278614                    // 0x00183d8c: sw $zero, 0x14($s0)
    g_00278620 = 0;  // Global at 0x00278620                    // 0x00183da0: sw $zero, 0x20($s0)
    v1 = t7 + -0x6098;                                          // 0x00183da4: addiu $v1, $t7, -0x6098
    t0 = g_00229f68;  // Global at 0x00229f68                   // 0x00183da8: lb $t0, 0($v1)
    t1 = g_00229f69;  // Global at 0x00229f69                   // 0x00183dac: lb $t1, 1($v1)
    v0 = g_00229f6a;  // Global at 0x00229f6a                   // 0x00183db0: lb $v0, 2($v1)
    g_00278640 = t0;  // Global at 0x00278640                   // 0x00183db4: sb $t0, 0x40($s0)
    g_00278641 = t1;  // Global at 0x00278641                   // 0x00183db8: sb $t1, 0x41($s0)
    g_00278642 = v0;  // Global at 0x00278642                   // 0x00183dbc: sb $v0, 0x42($s0)
    func_001873b0();  // 1873b0                                // 0x00183dc0: jal 0x1873b0
    a3 = 1;                                                     // 0x00183dc4: addiu $a3, $zero, 1
    if (v0 == 0) goto label_0x183e1c;                           // 0x00183dc8: beqz $v0, 0x183e1c
    func_00182c38();  // 182c38                                // 0x00183dd8: jal 0x182c38
    a2 = -1;                                                    // 0x00183ddc: addiu $a2, $zero, -1
    v0 = local_30;                                              // 0x00183de0: lw $v0, 0x30($sp)
    if (v0 != 0) goto label_0x183e70;                           // 0x00183de4: bnez $v0, 0x183e70
    func_00186e48();  // 186e48                                // 0x00183dec: jal 0x186e48
    if (v0 == 0) goto label_0x183e1c;                           // 0x00183df4: beqz $v0, 0x183e1c
    /* nop */                                                   // 0x00183df8: nop 
    func_001829e0();  // 1829e0                                // 0x00183dfc: jal 0x1829e0
    if (v0 == 0) goto label_0x183e1c;                           // 0x00183e04: beqz $v0, 0x183e1c
    /* nop */                                                   // 0x00183e08: nop 
    func_00186ca8();  // 186ca8                                // 0x00183e0c: jal 0x186ca8
    /* bnezl $v0, 0x183e28 */                                   // 0x00183e14: bnezl $v0, 0x183e28
    v0 = 0x898;                                                 // 0x00183e18: addiu $v0, $zero, 0x898
label_0x183e1c:
    v0 = 0x8101 << 16;                                          // 0x00183e1c: lui $v0, 0x8101
    goto label_0x183e6c;                                        // 0x00183e20: b 0x183e6c
    v0 = v0 | 0x6f;                                             // 0x00183e24: ori $v0, $v0, 0x6f
    a0 = 0x27 << 16;                                            // 0x00183e28: lui $a0, 0x27
    /* multiply: s6 * v0 -> hi:lo */                            // 0x00183e2c: mult $ac2, $s6, $v0
    v1 = a0 + 0x72c8;                                           // 0x00183e30: addiu $v1, $a0, 0x72c8
    a2 = 1;                                                     // 0x00183e34: addiu $a2, $zero, 1
    v1 = v1 + v0;                                               // 0x00183e40: addu $v1, $v1, $v0
    func_001831d8();  // 1831d8                                // 0x00183e44: jal 0x1831d8
    g_00277b50 = a2;  // Global at 0x00277b50                   // 0x00183e48: sw $a2, 0x888($v1)
    v1 = 0x8101 << 16;                                          // 0x00183e4c: lui $v1, 0x8101
    v1 = v1 | 0x9003;                                           // 0x00183e54: ori $v1, $v1, 0x9003
    if (a0 != v1) goto label_0x183e68;                          // 0x00183e58: bne $a0, $v1, 0x183e68
    local_30 = v0;                                              // 0x00183e5c: sw $v0, 0x30($sp)
    local_30 = 0;                                               // 0x00183e60: sw $zero, 0x30($sp)
label_0x183e68:
label_0x183e6c:
label_0x183e70:
label_0x183e74:
    return;                                                     // 0x00183e94: jr $ra
    sp = sp + 0xe0;                                             // 0x00183e98: addiu $sp, $sp, 0xe0
}