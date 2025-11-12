void func_001ac590() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x90;                                            // 0x001ac590: addiu $sp, $sp, -0x90
    v0 = a0 << 1;                                               // 0x001ac594: sll $v0, $a0, 1
    a2 = v0 + a0;                                               // 0x001ac59c: addu $a2, $v0, $a0
    /* FPU: dps.w.ph $ac0, $sp, $s7 */                          // 0x001ac5a0: dps.w.ph $ac0, $sp, $s7
    v0 = a1 << 1;                                               // 0x001ac5a4: sll $v0, $a1, 1
    v1 = 0x2a << 16;                                            // 0x001ac5ac: lui $v1, 0x2a
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x001ac5b0: subu.qb $zero, $sp, $s5
    v0 = v0 + a1;                                               // 0x001ac5b4: addu $v0, $v0, $a1
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001ac5c0: dpa.w.ph $ac0, $sp, $s3
    v1 = v1 + 0x5410;                                           // 0x001ac5c4: addiu $v1, $v1, 0x5410
    a1 = a2 << 9;                                               // 0x001ac5c8: sll $a1, $a2, 9
    s7 = v1 + a1;                                               // 0x001ac5d0: addu $s7, $v1, $a1
    v0 = v0 << 2;                                               // 0x001ac5d4: sll $v0, $v0, 2
    s2 = s7 + v0;                                               // 0x001ac5d8: addu $s2, $s7, $v0
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001ac5dc: addu.qb $zero, $sp, $s1
    v0 = 0x2a << 16;                                            // 0x001ac5e0: lui $v0, 0x2a
    v1 = 0x2a << 16;                                            // 0x001ac5e4: lui $v1, 0x2a
    v0 = v0 + 0x53f4;                                           // 0x001ac5e8: addiu $v0, $v0, 0x53f4
    v0 = v0 + a0;                                               // 0x001ac5f0: addu $v0, $v0, $a0
    v0 = g_002a53f4;  // Global at 0x002a53f4                   // 0x001ac5f8: lbu $v0, 0($v0)
    if (v0 == 0) goto label_0x1ac890;                           // 0x001ac600: beqz $v0, 0x1ac890
    v1 = v1 + 0x5240;                                           // 0x001ac604: addiu $v1, $v1, 0x5240
    v1 = a0 + v1;                                               // 0x001ac608: addu $v1, $a0, $v1
    v0 = 2;                                                     // 0x001ac60c: addiu $v0, $zero, 2
    v1 = g_002a53e4;  // Global at 0x002a53e4                   // 0x001ac610: lbu $v1, 0x1a4($v1)
    if (v1 == v0) goto label_0x1ac894;                          // 0x001ac614: beq $v1, $v0, 0x1ac894
    v0 = a0 & 0x7f;                                             // 0x001ac618: andi $v0, $a0, 0x7f
    goto label_0x1ac89c;                                        // 0x001ac61c: b 0x1ac89c
    v0 = -1;                                                    // 0x001ac620: addiu $v0, $zero, -1
label_0x1ac624:
    at = ((unsigned)s6 < (unsigned)0x80) ? 1 : 0;               // 0x001ac624: sltiu $at, $s6, 0x80
    if (at == 0) goto label_0x1ac888;                           // 0x001ac628: beqz $at, 0x1ac888
    v1 = *(uint8_t*)(s2);                                       // 0x001ac630: lbu $v1, 0($s2)
    if (v1 != 0) goto label_0x1ac818;                           // 0x001ac634: bnez $v1, 0x1ac818
    v0 = 1;                                                     // 0x001ac638: addiu $v0, $zero, 1
    v1 = *(uint8_t*)((s2) + 5);                                 // 0x001ac63c: lbu $v1, 5($s2)
    v0 = 0xff;                                                  // 0x001ac640: addiu $v0, $zero, 0xff
    if (v1 != v0) goto label_0x1ac654;                          // 0x001ac644: bne $v1, $v0, 0x1ac654
    v0 = -1;                                                    // 0x001ac648: addiu $v0, $zero, -1
    if (s4 != v0) goto label_0x1ac658;                          // 0x001ac64c: bne $s4, $v0, 0x1ac658
    /* nop */                                                   // 0x001ac650: nop 
label_0x1ac654:
    s4 = v1 & 0xff;                                             // 0x001ac654: andi $s4, $v1, 0xff
