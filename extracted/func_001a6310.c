void func_001a6310() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_80, local_81, local_82, local_83, local_84, local_85, local_86, local_87;
    uint32_t local_88, local_89, local_8a, local_8b, local_8c, local_8d, local_8e, local_8f;
    uint32_t local_90, local_91, local_a8, local_ac, local_ad, local_ae, local_af;
    
    sp = sp + -0xb0;                                            // 0x001a6310: addiu $sp, $sp, -0xb0
    v0 = 0x2a << 16;                                            // 0x001a6314: lui $v0, 0x2a
    v0 = v0 + 0xf00;                                            // 0x001a631c: addiu $v0, $v0, 0xf00
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x001a6324: subu.qb $zero, $sp, $s5
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001a6330: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001a6338: addu.qb $zero, $sp, $s1
    s0 = a0 << 5;                                               // 0x001a6340: sll $s0, $a0, 5
    s4 = v0 + s0;                                               // 0x001a6344: addu $s4, $v0, $s0
    a0 = 8;                                                     // 0x001a6348: addiu $a0, $zero, 8
    v0 = 0x2a << 16;                                            // 0x001a634c: lui $v0, 0x2a
    v0 = v0 + 0xee0;                                            // 0x001a6354: addiu $v0, $v0, 0xee0
    a2 = v0 + s0;                                               // 0x001a6358: addu $a2, $v0, $s0
label_0x1a635c:
    v1 = g_002a0ec4;  // Global at 0x002a0ec4                   // 0x001a635c: lh $v1, 0($a2)
    a0 = a0 + -1;                                               // 0x001a6360: addiu $a0, $a0, -1
    v0 = g_002a0ec6;  // Global at 0x002a0ec6                   // 0x001a6364: lh $v0, 2($a2)
    g_0021761f = v1;  // Global at 0x0021761f                   // 0x001a6368: sh $v1, 0($a1)
    a2 = a2 + 4;                                                // 0x001a636c: addiu $a2, $a2, 4
    g_00217621 = v0;  // Global at 0x00217621                   // 0x001a6370: sh $v0, 2($a1)
    if (a0 > 0) goto label_0x1a635c;                            // 0x001a6374: bgtz $a0, 0x1a635c
    a1 = a1 + 4;                                                // 0x001a6378: addiu $a1, $a1, 4
    v1 = s5 << 1;                                               // 0x001a637c: sll $v1, $s5, 1
    v0 = 0x2a << 16;                                            // 0x001a6380: lui $v0, 0x2a
    v1 = v1 + s5;                                               // 0x001a6384: addu $v1, $v1, $s5
    v0 = v0 + 0xf26;                                            // 0x001a6388: addiu $v0, $v0, 0xf26
    s1 = v1 << 3;                                               // 0x001a638c: sll $s1, $v1, 3
    s3 = v0 + s1;                                               // 0x001a6390: addu $s3, $v0, $s1
    func_00180560();  // 0x180340                                // 0x001a6394: jal 0x180340
    a0 = *(uint8_t*)(s3);                                       // 0x001a6398: lbu $a0, 0($s3)
    v1 = 3;                                                     // 0x001a639c: addiu $v1, $zero, 3
    if (v0 == v1) goto label_0x1a64b4;                          // 0x001a63a0: beq $v0, $v1, 0x1a64b4
    /* nop */                                                   // 0x001a63a4: nop 
    a0 = 2;                                                     // 0x001a63a8: addiu $a0, $zero, 2
    if (v0 == a0) goto label_0x1a64b4;                          // 0x001a63ac: beq $v0, $a0, 0x1a64b4
    /* nop */                                                   // 0x001a63b0: nop 
    if (v0 == 0) goto label_0x1a63e4;                           // 0x001a63b4: beqz $v0, 0x1a63e4
    v1 = 0x2a << 16;                                            // 0x001a63b8: lui $v1, 0x2a
    v1 = 1;                                                     // 0x001a63bc: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x1a63d0;                          // 0x001a63c0: beq $v0, $v1, 0x1a63d0
    /* nop */                                                   // 0x001a63c4: nop 
    goto label_0x1a64b4;                                        // 0x001a63c8: b 0x1a64b4
    /* nop */                                                   // 0x001a63cc: nop 
label_0x1a63d0:
    v0 = 0x2a << 16;                                            // 0x001a63d0: lui $v0, 0x2a
    v0 = v0 + 0xf20;                                            // 0x001a63d4: addiu $v0, $v0, 0xf20
    s6 = v0 + s1;                                               // 0x001a63d8: addu $s6, $v0, $s1
    goto label_0x1a6588;                                        // 0x001a63dc: b 0x1a6588
    *(uint8_t*)(s6) = a0;                                       // 0x001a63e0: sb $a0, 0($s6)
label_0x1a63e4:
    a0 = 0x2a << 16;                                            // 0x001a63e4: lui $a0, 0x2a
    v1 = v1 + 0xf20;                                            // 0x001a63e8: addiu $v1, $v1, 0xf20
    a0 = a0 + 0xf21;                                            // 0x001a63ec: addiu $a0, $a0, 0xf21
    a1 = 1;                                                     // 0x001a63f0: addiu $a1, $zero, 1
    v1 = v1 + s1;                                               // 0x001a63f4: addu $v1, $v1, $s1
    g_002a0f20 = a1;  // Global at 0x002a0f20                   // 0x001a63f8: sb $a1, 0($v1)
    a0 = a0 + s1;                                               // 0x001a63fc: addu $a0, $a0, $s1
    g_002a0f21 = 0;  // Global at 0x002a0f21                    // 0x001a6400: sb $zero, 0($a0)
    a3 = 0x2a << 16;                                            // 0x001a6404: lui $a3, 0x2a
    a0 = 0x2a << 16;                                            // 0x001a6408: lui $a0, 0x2a
    a3 = a3 + 0xec0;                                            // 0x001a640c: addiu $a3, $a3, 0xec0
    a0 = a0 + 0xf24;                                            // 0x001a6410: addiu $a0, $a0, 0xf24
    a2 = 8;                                                     // 0x001a6414: addiu $a2, $zero, 8
    a1 = a0 + s1;                                               // 0x001a6418: addu $a1, $a0, $s1
    a0 = 0x2a << 16;                                            // 0x001a641c: lui $a0, 0x2a
    g_00217623 = 0;  // Global at 0x00217623                    // 0x001a6420: sb $zero, 0($a1)
    a0 = a0 + 0xf25;                                            // 0x001a6424: addiu $a0, $a0, 0xf25
    a0 = a0 + s1;                                               // 0x001a6428: addu $a0, $a0, $s1
    g_002a0f25 = 0;  // Global at 0x002a0f25                    // 0x001a642c: sb $zero, 0($a0)
    a0 = 0x2a << 16;                                            // 0x001a6430: lui $a0, 0x2a
    a0 = a0 + 0xf2c;                                            // 0x001a6434: addiu $a0, $a0, 0xf2c
    a1 = a0 + s1;                                               // 0x001a6438: addu $a1, $a0, $s1
    a0 = 0x2a << 16;                                            // 0x001a643c: lui $a0, 0x2a
    g_00217623 = 0;  // Global at 0x00217623                    // 0x001a6440: sw $zero, 0($a1)
    a0 = a0 + 0xf30;                                            // 0x001a6444: addiu $a0, $a0, 0xf30
    a0 = a0 + s1;                                               // 0x001a6448: addu $a0, $a0, $s1
    g_002a0f30 = 0;  // Global at 0x002a0f30                    // 0x001a644c: sw $zero, 0($a0)
