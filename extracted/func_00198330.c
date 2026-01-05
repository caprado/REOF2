void func_00198330() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_70, local_74, local_78, local_7c, local_80, local_84, local_90, local_94;
    uint32_t local_98, local_9c, local_a0, local_a4;
    
    sp = sp + -0xb0;                                            // 0x00198330: addiu $sp, $sp, -0xb0
    v0 = 0x29 << 16;                                            // 0x00198334: lui $v0, 0x29
    v0 = v0 + -0x7380;                                          // 0x0019833c: addiu $v0, $v0, -0x7380
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x00198340: subu.qb $zero, $sp, $s5
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x00198348: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x00198350: addu.qb $zero, $sp, $s1
    t2 = a0 & 0xffff;                                           // 0x00198360: andi $t2, $a0, 0xffff
    t1 = t2 + -1;                                               // 0x00198364: addiu $t1, $t2, -1
    v1 = t1 << 3;                                               // 0x00198368: sll $v1, $t1, 3
    v1 = v1 - t1;                                               // 0x0019836c: subu $v1, $v1, $t1
    v1 = v1 << 3;                                               // 0x00198370: sll $v1, $v1, 3
    if (t2 != 0) goto label_0x198384;                           // 0x00198374: bnez $t2, 0x198384
    s0 = v0 + v1;                                               // 0x00198378: addu $s0, $v0, $v1
    goto label_0x198848;                                        // 0x0019837c: b 0x198848
label_0x198384:
    v0 = *(int16_t*)((s0) + 0x14);                              // 0x00198384: lh $v0, 0x14($s0)
    if (v0 != 0) goto label_0x198398;                           // 0x00198388: bnez $v0, 0x198398
    goto label_0x19884c;                                        // 0x00198390: b 0x19884c
label_0x198398:
    v0 = *(int8_t*)((s0) + 0x35);                               // 0x00198398: lb $v0, 0x35($s0)
    if (v0 != 0) goto label_0x1983ac;                           // 0x0019839c: bnez $v0, 0x1983ac
    goto label_0x198848;                                        // 0x001983a4: b 0x198848
    /* nop */                                                   // 0x001983a8: nop 
label_0x1983ac:
    v0 = *(int32_t*)((s0) + 4);                                 // 0x001983ac: lw $v0, 4($s0)
    v0 = v0 & 4;                                                // 0x001983b0: andi $v0, $v0, 4
    if (v0 == 0) goto label_0x19841c;                           // 0x001983b4: beqz $v0, 0x19841c
    v0 = 0xc0 << 16;                                            // 0x001983b8: lui $v0, 0xc0
    v0 = 0xffff << 16;                                          // 0x001983bc: lui $v0, 0xffff
    v0 = a0 & v0;                                               // 0x001983c0: and $v0, $a0, $v0
    v0 = (unsigned)v0 >> 0x10;                                  // 0x001983c4: srl $v0, $v0, 0x10
    if (v0 != 0) goto label_0x1983d8;                           // 0x001983c8: bnez $v0, 0x1983d8
    t1 = v0 + -1;                                               // 0x001983cc: addiu $t1, $v0, -1
    goto label_0x198848;                                        // 0x001983d0: b 0x198848
label_0x1983d8:
    v1 = t1 << 3;                                               // 0x001983d8: sll $v1, $t1, 3
    v0 = 0x28 << 16;                                            // 0x001983dc: lui $v0, 0x28
    v1 = v1 - t1;                                               // 0x001983e0: subu $v1, $v1, $t1
    v0 = v0 + 0x5480;                                           // 0x001983e4: addiu $v0, $v0, 0x5480
    v1 = v1 << 3;                                               // 0x001983e8: sll $v1, $v1, 3
    v1 = v0 + v1;                                               // 0x001983ec: addu $v1, $v0, $v1
    v0 = g_00060013;  // Global at 0x00060013                   // 0x001983f0: lh $v0, 0x14($v1)
    if (v0 != 0) goto label_0x198404;                           // 0x001983f4: bnez $v0, 0x198404
    goto label_0x198848;                                        // 0x001983fc: b 0x198848
    /* nop */                                                   // 0x00198400: nop 