label_0x1ac658:
    v0 = *(uint8_t*)((s2) + 7);                                 // 0x001ac658: lbu $v0, 7($s2)
    if (v0 == 0) goto label_0x1ac6b8;                           // 0x001ac65c: beqz $v0, 0x1ac6b8
    a0 = 1;                                                     // 0x001ac660: addiu $a0, $zero, 1
    func_001ae690();  // 0x1ae5c0                                // 0x001ac664: jal 0x1ae5c0
    /* nop */                                                   // 0x001ac668: nop 
    v0 = v0 & 0xffff;                                           // 0x001ac66c: andi $v0, $v0, 0xffff
    s1 = 1;                                                     // 0x001ac670: addiu $s1, $zero, 1
    v1 = v0 & 1;                                                // 0x001ac674: andi $v1, $v0, 1
    a0 = 1;                                                     // 0x001ac678: addiu $a0, $zero, 1
    v0 = -1;                                                    // 0x001ac67c: addiu $v0, $zero, -1
    func_001ae690();  // 0x1ae5c0                                // 0x001ac680: jal 0x1ae5c0
    if (v1 == 0) s1 = v0;                                       // 0x001ac684: movz $s1, $v0, $v1
    v1 = *(uint8_t*)((s2) + 7);                                 // 0x001ac688: lbu $v1, 7($s2)
    a0 = v0 & 0xffff;                                           // 0x001ac68c: andi $a0, $v0, 0xffff
    v0 = *(uint16_t*)((s2) + 2);                                // 0x001ac690: lhu $v0, 2($s2)
    /* divide: a0 / v1 -> hi:lo */                              // 0x001ac694: div $zero, $a0, $v1
    v0 = v0 + 0x2000;                                           // 0x001ac698: addiu $v0, $v0, 0x2000
    /* nop */                                                   // 0x001ac69c: nop 
    /* mfhi $v1 */                                              // 0x001ac6a0
    /* multiply: s1 * v1 -> hi:lo */                            // 0x001ac6a4: mult $ac3, $s1, $v1
    v1 = v1 << 5;                                               // 0x001ac6a8: sll $v1, $v1, 5
    v0 = v0 + v1;                                               // 0x001ac6ac: addu $v0, $v0, $v1
    goto label_0x1ac6c4;                                        // 0x001ac6b0: b 0x1ac6c4
    s3 = v0 & 0x3fff;                                           // 0x001ac6b4: andi $s3, $v0, 0x3fff
label_0x1ac6b8:
    v0 = *(uint16_t*)((s2) + 2);                                // 0x001ac6b8: lhu $v0, 2($s2)
    v0 = v0 + 0x2000;                                           // 0x001ac6bc: addiu $v0, $v0, 0x2000
    s3 = v0 & 0x3fff;                                           // 0x001ac6c0: andi $s3, $v0, 0x3fff
label_0x1ac6c4:
    func_001ae690();  // 0x1ae5c0                                // 0x001ac6c4: jal 0x1ae5c0
    a0 = 1;                                                     // 0x001ac6c8: addiu $a0, $zero, 1
    v0 = v0 & 0xffff;                                           // 0x001ac6cc: andi $v0, $v0, 0xffff
    s1 = 1;                                                     // 0x001ac6d0: addiu $s1, $zero, 1
    v1 = v0 & 1;                                                // 0x001ac6d4: andi $v1, $v0, 1
    v0 = -1;                                                    // 0x001ac6d8: addiu $v0, $zero, -1
    if (v1 == 0) s1 = v0;                                       // 0x001ac6dc: movz $s1, $v0, $v1
    v0 = *(uint8_t*)((s2) + 6);                                 // 0x001ac6e0: lbu $v0, 6($s2)
    if (v0 == 0) goto label_0x1ac71c;                           // 0x001ac6e4: beqz $v0, 0x1ac71c
    a0 = 1;                                                     // 0x001ac6e8: addiu $a0, $zero, 1
    func_001ae690();  // 0x1ae5c0                                // 0x001ac6ec: jal 0x1ae5c0
    /* nop */                                                   // 0x001ac6f0: nop 
    v1 = *(uint8_t*)((s2) + 6);                                 // 0x001ac6f4: lbu $v1, 6($s2)
    a0 = v0 & 0xffff;                                           // 0x001ac6f8: andi $a0, $v0, 0xffff
    v0 = *(uint8_t*)((s2) + 4);                                 // 0x001ac6fc: lbu $v0, 4($s2)
    /* divide: a0 / v1 -> hi:lo */                              // 0x001ac700: div $zero, $a0, $v1
    /* nop */                                                   // 0x001ac704: nop 
    /* nop */                                                   // 0x001ac708: nop 
    /* mfhi $v1 */                                              // 0x001ac70c
    /* multiply: s1 * v1 -> hi:lo */                            // 0x001ac710: mult $ac3, $s1, $v1
    goto label_0x1ac720;                                        // 0x001ac714: b 0x1ac720
    v0 = v0 + v1;                                               // 0x001ac718: addu $v0, $v0, $v1
