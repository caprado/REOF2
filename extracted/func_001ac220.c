void func_001ac220() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0xa0;                                            // 0x001ac220: addiu $sp, $sp, -0xa0
    v0 = a0 << 1;                                               // 0x001ac224: sll $v0, $a0, 1
    v0 = v0 + a0;                                               // 0x001ac22c: addu $v0, $v0, $a0
    a2 = v0 << 9;                                               // 0x001ac234: sll $a2, $v0, 9
    /* FPU: dps.w.ph $ac0, $sp, $s7 */                          // 0x001ac238: dps.w.ph $ac0, $sp, $s7
    v1 = 0x2a << 16;                                            // 0x001ac23c: lui $v1, 0x2a
    v0 = a1 << 1;                                               // 0x001ac244: sll $v0, $a1, 1
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x001ac248: subu.qb $zero, $sp, $s5
    v1 = v1 + 0x5410;                                           // 0x001ac24c: addiu $v1, $v1, 0x5410
    v0 = v0 + a1;                                               // 0x001ac254: addu $v0, $v0, $a1
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001ac258: dpa.w.ph $ac0, $sp, $s3
    s7 = v1 + a2;                                               // 0x001ac25c: addu $s7, $v1, $a2
    v0 = v0 << 2;                                               // 0x001ac264: sll $v0, $v0, 2
    s2 = s7 + v0;                                               // 0x001ac268: addu $s2, $s7, $v0
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001ac26c: addu.qb $zero, $sp, $s1
    v0 = 0x2a << 16;                                            // 0x001ac270: lui $v0, 0x2a
    v1 = 0x2a << 16;                                            // 0x001ac274: lui $v1, 0x2a
    v0 = v0 + 0x53f4;                                           // 0x001ac278: addiu $v0, $v0, 0x53f4
    v0 = v0 + a0;                                               // 0x001ac280: addu $v0, $v0, $a0
    v0 = g_002a53f4;  // Global at 0x002a53f4                   // 0x001ac288: lbu $v0, 0($v0)
    if (v0 == 0) goto label_0x1ac550;                           // 0x001ac298: beqz $v0, 0x1ac550
    v1 = v1 + 0x5240;                                           // 0x001ac29c: addiu $v1, $v1, 0x5240
    v1 = a0 + v1;                                               // 0x001ac2a0: addu $v1, $a0, $v1
    v0 = 2;                                                     // 0x001ac2a4: addiu $v0, $zero, 2
    v1 = g_002a53e4;  // Global at 0x002a53e4                   // 0x001ac2a8: lbu $v1, 0x1a4($v1)
    if (v1 == v0) goto label_0x1ac554;                          // 0x001ac2ac: beq $v1, $v0, 0x1ac554
    v0 = a0 & 0x7f;                                             // 0x001ac2b0: andi $v0, $a0, 0x7f
    goto label_0x1ac55c;                                        // 0x001ac2b4: b 0x1ac55c
    v0 = -1;                                                    // 0x001ac2b8: addiu $v0, $zero, -1
label_0x1ac2bc:
    at = ((unsigned)s6 < (unsigned)0x80) ? 1 : 0;               // 0x001ac2bc: sltiu $at, $s6, 0x80
    if (at == 0) goto label_0x1ac548;                           // 0x001ac2c0: beqz $at, 0x1ac548
    v1 = *(uint8_t*)(s2);                                       // 0x001ac2c8: lbu $v1, 0($s2)
    if (v1 != 0) goto label_0x1ac4cc;                           // 0x001ac2cc: bnez $v1, 0x1ac4cc
    v0 = 1;                                                     // 0x001ac2d0: addiu $v0, $zero, 1
    v1 = *(uint8_t*)((s2) + 5);                                 // 0x001ac2d4: lbu $v1, 5($s2)
    v0 = 0xff;                                                  // 0x001ac2d8: addiu $v0, $zero, 0xff
    if (v1 != v0) goto label_0x1ac2ec;                          // 0x001ac2dc: bne $v1, $v0, 0x1ac2ec
    v0 = -1;                                                    // 0x001ac2e0: addiu $v0, $zero, -1
    if (s4 != v0) goto label_0x1ac2f0;                          // 0x001ac2e4: bne $s4, $v0, 0x1ac2f0
    /* nop */                                                   // 0x001ac2e8: nop 
