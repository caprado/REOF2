void func_00184320() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_204, local_210, local_420, local_424, local_428, local_42c;
    
    sp = sp + -0x4d0;                                           // 0x00184320: addiu $sp, $sp, -0x4d0
    v1 = 0x184;                                                 // 0x00184324: addiu $v1, $zero, 0x184
    v0 = 0x21 << 16;                                            // 0x0018432c: lui $v0, 0x21
    /* multiply: s7 * v1 -> hi:lo */                            // 0x00184338: mult $ac3, $s7, $v1
    v0 = v0 + 0x6018;                                           // 0x00184344: addiu $v0, $v0, 0x6018
    local_424 = a3;                                             // 0x00184348: sw $a3, 0x424($sp)
    v1 = v1 + v0;                                               // 0x0018435c: addu $v1, $v1, $v0
    local_428 = t0;                                             // 0x0018437c: sw $t0, 0x428($sp)
    func_001830f0();  // 0x182f70                                // 0x00184380: jal 0x182f70
    a2 = *(int32_t*)((v1) + 0x3c);                              // 0x00184384: lw $a2, 0x3c($v1)
    if (a0 != 0) goto label_0x184744;                           // 0x0018438c: bnez $a0, 0x184744
    s0 = sp + 0x40;                                             // 0x00184394: addiu $s0, $sp, 0x40
    func_0010af38();  // 0x10ae00                                // 0x00184398: jal 0x10ae00
    v0 = ((unsigned)v0 < (unsigned)0x20) ? 1 : 0;               // 0x001843a0: sltiu $v0, $v0, 0x20
    if (v0 == 0) goto label_0x1843c0;                           // 0x001843a4: beqz $v0, 0x1843c0
    a1 = 0x23 << 16;                                            // 0x001843a8: lui $a1, 0x23
    func_0010ac68();  // 0x10ab20                                // 0x001843b0: jal 0x10ab20
    a1 = a1 + -0x60a0;                                          // 0x001843b4: addiu $a1, $a1, -0x60a0
    /* beqzl $v0, 0x1843cc */                                   // 0x001843b8: beqzl $v0, 0x1843cc
    v0 = 0x23 << 16;                                            // 0x001843bc: lui $v0, 0x23
label_0x1843c0:
    v0 = 0x8101 << 16;                                          // 0x001843c0: lui $v0, 0x8101
    goto label_0x184740;                                        // 0x001843c4: b 0x184740
    v0 = v0 | 0x9002;                                           // 0x001843c8: ori $v0, $v0, 0x9002
    s0 = v0 + -0x6088;                                          // 0x001843d0: addiu $s0, $v0, -0x6088
    func_0010ac68();  // 0x10ab20                                // 0x001843d4: jal 0x10ab20
    if (v0 != 0) goto label_0x184494;                           // 0x001843dc: bnez $v0, 0x184494
    v0 = a2 & 7;                                                // 0x001843e8: andi $v0, $a2, 7
    if (v0 == 0) goto label_0x184454;                           // 0x001843ec: beqz $v0, 0x184454
    v0 = sp + 0x200;                                            // 0x001843f4: addiu $v0, $sp, 0x200
label_0x1843f8:
    v1 = v1 + 0x20;                                             // 0x00184438: addiu $v1, $v1, 0x20
    a2 = a2 + 0x20;                                             // 0x0018443c: addiu $a2, $a2, 0x20
    /* nop */                                                   // 0x00184440: nop 
    if (v1 != v0) goto label_0x1843f8;                          // 0x00184444: bne $v1, $v0, 0x1843f8
    /* nop */                                                   // 0x00184448: nop 
    goto label_0x184648;                                        // 0x0018444c: b 0x184648
    /* nop */                                                   // 0x00184450: nop 
label_0x184454:
    v0 = sp + 0x200;                                            // 0x00184454: addiu $v0, $sp, 0x200
label_0x184458:
    v1 = v1 + 0x20;                                             // 0x00184478: addiu $v1, $v1, 0x20
    a2 = a2 + 0x20;                                             // 0x0018447c: addiu $a2, $a2, 0x20
    /* nop */                                                   // 0x00184480: nop 
    if (v1 != v0) goto label_0x184458;                          // 0x00184484: bne $v1, $v0, 0x184458
    /* nop */                                                   // 0x00184488: nop 
    goto label_0x184648;                                        // 0x0018448c: b 0x184648
    /* nop */                                                   // 0x00184490: nop 