label_0x1ac71c:
    v0 = *(uint8_t*)((s2) + 4);                                 // 0x001ac71c: lbu $v0, 4($s2)
label_0x1ac720:
    if (v0 >= 0) goto label_0x1ac730;                           // 0x001ac720: bgez $v0, 0x1ac730
    at = (v0 < 0x80) ? 1 : 0;                                   // 0x001ac724: slti $at, $v0, 0x80
    goto label_0x1ac73c;                                        // 0x001ac728: b 0x1ac73c
label_0x1ac730:
    if (at != 0) goto label_0x1ac73c;                           // 0x001ac730: bnez $at, 0x1ac73c
    /* nop */                                                   // 0x001ac734: nop 
    v0 = 0x7f;                                                  // 0x001ac738: addiu $v0, $zero, 0x7f
label_0x1ac73c:
    /* move to FPU: $v0, $f0 */                                 // 0x001ac73c: mtc1 $v0, $f0
    if (s5 < 0) goto label_0x1ac754;                            // 0x001ac740: bltz $s5, 0x1ac754
    /* FPU: cvt.s.w $f3, $f0 */                                 // 0x001ac744: cvt.s.w $f3, $f0
    /* move to FPU: $s5, $f0 */                                 // 0x001ac748: mtc1 $s5, $f0
    goto label_0x1ac770;                                        // 0x001ac74c: b 0x1ac770
    /* FPU: cvt.s.w $f2, $f0 */                                 // 0x001ac750: cvt.s.w $f2, $f0
label_0x1ac754:
    v1 = (unsigned)s5 >> 1;                                     // 0x001ac754: srl $v1, $s5, 1
    v0 = s5 & 1;                                                // 0x001ac758: andi $v0, $s5, 1
    v1 = v1 | v0;                                               // 0x001ac75c: or $v1, $v1, $v0
    /* move to FPU: $v1, $f0 */                                 // 0x001ac760: mtc1 $v1, $f0
    /* nop */                                                   // 0x001ac764: nop 
    /* FPU: cvt.s.w $f2, $f0 */                                 // 0x001ac768: cvt.s.w $f2, $f0
    /* FPU: add.s $f2, $f2, $f2 */                              // 0x001ac76c: add.s $f2, $f2, $f2
label_0x1ac770:
    v1 = 0x4300 << 16;                                          // 0x001ac770: lui $v1, 0x4300
    v0 = 0x4f00 << 16;                                          // 0x001ac774: lui $v0, 0x4f00
    /* move to FPU: $v1, $f1 */                                 // 0x001ac778: mtc1 $v1, $f1
    /* move to FPU: $v0, $f0 */                                 // 0x001ac77c: mtc1 $v0, $f0
    /* nop */                                                   // 0x001ac780: nop 
    /* FPU: div.s $f1, $f2, $f1 */                              // 0x001ac784: div.s $f1, $f2, $f1
    /* nop */                                                   // 0x001ac788: nop 
    /* FPU: mul.s $f1, $f3, $f1 */                              // 0x001ac78c: mul.s $f1, $f3, $f1
    /* FPU: c.ole.s $f0, $f1 */                                 // 0x001ac790: c.ole.s $f0, $f1
    /* bc1t 0x1ac7ac */                                         // 0x001ac794: bc1t 0x1ac7ac
    /* nop */                                                   // 0x001ac798: nop 
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001ac79c: cvt.w.s $f1, $f1
    /* move from FPU: $s5, $f1 */                               // 0x001ac7a0: mfc1 $s5, $f1
    goto label_0x1ac7c8;                                        // 0x001ac7a4: b 0x1ac7c8
    a0 = *(uint8_t*)((s2) + 9);                                 // 0x001ac7a8: lbu $a0, 9($s2)
    /* FPU: sub.s $f1, $f1, $f0 */                              // 0x001ac7ac: sub.s $f1, $f1, $f0
    v0 = 0x8000 << 16;                                          // 0x001ac7b0: lui $v0, 0x8000
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001ac7b4: cvt.w.s $f1, $f1
    /* move from FPU: $s5, $f1 */                               // 0x001ac7b8: mfc1 $s5, $f1
    /* nop */                                                   // 0x001ac7bc: nop 
    s5 = s5 | v0;                                               // 0x001ac7c0: or $s5, $s5, $v0
    a0 = *(uint8_t*)((s2) + 9);                                 // 0x001ac7c4: lbu $a0, 9($s2)