label_0x1ac2ec:
    s4 = v1 & 0xff;                                             // 0x001ac2ec: andi $s4, $v1, 0xff
label_0x1ac2f0:
    v0 = *(uint8_t*)((s2) + 7);                                 // 0x001ac2f0: lbu $v0, 7($s2)
    if (v0 == 0) goto label_0x1ac350;                           // 0x001ac2f4: beqz $v0, 0x1ac350
    a0 = 1;                                                     // 0x001ac2f8: addiu $a0, $zero, 1
    func_001ae5c0();  // 1ae5c0                                // 0x001ac2fc: jal 0x1ae5c0
    /* nop */                                                   // 0x001ac300: nop 
    v0 = v0 & 0xffff;                                           // 0x001ac304: andi $v0, $v0, 0xffff
    s1 = 1;                                                     // 0x001ac308: addiu $s1, $zero, 1
    v1 = v0 & 1;                                                // 0x001ac30c: andi $v1, $v0, 1
    a0 = 1;                                                     // 0x001ac310: addiu $a0, $zero, 1
    v0 = -1;                                                    // 0x001ac314: addiu $v0, $zero, -1
    func_001ae5c0();  // 1ae5c0                                // 0x001ac318: jal 0x1ae5c0
    if (v1 == 0) s1 = v0;                                       // 0x001ac31c: movz $s1, $v0, $v1
    v1 = *(uint8_t*)((s2) + 7);                                 // 0x001ac320: lbu $v1, 7($s2)
    a0 = v0 & 0xffff;                                           // 0x001ac324: andi $a0, $v0, 0xffff
    v0 = *(uint16_t*)((s2) + 2);                                // 0x001ac328: lhu $v0, 2($s2)
    /* divide: a0 / v1 -> hi:lo */                              // 0x001ac32c: div $zero, $a0, $v1
    v0 = v0 + 0x2000;                                           // 0x001ac330: addiu $v0, $v0, 0x2000
    /* nop */                                                   // 0x001ac334: nop 
    /* mfhi $v1 */                                              // 0x001ac338
    /* multiply: s1 * v1 -> hi:lo */                            // 0x001ac33c: mult $ac3, $s1, $v1
    v1 = v1 << 5;                                               // 0x001ac340: sll $v1, $v1, 5
    v0 = v0 + v1;                                               // 0x001ac344: addu $v0, $v0, $v1
    goto label_0x1ac35c;                                        // 0x001ac348: b 0x1ac35c
    s3 = v0 & 0x3fff;                                           // 0x001ac34c: andi $s3, $v0, 0x3fff
label_0x1ac350:
    v0 = *(uint16_t*)((s2) + 2);                                // 0x001ac350: lhu $v0, 2($s2)
    v0 = v0 + 0x2000;                                           // 0x001ac354: addiu $v0, $v0, 0x2000
    s3 = v0 & 0x3fff;                                           // 0x001ac358: andi $s3, $v0, 0x3fff