label_0x1a6450:
    a1 = g_002a0ec0;  // Global at 0x002a0ec0                   // 0x001a6450: lh $a1, 0($a3)
    a2 = a2 + -1;                                               // 0x001a6454: addiu $a2, $a2, -1
    a0 = g_002a0ec2;  // Global at 0x002a0ec2                   // 0x001a6458: lh $a0, 2($a3)
    *(uint16_t*)(s4) = a1;                                      // 0x001a645c: sh $a1, 0($s4)
    a3 = a3 + 4;                                                // 0x001a6460: addiu $a3, $a3, 4
    *(uint16_t*)((s4) + 2) = a0;                                // 0x001a6464: sh $a0, 2($s4)
    if (a2 > 0) goto label_0x1a6450;                            // 0x001a6468: bgtz $a2, 0x1a6450
    s4 = s4 + 4;                                                // 0x001a646c: addiu $s4, $s4, 4
    a0 = s5 << 3;                                               // 0x001a6470: sll $a0, $s5, 3
    a2 = 0x2a << 16;                                            // 0x001a6474: lui $a2, 0x2a
    a0 = a0 + s5;                                               // 0x001a6478: addu $a0, $a0, $s5
    a1 = 0x2a << 16;                                            // 0x001a647c: lui $a1, 0x2a
    a3 = a0 << 2;                                               // 0x001a6480: sll $a3, $a0, 2
    a2 = a2 + 0xf42;                                            // 0x001a6484: addiu $a2, $a2, 0xf42
    a1 = a1 + 0xf41;                                            // 0x001a6488: addiu $a1, $a1, 0xf41
    a2 = a2 + a3;                                               // 0x001a648c: addu $a2, $a2, $a3
    a1 = a1 + a3;                                               // 0x001a6490: addu $a1, $a1, $a3
    g_002a0f42 = 0;  // Global at 0x002a0f42                    // 0x001a6494: sh $zero, 0($a2)
    g_002a0f41 = 0;  // Global at 0x002a0f41                    // 0x001a6498: sb $zero, 0($a1)
    a0 = 0x2a << 16;                                            // 0x001a649c: lui $a0, 0x2a
    v1 = g_002a0f20;  // Global at 0x002a0f20                   // 0x001a64a0: lbu $v1, 0($v1)
    a0 = a0 + 0xf40;                                            // 0x001a64a4: addiu $a0, $a0, 0xf40
    a0 = a0 + a3;                                               // 0x001a64a8: addu $a0, $a0, $a3
    goto label_0x1a6b0c;                                        // 0x001a64ac: b 0x1a6b0c
    g_002a0f40 = v1;  // Global at 0x002a0f40                   // 0x001a64b0: sb $v1, 0($a0)
label_0x1a64b4:
    v1 = 0x2a << 16;                                            // 0x001a64b4: lui $v1, 0x2a
    a0 = 0x2a << 16;                                            // 0x001a64b8: lui $a0, 0x2a
    v1 = v1 + 0xf20;                                            // 0x001a64bc: addiu $v1, $v1, 0xf20
    a0 = a0 + 0xf21;                                            // 0x001a64c0: addiu $a0, $a0, 0xf21
    a1 = 2;                                                     // 0x001a64c4: addiu $a1, $zero, 2
    v1 = v1 + s1;                                               // 0x001a64c8: addu $v1, $v1, $s1
    g_002a0f20 = a1;  // Global at 0x002a0f20                   // 0x001a64cc: sb $a1, 0($v1)
    a0 = a0 + s1;                                               // 0x001a64d0: addu $a0, $a0, $s1
    g_002a0f21 = 0;  // Global at 0x002a0f21                    // 0x001a64d4: sb $zero, 0($a0)
    a3 = 0x2a << 16;                                            // 0x001a64d8: lui $a3, 0x2a
    a0 = 0x2a << 16;                                            // 0x001a64dc: lui $a0, 0x2a
    a3 = a3 + 0xec0;                                            // 0x001a64e0: addiu $a3, $a3, 0xec0
    a0 = a0 + 0xf24;                                            // 0x001a64e4: addiu $a0, $a0, 0xf24
    a2 = 8;                                                     // 0x001a64e8: addiu $a2, $zero, 8
    a1 = a0 + s1;                                               // 0x001a64ec: addu $a1, $a0, $s1
    a0 = 0x2a << 16;                                            // 0x001a64f0: lui $a0, 0x2a
    g_002a0f41 = 0;  // Global at 0x002a0f41                    // 0x001a64f4: sb $zero, 0($a1)
    a0 = a0 + 0xf25;                                            // 0x001a64f8: addiu $a0, $a0, 0xf25
    a0 = a0 + s1;                                               // 0x001a64fc: addu $a0, $a0, $s1
    g_002a0f25 = 0;  // Global at 0x002a0f25                    // 0x001a6500: sb $zero, 0($a0)
    a0 = 0x2a << 16;                                            // 0x001a6504: lui $a0, 0x2a
    a0 = a0 + 0xf2c;                                            // 0x001a6508: addiu $a0, $a0, 0xf2c
    a1 = a0 + s1;                                               // 0x001a650c: addu $a1, $a0, $s1
    a0 = 0x2a << 16;                                            // 0x001a6510: lui $a0, 0x2a
    g_002a0f41 = 0;  // Global at 0x002a0f41                    // 0x001a6514: sw $zero, 0($a1)
    a0 = a0 + 0xf30;                                            // 0x001a6518: addiu $a0, $a0, 0xf30
    a0 = a0 + s1;                                               // 0x001a651c: addu $a0, $a0, $s1
    g_002a0f30 = 0;  // Global at 0x002a0f30                    // 0x001a6520: sw $zero, 0($a0)
