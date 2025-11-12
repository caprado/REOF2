void func_001104e8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    if (t0 != 0) goto label_0x110888;                           // 0x00110500: bnez $t0, 0x110888
    v0 = ((unsigned)t2 < (unsigned)t0) ? 1 : 0;                 // 0x00110504: sltu $v0, $t2, $t0
    v0 = ((unsigned)t2 < (unsigned)t1) ? 1 : 0;                 // 0x00110508: sltu $v0, $t2, $t1
    if (v0 == 0) goto label_0x110648;                           // 0x0011050c: beqz $v0, 0x110648
    v0 = 0 | 0xffff;                                            // 0x00110510: ori $v0, $zero, 0xffff
    v0 = ((unsigned)v0 < (unsigned)t1) ? 1 : 0;                 // 0x00110514: sltu $v0, $v0, $t1
    if (v0 != 0) goto label_0x110530;                           // 0x00110518: bnez $v0, 0x110530
    v0 = 0xff << 16;                                            // 0x0011051c: lui $v0, 0xff
    v0 = ((unsigned)t1 < (unsigned)0x100) ? 1 : 0;              // 0x00110520: sltiu $v0, $t1, 0x100
    a0 = 8;                                                     // 0x00110524: addiu $a0, $zero, 8
    goto label_0x110544;                                        // 0x00110528: b 0x110544
    if (v0 != 0) a0 = 0;                                        // 0x0011052c: movn $a0, $zero, $v0
label_0x110530:
    v1 = 0x18;                                                  // 0x00110530: addiu $v1, $zero, 0x18
    v0 = v0 | 0xffff;                                           // 0x00110534: ori $v0, $v0, 0xffff
    a0 = 0x10;                                                  // 0x00110538: addiu $a0, $zero, 0x10
    v0 = ((unsigned)v0 < (unsigned)t1) ? 1 : 0;                 // 0x0011053c: sltu $v0, $v0, $t1
    if (v0 != 0) a0 = v1;                                       // 0x00110540: movn $a0, $v1, $v0
label_0x110544:
    v1 = (unsigned)t1 >> a0;                                    // 0x00110544: srlv $v1, $t1, $a0
    a1 = 0x20;                                                  // 0x00110548: addiu $a1, $zero, 0x20
    v0 = 0x22 << 16;                                            // 0x0011054c: lui $v0, 0x22
    v0 = v0 + v1;                                               // 0x00110550: addu $v0, $v0, $v1
    v0 = g_00220c20;  // Global at 0x00220c20                   // 0x00110554: lbu $v0, 0xc20($v0)
    v0 = v0 + a0;                                               // 0x00110558: addu $v0, $v0, $a0
    a2 = a1 - v0;                                               // 0x0011055c: subu $a2, $a1, $v0
    if (a2 == 0) goto label_0x11057c;                           // 0x00110560: beqz $a2, 0x11057c
    v0 = a1 - a2;                                               // 0x00110564: subu $v0, $a1, $a2
    v1 = t2 << a2;                                              // 0x00110568: sllv $v1, $t2, $a2
    v0 = (unsigned)t3 >> v0;                                    // 0x0011056c: srlv $v0, $t3, $v0
    t3 = t3 << a2;                                              // 0x00110570: sllv $t3, $t3, $a2
    t2 = v1 | v0;                                               // 0x00110574: or $t2, $v1, $v0
    t1 = t1 << a2;                                              // 0x00110578: sllv $t1, $t1, $a2