label_0x1ac35c:
    func_001ae5c0();  // 1ae5c0                                // 0x001ac35c: jal 0x1ae5c0
    a0 = 1;                                                     // 0x001ac360: addiu $a0, $zero, 1
    v0 = v0 & 0xffff;                                           // 0x001ac364: andi $v0, $v0, 0xffff
    s1 = 1;                                                     // 0x001ac368: addiu $s1, $zero, 1
    v1 = v0 & 1;                                                // 0x001ac36c: andi $v1, $v0, 1
    v0 = -1;                                                    // 0x001ac370: addiu $v0, $zero, -1
    if (v1 == 0) s1 = v0;                                       // 0x001ac374: movz $s1, $v0, $v1
    v0 = *(uint8_t*)((s2) + 6);                                 // 0x001ac378: lbu $v0, 6($s2)
    if (v0 == 0) goto label_0x1ac3b4;                           // 0x001ac37c: beqz $v0, 0x1ac3b4
    a0 = 1;                                                     // 0x001ac380: addiu $a0, $zero, 1
    func_001ae5c0();  // 1ae5c0                                // 0x001ac384: jal 0x1ae5c0
    /* nop */                                                   // 0x001ac388: nop 
    v1 = *(uint8_t*)((s2) + 6);                                 // 0x001ac38c: lbu $v1, 6($s2)
    a0 = v0 & 0xffff;                                           // 0x001ac390: andi $a0, $v0, 0xffff
    v0 = *(uint8_t*)((s2) + 4);                                 // 0x001ac394: lbu $v0, 4($s2)
    /* divide: a0 / v1 -> hi:lo */                              // 0x001ac398: div $zero, $a0, $v1
    /* nop */                                                   // 0x001ac39c: nop 
    /* nop */                                                   // 0x001ac3a0: nop 
    /* mfhi $v1 */                                              // 0x001ac3a4
    /* multiply: s1 * v1 -> hi:lo */                            // 0x001ac3a8: mult $ac3, $s1, $v1
    goto label_0x1ac3b8;                                        // 0x001ac3ac: b 0x1ac3b8
    v1 = v0 + v1;                                               // 0x001ac3b0: addu $v1, $v0, $v1
label_0x1ac3b4:
    v1 = *(uint8_t*)((s2) + 4);                                 // 0x001ac3b4: lbu $v1, 4($s2)
label_0x1ac3b8:
    if (v1 >= 0) goto label_0x1ac3c8;                           // 0x001ac3b8: bgez $v1, 0x1ac3c8
    at = (v1 < 0x80) ? 1 : 0;                                   // 0x001ac3bc: slti $at, $v1, 0x80
    goto label_0x1ac3d4;                                        // 0x001ac3c0: b 0x1ac3d4
label_0x1ac3c8:
    if (at != 0) goto label_0x1ac3d8;                           // 0x001ac3c8: bnez $at, 0x1ac3d8
    v0 = -1;                                                    // 0x001ac3cc: addiu $v0, $zero, -1
    v1 = 0x7f;                                                  // 0x001ac3d0: addiu $v1, $zero, 0x7f
label_0x1ac3d4:
    v0 = -1;                                                    // 0x001ac3d4: addiu $v0, $zero, -1
label_0x1ac3d8:
    if (s5 != v0) goto label_0x1ac3e8;                          // 0x001ac3d8: bne $s5, $v0, 0x1ac3e8
    /* nop */                                                   // 0x001ac3dc: nop 
    goto label_0x1ac470;                                        // 0x001ac3e0: b 0x1ac470
label_0x1ac3e8:
    /* move to FPU: $v1, $f0 */                                 // 0x001ac3e8: mtc1 $v1, $f0
    if (s5 < 0) goto label_0x1ac400;                            // 0x001ac3ec: bltz $s5, 0x1ac400
    /* FPU: cvt.s.w $f3, $f0 */                                 // 0x001ac3f0: cvt.s.w $f3, $f0
    /* move to FPU: $s5, $f0 */                                 // 0x001ac3f4: mtc1 $s5, $f0
    goto label_0x1ac41c;                                        // 0x001ac3f8: b 0x1ac41c
    /* FPU: cvt.s.w $f2, $f0 */                                 // 0x001ac3fc: cvt.s.w $f2, $f0