label_0x1a6524:
    a1 = g_002a0ec0;  // Global at 0x002a0ec0                   // 0x001a6524: lh $a1, 0($a3)
    a2 = a2 + -1;                                               // 0x001a6528: addiu $a2, $a2, -1
    a0 = g_002a0ec2;  // Global at 0x002a0ec2                   // 0x001a652c: lh $a0, 2($a3)
    *(uint16_t*)(s4) = a1;                                      // 0x001a6530: sh $a1, 0($s4)
    a3 = a3 + 4;                                                // 0x001a6534: addiu $a3, $a3, 4
    *(uint16_t*)((s4) + 2) = a0;                                // 0x001a6538: sh $a0, 2($s4)
    if (a2 > 0) goto label_0x1a6524;                            // 0x001a653c: bgtz $a2, 0x1a6524
    s4 = s4 + 4;                                                // 0x001a6540: addiu $s4, $s4, 4
    a0 = s5 << 3;                                               // 0x001a6544: sll $a0, $s5, 3
    a2 = 0x2a << 16;                                            // 0x001a6548: lui $a2, 0x2a
    a0 = a0 + s5;                                               // 0x001a654c: addu $a0, $a0, $s5
    a1 = 0x2a << 16;                                            // 0x001a6550: lui $a1, 0x2a
    a3 = a0 << 2;                                               // 0x001a6554: sll $a3, $a0, 2
    a2 = a2 + 0xf42;                                            // 0x001a6558: addiu $a2, $a2, 0xf42
    a1 = a1 + 0xf41;                                            // 0x001a655c: addiu $a1, $a1, 0xf41
    a2 = a2 + a3;                                               // 0x001a6560: addu $a2, $a2, $a3
    a1 = a1 + a3;                                               // 0x001a6564: addu $a1, $a1, $a3
    g_002a0f42 = 0;  // Global at 0x002a0f42                    // 0x001a6568: sh $zero, 0($a2)
    g_002a0f41 = 0;  // Global at 0x002a0f41                    // 0x001a656c: sb $zero, 0($a1)
    a0 = 0x2a << 16;                                            // 0x001a6570: lui $a0, 0x2a
    v1 = g_002a0f20;  // Global at 0x002a0f20                   // 0x001a6574: lbu $v1, 0($v1)
    a0 = a0 + 0xf40;                                            // 0x001a6578: addiu $a0, $a0, 0xf40
    a0 = a0 + a3;                                               // 0x001a657c: addu $a0, $a0, $a3
    goto label_0x1a6b0c;                                        // 0x001a6580: b 0x1a6b0c
    g_002a0f40 = v1;  // Global at 0x002a0f40                   // 0x001a6584: sb $v1, 0($a0)
label_0x1a6588:
    v0 = 0x2a << 16;                                            // 0x001a6588: lui $v0, 0x2a
    v0 = v0 + 0xf21;                                            // 0x001a658c: addiu $v0, $v0, 0xf21
    s2 = v0 + s1;                                               // 0x001a6590: addu $s2, $v0, $s1
    v0 = *(uint8_t*)(s2);                                       // 0x001a6594: lbu $v0, 0($s2)
    if (v0 != 0) goto label_0x1a6878;                           // 0x001a6598: bnez $v0, 0x1a6878
    a1 = 0x2a << 16;                                            // 0x001a659c: lui $a1, 0x2a
    a0 = 8;                                                     // 0x001a65a0: addiu $a0, $zero, 8
    a1 = a1 + 0xec0;                                            // 0x001a65a4: addiu $a1, $a1, 0xec0
label_0x1a65a8:
    v1 = g_002a0ec0;  // Global at 0x002a0ec0                   // 0x001a65a8: lh $v1, 0($a1)
    a0 = a0 + -1;                                               // 0x001a65ac: addiu $a0, $a0, -1
    v0 = g_002a0ec2;  // Global at 0x002a0ec2                   // 0x001a65b0: lh $v0, 2($a1)
    *(uint16_t*)(s4) = v1;                                      // 0x001a65b4: sh $v1, 0($s4)
    a1 = a1 + 4;                                                // 0x001a65b8: addiu $a1, $a1, 4
    *(uint16_t*)((s4) + 2) = v0;                                // 0x001a65bc: sh $v0, 2($s4)
    if (a0 > 0) goto label_0x1a65a8;                            // 0x001a65c0: bgtz $a0, 0x1a65a8
    s4 = s4 + 4;                                                // 0x001a65c4: addiu $s4, $s4, 4
    a0 = *(uint8_t*)(s3);                                       // 0x001a65c8: lbu $a0, 0($s3)
    func_00180340();  // 0x180270                                // 0x001a65cc: jal 0x180270
    a1 = sp + 0xac;                                             // 0x001a65d0: addiu $a1, $sp, 0xac
    if (v0 < 0) goto label_0x1a6b0c;                            // 0x001a65d4: bltz $v0, 0x1a6b0c
    /* nop */                                                   // 0x001a65d8: nop 
    v0 = 0x2a << 16;                                            // 0x001a65dc: lui $v0, 0x2a
    a2 = local_af;                                              // 0x001a65e0: lbu $a2, 0xaf($sp)
    a0 = local_ae;                                              // 0x001a65e4: lbu $a0, 0xae($sp)
    v0 = v0 + 0xf2c;                                            // 0x001a65e8: addiu $v0, $v0, 0xf2c
    v1 = local_ad;                                              // 0x001a65ec: lbu $v1, 0xad($sp)
    s0 = v0 + s1;                                               // 0x001a65f0: addu $s0, $v0, $s1
    v0 = local_ac;                                              // 0x001a65f4: lbu $v0, 0xac($sp)
    a2 = a2 << 0x18;                                            // 0x001a65f8: sll $a2, $a2, 0x18
    a0 = a0 << 0x10;                                            // 0x001a65fc: sll $a0, $a0, 0x10
    a0 = a2 | a0;                                               // 0x001a6600: or $a0, $a2, $a0
    v1 = v1 << 8;                                               // 0x001a6604: sll $v1, $v1, 8
    v1 = v1 | a0;                                               // 0x001a6608: or $v1, $v1, $a0
    v0 = v0 | v1;                                               // 0x001a660c: or $v0, $v0, $v1
    *(uint32_t*)(s0) = v0;                                      // 0x001a6610: sw $v0, 0($s0)
    a0 = *(uint8_t*)(s3);                                       // 0x001a6614: lbu $a0, 0($s3)
    func_00189770();  // 0x1896f0                                // 0x001a6618: jal 0x1896f0
    a1 = sp + 0xa8;                                             // 0x001a661c: addiu $a1, $sp, 0xa8
    if (v0 < 0) goto label_0x1a663c;                            // 0x001a6620: bltz $v0, 0x1a663c
    /* nop */                                                   // 0x001a6624: nop 
    a0 = local_a8;                                              // 0x001a6628: lbu $a0, 0xa8($sp)
    v1 = 0x2a << 16;                                            // 0x001a662c: lui $v1, 0x2a
    v1 = v1 + 0xf30;                                            // 0x001a6630: addiu $v1, $v1, 0xf30
    v1 = v1 + s1;                                               // 0x001a6634: addu $v1, $v1, $s1
    g_002a0f30 = a0;  // Global at 0x002a0f30                   // 0x001a6638: sw $a0, 0($v1)