label_0x11057c:
    a2 = (unsigned)t1 >> 0x10;                                  // 0x0011057c: srl $a2, $t1, 0x10
    t0 = t1 & 0xffff;                                           // 0x00110580: andi $t0, $t1, 0xffff
    /* divide: t2 / a2 -> hi:lo */                              // 0x00110584: divu $zero, $t2, $a2
    a0 = (unsigned)t3 >> 0x10;                                  // 0x00110588: srl $a0, $t3, 0x10
    /* beqzl $a2, 0x110594 */                                   // 0x0011058c: beqzl $a2, 0x110594
    /* break (trap) */                                          // 0x00110590: break 0, 7
    /* mflo $v0 */                                              // 0x00110594
    /* mfhi $v1 */                                              // 0x00110598
    v1 = v1 << 0x10;                                            // 0x001105a0: sll $v1, $v1, 0x10
    v1 = v1 | a0;                                               // 0x001105a8: or $v1, $v1, $a0
    v0 = ((unsigned)v1 < (unsigned)a1) ? 1 : 0;                 // 0x001105ac: sltu $v0, $v1, $a1
    /* beqzl $v0, 0x1105e4 */                                   // 0x001105b0: beqzl $v0, 0x1105e4
    v1 = v1 - a1;                                               // 0x001105b4: subu $v1, $v1, $a1
    v1 = v1 + t1;                                               // 0x001105b8: addu $v1, $v1, $t1
    v0 = ((unsigned)v1 < (unsigned)t1) ? 1 : 0;                 // 0x001105bc: sltu $v0, $v1, $t1
    if (v0 != 0) goto label_0x1105e0;                           // 0x001105c0: bnez $v0, 0x1105e0
    a3 = a3 + -1;                                               // 0x001105c4: addiu $a3, $a3, -1
    v0 = ((unsigned)v1 < (unsigned)a1) ? 1 : 0;                 // 0x001105c8: sltu $v0, $v1, $a1
    /* beqzl $v0, 0x1105e4 */                                   // 0x001105cc: beqzl $v0, 0x1105e4
    v1 = v1 - a1;                                               // 0x001105d0: subu $v1, $v1, $a1
    a3 = a3 + -1;                                               // 0x001105d4: addiu $a3, $a3, -1
    v1 = v1 + t1;                                               // 0x001105d8: addu $v1, $v1, $t1
    /* nop */                                                   // 0x001105dc: nop 
label_0x1105e0:
    v1 = v1 - a1;                                               // 0x001105e0: subu $v1, $v1, $a1
    /* beqzl $a2, 0x1105ec */                                   // 0x001105e4: beqzl $a2, 0x1105ec
    /* break (trap) */                                          // 0x001105e8: break 0, 7
    /* divide: v1 / a2 -> hi:lo */                              // 0x001105ec: divu $zero, $v1, $a2
    a0 = t3 & 0xffff;                                           // 0x001105f0: andi $a0, $t3, 0xffff
    /* mflo $v0 */                                              // 0x001105f4
    /* mfhi $v1 */                                              // 0x001105f8
    v1 = v1 << 0x10;                                            // 0x00110600: sll $v1, $v1, 0x10
    v1 = v1 | a0;                                               // 0x00110608: or $v1, $v1, $a0
    v0 = ((unsigned)v1 < (unsigned)a1) ? 1 : 0;                 // 0x0011060c: sltu $v0, $v1, $a1
    if (v0 == 0) goto label_0x11063c;                           // 0x00110610: beqz $v0, 0x11063c
    v0 = a3 << 0x10;                                            // 0x00110614: sll $v0, $a3, 0x10
    v1 = v1 + t1;                                               // 0x00110618: addu $v1, $v1, $t1
    v0 = ((unsigned)v1 < (unsigned)t1) ? 1 : 0;                 // 0x0011061c: sltu $v0, $v1, $t1
    if (v0 != 0) goto label_0x110638;                           // 0x00110620: bnez $v0, 0x110638
    a2 = a2 + -1;                                               // 0x00110624: addiu $a2, $a2, -1
    v0 = ((unsigned)v1 < (unsigned)a1) ? 1 : 0;                 // 0x00110628: sltu $v0, $v1, $a1
    v1 = a2 + -1;                                               // 0x0011062c: addiu $v1, $a2, -1
    v0 = v0 ^ 0;                                                // 0x00110630: xori $v0, $v0, 0
    if (v0 != 0) a2 = v1;                                       // 0x00110634: movn $a2, $v1, $v0
label_0x110638:
    v0 = a3 << 0x10;                                            // 0x00110638: sll $v0, $a3, 0x10
label_0x11063c:
    goto label_0x110a30;                                        // 0x0011063c: b 0x110a30
    a2 = v0 | a2;                                               // 0x00110640: or $a2, $v0, $a2
    /* nop */                                                   // 0x00110644: nop 
