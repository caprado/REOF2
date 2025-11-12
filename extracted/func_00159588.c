void func_00159588() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x00159588: addiu $sp, $sp, -0x40
    v0 = 1;                                                     // 0x0015958c: addiu $v0, $zero, 1
    s1 = s0 + 0x1d0;                                            // 0x0015959c: addiu $s1, $s0, 0x1d0
    s3 = s0 + 0x348;                                            // 0x001595ac: addiu $s3, $s0, 0x348
    a2 = 0x7fff << 16;                                          // 0x001595b4: lui $a2, 0x7fff
    *(uint32_t*)((s0) + 0x384) = v0;                            // 0x001595b8: sw $v0, 0x384($s0)
    a1 = 1;                                                     // 0x001595bc: addiu $a1, $zero, 1
    v1 = *(int32_t*)((s1) + 0x34);                              // 0x001595c0: lw $v1, 0x34($s1)
    a2 = a2 | 0xffff;                                           // 0x001595c4: ori $a2, $a2, 0xffff
    a0 = *(int32_t*)(s2);                                       // 0x001595c8: lw $a0, 0($s2)
    v1 = v1 + 1;                                                // 0x001595d0: addiu $v1, $v1, 1
    v0 = *(int32_t*)((a0) + 0x18);                              // 0x001595d4: lw $v0, 0x18($a0)
    /* call function at address in v0 */                        // 0x001595dc: jalr $v0
    *(uint32_t*)((s1) + 0x34) = v1;                             // 0x001595e0: sw $v1, 0x34($s1)
    v1 = *(int32_t*)(s3);                                       // 0x001595e4: lw $v1, 0($s3)
    v0 = -4;                                                    // 0x001595e8: addiu $v0, $zero, -4
    a3 = v1 & v0;                                               // 0x001595ec: and $a3, $v1, $v0
    v1 = v1 - a3;                                               // 0x001595f0: subu $v1, $v1, $a3
    a3 = a3 + 4;                                                // 0x001595f4: addiu $a3, $a3, 4
    a2 = *(int8_t*)(a3);                                        // 0x001595f8: lb $a2, 0($a3)
    a3 = a3 + 1;                                                // 0x001595fc: addiu $a3, $a3, 1
    v0 = *(uint8_t*)(a3);                                       // 0x00159600: lbu $v0, 0($a3)
    a3 = a3 + 1;                                                // 0x00159604: addiu $a3, $a3, 1
    a2 = a2 << 8;                                               // 0x00159608: sll $a2, $a2, 8
    a0 = *(uint8_t*)(a3);                                       // 0x0015960c: lbu $a0, 0($a3)
    a2 = a2 | v0;                                               // 0x00159610: or $a2, $a2, $v0
    a3 = a3 + 1;                                                // 0x00159614: addiu $a3, $a3, 1
    a2 = a2 << 8;                                               // 0x00159618: sll $a2, $a2, 8
    v0 = *(uint8_t*)(a3);                                       // 0x0015961c: lbu $v0, 0($a3)
    a1 = v1 << 3;                                               // 0x00159620: sll $a1, $v1, 3
    a2 = a2 | a0;                                               // 0x00159624: or $a2, $a2, $a0
    a2 = a2 << 8;                                               // 0x00159628: sll $a2, $a2, 8
    v1 = (a1 < 0x20) ? 1 : 0;                                   // 0x0015962c: slti $v1, $a1, 0x20
    a2 = a2 | v0;                                               // 0x00159630: or $a2, $a2, $v0
    if (v1 != 0) goto label_0x159678;                           // 0x00159634: bnez $v1, 0x159678
    a3 = a3 + 1;                                                // 0x00159638: addiu $a3, $a3, 1
    a2 = *(int8_t*)(a3);                                        // 0x0015963c: lb $a2, 0($a3)
    a3 = a3 + 1;                                                // 0x00159640: addiu $a3, $a3, 1
    v0 = *(uint8_t*)(a3);                                       // 0x00159644: lbu $v0, 0($a3)
    a3 = a3 + 1;                                                // 0x00159648: addiu $a3, $a3, 1
    a2 = a2 << 8;                                               // 0x0015964c: sll $a2, $a2, 8
    v1 = *(uint8_t*)(a3);                                       // 0x00159650: lbu $v1, 0($a3)
    a2 = a2 | v0;                                               // 0x00159654: or $a2, $a2, $v0
    a3 = a3 + 1;                                                // 0x00159658: addiu $a3, $a3, 1
    a2 = a2 << 8;                                               // 0x0015965c: sll $a2, $a2, 8
    v0 = *(uint8_t*)(a3);                                       // 0x00159660: lbu $v0, 0($a3)
    a2 = a2 | v1;                                               // 0x00159664: or $a2, $a2, $v1
    a1 = a1 + -0x20;                                            // 0x00159668: addiu $a1, $a1, -0x20
    a2 = a2 << 8;                                               // 0x0015966c: sll $a2, $a2, 8
    a3 = a3 + 1;                                                // 0x00159670: addiu $a3, $a3, 1
    a2 = a2 | v0;                                               // 0x00159674: or $a2, $a2, $v0