label_0x198404:
    v0 = g_00060034;  // Global at 0x00060034                   // 0x00198404: lb $v0, 0x35($v1)
    if (v0 != 0) goto label_0x198418;                           // 0x00198408: bnez $v0, 0x198418
    goto label_0x198848;                                        // 0x00198410: b 0x198848
    /* nop */                                                   // 0x00198414: nop 
label_0x198418:
    v0 = 0xc0 << 16;                                            // 0x00198418: lui $v0, 0xc0
label_0x19841c:
    v1 = t3 & v0;                                               // 0x0019841c: and $v1, $t3, $v0
    if (v1 == 0) goto label_0x198438;                           // 0x00198420: beqz $v1, 0x198438
    /* nop */                                                   // 0x00198424: nop 
    t1 = *(int32_t*)((s0) + 0x30);                              // 0x00198428: lw $t1, 0x30($s0)
    v0 = 1;                                                     // 0x0019842c: addiu $v0, $zero, 1
    if (t1 != v0) goto label_0x198458;                          // 0x00198430: bne $t1, $v0, 0x198458
    v0 = 0x40 << 16;                                            // 0x00198434: lui $v0, 0x40
label_0x198438:
    v1 = 1 << 16;                                               // 0x00198438: lui $v1, 1
    v0 = t3 & v1;                                               // 0x0019843c: and $v0, $t3, $v1
    if (v0 != v1) goto label_0x198450;                          // 0x00198440: bne $v0, $v1, 0x198450
    v0 = 0x60;                                                  // 0x00198444: addiu $v0, $zero, 0x60
    goto label_0x198564;                                        // 0x00198448: b 0x198564
label_0x198450:
    goto label_0x198564;                                        // 0x00198450: b 0x198564
label_0x198458:
    if (v1 != v0) goto label_0x1984e4;                          // 0x00198458: bne $v1, $v0, 0x1984e4
    /* nop */                                                   // 0x0019845c: nop 
    v1 = 1 << 16;                                               // 0x00198460: lui $v1, 1
    v0 = t3 & v1;                                               // 0x00198464: and $v0, $t3, $v1
    if (v0 != v1) goto label_0x1984ac;                          // 0x00198468: bne $v0, $v1, 0x1984ac
    v0 = t1 + -1;                                               // 0x0019846c: addiu $v0, $t1, -1
    v0 = t1 + -1;                                               // 0x00198470: addiu $v0, $t1, -1
    v0 = *(int32_t*)((gp) + -0x6490);                           // 0x0019847c: lw $v0, -0x6490($gp)
    t1 = t1 | 0x80;                                             // 0x00198488: ori $t1, $t1, 0x80
    v1 = t1 | v1;                                               // 0x00198490: or $v1, $t1, $v1
    v0 = v0 << 4;                                               // 0x00198494: sll $v0, $v0, 4
    v0 = v0 & 0xfff;                                            // 0x00198498: andi $v0, $v0, 0xfff
    v0 = v0 | v1;                                               // 0x001984a0: or $v0, $v0, $v1
    goto label_0x198564;                                        // 0x001984a4: b 0x198564
label_0x1984ac:
    v0 = *(int32_t*)((gp) + -0x6490);                           // 0x001984b4: lw $v0, -0x6490($gp)
    t1 = t1 | 0x120;                                            // 0x001984c0: ori $t1, $t1, 0x120
    v1 = t1 | v1;                                               // 0x001984c8: or $v1, $t1, $v1
    v0 = v0 << 4;                                               // 0x001984cc: sll $v0, $v0, 4
    v0 = v0 & 0xfff;                                            // 0x001984d0: andi $v0, $v0, 0xfff
    v0 = v0 | v1;                                               // 0x001984d8: or $v0, $v0, $v1
    goto label_0x198564;                                        // 0x001984dc: b 0x198564