label_0x1a663c:
    a0 = *(int32_t*)(s0);                                       // 0x001a663c: lw $a0, 0($s0)
    v1 = 0xffff << 16;                                          // 0x001a6640: lui $v1, 0xffff
    v1 = a0 & v1;                                               // 0x001a6644: and $v1, $a0, $v1
    if (v1 == 0) goto label_0x1a6690;                           // 0x001a6648: beqz $v1, 0x1a6690
    v1 = 0x2a << 16;                                            // 0x001a664c: lui $v1, 0x2a
    v1 = 0xfff0 << 16;                                          // 0x001a6650: lui $v1, 0xfff0
    v1 = a0 & v1;                                               // 0x001a6654: and $v1, $a0, $v1
    if (v1 == 0) goto label_0x1a6678;                           // 0x001a6658: beqz $v1, 0x1a6678
    /* nop */                                                   // 0x001a665c: nop 
    a0 = 0x2a << 16;                                            // 0x001a6660: lui $a0, 0x2a
    v1 = 2;                                                     // 0x001a6664: addiu $v1, $zero, 2
    a0 = a0 + 0xf27;                                            // 0x001a6668: addiu $a0, $a0, 0xf27
    a0 = a0 + s1;                                               // 0x001a666c: addu $a0, $a0, $s1
    goto label_0x1a669c;                                        // 0x001a6670: b 0x1a669c
    g_002a0f27 = v1;  // Global at 0x002a0f27                   // 0x001a6674: sb $v1, 0($a0)
label_0x1a6678:
    a0 = 0x2a << 16;                                            // 0x001a6678: lui $a0, 0x2a
    v1 = 1;                                                     // 0x001a667c: addiu $v1, $zero, 1
    a0 = a0 + 0xf27;                                            // 0x001a6680: addiu $a0, $a0, 0xf27
    a0 = a0 + s1;                                               // 0x001a6684: addu $a0, $a0, $s1
    goto label_0x1a669c;                                        // 0x001a6688: b 0x1a669c
    g_002a0f27 = v1;  // Global at 0x002a0f27                   // 0x001a668c: sb $v1, 0($a0)
label_0x1a6690:
    v1 = v1 + 0xf27;                                            // 0x001a6690: addiu $v1, $v1, 0xf27
    a0 = v1 + s1;                                               // 0x001a6694: addu $a0, $v1, $s1
    g_002a0f27 = 0;  // Global at 0x002a0f27                    // 0x001a6698: sb $zero, 0($a0)
label_0x1a669c:
    a0 = g_002a0f27;  // Global at 0x002a0f27                   // 0x001a669c: lbu $a0, 0($a0)
    v1 = 2;                                                     // 0x001a66a0: addiu $v1, $zero, 2
    if (a0 == v1) goto label_0x1a67b4;                          // 0x001a66a4: beq $a0, $v1, 0x1a67b4
    v1 = s5 << 3;                                               // 0x001a66a8: sll $v1, $s5, 3
    a2 = 1;                                                     // 0x001a66ac: addiu $a2, $zero, 1
    if (a0 == a2) goto label_0x1a673c;                          // 0x001a66b0: beq $a0, $a2, 0x1a673c
    v1 = s5 << 3;                                               // 0x001a66b4: sll $v1, $s5, 3
    if (a0 == 0) goto label_0x1a66c8;                           // 0x001a66b8: beqz $a0, 0x1a66c8
    v1 = s5 << 3;                                               // 0x001a66bc: sll $v1, $s5, 3
    goto label_0x1a6828;                                        // 0x001a66c0: b 0x1a6828
    /* nop */                                                   // 0x001a66c4: nop 
label_0x1a66c8:
    a0 = 0x2a << 16;                                            // 0x001a66c8: lui $a0, 0x2a
    a1 = v1 + s5;                                               // 0x001a66cc: addu $a1, $v1, $s5
    a0 = a0 + 0xf42;                                            // 0x001a66d0: addiu $a0, $a0, 0xf42
    v1 = 0x2a << 16;                                            // 0x001a66d4: lui $v1, 0x2a
    a1 = a1 << 2;                                               // 0x001a66d8: sll $a1, $a1, 2
    v1 = v1 + 0xf41;                                            // 0x001a66dc: addiu $v1, $v1, 0xf41
    a0 = a0 + a1;                                               // 0x001a66e0: addu $a0, $a0, $a1
    g_002a0f42 = a2;  // Global at 0x002a0f42                   // 0x001a66e4: sh $a2, 0($a0)
    v1 = v1 + a1;                                               // 0x001a66e8: addu $v1, $v1, $a1
    g_002a0f41 = 0;  // Global at 0x002a0f41                    // 0x001a66ec: sb $zero, 0($v1)
    a0 = s5 << 7;                                               // 0x001a66f0: sll $a0, $s5, 7
    v1 = 0x2a << 16;                                            // 0x001a66f4: lui $v1, 0x2a
    v1 = v1 + 0xe40;                                            // 0x001a66fc: addiu $v1, $v1, 0xe40
    t0 = v1 + a0;                                               // 0x001a6700: addu $t0, $v1, $a0
    a1 = 0x21 << 16;                                            // 0x001a6704: lui $a1, 0x21
    a1 = a1 + 0x76a0;                                           // 0x001a6708: addiu $a1, $a1, 0x76a0