label_0x159678:
    v1 = a2 << a1;                                              // 0x00159678: sllv $v1, $a2, $a1
    v0 = a1 ^ 0;                                                // 0x0015967c: xori $v0, $a1, 0
    a2 = *(int8_t*)(a3);                                        // 0x00159684: lb $a2, 0($a3)
    a3 = a3 + 1;                                                // 0x00159688: addiu $a3, $a3, 1
    if (v0 != 0) t0 = v1;                                       // 0x0015968c: movn $t0, $v1, $v0
    v0 = *(uint8_t*)(a3);                                       // 0x00159690: lbu $v0, 0($a3)
    a3 = a3 + 1;                                                // 0x00159694: addiu $a3, $a3, 1
    a2 = a2 << 8;                                               // 0x00159698: sll $a2, $a2, 8
    v1 = *(uint8_t*)(a3);                                       // 0x0015969c: lbu $v1, 0($a3)
    a2 = a2 | v0;                                               // 0x001596a0: or $a2, $a2, $v0
    a3 = a3 + 1;                                                // 0x001596a4: addiu $a3, $a3, 1
    a2 = a2 << 8;                                               // 0x001596a8: sll $a2, $a2, 8
    v0 = *(uint8_t*)(a3);                                       // 0x001596ac: lbu $v0, 0($a3)
    a2 = a2 | v1;                                               // 0x001596b0: or $a2, $a2, $v1
    a0 = (a1 < 0x14) ? 1 : 0;                                   // 0x001596b4: slti $a0, $a1, 0x14
    a2 = a2 << 8;                                               // 0x001596b8: sll $a2, $a2, 8
    a3 = a3 + 1;                                                // 0x001596bc: addiu $a3, $a3, 1
    if (a0 != 0) goto label_0x159738;                           // 0x001596c0: bnez $a0, 0x159738
    a2 = a2 | v0;                                               // 0x001596c4: or $a2, $a2, $v0
    a1 = a1 + -0x14;                                            // 0x001596c8: addiu $a1, $a1, -0x14
    if (a1 == 0) goto label_0x1596f0;                           // 0x001596cc: beqz $a1, 0x1596f0
    v0 = 0xc;                                                   // 0x001596d0: addiu $v0, $zero, 0xc
    v0 = v0 - a1;                                               // 0x001596d4: subu $v0, $v0, $a1
    v0 = (unsigned)a2 >> v0;                                    // 0x001596d8: srlv $v0, $a2, $v0
    t0 = t0 | v0;                                               // 0x001596dc: or $t0, $t0, $v0
    v1 = (unsigned)t0 >> 0x14;                                  // 0x001596e0: srl $v1, $t0, 0x14
    t0 = a2 << a1;                                              // 0x001596e4: sllv $t0, $a2, $a1
    goto label_0x1596fc;                                        // 0x001596e8: b 0x1596fc
    *(uint32_t*)(s1) = v1;                                      // 0x001596ec: sw $v1, 0($s1)
label_0x1596f0:
    v0 = (unsigned)t0 >> 0x14;                                  // 0x001596f0: srl $v0, $t0, 0x14
    *(uint32_t*)(s1) = v0;                                      // 0x001596f8: sw $v0, 0($s1)
label_0x1596fc:
    a2 = *(int8_t*)(a3);                                        // 0x001596fc: lb $a2, 0($a3)
    a3 = a3 + 1;                                                // 0x00159700: addiu $a3, $a3, 1
    v0 = *(uint8_t*)(a3);                                       // 0x00159704: lbu $v0, 0($a3)
    a3 = a3 + 1;                                                // 0x00159708: addiu $a3, $a3, 1
    a2 = a2 << 8;                                               // 0x0015970c: sll $a2, $a2, 8
    v1 = *(uint8_t*)(a3);                                       // 0x00159710: lbu $v1, 0($a3)
    a2 = a2 | v0;                                               // 0x00159714: or $a2, $a2, $v0
    a3 = a3 + 1;                                                // 0x00159718: addiu $a3, $a3, 1
    a2 = a2 << 8;                                               // 0x0015971c: sll $a2, $a2, 8
    v0 = *(uint8_t*)(a3);                                       // 0x00159720: lbu $v0, 0($a3)
    a2 = a2 | v1;                                               // 0x00159724: or $a2, $a2, $v1
    a3 = a3 + 1;                                                // 0x00159728: addiu $a3, $a3, 1
    a2 = a2 << 8;                                               // 0x0015972c: sll $a2, $a2, 8
    goto label_0x159748;                                        // 0x00159730: b 0x159748
    a2 = a2 | v0;                                               // 0x00159734: or $a2, $a2, $v0
label_0x159738:
    v0 = (unsigned)t0 >> 0x14;                                  // 0x00159738: srl $v0, $t0, 0x14
    t0 = t0 << 0xc;                                             // 0x0015973c: sll $t0, $t0, 0xc
    *(uint32_t*)(s1) = v0;                                      // 0x00159740: sw $v0, 0($s1)
    a1 = a1 + 0xc;                                              // 0x00159744: addiu $a1, $a1, 0xc