label_0x1ac400:
    v1 = (unsigned)s5 >> 1;                                     // 0x001ac400: srl $v1, $s5, 1
    v0 = s5 & 1;                                                // 0x001ac404: andi $v0, $s5, 1
    v1 = v1 | v0;                                               // 0x001ac408: or $v1, $v1, $v0
    /* move to FPU: $v1, $f0 */                                 // 0x001ac40c: mtc1 $v1, $f0
    /* nop */                                                   // 0x001ac410: nop 
    /* FPU: cvt.s.w $f2, $f0 */                                 // 0x001ac414: cvt.s.w $f2, $f0
    /* FPU: add.s $f2, $f2, $f2 */                              // 0x001ac418: add.s $f2, $f2, $f2
label_0x1ac41c:
    v1 = 0x4300 << 16;                                          // 0x001ac41c: lui $v1, 0x4300
    v0 = 0x4f00 << 16;                                          // 0x001ac420: lui $v0, 0x4f00
    /* move to FPU: $v1, $f1 */                                 // 0x001ac424: mtc1 $v1, $f1
    /* move to FPU: $v0, $f0 */                                 // 0x001ac428: mtc1 $v0, $f0
    /* nop */                                                   // 0x001ac42c: nop 
    /* FPU: div.s $f1, $f2, $f1 */                              // 0x001ac430: div.s $f1, $f2, $f1
    /* nop */                                                   // 0x001ac434: nop 
    /* FPU: mul.s $f1, $f3, $f1 */                              // 0x001ac438: mul.s $f1, $f3, $f1
    /* FPU: c.ole.s $f0, $f1 */                                 // 0x001ac43c: c.ole.s $f0, $f1
    /* bc1t 0x1ac458 */                                         // 0x001ac440: bc1t 0x1ac458
    /* nop */                                                   // 0x001ac444: nop 
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001ac448: cvt.w.s $f1, $f1
    /* move from FPU: $s5, $f1 */                               // 0x001ac44c: mfc1 $s5, $f1
    goto label_0x1ac470;                                        // 0x001ac450: b 0x1ac470
    /* nop */                                                   // 0x001ac454: nop 
    /* FPU: sub.s $f1, $f1, $f0 */                              // 0x001ac458: sub.s $f1, $f1, $f0
    v0 = 0x8000 << 16;                                          // 0x001ac45c: lui $v0, 0x8000
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001ac460: cvt.w.s $f1, $f1
    /* move from FPU: $s5, $f1 */                               // 0x001ac464: mfc1 $s5, $f1
    /* nop */                                                   // 0x001ac468: nop 
    s5 = s5 | v0;                                               // 0x001ac46c: or $s5, $s5, $v0
label_0x1ac470:
    a0 = *(uint8_t*)((s2) + 9);                                 // 0x001ac470: lbu $a0, 9($s2)
    v0 = s6 & 0x7f;                                             // 0x001ac474: andi $v0, $s6, 0x7f
    v1 = *(uint8_t*)((s2) + 8);                                 // 0x001ac478: lbu $v1, 8($s2)
    v0 = v0 << 8;                                               // 0x001ac47c: sll $v0, $v0, 8
    v0 = s0 | v0;                                               // 0x001ac490: or $v0, $s0, $v0
    a0 = a0 & 1;                                                // 0x001ac4a0: andi $a0, $a0, 1
    a0 = a0 << 7;                                               // 0x001ac4a8: sll $a0, $a0, 7
    v1 = v1 & 0x7f;                                             // 0x001ac4ac: andi $v1, $v1, 0x7f
    v1 = a0 | v1;                                               // 0x001ac4b0: or $v1, $a0, $v1
    func_001a6e60();  // 1a6e60                                // 0x001ac4b4: jal 0x1a6e60
    a0 = v0 | v1;                                               // 0x001ac4b8: or $a0, $v0, $v1
    if (v0 >= 0) goto label_0x1ac518;                           // 0x001ac4bc: bgez $v0, 0x1ac518
    /* nop */                                                   // 0x001ac4c0: nop 
    goto label_0x1ac544;                                        // 0x001ac4c4: b 0x1ac544
    /* nop */                                                   // 0x001ac4c8: nop 