label_0x1a670c:
    v1 = t1 << 3;                                               // 0x001a670c: sll $v1, $t1, 3
    a3 = a1 + v1;                                               // 0x001a6710: addu $a3, $a1, $v1
    a2 = t0 + v1;                                               // 0x001a6714: addu $a2, $t0, $v1
    a0 = g_002a0ec4;  // Global at 0x002a0ec4                   // 0x001a6718: lw $a0, 0($a3)
    t1 = t1 + 1;                                                // 0x001a671c: addiu $t1, $t1, 1
    v1 = (t1 < 0x10) ? 1 : 0;                                   // 0x001a6720: slti $v1, $t1, 0x10
    g_002a0f42 = a0;  // Global at 0x002a0f42                   // 0x001a6724: sw $a0, 0($a2)
    a0 = g_002a0ec8;  // Global at 0x002a0ec8                   // 0x001a6728: lw $a0, 4($a3)
    if (v1 != 0) goto label_0x1a670c;                           // 0x001a672c: bnez $v1, 0x1a670c
    g_002a0f46 = a0;  // Global at 0x002a0f46                   // 0x001a6730: sw $a0, 4($a2)
    goto label_0x1a6828;                                        // 0x001a6734: b 0x1a6828
    /* nop */                                                   // 0x001a6738: nop 
label_0x1a673c:
    a1 = 0x2a << 16;                                            // 0x001a673c: lui $a1, 0x2a
    v1 = v1 + s5;                                               // 0x001a6740: addu $v1, $v1, $s5
    a1 = a1 + 0xf42;                                            // 0x001a6744: addiu $a1, $a1, 0xf42
    a3 = v1 << 2;                                               // 0x001a6748: sll $a3, $v1, 2
    a0 = 0x60;                                                  // 0x001a674c: addiu $a0, $zero, 0x60
    v1 = 0x2a << 16;                                            // 0x001a6750: lui $v1, 0x2a
    a1 = a1 + a3;                                               // 0x001a6754: addu $a1, $a1, $a3
    v1 = v1 + 0xf41;                                            // 0x001a6758: addiu $v1, $v1, 0xf41
    g_002a0f42 = a2;  // Global at 0x002a0f42                   // 0x001a675c: sh $a2, 0($a1)
    v1 = v1 + a3;                                               // 0x001a6760: addu $v1, $v1, $a3
    g_002a0f41 = a0;  // Global at 0x002a0f41                   // 0x001a6768: sb $a0, 0($v1)
    v1 = 0x2a << 16;                                            // 0x001a676c: lui $v1, 0x2a
    a0 = s5 << 7;                                               // 0x001a6770: sll $a0, $s5, 7
    v1 = v1 + 0xe40;                                            // 0x001a6774: addiu $v1, $v1, 0xe40
    t1 = v1 + a0;                                               // 0x001a6778: addu $t1, $v1, $a0
    a1 = 0x21 << 16;                                            // 0x001a677c: lui $a1, 0x21
    a1 = a1 + 0x7620;                                           // 0x001a6780: addiu $a1, $a1, 0x7620
label_0x1a6784:
    v1 = a2 << 3;                                               // 0x001a6784: sll $v1, $a2, 3
    t0 = a1 + v1;                                               // 0x001a6788: addu $t0, $a1, $v1
    a3 = t1 + v1;                                               // 0x001a678c: addu $a3, $t1, $v1
    a0 = *(int32_t*)(t0);                                       // 0x001a6790: lw $a0, 0($t0)
    a2 = a2 + 1;                                                // 0x001a6794: addiu $a2, $a2, 1
    v1 = (a2 < 0x10) ? 1 : 0;                                   // 0x001a6798: slti $v1, $a2, 0x10
    g_002a0ec4 = a0;  // Global at 0x002a0ec4                   // 0x001a679c: sw $a0, 0($a3)
    a0 = *(int32_t*)((t0) + 4);                                 // 0x001a67a0: lw $a0, 4($t0)
    if (v1 != 0) goto label_0x1a6784;                           // 0x001a67a4: bnez $v1, 0x1a6784
    g_002a0ec8 = a0;  // Global at 0x002a0ec8                   // 0x001a67a8: sw $a0, 4($a3)
    goto label_0x1a6828;                                        // 0x001a67ac: b 0x1a6828
    /* nop */                                                   // 0x001a67b0: nop 
label_0x1a67b4:
    a2 = 1;                                                     // 0x001a67b4: addiu $a2, $zero, 1
    a0 = v1 + s5;                                               // 0x001a67b8: addu $a0, $v1, $s5
    v1 = 0x2a << 16;                                            // 0x001a67bc: lui $v1, 0x2a
    a3 = a0 << 2;                                               // 0x001a67c0: sll $a3, $a0, 2
    v1 = v1 + 0xf42;                                            // 0x001a67c4: addiu $v1, $v1, 0xf42
    a0 = 0x73;                                                  // 0x001a67c8: addiu $a0, $zero, 0x73
    a1 = v1 + a3;                                               // 0x001a67cc: addu $a1, $v1, $a3
    v1 = 0x2a << 16;                                            // 0x001a67d0: lui $v1, 0x2a
    g_00217620 = a2;  // Global at 0x00217620                   // 0x001a67d4: sh $a2, 0($a1)
    v1 = v1 + 0xf41;                                            // 0x001a67d8: addiu $v1, $v1, 0xf41
    v1 = v1 + a3;                                               // 0x001a67e0: addu $v1, $v1, $a3
    g_002a0f41 = a0;  // Global at 0x002a0f41                   // 0x001a67e4: sb $a0, 0($v1)
    v1 = 0x2a << 16;                                            // 0x001a67e8: lui $v1, 0x2a
    a0 = s5 << 7;                                               // 0x001a67ec: sll $a0, $s5, 7
    v1 = v1 + 0xe40;                                            // 0x001a67f0: addiu $v1, $v1, 0xe40
    t1 = v1 + a0;                                               // 0x001a67f4: addu $t1, $v1, $a0
    a1 = 0x21 << 16;                                            // 0x001a67f8: lui $a1, 0x21
    a1 = a1 + 0x7620;                                           // 0x001a67fc: addiu $a1, $a1, 0x7620
label_0x1a6800:
    v1 = a2 << 3;                                               // 0x001a6800: sll $v1, $a2, 3
    t0 = a1 + v1;                                               // 0x001a6804: addu $t0, $a1, $v1
    a3 = t1 + v1;                                               // 0x001a6808: addu $a3, $t1, $v1
    a0 = *(int32_t*)(t0);                                       // 0x001a680c: lw $a0, 0($t0)
    a2 = a2 + 1;                                                // 0x001a6810: addiu $a2, $a2, 1
    v1 = (a2 < 0x10) ? 1 : 0;                                   // 0x001a6814: slti $v1, $a2, 0x10
    g_002a0ec4 = a0;  // Global at 0x002a0ec4                   // 0x001a6818: sw $a0, 0($a3)
    a0 = *(int32_t*)((t0) + 4);                                 // 0x001a681c: lw $a0, 4($t0)
    if (v1 != 0) goto label_0x1a6800;                           // 0x001a6820: bnez $v1, 0x1a6800
    g_002a0ec8 = a0;  // Global at 0x002a0ec8                   // 0x001a6824: sw $a0, 4($a3)