label_0x159748:
    v0 = (a1 < 0x14) ? 1 : 0;                                   // 0x00159748: slti $v0, $a1, 0x14
    if (v0 != 0) goto label_0x1597c8;                           // 0x0015974c: bnez $v0, 0x1597c8
    v0 = (unsigned)t0 >> 0x14;                                  // 0x00159750: srl $v0, $t0, 0x14
    a1 = a1 + -0x14;                                            // 0x00159754: addiu $a1, $a1, -0x14
    if (a1 == 0) goto label_0x159780;                           // 0x00159758: beqz $a1, 0x159780
    v0 = 0xc;                                                   // 0x0015975c: addiu $v0, $zero, 0xc
    v0 = v0 - a1;                                               // 0x00159760: subu $v0, $v0, $a1
    v0 = (unsigned)a2 >> v0;                                    // 0x00159764: srlv $v0, $a2, $v0
    t0 = t0 | v0;                                               // 0x00159768: or $t0, $t0, $v0
    v1 = (unsigned)t0 >> 0x14;                                  // 0x0015976c: srl $v1, $t0, 0x14
    t0 = a2 << a1;                                              // 0x00159770: sllv $t0, $a2, $a1
    goto label_0x15978c;                                        // 0x00159774: b 0x15978c
    *(uint32_t*)((s1) + 4) = v1;                                // 0x00159778: sw $v1, 4($s1)
    /* nop */                                                   // 0x0015977c: nop 
label_0x159780:
    v0 = (unsigned)t0 >> 0x14;                                  // 0x00159780: srl $v0, $t0, 0x14
    *(uint32_t*)((s1) + 4) = v0;                                // 0x00159788: sw $v0, 4($s1)
label_0x15978c:
    a2 = *(int8_t*)(a3);                                        // 0x0015978c: lb $a2, 0($a3)
    a3 = a3 + 1;                                                // 0x00159790: addiu $a3, $a3, 1
    v0 = *(uint8_t*)(a3);                                       // 0x00159794: lbu $v0, 0($a3)
    a3 = a3 + 1;                                                // 0x00159798: addiu $a3, $a3, 1
    a2 = a2 << 8;                                               // 0x0015979c: sll $a2, $a2, 8
    v1 = *(uint8_t*)(a3);                                       // 0x001597a0: lbu $v1, 0($a3)
    a2 = a2 | v0;                                               // 0x001597a4: or $a2, $a2, $v0
    a3 = a3 + 1;                                                // 0x001597a8: addiu $a3, $a3, 1
    a2 = a2 << 8;                                               // 0x001597ac: sll $a2, $a2, 8
    v0 = *(uint8_t*)(a3);                                       // 0x001597b0: lbu $v0, 0($a3)
    a2 = a2 | v1;                                               // 0x001597b4: or $a2, $a2, $v1
    a3 = a3 + 1;                                                // 0x001597b8: addiu $a3, $a3, 1
    a2 = a2 << 8;                                               // 0x001597bc: sll $a2, $a2, 8
    goto label_0x1597d4;                                        // 0x001597c0: b 0x1597d4
    a2 = a2 | v0;                                               // 0x001597c4: or $a2, $a2, $v0
label_0x1597c8:
    t0 = t0 << 0xc;                                             // 0x001597c8: sll $t0, $t0, 0xc
    *(uint32_t*)((s1) + 4) = v0;                                // 0x001597cc: sw $v0, 4($s1)
    a1 = a1 + 0xc;                                              // 0x001597d0: addiu $a1, $a1, 0xc
label_0x1597d4:
    v0 = (a1 < 0x1c) ? 1 : 0;                                   // 0x001597d4: slti $v0, $a1, 0x1c
    if (v0 != 0) goto label_0x159850;                           // 0x001597d8: bnez $v0, 0x159850
    v0 = (unsigned)t0 >> 0x1c;                                  // 0x001597dc: srl $v0, $t0, 0x1c
    a1 = a1 + -0x1c;                                            // 0x001597e0: addiu $a1, $a1, -0x1c
    if (a1 == 0) goto label_0x159808;                           // 0x001597e4: beqz $a1, 0x159808
    v0 = 4;                                                     // 0x001597e8: addiu $v0, $zero, 4
    v0 = v0 - a1;                                               // 0x001597ec: subu $v0, $v0, $a1
    v0 = (unsigned)a2 >> v0;                                    // 0x001597f0: srlv $v0, $a2, $v0
    t0 = t0 | v0;                                               // 0x001597f4: or $t0, $t0, $v0
    v1 = (unsigned)t0 >> 0x1c;                                  // 0x001597f8: srl $v1, $t0, 0x1c
    t0 = a2 << a1;                                              // 0x001597fc: sllv $t0, $a2, $a1
    goto label_0x159814;                                        // 0x00159800: b 0x159814
    *(uint32_t*)((s0) + 0x278) = v1;                            // 0x00159804: sw $v1, 0x278($s0)
label_0x159808:
    v0 = (unsigned)t0 >> 0x1c;                                  // 0x00159808: srl $v0, $t0, 0x1c
    *(uint32_t*)((s0) + 0x278) = v0;                            // 0x00159810: sw $v0, 0x278($s0)