label_0x110648:
    if (t1 != 0) goto label_0x110670;                           // 0x00110648: bnez $t1, 0x110670
    v0 = ((unsigned)v0 < (unsigned)t1) ? 1 : 0;                 // 0x0011064c: sltu $v0, $v0, $t1
    v0 = 1;                                                     // 0x00110650: addiu $v0, $zero, 1
    /* beqzl $t1, 0x11065c */                                   // 0x00110654: beqzl $t1, 0x11065c
    /* break (trap) */                                          // 0x00110658: break 0, 7
    /* divide: v0 / t0 -> hi:lo */                              // 0x0011065c: divu $zero, $v0, $t0
    /* mflo $v0 */                                              // 0x00110660
    v0 = 0 | 0xffff;                                            // 0x00110668: ori $v0, $zero, 0xffff
    v0 = ((unsigned)v0 < (unsigned)t1) ? 1 : 0;                 // 0x0011066c: sltu $v0, $v0, $t1
label_0x110670:
    if (v0 != 0) goto label_0x110688;                           // 0x00110670: bnez $v0, 0x110688
    v0 = 0xff << 16;                                            // 0x00110674: lui $v0, 0xff
    v0 = ((unsigned)t1 < (unsigned)0x100) ? 1 : 0;              // 0x00110678: sltiu $v0, $t1, 0x100
    a0 = 8;                                                     // 0x0011067c: addiu $a0, $zero, 8
    goto label_0x11069c;                                        // 0x00110680: b 0x11069c
    if (v0 != 0) a0 = 0;                                        // 0x00110684: movn $a0, $zero, $v0
label_0x110688:
    v1 = 0x18;                                                  // 0x00110688: addiu $v1, $zero, 0x18
    v0 = v0 | 0xffff;                                           // 0x0011068c: ori $v0, $v0, 0xffff
    a0 = 0x10;                                                  // 0x00110690: addiu $a0, $zero, 0x10
    v0 = ((unsigned)v0 < (unsigned)t1) ? 1 : 0;                 // 0x00110694: sltu $v0, $v0, $t1
    if (v0 != 0) a0 = v1;                                       // 0x00110698: movn $a0, $v1, $v0
label_0x11069c:
    v1 = (unsigned)t1 >> a0;                                    // 0x0011069c: srlv $v1, $t1, $a0
    a1 = 0x20;                                                  // 0x001106a0: addiu $a1, $zero, 0x20
    v0 = 0x22 << 16;                                            // 0x001106a4: lui $v0, 0x22
    v0 = v0 + v1;                                               // 0x001106a8: addu $v0, $v0, $v1
    v0 = g_00220c20;  // Global at 0x00220c20                   // 0x001106ac: lbu $v0, 0xc20($v0)
    v0 = v0 + a0;                                               // 0x001106b0: addu $v0, $v0, $a0
    a2 = a1 - v0;                                               // 0x001106b4: subu $a2, $a1, $v0
    if (a2 != 0) goto label_0x1106d8;                           // 0x001106b8: bnez $a2, 0x1106d8
    a3 = a1 - a2;                                               // 0x001106bc: subu $a3, $a1, $a2
    t2 = t2 - t1;                                               // 0x001106c0: subu $t2, $t2, $t1
    t5 = 1;                                                     // 0x001106c4: addiu $t5, $zero, 1
    t0 = (unsigned)t1 >> 0x10;                                  // 0x001106c8: srl $t0, $t1, 0x10
    goto label_0x1107c0;                                        // 0x001106cc: b 0x1107c0
    t4 = t1 & 0xffff;                                           // 0x001106d0: andi $t4, $t1, 0xffff
    /* nop */                                                   // 0x001106d4: nop 