label_0x1a6828:
    v1 = 0x2a << 16;                                            // 0x001a6828: lui $v1, 0x2a
    v1 = v1 + 0xf30;                                            // 0x001a682c: addiu $v1, $v1, 0xf30
    v1 = v1 + s1;                                               // 0x001a6830: addu $v1, $v1, $s1
    v1 = g_002a0f30;  // Global at 0x002a0f30                   // 0x001a6834: lw $v1, 0($v1)
    v1 = v1 & 3;                                                // 0x001a6838: andi $v1, $v1, 3
    if (v1 != 0) goto label_0x1a6858;                           // 0x001a683c: bnez $v1, 0x1a6858
    v1 = 0x2a << 16;                                            // 0x001a6840: lui $v1, 0x2a
    v1 = 0x2a << 16;                                            // 0x001a6844: lui $v1, 0x2a
    v1 = v1 + 0xf25;                                            // 0x001a6848: addiu $v1, $v1, 0xf25
    v1 = v1 + s1;                                               // 0x001a684c: addu $v1, $v1, $s1
    goto label_0x1a6868;                                        // 0x001a6850: b 0x1a6868
    g_002a0f25 = 0;  // Global at 0x002a0f25                    // 0x001a6854: sb $zero, 0($v1)
label_0x1a6858:
    a0 = 1;                                                     // 0x001a6858: addiu $a0, $zero, 1
    v1 = v1 + 0xf25;                                            // 0x001a685c: addiu $v1, $v1, 0xf25
    v1 = v1 + s1;                                               // 0x001a6860: addu $v1, $v1, $s1
    g_002a1e4a = a0;  // Global at 0x002a1e4a                   // 0x001a6864: sb $a0, 0($v1)
label_0x1a6868:
    v1 = *(uint8_t*)(s2);                                       // 0x001a6868: lbu $v1, 0($s2)
    v1 = v1 + 1;                                                // 0x001a686c: addiu $v1, $v1, 1
    goto label_0x1a6aec;                                        // 0x001a6870: b 0x1a6aec
    *(uint8_t*)(s2) = v1;                                       // 0x001a6874: sb $v1, 0($s2)
label_0x1a6878:
    a0 = *(uint8_t*)(s3);                                       // 0x001a6878: lbu $a0, 0($s3)
    func_00180270();  // 0x180198                                // 0x001a687c: jal 0x180198
    a1 = sp + 0x80;                                             // 0x001a6880: addiu $a1, $sp, 0x80
    if (v0 < 0) goto label_0x1a6b0c;                            // 0x001a6884: bltz $v0, 0x1a6b0c
    t0 = 1;                                                     // 0x001a6888: addiu $t0, $zero, 1
    v1 = 0x2a << 16;                                            // 0x001a688c: lui $v1, 0x2a
    v1 = v1 + 0xf01;                                            // 0x001a6890: addiu $v1, $v1, 0xf01
    *(uint8_t*)(s6) = t0;                                       // 0x001a6894: sb $t0, 0($s6)
    a0 = v1 + s0;                                               // 0x001a6898: addu $a0, $v1, $s0
    *(uint8_t*)(s4) = 0;                                        // 0x001a689c: sb $zero, 0($s4)
    g_002a0f42 = 0;  // Global at 0x002a0f42                    // 0x001a68a0: sb $zero, 0($a0)
    v1 = 0x2a << 16;                                            // 0x001a68a4: lui $v1, 0x2a
    a3 = local_80;                                              // 0x001a68a8: lbu $a3, 0x80($sp)
    v1 = v1 + 0xf02;                                            // 0x001a68ac: addiu $v1, $v1, 0xf02
    a2 = local_81;                                              // 0x001a68b0: lbu $a2, 0x81($sp)
    a1 = v1 + s0;                                               // 0x001a68b4: addu $a1, $v1, $s0
    v1 = 0x2a << 16;                                            // 0x001a68b8: lui $v1, 0x2a
    v1 = v1 + 0xf27;                                            // 0x001a68bc: addiu $v1, $v1, 0xf27
    a0 = v1 + s1;                                               // 0x001a68c0: addu $a0, $v1, $s1
    v1 = 2;                                                     // 0x001a68c4: addiu $v1, $zero, 2
    a3 = a3 << 8;                                               // 0x001a68c8: sll $a3, $a3, 8
    a2 = a3 | a2;                                               // 0x001a68cc: or $a2, $a3, $a2
    g_00217620 = a2;  // Global at 0x00217620                   // 0x001a68d0: sh $a2, 0($a1)
    a0 = g_002a0f42;  // Global at 0x002a0f42                   // 0x001a68d4: lbu $a0, 0($a0)
    if (a0 == v1) goto label_0x1a694c;                          // 0x001a68d8: beq $a0, $v1, 0x1a694c
    /* nop */                                                   // 0x001a68dc: nop 
    if (a0 == t0) goto label_0x1a68f8;                          // 0x001a68e0: beq $a0, $t0, 0x1a68f8
    /* nop */                                                   // 0x001a68e4: nop 
    if (a0 == 0) goto label_0x1a6ab8;                           // 0x001a68e8: beqz $a0, 0x1a6ab8
    /* nop */                                                   // 0x001a68ec: nop 
    goto label_0x1a6a90;                                        // 0x001a68f0: b 0x1a6a90
    a2 = 0x2a << 16;                                            // 0x001a68f4: lui $a2, 0x2a