label_0x159814:
    a2 = *(int8_t*)(a3);                                        // 0x00159814: lb $a2, 0($a3)
    a3 = a3 + 1;                                                // 0x00159818: addiu $a3, $a3, 1
    v0 = *(uint8_t*)(a3);                                       // 0x0015981c: lbu $v0, 0($a3)
    a3 = a3 + 1;                                                // 0x00159820: addiu $a3, $a3, 1
    a2 = a2 << 8;                                               // 0x00159824: sll $a2, $a2, 8
    v1 = *(uint8_t*)(a3);                                       // 0x00159828: lbu $v1, 0($a3)
    a2 = a2 | v0;                                               // 0x0015982c: or $a2, $a2, $v0
    a3 = a3 + 1;                                                // 0x00159830: addiu $a3, $a3, 1
    a2 = a2 << 8;                                               // 0x00159834: sll $a2, $a2, 8
    v0 = *(uint8_t*)(a3);                                       // 0x00159838: lbu $v0, 0($a3)
    a2 = a2 | v1;                                               // 0x0015983c: or $a2, $a2, $v1
    a3 = a3 + 1;                                                // 0x00159840: addiu $a3, $a3, 1
    a2 = a2 << 8;                                               // 0x00159844: sll $a2, $a2, 8
    goto label_0x15985c;                                        // 0x00159848: b 0x15985c
    a2 = a2 | v0;                                               // 0x0015984c: or $a2, $a2, $v0
label_0x159850:
    t0 = t0 << 4;                                               // 0x00159850: sll $t0, $t0, 4
    *(uint32_t*)((s0) + 0x278) = v0;                            // 0x00159854: sw $v0, 0x278($s0)
    a1 = a1 + 4;                                                // 0x00159858: addiu $a1, $a1, 4
label_0x15985c:
    v0 = (a1 < 0x1c) ? 1 : 0;                                   // 0x0015985c: slti $v0, $a1, 0x1c
    if (v0 != 0) goto label_0x1598d0;                           // 0x00159860: bnez $v0, 0x1598d0
    a0 = (unsigned)t0 >> 0x1c;                                  // 0x00159864: srl $a0, $t0, 0x1c
    a1 = a1 + -0x1c;                                            // 0x00159868: addiu $a1, $a1, -0x1c
    if (a1 == 0) goto label_0x159890;                           // 0x0015986c: beqz $a1, 0x159890
    v0 = 4;                                                     // 0x00159870: addiu $v0, $zero, 4
    v0 = v0 - a1;                                               // 0x00159874: subu $v0, $v0, $a1
    v0 = (unsigned)a2 >> v0;                                    // 0x00159878: srlv $v0, $a2, $v0
    t0 = t0 | v0;                                               // 0x0015987c: or $t0, $t0, $v0
    a0 = (unsigned)t0 >> 0x1c;                                  // 0x00159880: srl $a0, $t0, 0x1c
    goto label_0x159894;                                        // 0x00159884: b 0x159894
    t0 = a2 << a1;                                              // 0x00159888: sllv $t0, $a2, $a1
    /* nop */                                                   // 0x0015988c: nop 
label_0x159890:
label_0x159894:
    a2 = *(int8_t*)(a3);                                        // 0x00159894: lb $a2, 0($a3)
    a3 = a3 + 1;                                                // 0x00159898: addiu $a3, $a3, 1
    v0 = *(uint8_t*)(a3);                                       // 0x0015989c: lbu $v0, 0($a3)
    a3 = a3 + 1;                                                // 0x001598a0: addiu $a3, $a3, 1
    a2 = a2 << 8;                                               // 0x001598a4: sll $a2, $a2, 8
    v1 = *(uint8_t*)(a3);                                       // 0x001598a8: lbu $v1, 0($a3)
    a2 = a2 | v0;                                               // 0x001598ac: or $a2, $a2, $v0
    a3 = a3 + 1;                                                // 0x001598b0: addiu $a3, $a3, 1
    a2 = a2 << 8;                                               // 0x001598b4: sll $a2, $a2, 8
    v0 = *(uint8_t*)(a3);                                       // 0x001598b8: lbu $v0, 0($a3)
    a2 = a2 | v1;                                               // 0x001598bc: or $a2, $a2, $v1
    a3 = a3 + 1;                                                // 0x001598c0: addiu $a3, $a3, 1
    a2 = a2 << 8;                                               // 0x001598c4: sll $a2, $a2, 8
    goto label_0x1598d8;                                        // 0x001598c8: b 0x1598d8
    a2 = a2 | v0;                                               // 0x001598cc: or $a2, $a2, $v0
label_0x1598d0:
    t0 = t0 << 4;                                               // 0x001598d0: sll $t0, $t0, 4
    a1 = a1 + 4;                                                // 0x001598d4: addiu $a1, $a1, 4