label_0x1984e4:
    v1 = 1 << 16;                                               // 0x001984e4: lui $v1, 1
    v0 = t3 & v1;                                               // 0x001984e8: and $v0, $t3, $v1
    if (v0 != v1) goto label_0x198530;                          // 0x001984ec: bne $v0, $v1, 0x198530
    v0 = t1 + -1;                                               // 0x001984f0: addiu $v0, $t1, -1
    v0 = t1 + -1;                                               // 0x001984f4: addiu $v0, $t1, -1
    v0 = *(int32_t*)((gp) + -0x6490);                           // 0x00198500: lw $v0, -0x6490($gp)
    t1 = t1 | 0xc0;                                             // 0x0019850c: ori $t1, $t1, 0xc0
    v1 = t1 | v1;                                               // 0x00198514: or $v1, $t1, $v1
    v0 = v0 << 4;                                               // 0x00198518: sll $v0, $v0, 4
    v0 = v0 & 0xfff;                                            // 0x0019851c: andi $v0, $v0, 0xfff
    v0 = v0 | v1;                                               // 0x00198524: or $v0, $v0, $v1
    goto label_0x198564;                                        // 0x00198528: b 0x198564
label_0x198530:
    v0 = *(int32_t*)((gp) + -0x6490);                           // 0x00198538: lw $v0, -0x6490($gp)
    t1 = t1 | 0x160;                                            // 0x00198544: ori $t1, $t1, 0x160
    v1 = t1 | v1;                                               // 0x0019854c: or $v1, $t1, $v1
    v0 = v0 << 4;                                               // 0x00198550: sll $v0, $v0, 4
    v0 = v0 & 0xfff;                                            // 0x00198554: andi $v0, $v0, 0xfff
    v0 = v0 | v1;                                               // 0x0019855c: or $v0, $v0, $v1
label_0x198564:
    v1 = *(int16_t*)((s0) + 0x1a);                              // 0x00198564: lh $v1, 0x1a($s0)
    if (v1 >= 0) goto label_0x198578;                           // 0x00198568: bgez $v1, 0x198578
    v0 = v1 >> 6;                                               // 0x0019856c: sra $v0, $v1, 6
    v0 = v1 + 0x3f;                                             // 0x00198570: addiu $v0, $v1, 0x3f
    v0 = v0 >> 6;                                               // 0x00198574: sra $v0, $v0, 6
label_0x198578:
    if (v1 != 0) goto label_0x19858c;                           // 0x00198580: bnez $v1, 0x19858c
    /* nop */                                                   // 0x00198584: nop 
    v1 = 1;                                                     // 0x00198588: addiu $v1, $zero, 1
label_0x19858c:
    v0 = *(int32_t*)((s0) + 4);                                 // 0x0019858c: lw $v0, 4($s0)
    v0 = v0 & 4;                                                // 0x00198590: andi $v0, $v0, 4
    if (v0 == 0) goto label_0x198660;                           // 0x00198594: beqz $v0, 0x198660
    a2 = 0xffff << 16;                                          // 0x00198598: lui $a2, 0xffff
    v0 = 0x28 << 16;                                            // 0x0019859c: lui $v0, 0x28
    a2 = a0 & a2;                                               // 0x001985a0: and $a2, $a0, $a2
    v0 = v0 + 0x5480;                                           // 0x001985a4: addiu $v0, $v0, 0x5480
    a2 = (unsigned)a2 >> 0x10;                                  // 0x001985a8: srl $a2, $a2, 0x10
    a0 = 3;                                                     // 0x001985ac: addiu $a0, $zero, 3
    t1 = a2 + -1;                                               // 0x001985b0: addiu $t1, $a2, -1
    a2 = t1 << 3;                                               // 0x001985b4: sll $a2, $t1, 3
    a2 = a2 - t1;                                               // 0x001985b8: subu $a2, $a2, $t1
    a2 = a2 << 3;                                               // 0x001985bc: sll $a2, $a2, 3
    v0 = v0 + a2;                                               // 0x001985c0: addu $v0, $v0, $a2
    a2 = g_0028548c;  // Global at 0x0028548c                   // 0x001985c4: lw $a2, 0xc($v0)
    if (a2 != a0) goto label_0x1985e4;                          // 0x001985c8: bne $a2, $a0, 0x1985e4
    /* nop */                                                   // 0x001985cc: nop 
    a2 = 0x80;                                                  // 0x001985d0: addiu $a2, $zero, 0x80
    a0 = a2 | a0;                                               // 0x001985d8: or $a0, $a2, $a0
    goto label_0x1985f0;                                        // 0x001985dc: b 0x1985f0