label_0x184494:
    func_00182628();  // 0x182508                                // 0x00184494: jal 0x182508
    s3 = 0x8101 << 16;                                          // 0x0018449c: lui $s3, 0x8101
    v1 = sp + 0x420;                                            // 0x001844a0: addiu $v1, $sp, 0x420
    s4 = 0x8101 << 16;                                          // 0x001844a4: lui $s4, 0x8101
    local_42c = v1;                                             // 0x001844a8: sw $v1, 0x42c($sp)
    s0 = sp + 0x200;                                            // 0x001844ac: addiu $s0, $sp, 0x200
    s2 = sp + 0x400;                                            // 0x001844b0: addiu $s2, $sp, 0x400
    s6 = 1;                                                     // 0x001844b8: addiu $s6, $zero, 1
    s3 = s3 | 2;                                                // 0x001844bc: ori $s3, $s3, 2
    s4 = s4 | 0x9fff;                                           // 0x001844c0: ori $s4, $s4, 0x9fff
label_0x1844c8:
    func_0010ae00();  // 0x10ac68                                // 0x001844c8: jal 0x10ac68
    a2 = 0x23 << 16;                                            // 0x001844d0: lui $a2, 0x23
    func_00182628();  // 0x182508                                // 0x001844d8: jal 0x182508
    a1 = a2 + -0x6088;                                          // 0x001844dc: addiu $a1, $a2, -0x6088
    if (s1 == 0) fp = s6;                                       // 0x001844e8: movz $fp, $s6, $s1
label_0x1844f4:
    v0 = v0 + 0x20;                                             // 0x00184514: addiu $v0, $v0, 0x20
    v1 = v1 + 0x20;                                             // 0x00184518: addiu $v1, $v1, 0x20
    /* nop */                                                   // 0x0018451c: nop 
    if (v0 != a0) goto label_0x1844f4;                          // 0x00184520: bne $v0, $a0, 0x1844f4
    /* nop */                                                   // 0x00184524: nop 
    t0 = local_210;                                             // 0x00184528: lw $t0, 0x210($sp)
    t1 = local_204;                                             // 0x00184530: lw $t1, 0x204($sp)
    a2 = local_42c;                                             // 0x00184538: lw $a2, 0x42c($sp)
    func_00184320();  // 0x1840a8                                // 0x0018453c: jal 0x1840a8
    v1 = local_0;                                               // 0x00184544: lhu $v1, 0($sp)
    v1 = v1 & 0x2000;                                           // 0x00184548: andi $v1, $v1, 0x2000
    if (v1 != 0) goto label_0x184738;                           // 0x0018454c: bnez $v1, 0x184738
    if (fp == s6) goto label_0x184574;                          // 0x00184554: beq $fp, $s6, 0x184574
    /* nop */                                                   // 0x00184558: nop 
    if (a0 == 0) goto label_0x1844c8;                           // 0x0018455c: beqz $a0, 0x1844c8
    v1 = a0 ^ s3;                                               // 0x00184564: xor $v1, $a0, $s3
    goto label_0x184740;                                        // 0x0018456c: b 0x184740
    if (v1 != 0) v0 = a0;                                       // 0x00184570: movn $v0, $a0, $v1
label_0x184574:
    if (a0 != 0) goto label_0x184654;                           // 0x00184574: bnez $a0, 0x184654
    /* nop */                                                   // 0x00184578: nop 
    if (s5 == 0) goto label_0x184628;                           // 0x0018457c: beqz $s5, 0x184628
    v1 = local_428;                                             // 0x00184580: lw $v1, 0x428($sp)
    v0 = a2 & 7;                                                // 0x00184588: andi $v0, $a2, 7
    if (v0 == 0) goto label_0x1845f0;                           // 0x0018458c: beqz $v0, 0x1845f0
label_0x184594:
    v1 = v1 + 0x20;                                             // 0x001845d4: addiu $v1, $v1, 0x20
    a2 = a2 + 0x20;                                             // 0x001845d8: addiu $a2, $a2, 0x20
    /* nop */                                                   // 0x001845dc: nop 
    if (v1 != s0) goto label_0x184594;                          // 0x001845e0: bne $v1, $s0, 0x184594
    /* nop */                                                   // 0x001845e4: nop 
    goto label_0x184628;                                        // 0x001845e8: b 0x184628
    v1 = local_428;                                             // 0x001845ec: lw $v1, 0x428($sp)
label_0x1845f0:
    v1 = v1 + 0x20;                                             // 0x00184610: addiu $v1, $v1, 0x20
    a2 = a2 + 0x20;                                             // 0x00184614: addiu $a2, $a2, 0x20
    /* nop */                                                   // 0x00184618: nop 
    if (v1 != s0) goto label_0x1845f0;                          // 0x0018461c: bne $v1, $s0, 0x1845f0
    /* nop */                                                   // 0x00184620: nop 
    v1 = local_428;                                             // 0x00184624: lw $v1, 0x428($sp)