label_0x1598d8:
    v0 = (a1 < 0xe) ? 1 : 0;                                    // 0x001598d8: slti $v0, $a1, 0xe
    if (v0 != 0) goto label_0x159958;                           // 0x001598dc: bnez $v0, 0x159958
    *(uint32_t*)((s1) + 0x10) = a0;                             // 0x001598e0: sw $a0, 0x10($s1)
    a1 = a1 + -0xe;                                             // 0x001598e4: addiu $a1, $a1, -0xe
    if (a1 == 0) goto label_0x159910;                           // 0x001598e8: beqz $a1, 0x159910
    v0 = 0x12;                                                  // 0x001598ec: addiu $v0, $zero, 0x12
    v0 = v0 - a1;                                               // 0x001598f0: subu $v0, $v0, $a1
    v0 = (unsigned)a2 >> v0;                                    // 0x001598f4: srlv $v0, $a2, $v0
    t0 = t0 | v0;                                               // 0x001598f8: or $t0, $t0, $v0
    v1 = (unsigned)t0 >> 0xe;                                   // 0x001598fc: srl $v1, $t0, 0xe
    t0 = a2 << a1;                                              // 0x00159900: sllv $t0, $a2, $a1
    goto label_0x15991c;                                        // 0x00159904: b 0x15991c
    *(uint32_t*)((s0) + 0x27c) = v1;                            // 0x00159908: sw $v1, 0x27c($s0)
    /* nop */                                                   // 0x0015990c: nop 
label_0x159910:
    v0 = (unsigned)t0 >> 0xe;                                   // 0x00159910: srl $v0, $t0, 0xe
    *(uint32_t*)((s0) + 0x27c) = v0;                            // 0x00159918: sw $v0, 0x27c($s0)
label_0x15991c:
    a2 = *(int8_t*)(a3);                                        // 0x0015991c: lb $a2, 0($a3)
    a3 = a3 + 1;                                                // 0x00159920: addiu $a3, $a3, 1
    v0 = *(uint8_t*)(a3);                                       // 0x00159924: lbu $v0, 0($a3)
    a3 = a3 + 1;                                                // 0x00159928: addiu $a3, $a3, 1
    a2 = a2 << 8;                                               // 0x0015992c: sll $a2, $a2, 8
    v1 = *(uint8_t*)(a3);                                       // 0x00159930: lbu $v1, 0($a3)
    a2 = a2 | v0;                                               // 0x00159934: or $a2, $a2, $v0
    a3 = a3 + 1;                                                // 0x00159938: addiu $a3, $a3, 1
    a2 = a2 << 8;                                               // 0x0015993c: sll $a2, $a2, 8
    v0 = *(uint8_t*)(a3);                                       // 0x00159940: lbu $v0, 0($a3)
    a2 = a2 | v1;                                               // 0x00159944: or $a2, $a2, $v1
    a3 = a3 + 1;                                                // 0x00159948: addiu $a3, $a3, 1
    a2 = a2 << 8;                                               // 0x0015994c: sll $a2, $a2, 8
    goto label_0x159968;                                        // 0x00159950: b 0x159968
    a2 = a2 | v0;                                               // 0x00159954: or $a2, $a2, $v0
label_0x159958:
    v0 = (unsigned)t0 >> 0xe;                                   // 0x00159958: srl $v0, $t0, 0xe
    t0 = t0 << 0x12;                                            // 0x0015995c: sll $t0, $t0, 0x12
    *(uint32_t*)((s0) + 0x27c) = v0;                            // 0x00159960: sw $v0, 0x27c($s0)
    a1 = a1 + 0x12;                                             // 0x00159964: addiu $a1, $a1, 0x12
label_0x159968:
    a1 = a1 + 1;                                                // 0x00159968: addiu $a1, $a1, 1
    v0 = (a1 < 0x20) ? 1 : 0;                                   // 0x0015996c: slti $v0, $a1, 0x20
    /* bnezl $v0, 0x1599b8 */                                   // 0x00159970: bnezl $v0, 0x1599b8
    t0 = t0 << 1;                                               // 0x00159974: sll $t0, $t0, 1
    a1 = a1 + -0x20;                                            // 0x00159978: addiu $a1, $a1, -0x20
    t0 = a2 << a1;                                              // 0x0015997c: sllv $t0, $a2, $a1
    a2 = *(int8_t*)(a3);                                        // 0x00159980: lb $a2, 0($a3)
    a3 = a3 + 1;                                                // 0x00159984: addiu $a3, $a3, 1
    v0 = *(uint8_t*)(a3);                                       // 0x00159988: lbu $v0, 0($a3)
    a3 = a3 + 1;                                                // 0x0015998c: addiu $a3, $a3, 1
    a2 = a2 << 8;                                               // 0x00159990: sll $a2, $a2, 8
    v1 = *(uint8_t*)(a3);                                       // 0x00159994: lbu $v1, 0($a3)
    a2 = a2 | v0;                                               // 0x00159998: or $a2, $a2, $v0
    a3 = a3 + 1;                                                // 0x0015999c: addiu $a3, $a3, 1
    a2 = a2 << 8;                                               // 0x001599a0: sll $a2, $a2, 8
    v0 = *(uint8_t*)(a3);                                       // 0x001599a4: lbu $v0, 0($a3)
    a2 = a2 | v1;                                               // 0x001599a8: or $a2, $a2, $v1
    a3 = a3 + 1;                                                // 0x001599ac: addiu $a3, $a3, 1
    a2 = a2 << 8;                                               // 0x001599b0: sll $a2, $a2, 8
    a2 = a2 | v0;                                               // 0x001599b4: or $a2, $a2, $v0
    v0 = (a1 < 0x16) ? 1 : 0;                                   // 0x001599b8: slti $v0, $a1, 0x16
    if (v0 != 0) goto label_0x159a38;                           // 0x001599bc: bnez $v0, 0x159a38
    v0 = (unsigned)t0 >> 0x16;                                  // 0x001599c0: srl $v0, $t0, 0x16
    a1 = a1 + -0x16;                                            // 0x001599c4: addiu $a1, $a1, -0x16
    if (a1 == 0) goto label_0x1599f0;                           // 0x001599c8: beqz $a1, 0x1599f0
    v0 = 0xa;                                                   // 0x001599cc: addiu $v0, $zero, 0xa
    v0 = v0 - a1;                                               // 0x001599d0: subu $v0, $v0, $a1
    v0 = (unsigned)a2 >> v0;                                    // 0x001599d4: srlv $v0, $a2, $v0
    t0 = t0 | v0;                                               // 0x001599d8: or $t0, $t0, $v0
    v1 = (unsigned)t0 >> 0x16;                                  // 0x001599dc: srl $v1, $t0, 0x16
    t0 = a2 << a1;                                              // 0x001599e0: sllv $t0, $a2, $a1
    goto label_0x1599fc;                                        // 0x001599e4: b 0x1599fc
    *(uint32_t*)((s0) + 0x280) = v1;                            // 0x001599e8: sw $v1, 0x280($s0)
    /* nop */                                                   // 0x001599ec: nop 