label_0x1ac4cc:
    if (v1 != v0) goto label_0x1ac510;                          // 0x001ac4cc: bne $v1, $v0, 0x1ac510
    /* nop */                                                   // 0x001ac4d0: nop 
    a0 = *(uint8_t*)((s2) + 9);                                 // 0x001ac4d4: lbu $a0, 9($s2)
    v0 = s6 & 0x7f;                                             // 0x001ac4d8: andi $v0, $s6, 0x7f
    v1 = *(uint8_t*)((s2) + 8);                                 // 0x001ac4dc: lbu $v1, 8($s2)
    v0 = v0 << 8;                                               // 0x001ac4e0: sll $v0, $v0, 8
    v0 = s0 | v0;                                               // 0x001ac4e4: or $v0, $s0, $v0
    a0 = a0 & 1;                                                // 0x001ac4e8: andi $a0, $a0, 1
    a0 = a0 << 7;                                               // 0x001ac4ec: sll $a0, $a0, 7
    v1 = v1 & 0x7f;                                             // 0x001ac4f0: andi $v1, $v1, 0x7f
    v1 = a0 | v1;                                               // 0x001ac4f4: or $v1, $a0, $v1
    func_001a6f70();  // 1a6f70                                // 0x001ac4f8: jal 0x1a6f70
    a0 = v0 | v1;                                               // 0x001ac4fc: or $a0, $v0, $v1
    if (v0 >= 0) goto label_0x1ac518;                           // 0x001ac500: bgez $v0, 0x1ac518
    /* nop */                                                   // 0x001ac504: nop 
    goto label_0x1ac544;                                        // 0x001ac508: b 0x1ac544
    /* nop */                                                   // 0x001ac50c: nop 
label_0x1ac510:
    goto label_0x1ac55c;                                        // 0x001ac510: b 0x1ac55c
label_0x1ac518:
    v1 = *(uint8_t*)((s2) + 0xb);                               // 0x001ac518: lbu $v1, 0xb($s2)
    v0 = 0xff;                                                  // 0x001ac51c: addiu $v0, $zero, 0xff
    if (v1 == v0) goto label_0x1ac544;                          // 0x001ac520: beq $v1, $v0, 0x1ac544
    /* nop */                                                   // 0x001ac524: nop 
    if (v1 == s6) goto label_0x1ac544;                          // 0x001ac528: beq $v1, $s6, 0x1ac544
    v0 = v1 << 1;                                               // 0x001ac52c: sll $v0, $v1, 1
    v0 = v0 + v1;                                               // 0x001ac534: addu $v0, $v0, $v1
    v0 = v0 << 2;                                               // 0x001ac538: sll $v0, $v0, 2
    goto label_0x1ac2bc;                                        // 0x001ac53c: b 0x1ac2bc
    s2 = s7 + v0;                                               // 0x001ac540: addu $s2, $s7, $v0
label_0x1ac544:
label_0x1ac548:
    goto label_0x1ac560;                                        // 0x001ac548: b 0x1ac560
label_0x1ac550:
    v0 = a0 & 0x7f;                                             // 0x001ac550: andi $v0, $a0, 0x7f
label_0x1ac554:
    goto label_0x1ac2bc;                                        // 0x001ac554: b 0x1ac2bc
    s0 = v0 << 0x10;                                            // 0x001ac558: sll $s0, $v0, 0x10
label_0x1ac55c:
label_0x1ac560:
    /* FPU: xori.b $w2, $w0, 0xbe */                            // 0x001ac560: xori.b $w2, $w0, 0xbe
    /* FPU: ld.b $w1, -0x4a($zero) */                           // 0x001ac568: ld.b $w1, -0x4a($zero)
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x001ac56c: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001ac570: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001ac578: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001ac57c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001ac580: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001ac584: jr $ra
    sp = sp + 0xa0;                                             // 0x001ac588: addiu $sp, $sp, 0xa0
}