label_0x1985e4:
    a0 = 0x80;                                                  // 0x001985e4: addiu $a0, $zero, 0x80
label_0x1985f0:
    a1 = g_00285494;  // Global at 0x00285494                   // 0x001985f4: lh $a1, 0x14($v0)
    t6 = *(int16_t*)((s0) + 0x14);                              // 0x00198604: lh $t6, 0x14($s0)
    v1 = 4;                                                     // 0x00198608: addiu $v1, $zero, 4
    t2 = *(int16_t*)((s0) + 0x16);                              // 0x00198614: lh $t2, 0x16($s0)
    v1 = 0x4000 << 16;                                          // 0x00198618: lui $v1, 0x4000
    t1 = *(int16_t*)((s0) + 0x18);                              // 0x0019861c: lh $t1, 0x18($s0)
    t5 = t6 | t5;                                               // 0x00198628: or $t5, $t6, $t5
    t4 = v1 | t5;                                               // 0x00198630: or $t4, $v1, $t5
    t2 = v1 | t4;                                               // 0x00198638: or $t2, $v1, $t4
    v1 = v1 | t2;                                               // 0x00198640: or $v1, $v1, $t2
    a2 = v1 | a2;                                               // 0x00198644: or $a2, $v1, $a2
    a0 = a1 | a2;                                               // 0x0019864c: or $a0, $a1, $a2
    v1 = v1 | a0;                                               // 0x00198650: or $v1, $v1, $a0
    v0 = v1 | v0;                                               // 0x00198654: or $v0, $v1, $v0
    goto label_0x1986d4;                                        // 0x00198658: b 0x1986d4
label_0x198660:
    a0 = *(int32_t*)((s0) + 0xc);                               // 0x00198660: lw $a0, 0xc($s0)
    v0 = 3;                                                     // 0x00198664: addiu $v0, $zero, 3
    if (a0 != v0) goto label_0x198684;                          // 0x00198668: bne $a0, $v0, 0x198684
    v0 = 0x80;                                                  // 0x0019866c: addiu $v0, $zero, 0x80
    a0 = 0x80;                                                  // 0x00198670: addiu $a0, $zero, 0x80
    v0 = a0 | v0;                                               // 0x00198678: or $v0, $a0, $v0
    goto label_0x19868c;                                        // 0x0019867c: b 0x19868c
label_0x198684:
label_0x19868c:
    a0 = *(int16_t*)((s0) + 0x16);                              // 0x00198694: lh $a0, 0x16($s0)
    v1 = *(int16_t*)((s0) + 0x18);                              // 0x0019869c: lh $v1, 0x18($s0)
    t1 = *(int16_t*)((s0) + 0x14);                              // 0x001986a4: lh $t1, 0x14($s0)
    v0 = 4;                                                     // 0x001986a8: addiu $v0, $zero, 4
    a2 = t1 | a2;                                               // 0x001986bc: or $a2, $t1, $a2
    a1 = a1 | a2;                                               // 0x001986c0: or $a1, $a1, $a2
    a0 = a0 | a1;                                               // 0x001986c4: or $a0, $a0, $a1
    v1 = v1 | a0;                                               // 0x001986c8: or $v1, $v1, $a0
    v0 = v1 | v0;                                               // 0x001986cc: or $v0, $v1, $v0