label_0x1599f0:
    v0 = (unsigned)t0 >> 0x16;                                  // 0x001599f0: srl $v0, $t0, 0x16
    *(uint32_t*)((s0) + 0x280) = v0;                            // 0x001599f8: sw $v0, 0x280($s0)
label_0x1599fc:
    a2 = *(int8_t*)(a3);                                        // 0x001599fc: lb $a2, 0($a3)
    a3 = a3 + 1;                                                // 0x00159a00: addiu $a3, $a3, 1
    v0 = *(uint8_t*)(a3);                                       // 0x00159a04: lbu $v0, 0($a3)
    a3 = a3 + 1;                                                // 0x00159a08: addiu $a3, $a3, 1
    a2 = a2 << 8;                                               // 0x00159a0c: sll $a2, $a2, 8
    v1 = *(uint8_t*)(a3);                                       // 0x00159a10: lbu $v1, 0($a3)
    a2 = a2 | v0;                                               // 0x00159a14: or $a2, $a2, $v0
    a3 = a3 + 1;                                                // 0x00159a18: addiu $a3, $a3, 1
    a2 = a2 << 8;                                               // 0x00159a1c: sll $a2, $a2, 8
    v0 = *(uint8_t*)(a3);                                       // 0x00159a20: lbu $v0, 0($a3)
    a2 = a2 | v1;                                               // 0x00159a24: or $a2, $a2, $v1
    a3 = a3 + 1;                                                // 0x00159a28: addiu $a3, $a3, 1
    a2 = a2 << 8;                                               // 0x00159a2c: sll $a2, $a2, 8
    goto label_0x159a44;                                        // 0x00159a30: b 0x159a44
    a2 = a2 | v0;                                               // 0x00159a34: or $a2, $a2, $v0
label_0x159a38:
    t0 = t0 << 0xa;                                             // 0x00159a38: sll $t0, $t0, 0xa
    *(uint32_t*)((s0) + 0x280) = v0;                            // 0x00159a3c: sw $v0, 0x280($s0)
    a1 = a1 + 0xa;                                              // 0x00159a40: addiu $a1, $a1, 0xa
label_0x159a44:
    v0 = (unsigned)t0 >> 0x1f;                                  // 0x00159a44: srl $v0, $t0, 0x1f
    v1 = 0x1f;                                                  // 0x00159a48: addiu $v1, $zero, 0x1f
    if (a1 != v1) goto label_0x159a98;                          // 0x00159a4c: bne $a1, $v1, 0x159a98
    *(uint32_t*)((s0) + 0x284) = v0;                            // 0x00159a50: sw $v0, 0x284($s0)
    a2 = *(int8_t*)(a3);                                        // 0x00159a58: lb $a2, 0($a3)
    a3 = a3 + 1;                                                // 0x00159a5c: addiu $a3, $a3, 1
    v0 = *(uint8_t*)(a3);                                       // 0x00159a64: lbu $v0, 0($a3)
    a3 = a3 + 1;                                                // 0x00159a68: addiu $a3, $a3, 1
    a2 = a2 << 8;                                               // 0x00159a6c: sll $a2, $a2, 8
    v1 = *(uint8_t*)(a3);                                       // 0x00159a70: lbu $v1, 0($a3)
    a2 = a2 | v0;                                               // 0x00159a74: or $a2, $a2, $v0
    a3 = a3 + 1;                                                // 0x00159a78: addiu $a3, $a3, 1
    a2 = a2 << 8;                                               // 0x00159a7c: sll $a2, $a2, 8
    v0 = *(uint8_t*)(a3);                                       // 0x00159a80: lbu $v0, 0($a3)
    a2 = a2 | v1;                                               // 0x00159a84: or $a2, $a2, $v1
    a3 = a3 + 1;                                                // 0x00159a88: addiu $a3, $a3, 1
    a2 = a2 << 8;                                               // 0x00159a8c: sll $a2, $a2, 8
    goto label_0x159aa0;                                        // 0x00159a90: b 0x159aa0
    a2 = a2 | v0;                                               // 0x00159a94: or $a2, $a2, $v0