label_0x1106d8:
    v1 = t2 << a2;                                              // 0x001106d8: sllv $v1, $t2, $a2
    v0 = (unsigned)t3 >> a3;                                    // 0x001106dc: srlv $v0, $t3, $a3
    t3 = t3 << a2;                                              // 0x001106e0: sllv $t3, $t3, $a2
    a0 = (unsigned)t2 >> a3;                                    // 0x001106e4: srlv $a0, $t2, $a3
    t2 = v1 | v0;                                               // 0x001106e8: or $t2, $v1, $v0
    t1 = t1 << a2;                                              // 0x001106ec: sllv $t1, $t1, $a2
    t0 = (unsigned)t1 >> 0x10;                                  // 0x001106f0: srl $t0, $t1, 0x10
    /* divide: a0 / t0 -> hi:lo */                              // 0x001106f4: divu $zero, $a0, $t0
    a0 = (unsigned)t2 >> 0x10;                                  // 0x001106f8: srl $a0, $t2, 0x10
    t4 = t1 & 0xffff;                                           // 0x001106fc: andi $t4, $t1, 0xffff
    /* beqzl $a2, 0x11070c */                                   // 0x00110704: beqzl $a2, 0x11070c
    /* break (trap) */                                          // 0x00110708: break 0, 7
    /* mflo $v0 */                                              // 0x0011070c
    /* mfhi $v1 */                                              // 0x00110710
    v1 = v1 << 0x10;                                            // 0x00110718: sll $v1, $v1, 0x10
    v1 = v1 | a0;                                               // 0x00110720: or $v1, $v1, $a0
    v0 = ((unsigned)v1 < (unsigned)a1) ? 1 : 0;                 // 0x00110724: sltu $v0, $v1, $a1
    if (v0 == 0) goto label_0x110758;                           // 0x00110728: beqz $v0, 0x110758
    v1 = v1 + t1;                                               // 0x00110730: addu $v1, $v1, $t1
    v0 = ((unsigned)v1 < (unsigned)t1) ? 1 : 0;                 // 0x00110734: sltu $v0, $v1, $t1
    if (v0 != 0) goto label_0x110758;                           // 0x00110738: bnez $v0, 0x110758
    a3 = a3 + -1;                                               // 0x0011073c: addiu $a3, $a3, -1
    v0 = ((unsigned)v1 < (unsigned)a1) ? 1 : 0;                 // 0x00110740: sltu $v0, $v1, $a1
    /* beqzl $v0, 0x11075c */                                   // 0x00110744: beqzl $v0, 0x11075c
    v1 = v1 - a1;                                               // 0x00110748: subu $v1, $v1, $a1
    a3 = a3 + -1;                                               // 0x0011074c: addiu $a3, $a3, -1
    v1 = v1 + t1;                                               // 0x00110750: addu $v1, $v1, $t1
    /* nop */                                                   // 0x00110754: nop 
label_0x110758:
    v1 = v1 - a1;                                               // 0x00110758: subu $v1, $v1, $a1
    /* beqzl $a2, 0x110764 */                                   // 0x0011075c: beqzl $a2, 0x110764
    /* break (trap) */                                          // 0x00110760: break 0, 7
    /* divide: v1 / a2 -> hi:lo */                              // 0x00110764: divu $zero, $v1, $a2
    a0 = t2 & 0xffff;                                           // 0x00110768: andi $a0, $t2, 0xffff
    /* mflo $v0 */                                              // 0x0011076c
    /* mfhi $v1 */                                              // 0x00110770
    v1 = v1 << 0x10;                                            // 0x00110778: sll $v1, $v1, 0x10
    v1 = v1 | a0;                                               // 0x00110780: or $v1, $v1, $a0
    v0 = ((unsigned)v1 < (unsigned)a1) ? 1 : 0;                 // 0x00110784: sltu $v0, $v1, $a1
    if (v0 == 0) goto label_0x1107b8;                           // 0x00110788: beqz $v0, 0x1107b8
    v0 = a3 << 0x10;                                            // 0x0011078c: sll $v0, $a3, 0x10
    v1 = v1 + t1;                                               // 0x00110790: addu $v1, $v1, $t1
    v0 = ((unsigned)v1 < (unsigned)t1) ? 1 : 0;                 // 0x00110794: sltu $v0, $v1, $t1
    if (v0 != 0) goto label_0x1107b4;                           // 0x00110798: bnez $v0, 0x1107b4
    a2 = a2 + -1;                                               // 0x0011079c: addiu $a2, $a2, -1
    v0 = ((unsigned)v1 < (unsigned)a1) ? 1 : 0;                 // 0x001107a0: sltu $v0, $v1, $a1
    if (v0 == 0) goto label_0x1107b8;                           // 0x001107a4: beqz $v0, 0x1107b8
    v0 = a3 << 0x10;                                            // 0x001107a8: sll $v0, $a3, 0x10
    a2 = a2 + -1;                                               // 0x001107ac: addiu $a2, $a2, -1
    v1 = v1 + t1;                                               // 0x001107b0: addu $v1, $v1, $t1