label_0x1986d4:
    v1 = 6 << 16;                                               // 0x001986d4: lui $v1, 6
    v0 = 2 << 16;                                               // 0x001986d8: lui $v0, 2
    v1 = t3 & v1;                                               // 0x001986dc: and $v1, $t3, $v1
    if (v1 == v0) goto label_0x198700;                          // 0x001986e0: beq $v1, $v0, 0x198700
    /* nop */                                                   // 0x001986e4: nop 
    if (v1 == 0) goto label_0x1986f8;                           // 0x001986e8: beqz $v1, 0x1986f8
    /* nop */                                                   // 0x001986ec: nop 
    goto label_0x198704;                                        // 0x001986f0: b 0x198704
    v1 = *(int16_t*)((s0) + 0x1a);                              // 0x001986f4: lh $v1, 0x1a($s0)
label_0x1986f8:
    goto label_0x19871c;                                        // 0x001986f8: b 0x19871c
label_0x198700:
    v1 = *(int16_t*)((s0) + 0x1a);                              // 0x00198700: lh $v1, 0x1a($s0)
label_0x198704:
    v0 = *(int16_t*)((s0) + 0x1c);                              // 0x00198704: lh $v0, 0x1c($s0)
    v1 = v1 | 0xa;                                              // 0x0019870c: ori $v1, $v1, 0xa
    v0 = v1 | v0;                                               // 0x00198714: or $v0, $v1, $v0
label_0x19871c:
    v0 = *(int32_t*)((s0) + 0x30);                              // 0x00198724: lw $v0, 0x30($s0)
    at = ((unsigned)v0 < (unsigned)2) ? 1 : 0;                  // 0x00198728: sltiu $at, $v0, 2
    if (at != 0) goto label_0x198848;                           // 0x0019872c: bnez $at, 0x198848
    v0 = 1;                                                     // 0x00198730: addiu $v0, $zero, 1
    v1 = 5;                                                     // 0x00198734: addiu $v1, $zero, 5
label_0x198738:
    v0 = v1 << 2;                                               // 0x00198738: sll $v0, $v1, 2
    v0 = v0 + sp;                                               // 0x0019873c: addu $v0, $v0, $sp
    v1 = v1 + -1;                                               // 0x00198740: addiu $v1, $v1, -1
    g_00020090 = 0;  // Global at 0x00020090                    // 0x00198744: sw $zero, 0x90($v0)
    g_00020070 = 0;  // Global at 0x00020070                    // 0x00198748: sw $zero, 0x70($v0)
    if (v1 >= 0) goto label_0x198738;                           // 0x0019874c: bgez $v1, 0x198738
    /* nop */                                                   // 0x00198750: nop 
    v0 = *(int16_t*)((s0) + 0x1a);                              // 0x00198754: lh $v0, 0x1a($s0)
    goto label_0x1987a8;                                        // 0x0019875c: b 0x1987a8
    s4 = v0 >> 1;                                               // 0x00198760: sra $s4, $v0, 1
label_0x198764:
    func_0019cd80();  // 19cd80                                // 0x00198768: jal 0x19cd80
    s5 = s3 << 2;                                               // 0x0019876c: sll $s5, $s3, 2
    a0 = s5 + sp;                                               // 0x00198770: addu $a0, $s5, $sp
    v1 = s4 >> 6;                                               // 0x00198774: sra $v1, $s4, 6
    *(uint32_t*)((a0) + 0x90) = v0;                             // 0x00198778: sw $v0, 0x90($a0)
    if (s4 >= 0) goto label_0x19878c;                           // 0x0019877c: bgez $s4, 0x19878c
    a0 = a0 + 0x70;                                             // 0x00198780: addiu $a0, $a0, 0x70
    v0 = s4 + 0x3f;                                             // 0x00198784: addiu $v0, $s4, 0x3f
    v1 = v0 >> 6;                                               // 0x00198788: sra $v1, $v0, 6