label_0x1ac7c8:
    v0 = s6 & 0x7f;                                             // 0x001ac7c8: andi $v0, $s6, 0x7f
    v1 = *(uint8_t*)((s2) + 8);                                 // 0x001ac7cc: lbu $v1, 8($s2)
    v0 = v0 << 8;                                               // 0x001ac7d0: sll $v0, $v0, 8
    v0 = s0 | v0;                                               // 0x001ac7e0: or $v0, $s0, $v0
    a0 = a0 & 1;                                                // 0x001ac7f0: andi $a0, $a0, 1
    a0 = a0 << 7;                                               // 0x001ac7f4: sll $a0, $a0, 7
    v1 = v1 & 0x7f;                                             // 0x001ac7f8: andi $v1, $v1, 0x7f
    v1 = a0 | v1;                                               // 0x001ac7fc: or $v1, $a0, $v1
    func_001a7190();  // 0x1a7070                                // 0x001ac800: jal 0x1a7070
    a0 = v0 | v1;                                               // 0x001ac804: or $a0, $v0, $v1
    if (v0 >= 0) goto label_0x1ac864;                           // 0x001ac808: bgez $v0, 0x1ac864
    /* nop */                                                   // 0x001ac80c: nop 
    goto label_0x1ac884;                                        // 0x001ac810: b 0x1ac884
    /* nop */                                                   // 0x001ac814: nop 
label_0x1ac818:
    if (v1 != v0) goto label_0x1ac85c;                          // 0x001ac818: bne $v1, $v0, 0x1ac85c
    /* nop */                                                   // 0x001ac81c: nop 
    a0 = *(uint8_t*)((s2) + 9);                                 // 0x001ac820: lbu $a0, 9($s2)
    v0 = s6 & 0x7f;                                             // 0x001ac824: andi $v0, $s6, 0x7f
    v1 = *(uint8_t*)((s2) + 8);                                 // 0x001ac828: lbu $v1, 8($s2)
    v0 = v0 << 8;                                               // 0x001ac82c: sll $v0, $v0, 8
    v0 = s0 | v0;                                               // 0x001ac830: or $v0, $s0, $v0
    a0 = a0 & 1;                                                // 0x001ac834: andi $a0, $a0, 1
    a0 = a0 << 7;                                               // 0x001ac838: sll $a0, $a0, 7
    v1 = v1 & 0x7f;                                             // 0x001ac83c: andi $v1, $v1, 0x7f
    v1 = a0 | v1;                                               // 0x001ac840: or $v1, $a0, $v1
    func_001a7070();  // 0x1a6f70                                // 0x001ac844: jal 0x1a6f70
    a0 = v0 | v1;                                               // 0x001ac848: or $a0, $v0, $v1
    if (v0 >= 0) goto label_0x1ac864;                           // 0x001ac84c: bgez $v0, 0x1ac864
    /* nop */                                                   // 0x001ac850: nop 
    goto label_0x1ac884;                                        // 0x001ac854: b 0x1ac884
    /* nop */                                                   // 0x001ac858: nop 
label_0x1ac85c:
    goto label_0x1ac89c;                                        // 0x001ac85c: b 0x1ac89c
label_0x1ac864:
    s6 = *(uint8_t*)((s2) + 0xb);                               // 0x001ac864: lbu $s6, 0xb($s2)
    v0 = 0xff;                                                  // 0x001ac868: addiu $v0, $zero, 0xff
    if (s6 == v0) goto label_0x1ac884;                          // 0x001ac86c: beq $s6, $v0, 0x1ac884
    v0 = s6 << 1;                                               // 0x001ac870: sll $v0, $s6, 1
    v0 = v0 + s6;                                               // 0x001ac874: addu $v0, $v0, $s6
    v0 = v0 << 2;                                               // 0x001ac878: sll $v0, $v0, 2
    goto label_0x1ac624;                                        // 0x001ac87c: b 0x1ac624
    s2 = s7 + v0;                                               // 0x001ac880: addu $s2, $s7, $v0
label_0x1ac884:
label_0x1ac888:
    goto label_0x1ac8a0;                                        // 0x001ac888: b 0x1ac8a0
label_0x1ac890:
    v0 = a0 & 0x7f;                                             // 0x001ac890: andi $v0, $a0, 0x7f
label_0x1ac894:
    goto label_0x1ac624;                                        // 0x001ac894: b 0x1ac624
    s0 = v0 << 0x10;                                            // 0x001ac898: sll $s0, $v0, 0x10
label_0x1ac89c:
label_0x1ac8a0:
    /* FPU: ld.b $w1, -0x4a($zero) */                           // 0x001ac8a4: ld.b $w1, -0x4a($zero)
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x001ac8a8: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001ac8ac: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001ac8b4: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001ac8b8: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001ac8bc: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001ac8c0: jr $ra
    sp = sp + 0x90;                                             // 0x001ac8c4: addiu $sp, $sp, 0x90
}