label_0x1107b4:
    v0 = a3 << 0x10;                                            // 0x001107b4: sll $v0, $a3, 0x10
label_0x1107b8:
    t2 = v1 - a1;                                               // 0x001107b8: subu $t2, $v1, $a1
    t5 = v0 | a2;                                               // 0x001107bc: or $t5, $v0, $a2
label_0x1107c0:
    /* divide: t2 / a2 -> hi:lo */                              // 0x001107c8: divu $zero, $t2, $a2
    a0 = (unsigned)t3 >> 0x10;                                  // 0x001107cc: srl $a0, $t3, 0x10
    /* beqzl $a2, 0x1107d8 */                                   // 0x001107d0: beqzl $a2, 0x1107d8
    /* break (trap) */                                          // 0x001107d4: break 0, 7
    /* mflo $v0 */                                              // 0x001107d8
    /* mfhi $v1 */                                              // 0x001107dc
    v1 = v1 << 0x10;                                            // 0x001107e4: sll $v1, $v1, 0x10
    v1 = v1 | a0;                                               // 0x001107ec: or $v1, $v1, $a0
    v0 = ((unsigned)v1 < (unsigned)a1) ? 1 : 0;                 // 0x001107f0: sltu $v0, $v1, $a1
    /* beqzl $v0, 0x110824 */                                   // 0x001107f4: beqzl $v0, 0x110824
    v1 = v1 - a1;                                               // 0x001107f8: subu $v1, $v1, $a1
    v1 = v1 + t1;                                               // 0x001107fc: addu $v1, $v1, $t1
    v0 = ((unsigned)v1 < (unsigned)t1) ? 1 : 0;                 // 0x00110800: sltu $v0, $v1, $t1
    if (v0 != 0) goto label_0x110820;                           // 0x00110804: bnez $v0, 0x110820
    a3 = a3 + -1;                                               // 0x00110808: addiu $a3, $a3, -1
    v0 = ((unsigned)v1 < (unsigned)a1) ? 1 : 0;                 // 0x0011080c: sltu $v0, $v1, $a1
    /* beqzl $v0, 0x110824 */                                   // 0x00110810: beqzl $v0, 0x110824
    v1 = v1 - a1;                                               // 0x00110814: subu $v1, $v1, $a1
    a3 = a3 + -1;                                               // 0x00110818: addiu $a3, $a3, -1
    v1 = v1 + t1;                                               // 0x0011081c: addu $v1, $v1, $t1
label_0x110820:
    v1 = v1 - a1;                                               // 0x00110820: subu $v1, $v1, $a1
    /* beqzl $a2, 0x11082c */                                   // 0x00110824: beqzl $a2, 0x11082c
    /* break (trap) */                                          // 0x00110828: break 0, 7
    /* divide: v1 / a2 -> hi:lo */                              // 0x0011082c: divu $zero, $v1, $a2
    a0 = t3 & 0xffff;                                           // 0x00110830: andi $a0, $t3, 0xffff
    /* mflo $v0 */                                              // 0x00110834
    /* mfhi $v1 */                                              // 0x00110838
    v1 = v1 << 0x10;                                            // 0x00110840: sll $v1, $v1, 0x10
    v1 = v1 | a0;                                               // 0x00110848: or $v1, $v1, $a0
    v0 = ((unsigned)v1 < (unsigned)a1) ? 1 : 0;                 // 0x0011084c: sltu $v0, $v1, $a1
    if (v0 == 0) goto label_0x11087c;                           // 0x00110850: beqz $v0, 0x11087c
    v0 = a3 << 0x10;                                            // 0x00110854: sll $v0, $a3, 0x10
    v1 = v1 + t1;                                               // 0x00110858: addu $v1, $v1, $t1
    v0 = ((unsigned)v1 < (unsigned)t1) ? 1 : 0;                 // 0x0011085c: sltu $v0, $v1, $t1
    if (v0 != 0) goto label_0x110878;                           // 0x00110860: bnez $v0, 0x110878
    a2 = a2 + -1;                                               // 0x00110864: addiu $a2, $a2, -1
    v0 = ((unsigned)v1 < (unsigned)a1) ? 1 : 0;                 // 0x00110868: sltu $v0, $v1, $a1
    v1 = a2 + -1;                                               // 0x0011086c: addiu $v1, $a2, -1
    v0 = v0 ^ 0;                                                // 0x00110870: xori $v0, $v0, 0
    if (v0 != 0) a2 = v1;                                       // 0x00110874: movn $a2, $v1, $v0