label_0x1a68f8:
    a3 = local_82;                                              // 0x001a68f8: lbu $a3, 0x82($sp)
    v1 = 0x2a << 16;                                            // 0x001a68fc: lui $v1, 0x2a
    v1 = v1 + 0xf04;                                            // 0x001a6900: addiu $v1, $v1, 0xf04
    a2 = v1 + s0;                                               // 0x001a6904: addu $a2, $v1, $s0
    v1 = 0x2a << 16;                                            // 0x001a6908: lui $v1, 0x2a
    v1 = v1 + 0xf05;                                            // 0x001a690c: addiu $v1, $v1, 0xf05
    a1 = v1 + s0;                                               // 0x001a6910: addu $a1, $v1, $s0
    g_002a0000 = a3;  // Global at 0x002a0000                   // 0x001a6914: sb $a3, 0($a2)
    v1 = 0x2a << 16;                                            // 0x001a6918: lui $v1, 0x2a
    a2 = local_83;                                              // 0x001a691c: lbu $a2, 0x83($sp)
    v1 = v1 + 0xf06;                                            // 0x001a6920: addiu $v1, $v1, 0xf06
    a0 = v1 + s0;                                               // 0x001a6924: addu $a0, $v1, $s0
    v1 = 0x2a << 16;                                            // 0x001a6928: lui $v1, 0x2a
    v1 = v1 + 0xf07;                                            // 0x001a692c: addiu $v1, $v1, 0xf07
    v1 = v1 + s0;                                               // 0x001a6930: addu $v1, $v1, $s0
    g_00217620 = a2;  // Global at 0x00217620                   // 0x001a6934: sb $a2, 0($a1)
    a1 = local_84;                                              // 0x001a6938: lbu $a1, 0x84($sp)
    g_002a0f42 = a1;  // Global at 0x002a0f42                   // 0x001a693c: sb $a1, 0($a0)
    a0 = local_85;                                              // 0x001a6940: lbu $a0, 0x85($sp)
    goto label_0x1a6ab8;                                        // 0x001a6944: b 0x1a6ab8
    g_002a0f07 = a0;  // Global at 0x002a0f07                   // 0x001a6948: sb $a0, 0($v1)
label_0x1a694c:
    a2 = local_82;                                              // 0x001a694c: lbu $a2, 0x82($sp)
    v1 = 0x2a << 16;                                            // 0x001a6950: lui $v1, 0x2a
    v1 = v1 + 0xf04;                                            // 0x001a6954: addiu $v1, $v1, 0xf04
    t5 = 0x2a << 16;                                            // 0x001a6958: lui $t5, 0x2a
    a1 = v1 + s0;                                               // 0x001a695c: addu $a1, $v1, $s0
    a0 = 0x2a << 16;                                            // 0x001a6960: lui $a0, 0x2a
    v1 = 0x2a << 16;                                            // 0x001a6964: lui $v1, 0x2a
    a0 = a0 + 0xf06;                                            // 0x001a6968: addiu $a0, $a0, 0xf06
    v1 = v1 + 0xf05;                                            // 0x001a696c: addiu $v1, $v1, 0xf05
    t4 = a0 + s0;                                               // 0x001a6970: addu $t4, $a0, $s0
    a0 = 0x2a << 16;                                            // 0x001a6974: lui $a0, 0x2a
    v1 = v1 + s0;                                               // 0x001a6978: addu $v1, $v1, $s0
    g_00217620 = a2;  // Global at 0x00217620                   // 0x001a697c: sb $a2, 0($a1)
    a0 = a0 + 0xf07;                                            // 0x001a6980: addiu $a0, $a0, 0xf07
    t6 = local_83;                                              // 0x001a6984: lbu $t6, 0x83($sp)
    t3 = a0 + s0;                                               // 0x001a6988: addu $t3, $a0, $s0
    a0 = 0x2a << 16;                                            // 0x001a698c: lui $a0, 0x2a
    t5 = t5 + 0xf0f;                                            // 0x001a6990: addiu $t5, $t5, 0xf0f
    a0 = a0 + 0xf08;                                            // 0x001a6994: addiu $a0, $a0, 0xf08
    t2 = a0 + s0;                                               // 0x001a6998: addu $t2, $a0, $s0
    a0 = 0x2a << 16;                                            // 0x001a699c: lui $a0, 0x2a
    a0 = a0 + 0xf09;                                            // 0x001a69a0: addiu $a0, $a0, 0xf09
    g_002a0f05 = t6;  // Global at 0x002a0f05                   // 0x001a69a4: sb $t6, 0($v1)
    t1 = a0 + s0;                                               // 0x001a69a8: addu $t1, $a0, $s0
    v1 = t5 + s0;                                               // 0x001a69ac: addu $v1, $t5, $s0
    a0 = 0x2a << 16;                                            // 0x001a69b0: lui $a0, 0x2a
    t5 = local_84;                                              // 0x001a69b4: lbu $t5, 0x84($sp)
    a0 = a0 + 0xf0a;                                            // 0x001a69b8: addiu $a0, $a0, 0xf0a
    t0 = a0 + s0;                                               // 0x001a69bc: addu $t0, $a0, $s0
    t6 = 0x2a << 16;                                            // 0x001a69c0: lui $t6, 0x2a
    a0 = 0x2a << 16;                                            // 0x001a69c4: lui $a0, 0x2a
    t6 = t6 + 0xf10;                                            // 0x001a69c8: addiu $t6, $t6, 0xf10
    a0 = a0 + 0xf0b;                                            // 0x001a69cc: addiu $a0, $a0, 0xf0b
    s3 = t6 + s0;                                               // 0x001a69d0: addu $s3, $t6, $s0
    a3 = a0 + s0;                                               // 0x001a69d4: addu $a3, $a0, $s0
    t6 = 0x2a << 16;                                            // 0x001a69d8: lui $t6, 0x2a
    a0 = 0x2a << 16;                                            // 0x001a69dc: lui $a0, 0x2a
    t6 = t6 + 0xf11;                                            // 0x001a69e0: addiu $t6, $t6, 0xf11
    *(uint8_t*)(t4) = t5;                                       // 0x001a69e4: sb $t5, 0($t4)
    a0 = a0 + 0xf0c;                                            // 0x001a69e8: addiu $a0, $a0, 0xf0c
    t4 = local_85;                                              // 0x001a69ec: lbu $t4, 0x85($sp)
    a2 = a0 + s0;                                               // 0x001a69f0: addu $a2, $a0, $s0
    a0 = 0x2a << 16;                                            // 0x001a69f4: lui $a0, 0x2a
    s2 = t6 + s0;                                               // 0x001a69f8: addu $s2, $t6, $s0
    a0 = a0 + 0xf0d;                                            // 0x001a69fc: addiu $a0, $a0, 0xf0d
    t6 = 0x2a << 16;                                            // 0x001a6a00: lui $t6, 0x2a
    a1 = a0 + s0;                                               // 0x001a6a04: addu $a1, $a0, $s0
    t6 = t6 + 0xf12;                                            // 0x001a6a08: addiu $t6, $t6, 0xf12
    a0 = 0x2a << 16;                                            // 0x001a6a0c: lui $a0, 0x2a
    t7 = t6 + s0;                                               // 0x001a6a10: addu $t7, $t6, $s0
    a0 = a0 + 0xf0e;                                            // 0x001a6a14: addiu $a0, $a0, 0xf0e
    t6 = 0x2a << 16;                                            // 0x001a6a18: lui $t6, 0x2a
    *(uint8_t*)(t3) = t4;                                       // 0x001a6a1c: sb $t4, 0($t3)
    t6 = t6 + 0xf13;                                            // 0x001a6a20: addiu $t6, $t6, 0xf13
    t3 = local_86;                                              // 0x001a6a24: lbu $t3, 0x86($sp)
    a0 = a0 + s0;                                               // 0x001a6a28: addu $a0, $a0, $s0
    t6 = t6 + s0;                                               // 0x001a6a2c: addu $t6, $t6, $s0
    *(uint8_t*)(t2) = t3;                                       // 0x001a6a30: sb $t3, 0($t2)
    t2 = local_87;                                              // 0x001a6a34: lbu $t2, 0x87($sp)
    *(uint8_t*)(t1) = t2;                                       // 0x001a6a38: sb $t2, 0($t1)
    t1 = local_88;                                              // 0x001a6a3c: lbu $t1, 0x88($sp)
    *(uint8_t*)(t0) = t1;                                       // 0x001a6a40: sb $t1, 0($t0)
    t0 = local_89;                                              // 0x001a6a44: lbu $t0, 0x89($sp)
    g_002a0ec4 = t0;  // Global at 0x002a0ec4                   // 0x001a6a48: sb $t0, 0($a3)
    a3 = local_8a;                                              // 0x001a6a4c: lbu $a3, 0x8a($sp)
    g_002a0000 = a3;  // Global at 0x002a0000                   // 0x001a6a50: sb $a3, 0($a2)
    a2 = local_8b;                                              // 0x001a6a54: lbu $a2, 0x8b($sp)
    g_00217620 = a2;  // Global at 0x00217620                   // 0x001a6a58: sb $a2, 0($a1)
    a1 = local_8c;                                              // 0x001a6a5c: lbu $a1, 0x8c($sp)
    g_002a0f0e = a1;  // Global at 0x002a0f0e                   // 0x001a6a60: sb $a1, 0($a0)
    a0 = local_8d;                                              // 0x001a6a64: lbu $a0, 0x8d($sp)
    g_002a0f05 = a0;  // Global at 0x002a0f05                   // 0x001a6a68: sb $a0, 0($v1)
    v1 = local_8e;                                              // 0x001a6a6c: lbu $v1, 0x8e($sp)
    *(uint8_t*)(s3) = v1;                                       // 0x001a6a70: sb $v1, 0($s3)
    v1 = local_8f;                                              // 0x001a6a74: lbu $v1, 0x8f($sp)
    *(uint8_t*)(s2) = v1;                                       // 0x001a6a78: sb $v1, 0($s2)
    v1 = local_90;                                              // 0x001a6a7c: lbu $v1, 0x90($sp)
    *(uint8_t*)(t7) = v1;                                       // 0x001a6a80: sb $v1, 0($t7)
    v1 = local_91;                                              // 0x001a6a84: lbu $v1, 0x91($sp)
    goto label_0x1a6ab8;                                        // 0x001a6a88: b 0x1a6ab8
    g_002a0f13 = v1;  // Global at 0x002a0f13                   // 0x001a6a8c: sb $v1, 0($t6)