label_0x159a98:
    a1 = a1 + 1;                                                // 0x00159a98: addiu $a1, $a1, 1
    t0 = t0 << 1;                                               // 0x00159a9c: sll $t0, $t0, 1
label_0x159aa0:
    v0 = 0x1f;                                                  // 0x00159aa0: addiu $v0, $zero, 0x1f
    if (a1 != v0) goto label_0x159af0;                          // 0x00159aa4: bne $a1, $v0, 0x159af0
    a0 = (unsigned)t0 >> 0x1f;                                  // 0x00159aa8: srl $a0, $t0, 0x1f
    a2 = *(int8_t*)(a3);                                        // 0x00159ab0: lb $a2, 0($a3)
    a3 = a3 + 1;                                                // 0x00159ab4: addiu $a3, $a3, 1
    v0 = *(uint8_t*)(a3);                                       // 0x00159abc: lbu $v0, 0($a3)
    a3 = a3 + 1;                                                // 0x00159ac0: addiu $a3, $a3, 1
    a2 = a2 << 8;                                               // 0x00159ac4: sll $a2, $a2, 8
    v1 = *(uint8_t*)(a3);                                       // 0x00159ac8: lbu $v1, 0($a3)
    a2 = a2 | v0;                                               // 0x00159acc: or $a2, $a2, $v0
    a3 = a3 + 1;                                                // 0x00159ad0: addiu $a3, $a3, 1
    a2 = a2 << 8;                                               // 0x00159ad4: sll $a2, $a2, 8
    v0 = *(uint8_t*)(a3);                                       // 0x00159ad8: lbu $v0, 0($a3)
    a2 = a2 | v1;                                               // 0x00159adc: or $a2, $a2, $v1
    a3 = a3 + 1;                                                // 0x00159ae0: addiu $a3, $a3, 1
    a2 = a2 << 8;                                               // 0x00159ae4: sll $a2, $a2, 8
    goto label_0x159af8;                                        // 0x00159ae8: b 0x159af8
    a2 = a2 | v0;                                               // 0x00159aec: or $a2, $a2, $v0
label_0x159af0:
    a1 = a1 + 1;                                                // 0x00159af0: addiu $a1, $a1, 1
    t0 = t0 << 1;                                               // 0x00159af4: sll $t0, $t0, 1
label_0x159af8:
    if (a0 == 0) goto label_0x159b70;                           // 0x00159af8: beqz $a0, 0x159b70
    a0 = 0x3f;                                                  // 0x00159afc: addiu $a0, $zero, 0x3f
    v0 = (a1 < 0x18) ? 1 : 0;                                   // 0x00159b00: slti $v0, $a1, 0x18
    /* nop */                                                   // 0x00159b04: nop 
label_0x159b08:
    /* bnezl $v0, 0x159b60 */                                   // 0x00159b08: bnezl $v0, 0x159b60
    a1 = a1 + 8;                                                // 0x00159b0c: addiu $a1, $a1, 8
    a1 = a1 + -0x18;                                            // 0x00159b10: addiu $a1, $a1, -0x18
    v1 = a2 << a1;                                              // 0x00159b18: sllv $v1, $a2, $a1
    a2 = *(int8_t*)(a3);                                        // 0x00159b1c: lb $a2, 0($a3)
    v0 = a1 ^ 0;                                                // 0x00159b20: xori $v0, $a1, 0
    a3 = a3 + 1;                                                // 0x00159b24: addiu $a3, $a3, 1
    if (v0 != 0) t0 = v1;                                       // 0x00159b28: movn $t0, $v1, $v0
    v0 = *(uint8_t*)(a3);                                       // 0x00159b2c: lbu $v0, 0($a3)
    a2 = a2 << 8;                                               // 0x00159b30: sll $a2, $a2, 8
    a3 = a3 + 1;                                                // 0x00159b34: addiu $a3, $a3, 1
    v1 = *(uint8_t*)(a3);                                       // 0x00159b38: lbu $v1, 0($a3)
    a3 = a3 + 1;                                                // 0x00159b3c: addiu $a3, $a3, 1
    a2 = a2 | v0;                                               // 0x00159b40: or $a2, $a2, $v0
    v0 = *(uint8_t*)(a3);                                       // 0x00159b44: lbu $v0, 0($a3)
    a2 = a2 << 8;                                               // 0x00159b48: sll $a2, $a2, 8
    a3 = a3 + 1;                                                // 0x00159b4c: addiu $a3, $a3, 1
    a2 = a2 | v1;                                               // 0x00159b50: or $a2, $a2, $v1
    a2 = a2 << 8;                                               // 0x00159b54: sll $a2, $a2, 8
    goto label_0x159b64;                                        // 0x00159b58: b 0x159b64
    a2 = a2 | v0;                                               // 0x00159b5c: or $a2, $a2, $v0
    t0 = t0 << 8;                                               // 0x00159b60: sll $t0, $t0, 8