label_0x184628:
    if (v1 == 0) goto label_0x184634;                           // 0x00184628: beqz $v1, 0x184634
    v0 = local_420;                                             // 0x0018462c: lw $v0, 0x420($sp)
    *(uint32_t*)(v1) = v0;                                      // 0x00184630: sw $v0, 0($v1)
label_0x184634:
    a0 = local_424;                                             // 0x00184634: lw $a0, 0x424($sp)
    if (a0 == 0) goto label_0x184648;                           // 0x00184638: beqz $a0, 0x184648
    /* nop */                                                   // 0x0018463c: nop 
    v0 = local_210;                                             // 0x00184640: lw $v0, 0x210($sp)
    *(uint32_t*)(a0) = v0;                                      // 0x00184644: sw $v0, 0($a0)
label_0x184648:
    v0 = 0x8101 << 16;                                          // 0x00184648: lui $v0, 0x8101
    goto label_0x184740;                                        // 0x0018464c: b 0x184740
    v0 = v0 | 0x11;                                             // 0x00184650: ori $v0, $v0, 0x11
label_0x184654:
    v0 = 0x8101 << 16;                                          // 0x00184654: lui $v0, 0x8101
    v0 = v0 | 2;                                                // 0x00184658: ori $v0, $v0, 2
    if (a0 != v0) goto label_0x184740;                          // 0x0018465c: bne $a0, $v0, 0x184740
    if (s5 == 0) goto label_0x184710;                           // 0x00184664: beqz $s5, 0x184710
    v0 = local_428;                                             // 0x00184668: lw $v0, 0x428($sp)
    v0 = a2 & 7;                                                // 0x00184670: andi $v0, $a2, 7
    if (v0 == 0) goto label_0x1846d8;                           // 0x00184674: beqz $v0, 0x1846d8
label_0x18467c:
    v1 = v1 + 0x20;                                             // 0x001846bc: addiu $v1, $v1, 0x20
    a2 = a2 + 0x20;                                             // 0x001846c0: addiu $a2, $a2, 0x20
    /* nop */                                                   // 0x001846c4: nop 
    if (v1 != s2) goto label_0x18467c;                          // 0x001846c8: bne $v1, $s2, 0x18467c
    /* nop */                                                   // 0x001846cc: nop 
    goto label_0x184710;                                        // 0x001846d0: b 0x184710
    v0 = local_428;                                             // 0x001846d4: lw $v0, 0x428($sp)
label_0x1846d8:
    v1 = v1 + 0x20;                                             // 0x001846f8: addiu $v1, $v1, 0x20
    a2 = a2 + 0x20;                                             // 0x001846fc: addiu $a2, $a2, 0x20
    /* nop */                                                   // 0x00184700: nop 
    if (v1 != s2) goto label_0x1846d8;                          // 0x00184704: bne $v1, $s2, 0x1846d8
    /* nop */                                                   // 0x00184708: nop 
    v0 = local_428;                                             // 0x0018470c: lw $v0, 0x428($sp)
label_0x184710:
    /* bnezl $v0, 0x184718 */                                   // 0x00184710: bnezl $v0, 0x184718
    g_81010000 = 0;  // Global at 0x81010000                    // 0x00184714: sw $zero, 0($v0)
    v1 = local_424;                                             // 0x00184718: lw $v1, 0x424($sp)
    if (v1 == 0) goto label_0x18472c;                           // 0x0018471c: beqz $v1, 0x18472c
    /* nop */                                                   // 0x00184720: nop 
    v0 = local_210;                                             // 0x00184724: lw $v0, 0x210($sp)
    *(uint32_t*)(v1) = v0;                                      // 0x00184728: sw $v0, 0($v1)
label_0x18472c:
    v0 = 0x8101 << 16;                                          // 0x0018472c: lui $v0, 0x8101
    goto label_0x184740;                                        // 0x00184730: b 0x184740
    v0 = v0 | 2;                                                // 0x00184734: ori $v0, $v0, 2
label_0x184738:
    v0 = 0x8101 << 16;                                          // 0x00184738: lui $v0, 0x8101
    v0 = v0 | 0xd;                                              // 0x0018473c: ori $v0, $v0, 0xd
label_0x184740:
label_0x184744:
    return;                                                     // 0x00184768: jr $ra
    sp = sp + 0x4d0;                                            // 0x0018476c: addiu $sp, $sp, 0x4d0
}