label_0x110878:
    v0 = a3 << 0x10;                                            // 0x00110878: sll $v0, $a3, 0x10
label_0x11087c:
    goto label_0x110a34;                                        // 0x0011087c: b 0x110a34
    a2 = v0 | a2;                                               // 0x00110880: or $a2, $v0, $a2
    /* nop */                                                   // 0x00110884: nop 
label_0x110888:
    /* beqzl $v0, 0x110898 */                                   // 0x00110888: beqzl $v0, 0x110898
    v0 = 0 | 0xffff;                                            // 0x0011088c: ori $v0, $zero, 0xffff
    goto label_0x110a30;                                        // 0x00110890: b 0x110a30
    v0 = ((unsigned)v0 < (unsigned)t0) ? 1 : 0;                 // 0x00110898: sltu $v0, $v0, $t0
    if (v0 != 0) goto label_0x1108b8;                           // 0x0011089c: bnez $v0, 0x1108b8
    v0 = 0xff << 16;                                            // 0x001108a0: lui $v0, 0xff
    v0 = ((unsigned)t0 < (unsigned)0x100) ? 1 : 0;              // 0x001108a4: sltiu $v0, $t0, 0x100
    a0 = 8;                                                     // 0x001108a8: addiu $a0, $zero, 8
    goto label_0x1108cc;                                        // 0x001108ac: b 0x1108cc
    if (v0 != 0) a0 = 0;                                        // 0x001108b0: movn $a0, $zero, $v0
    /* nop */                                                   // 0x001108b4: nop 
label_0x1108b8:
    v1 = 0x18;                                                  // 0x001108b8: addiu $v1, $zero, 0x18
    v0 = v0 | 0xffff;                                           // 0x001108bc: ori $v0, $v0, 0xffff
    a0 = 0x10;                                                  // 0x001108c0: addiu $a0, $zero, 0x10
    v0 = ((unsigned)v0 < (unsigned)t0) ? 1 : 0;                 // 0x001108c4: sltu $v0, $v0, $t0
    if (v0 != 0) a0 = v1;                                       // 0x001108c8: movn $a0, $v1, $v0
label_0x1108cc:
    v1 = (unsigned)t0 >> a0;                                    // 0x001108cc: srlv $v1, $t0, $a0
    a1 = 0x20;                                                  // 0x001108d0: addiu $a1, $zero, 0x20
    v0 = 0x22 << 16;                                            // 0x001108d4: lui $v0, 0x22
    v0 = v0 + v1;                                               // 0x001108d8: addu $v0, $v0, $v1
    v0 = g_00220c20;  // Global at 0x00220c20                   // 0x001108dc: lbu $v0, 0xc20($v0)
    v0 = v0 + a0;                                               // 0x001108e0: addu $v0, $v0, $a0
    a2 = a1 - v0;                                               // 0x001108e4: subu $a2, $a1, $v0
    if (a2 != 0) goto label_0x110910;                           // 0x001108e8: bnez $a2, 0x110910
    a3 = a1 - a2;                                               // 0x001108ec: subu $a3, $a1, $a2
    v0 = ((unsigned)t0 < (unsigned)t2) ? 1 : 0;                 // 0x001108f0: sltu $v0, $t0, $t2
    if (v0 != 0) goto label_0x110a30;                           // 0x001108f4: bnez $v0, 0x110a30
    a2 = 1;                                                     // 0x001108f8: addiu $a2, $zero, 1
    v0 = ((unsigned)t3 < (unsigned)t1) ? 1 : 0;                 // 0x001108fc: sltu $v0, $t3, $t1
    if (v0 != 0) goto label_0x110a30;                           // 0x00110900: bnez $v0, 0x110a30
    goto label_0x110a30;                                        // 0x00110908: b 0x110a30
    a2 = 1;                                                     // 0x0011090c: addiu $a2, $zero, 1