label_0x1a6a90:
    a1 = 8;                                                     // 0x001a6a90: addiu $a1, $zero, 8
    a2 = a2 + 0xec0;                                            // 0x001a6a94: addiu $a2, $a2, 0xec0
label_0x1a6a98:
    a0 = g_002a0ec0;  // Global at 0x002a0ec0                   // 0x001a6a98: lh $a0, 0($a2)
    a1 = a1 + -1;                                               // 0x001a6a9c: addiu $a1, $a1, -1
    v1 = g_002a0ec2;  // Global at 0x002a0ec2                   // 0x001a6aa0: lh $v1, 2($a2)
    *(uint16_t*)(s4) = a0;                                      // 0x001a6aa4: sh $a0, 0($s4)
    a2 = a2 + 4;                                                // 0x001a6aa8: addiu $a2, $a2, 4
    *(uint16_t*)((s4) + 2) = v1;                                // 0x001a6aac: sh $v1, 2($s4)
    if (a1 > 0) goto label_0x1a6a98;                            // 0x001a6ab0: bgtz $a1, 0x1a6a98
    s4 = s4 + 4;                                                // 0x001a6ab4: addiu $s4, $s4, 4
label_0x1a6ab8:
    v1 = 0x2a << 16;                                            // 0x001a6ab8: lui $v1, 0x2a
    v1 = v1 + 0xf34;                                            // 0x001a6abc: addiu $v1, $v1, 0xf34
    a0 = v1 + s1;                                               // 0x001a6ac0: addu $a0, $v1, $s1
    v1 = g_002a0f0e;  // Global at 0x002a0f0e                   // 0x001a6ac4: lw $v1, 0($a0)
    if (v1 == 0) goto label_0x1a6aec;                           // 0x001a6ac8: beqz $v1, 0x1a6aec
    /* nop */                                                   // 0x001a6acc: nop 
    v1 = v1 + -1;                                               // 0x001a6ad0: addiu $v1, $v1, -1
    if (v1 != 0) goto label_0x1a6aec;                           // 0x001a6ad4: bnez $v1, 0x1a6aec
    g_002a0f0e = v1;  // Global at 0x002a0f0e                   // 0x001a6ad8: sw $v1, 0($a0)
    func_001a6c40();  // 0x1a6b40                                // 0x001a6ae4: jal 0x1a6b40
label_0x1a6aec:
    a1 = *(uint8_t*)(s6);                                       // 0x001a6aec: lbu $a1, 0($s6)
    v1 = s5 << 3;                                               // 0x001a6af0: sll $v1, $s5, 3
    a0 = v1 + s5;                                               // 0x001a6af4: addu $a0, $v1, $s5
    v1 = 0x2a << 16;                                            // 0x001a6af8: lui $v1, 0x2a
    a0 = a0 << 2;                                               // 0x001a6afc: sll $a0, $a0, 2
    v1 = v1 + 0xf40;                                            // 0x001a6b00: addiu $v1, $v1, 0xf40
    v1 = v1 + a0;                                               // 0x001a6b04: addu $v1, $v1, $a0
    g_002a0f40 = a1;  // Global at 0x002a0f40                   // 0x001a6b08: sb $a1, 0($v1)
label_0x1a6b0c:
    /* FPU: ld.b $w1, -0x4a($zero) */                           // 0x001a6b10: ld.b $w1, -0x4a($zero)
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x001a6b14: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001a6b18: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001a6b20: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001a6b24: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001a6b28: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001a6b2c: jr $ra
    sp = sp + 0xb0;                                             // 0x001a6b30: addiu $sp, $sp, 0xb0
}