label_0x159b64:
    a0 = a0 + -1;                                               // 0x00159b64: addiu $a0, $a0, -1
    if (a0 >= 0) goto label_0x159b08;                           // 0x00159b68: bgez $a0, 0x159b08
    v0 = (a1 < 0x18) ? 1 : 0;                                   // 0x00159b6c: slti $v0, $a1, 0x18
label_0x159b70:
    v0 = 0x1f;                                                  // 0x00159b70: addiu $v0, $zero, 0x1f
    if (a1 != v0) goto label_0x159b88;                          // 0x00159b74: bne $a1, $v0, 0x159b88
    a0 = (unsigned)t0 >> 0x1f;                                  // 0x00159b78: srl $a0, $t0, 0x1f
    goto label_0x159b8c;                                        // 0x00159b80: b 0x159b8c
    a3 = a3 + 4;                                                // 0x00159b84: addiu $a3, $a3, 4
label_0x159b88:
    a1 = a1 + 1;                                                // 0x00159b88: addiu $a1, $a1, 1
label_0x159b8c:
    if (a0 == 0) goto label_0x159bbc;                           // 0x00159b8c: beqz $a0, 0x159bbc
    a0 = 0x3f;                                                  // 0x00159b90: addiu $a0, $zero, 0x3f
    v0 = (a1 < 0x18) ? 1 : 0;                                   // 0x00159b94: slti $v0, $a1, 0x18
label_0x159b98:
    /* bnezl $v0, 0x159ba8 */                                   // 0x00159b98: bnezl $v0, 0x159ba8
    a1 = a1 + 8;                                                // 0x00159b9c: addiu $a1, $a1, 8
    a1 = a1 + -0x18;                                            // 0x00159ba0: addiu $a1, $a1, -0x18
    a3 = a3 + 4;                                                // 0x00159ba4: addiu $a3, $a3, 4
    a0 = a0 + -1;                                               // 0x00159ba8: addiu $a0, $a0, -1
    /* nop */                                                   // 0x00159bac: nop 
    /* nop */                                                   // 0x00159bb0: nop 
    if (a0 >= 0) goto label_0x159b98;                           // 0x00159bb4: bgez $a0, 0x159b98
    v0 = (a1 < 0x18) ? 1 : 0;                                   // 0x00159bb8: slti $v0, $a1, 0x18
label_0x159bbc:
    v1 = *(int32_t*)(s1);                                       // 0x00159bbc: lw $v1, 0($s1)
    t0 = a1 & 7;                                                // 0x00159bc0: andi $t0, $a1, 7
    v0 = *(int32_t*)((s1) + 4);                                 // 0x00159bc4: lw $v0, 4($s1)
    a1 = a1 - t0;                                               // 0x00159bc8: subu $a1, $a1, $t0
    v1 = v1 + 0xf;                                              // 0x00159bcc: addiu $v1, $v1, 0xf
    a1 = a1 + 7;                                                // 0x00159bd0: addiu $a1, $a1, 7
    v0 = v0 + 0xf;                                              // 0x00159bd4: addiu $v0, $v0, 0xf
    v1 = v1 >> 4;                                               // 0x00159bd8: sra $v1, $v1, 4
    v0 = v0 >> 4;                                               // 0x00159bdc: sra $v0, $v0, 4
    a1 = a1 >> 3;                                               // 0x00159be0: sra $a1, $a1, 3
    a2 = *(int32_t*)((s0) + 0x348);                             // 0x00159be8: lw $a2, 0x348($s0)
    a1 = a3 + a1;                                               // 0x00159bec: addu $a1, $a3, $a1
    *(uint32_t*)((s1) + 0xc) = v0;                              // 0x00159bf4: sw $v0, 0xc($s1)
    a1 = a1 + -8;                                               // 0x00159bf8: addiu $a1, $a1, -8
    *(uint32_t*)((s1) + 8) = v1;                                // 0x00159bfc: sw $v1, 8($s1)
    a1 = a1 - a2;                                               // 0x00159c00: subu $a1, $a1, $a2
    a0 = a0 + -1;                                               // 0x00159c04: addiu $a0, $a0, -1
    *(uint32_t*)((s0) + 0x350) = t0;                            // 0x00159c08: sw $t0, 0x350($s0)
    *(uint32_t*)((s0) + 0x310) = a0;                            // 0x00159c0c: sw $a0, 0x310($s0)
    func_00140598();  // 0x1404a0                                // 0x00159c14: jal 0x1404a0
    v1 = *(int32_t*)(s2);                                       // 0x00159c1c: lw $v1, 0($s2)
    v0 = *(int32_t*)((v1) + 0x20);                              // 0x00159c28: lw $v0, 0x20($v1)
    /* call function at address in v0 */                        // 0x00159c2c: jalr $v0
    v1 = *(int32_t*)(s2);                                       // 0x00159c34: lw $v1, 0($s2)
    a1 = 1;                                                     // 0x00159c3c: addiu $a1, $zero, 1
    v0 = *(int32_t*)((v1) + 0x1c);                              // 0x00159c40: lw $v0, 0x1c($v1)
    /* call function at address in v0 */                        // 0x00159c44: jalr $v0
    return;                                                     // 0x00159c64: jr $ra
    sp = sp + 0x40;                                             // 0x00159c68: addiu $sp, $sp, 0x40
}