label_0x110910:
    a0 = t0 << a2;                                              // 0x00110910: sllv $a0, $t0, $a2
    a1 = (unsigned)t3 >> a3;                                    // 0x00110914: srlv $a1, $t3, $a3
    t3 = t3 << a2;                                              // 0x00110918: sllv $t3, $t3, $a2
    v0 = (unsigned)t1 >> a3;                                    // 0x0011091c: srlv $v0, $t1, $a3
    t1 = t1 << a2;                                              // 0x00110920: sllv $t1, $t1, $a2
    v1 = t2 << a2;                                              // 0x00110924: sllv $v1, $t2, $a2
    t0 = a0 | v0;                                               // 0x00110928: or $t0, $a0, $v0
    a0 = (unsigned)t2 >> a3;                                    // 0x0011092c: srlv $a0, $t2, $a3
    t2 = v1 | a1;                                               // 0x00110930: or $t2, $v1, $a1
    a1 = (unsigned)t0 >> 0x10;                                  // 0x00110934: srl $a1, $t0, 0x10
    /* divide: a0 / a1 -> hi:lo */                              // 0x00110938: divu $zero, $a0, $a1
    a0 = (unsigned)t2 >> 0x10;                                  // 0x0011093c: srl $a0, $t2, 0x10
    t4 = t0 & 0xffff;                                           // 0x00110940: andi $t4, $t0, 0xffff
    /* beqzl $a1, 0x11094c */                                   // 0x00110944: beqzl $a1, 0x11094c
    /* break (trap) */                                          // 0x00110948: break 0, 7
    /* mflo $v0 */                                              // 0x0011094c
    /* mfhi $v1 */                                              // 0x00110950
    v1 = v1 << 0x10;                                            // 0x00110958: sll $v1, $v1, 0x10
    v1 = v1 | a0;                                               // 0x00110960: or $v1, $v1, $a0
    v0 = ((unsigned)v1 < (unsigned)a2) ? 1 : 0;                 // 0x00110964: sltu $v0, $v1, $a2
    /* beqzl $v0, 0x11099c */                                   // 0x00110968: beqzl $v0, 0x11099c
    v1 = v1 - a2;                                               // 0x0011096c: subu $v1, $v1, $a2
    v1 = v1 + t0;                                               // 0x00110970: addu $v1, $v1, $t0
    v0 = ((unsigned)v1 < (unsigned)t0) ? 1 : 0;                 // 0x00110974: sltu $v0, $v1, $t0
    if (v0 != 0) goto label_0x110998;                           // 0x00110978: bnez $v0, 0x110998
    a3 = a3 + -1;                                               // 0x0011097c: addiu $a3, $a3, -1
    v0 = ((unsigned)v1 < (unsigned)a2) ? 1 : 0;                 // 0x00110980: sltu $v0, $v1, $a2
    /* beqzl $v0, 0x11099c */                                   // 0x00110984: beqzl $v0, 0x11099c
    v1 = v1 - a2;                                               // 0x00110988: subu $v1, $v1, $a2
    a3 = a3 + -1;                                               // 0x0011098c: addiu $a3, $a3, -1
    v1 = v1 + t0;                                               // 0x00110990: addu $v1, $v1, $t0
    /* nop */                                                   // 0x00110994: nop 