label_0x19878c:
    *(uint32_t*)(a0) = v1;                                      // 0x0019878c: sw $v1, 0($a0)
    v0 = *(int32_t*)(a0);                                       // 0x00198790: lw $v0, 0($a0)
    if (v0 != 0) goto label_0x1987a0;                           // 0x00198794: bnez $v0, 0x1987a0
    v0 = 1;                                                     // 0x00198798: addiu $v0, $zero, 1
    *(uint32_t*)(a0) = v0;                                      // 0x0019879c: sw $v0, 0($a0)
label_0x1987a0:
    s4 = s4 >> 1;                                               // 0x001987a0: sra $s4, $s4, 1
    s3 = s3 + 1;                                                // 0x001987a4: addiu $s3, $s3, 1
label_0x1987a8:
    v0 = *(int32_t*)((s0) + 0x30);                              // 0x001987a8: lw $v0, 0x30($s0)
    v0 = v0 + -1;                                               // 0x001987ac: addiu $v0, $v0, -1
    v0 = ((unsigned)s3 < (unsigned)v0) ? 1 : 0;                 // 0x001987b0: sltu $v0, $s3, $v0
    if (v0 != 0) goto label_0x198764;                           // 0x001987b4: bnez $v0, 0x198764
    a1 = s3 + 1;                                                // 0x001987b8: addiu $a1, $s3, 1
    a2 = local_70;                                              // 0x001987bc: lw $a2, 0x70($sp)
    a1 = local_94;                                              // 0x001987c0: lw $a1, 0x94($sp)
    a0 = local_74;                                              // 0x001987c4: lw $a0, 0x74($sp)
    v1 = local_98;                                              // 0x001987c8: lw $v1, 0x98($sp)
    v0 = local_78;                                              // 0x001987cc: lw $v0, 0x78($sp)
    a3 = local_90;                                              // 0x001987d0: lw $a3, 0x90($sp)
    a2 = a3 | a2;                                               // 0x001987e8: or $a2, $a3, $a2
    a1 = a1 | a2;                                               // 0x001987ec: or $a1, $a1, $a2
    a0 = a0 | a1;                                               // 0x001987f0: or $a0, $a0, $a1
    v1 = v1 | a0;                                               // 0x001987f4: or $v1, $v1, $a0
    v0 = v0 | v1;                                               // 0x001987f8: or $v0, $v0, $v1
    a2 = local_7c;                                              // 0x00198800: lw $a2, 0x7c($sp)
    a1 = local_a0;                                              // 0x00198804: lw $a1, 0xa0($sp)
    a0 = local_80;                                              // 0x00198808: lw $a0, 0x80($sp)
    v1 = local_a4;                                              // 0x0019880c: lw $v1, 0xa4($sp)
    v0 = local_84;                                              // 0x00198810: lw $v0, 0x84($sp)
    a3 = local_9c;                                              // 0x00198814: lw $a3, 0x9c($sp)
    a2 = a3 | a2;                                               // 0x0019882c: or $a2, $a3, $a2
    a1 = a1 | a2;                                               // 0x00198830: or $a1, $a1, $a2
    a0 = a0 | a1;                                               // 0x00198834: or $a0, $a0, $a1
    v1 = v1 | a0;                                               // 0x00198838: or $v1, $v1, $a0
    v0 = v0 | v1;                                               // 0x0019883c: or $v0, $v0, $v1
    v0 = 1;                                                     // 0x00198844: addiu $v0, $zero, 1
label_0x198848:
label_0x19884c:
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x0019884c: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x00198850: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x00198858: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x0019885c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x00198860: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x00198864: jr $ra
    sp = sp + 0xb0;                                             // 0x00198868: addiu $sp, $sp, 0xb0
}