label_0x110998:
    v1 = v1 - a2;                                               // 0x00110998: subu $v1, $v1, $a2
    /* beqzl $a1, 0x1109a4 */                                   // 0x0011099c: beqzl $a1, 0x1109a4
    /* break (trap) */                                          // 0x001109a0: break 0, 7
    /* divide: v1 / a1 -> hi:lo */                              // 0x001109a4: divu $zero, $v1, $a1
    a0 = t2 & 0xffff;                                           // 0x001109a8: andi $a0, $t2, 0xffff
    /* mflo $v0 */                                              // 0x001109ac
    /* mfhi $v1 */                                              // 0x001109b0
    v1 = v1 << 0x10;                                            // 0x001109b8: sll $v1, $v1, 0x10
    v1 = v1 | a0;                                               // 0x001109c0: or $v1, $v1, $a0
    v0 = ((unsigned)v1 < (unsigned)a2) ? 1 : 0;                 // 0x001109c4: sltu $v0, $v1, $a2
    if (v0 == 0) goto label_0x1109f8;                           // 0x001109c8: beqz $v0, 0x1109f8
    v0 = a3 << 0x10;                                            // 0x001109cc: sll $v0, $a3, 0x10
    v1 = v1 + t0;                                               // 0x001109d0: addu $v1, $v1, $t0
    v0 = ((unsigned)v1 < (unsigned)t0) ? 1 : 0;                 // 0x001109d4: sltu $v0, $v1, $t0
    if (v0 != 0) goto label_0x1109f4;                           // 0x001109d8: bnez $v0, 0x1109f4
    a1 = a1 + -1;                                               // 0x001109dc: addiu $a1, $a1, -1
    v0 = ((unsigned)v1 < (unsigned)a2) ? 1 : 0;                 // 0x001109e0: sltu $v0, $v1, $a2
    if (v0 == 0) goto label_0x1109f8;                           // 0x001109e4: beqz $v0, 0x1109f8
    v0 = a3 << 0x10;                                            // 0x001109e8: sll $v0, $a3, 0x10
    v1 = v1 + t0;                                               // 0x001109ec: addu $v1, $v1, $t0
    a1 = a1 + -1;                                               // 0x001109f0: addiu $a1, $a1, -1
label_0x1109f4:
    v0 = a3 << 0x10;                                            // 0x001109f4: sll $v0, $a3, 0x10
label_0x1109f8:
    v1 = v1 - a2;                                               // 0x001109f8: subu $v1, $v1, $a2
    a2 = v0 | a1;                                               // 0x001109fc: or $a2, $v0, $a1
    /* multiply: t1 *  -> hi:lo */                              // 0x00110a00: multu $a2, $t1
    /* mfhi $a3 */                                              // 0x00110a04
    /* mflo $a0 */                                              // 0x00110a08
    v0 = ((unsigned)v1 < (unsigned)a3) ? 1 : 0;                 // 0x00110a0c: sltu $v0, $v1, $a3
    /* bnezl $v0, 0x110a30 */                                   // 0x00110a10: bnezl $v0, 0x110a30
    a2 = a2 + -1;                                               // 0x00110a14: addiu $a2, $a2, -1
    if (a3 != v1) goto label_0x110a34;                          // 0x00110a18: bne $a3, $v1, 0x110a34
    v0 = ((unsigned)t3 < (unsigned)a0) ? 1 : 0;                 // 0x00110a20: sltu $v0, $t3, $a0
    if (v0 == 0) goto label_0x110a34;                           // 0x00110a24: beqz $v0, 0x110a34
    /* nop */                                                   // 0x00110a28: nop 
    a2 = a2 + -1;                                               // 0x00110a2c: addiu $a2, $a2, -1
label_0x110a30:
label_0x110a34:
    v1 = -1;                                                    // 0x00110a34: addiu $v1, $zero, -1
    t6 = t6 & v1;                                               // 0x00110a44: and $t6, $t6, $v1
    t6 = t6 | v0;                                               // 0x00110a48: or $t6, $t6, $v0
    v1 = 0xffff << 16;                                          // 0x00110a50: lui $v1, 0xffff
    t6 = t6 & v1;                                               // 0x00110a58: and $t6, $t6, $v1
    return;                                                     // 0x00110a5c: jr $ra
    v0 = t6 | v0;                                               // 0x00110a60: or $v0, $t6, $v0
}