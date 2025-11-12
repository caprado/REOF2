void func_001ab530() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x60;                                            // 0x001ab530: addiu $sp, $sp, -0x60
    at = 0x29 << 16;                                            // 0x001ab534: lui $at, 0x29
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001ab540: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001ab548: addu.qb $zero, $sp, $s1
    v0 = g_00290364;  // Global at 0x00290364                   // 0x001ab550: lw $v0, 0x364($at)
    if (v0 == 0) goto label_0x1ab564;                           // 0x001ab554: beqz $v0, 0x1ab564
    goto label_0x1ab79c;                                        // 0x001ab55c: b 0x1ab79c
    v0 = 1;                                                     // 0x001ab560: addiu $v0, $zero, 1
label_0x1ab564:
    at = 0x29 << 16;                                            // 0x001ab564: lui $at, 0x29
    v0 = 0x1000;                                                // 0x001ab568: addiu $v0, $zero, 0x1000
    a0 = g_0028ff7c;  // Global at 0x0028ff7c                   // 0x001ab56c: lw $a0, -0x84($at)
    v1 = v0 - a0;                                               // 0x001ab570: subu $v1, $v0, $a0
    if (v1 >= 0) goto label_0x1ab584;                           // 0x001ab574: bgez $v1, 0x1ab584
    v0 = v1 >> 1;                                               // 0x001ab578: sra $v0, $v1, 1
    v0 = v1 + 1;                                                // 0x001ab57c: addiu $v0, $v1, 1
    v0 = v0 >> 1;                                               // 0x001ab580: sra $v0, $v0, 1
label_0x1ab584:
    t1 = v0 << 4;                                               // 0x001ab584: sll $t1, $v0, 4
    at = 0x29 << 16;                                            // 0x001ab588: lui $at, 0x29
    v0 = g_0028ff80;  // Global at 0x0028ff80                   // 0x001ab58c: lw $v0, -0x80($at)
    v1 = 0x1000;                                                // 0x001ab590: addiu $v1, $zero, 0x1000
    v1 = v1 - v0;                                               // 0x001ab594: subu $v1, $v1, $v0
    if (v1 >= 0) goto label_0x1ab5a8;                           // 0x001ab598: bgez $v1, 0x1ab5a8
    v0 = v1 >> 1;                                               // 0x001ab59c: sra $v0, $v1, 1
    v0 = v1 + 1;                                                // 0x001ab5a0: addiu $v0, $v1, 1
    v0 = v0 >> 1;                                               // 0x001ab5a4: sra $v0, $v0, 1
label_0x1ab5a8:
    /* move to FPU: $a0, $f1 */                                 // 0x001ab5a8: mtc1 $a0, $f1
    t0 = v0 << 4;                                               // 0x001ab5ac: sll $t0, $v0, 4
    v0 = 0x4420 << 16;                                          // 0x001ab5b0: lui $v0, 0x4420
    a1 = *(int16_t*)((s4) + 2);                                 // 0x001ab5b4: lh $a1, 2($s4)
    /* FPU: cvt.s.w $f1, $f1 */                                 // 0x001ab5b8: cvt.s.w $f1, $f1
    v1 = *(int16_t*)((s4) + 6);                                 // 0x001ab5bc: lh $v1, 6($s4)
    a3 = *(int16_t*)(s4);                                       // 0x001ab5c0: lh $a3, 0($s4)
    a2 = 0x4180 << 16;                                          // 0x001ab5c4: lui $a2, 0x4180
    a0 = *(int16_t*)((s4) + 4);                                 // 0x001ab5c8: lh $a0, 4($s4)
    at = 0x29 << 16;                                            // 0x001ab5cc: lui $at, 0x29
    s2 = a1 << 4;                                               // 0x001ab5d0: sll $s2, $a1, 4
    /* move to FPU: $v0, $f0 */                                 // 0x001ab5d4: mtc1 $v0, $f0
    /* nop */                                                   // 0x001ab5d8: nop 
    /* FPU: div.s $f2, $f1, $f0 */                              // 0x001ab5dc: div.s $f2, $f1, $f0
    v0 = g_0028ff74;  // Global at 0x0028ff74                   // 0x001ab5e0: lw $v0, -0x8c($at)
    /* move to FPU: $a3, $f0 */                                 // 0x001ab5e4: mtc1 $a3, $f0
    /* move to FPU: $a2, $f1 */                                 // 0x001ab5e8: mtc1 $a2, $f1
    /* nop */                                                   // 0x001ab5ec: nop 
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x001ab5f0: cvt.s.w $f0, $f0
    /* FPU: mul.s $f0, $f0, $f2 */                              // 0x001ab5f4: mul.s $f0, $f0, $f2
    /* FPU: mul.s $f0, $f1, $f0 */                              // 0x001ab5f8: mul.s $f0, $f1, $f0
    /* FPU: cvt.w.s $f0, $f0 */                                 // 0x001ab5fc: cvt.w.s $f0, $f0
    /* move from FPU: $s3, $f0 */                               // 0x001ab600: mfc1 $s3, $f0
    /* move to FPU: $a0, $f0 */                                 // 0x001ab604: mtc1 $a0, $f0
    /* nop */                                                   // 0x001ab608: nop 
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x001ab60c: cvt.s.w $f0, $f0
    /* FPU: mul.s $f0, $f0, $f2 */                              // 0x001ab610: mul.s $f0, $f0, $f2
    /* FPU: mul.s $f0, $f1, $f0 */                              // 0x001ab614: mul.s $f0, $f1, $f0
    /* FPU: cvt.w.s $f0, $f0 */                                 // 0x001ab618: cvt.w.s $f0, $f0
    /* move from FPU: $s1, $f0 */                               // 0x001ab61c: mfc1 $s1, $f0
    if (v0 != 0) goto label_0x1ab630;                           // 0x001ab620: bnez $v0, 0x1ab630
    s0 = v1 << 4;                                               // 0x001ab624: sll $s0, $v1, 4
    s2 = s2 >> 1;                                               // 0x001ab628: sra $s2, $s2, 1
    s0 = s0 >> 1;                                               // 0x001ab62c: sra $s0, $s0, 1
label_0x1ab630:
    a0 = 0x22 << 16;                                            // 0x001ab630: lui $a0, 0x22
    s3 = s3 + t1;                                               // 0x001ab634: addu $s3, $s3, $t1
    s1 = s1 + t1;                                               // 0x001ab638: addu $s1, $s1, $t1
    s2 = s2 + t0;                                               // 0x001ab63c: addu $s2, $s2, $t0
    s0 = s0 + t0;                                               // 0x001ab640: addu $s0, $s0, $t0
    a0 = a0 + -0x4410;                                          // 0x001ab644: addiu $a0, $a0, -0x4410
    a1 = 0x7000 << 16;                                          // 0x001ab648: lui $a1, 0x7000
    func_00189ad0();  // 0x1899f8                                // 0x001ab64c: jal 0x1899f8
    a2 = 3;                                                     // 0x001ab650: addiu $a2, $zero, 3
    a0 = *(int32_t*)((s4) + 8);                                 // 0x001ab654: lw $a0, 8($s4)
    func_00198aa0();  // 0x1989a0                                // 0x001ab658: jal 0x1989a0
    a1 = 1;                                                     // 0x001ab65c: addiu $a1, $zero, 1
    a0 = (unsigned)v0 >> 0x10;                                  // 0x001ab660: srl $a0, $v0, 0x10
    v1 = (unsigned)v0 >> 8;                                     // 0x001ab664: srl $v1, $v0, 8
    a1 = a0 & 0xff;                                             // 0x001ab668: andi $a1, $a0, 0xff
    v1 = v1 & 0xff;                                             // 0x001ab66c: andi $v1, $v1, 0xff
    at = 0x7000 << 16;                                          // 0x001ab674: lui $at, 0x7000
    v1 = v0 & 0xff;                                             // 0x001ab678: andi $v1, $v0, 0xff
    a0 = a1 | a0;                                               // 0x001ab67c: or $a0, $a1, $a0
    v0 = (unsigned)v0 >> 0x18;                                  // 0x001ab684: srl $v0, $v0, 0x18
    a1 = v1 | a0;                                               // 0x001ab688: or $a1, $v1, $a0
    v1 = v0 & 0xff;                                             // 0x001ab68c: andi $v1, $v0, 0xff
    v0 = 1;                                                     // 0x001ab694: addiu $v0, $zero, 1
    a0 = a0 | a1;                                               // 0x001ab69c: or $a0, $a0, $a1
    v1 = a0 | v1;                                               // 0x001ab6a0: or $v1, $a0, $v1
    v0 = 0x4f00 << 16;                                          // 0x001ab6a4: lui $v0, 0x4f00
    /* move to FPU: $v0, $f0 */                                 // 0x001ab6ac: mtc1 $v0, $f0
    at = 0x29 << 16;                                            // 0x001ab6b0: lui $at, 0x29
    FPU_F1 = *(float*)((at) + -0x4c);  // Load float            // 0x001ab6b4: lwc1 $f1, -0x4c($at)
    /* FPU: c.ole.s $f0, $f1 */                                 // 0x001ab6b8: c.ole.s $f0, $f1
    /* bc1t 0x1ab6d4 */                                         // 0x001ab6bc: bc1t 0x1ab6d4
    /* nop */                                                   // 0x001ab6c0: nop 
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001ab6c4: cvt.w.s $f1, $f1
    /* move from FPU: $v1, $f1 */                               // 0x001ab6c8: mfc1 $v1, $f1
    goto label_0x1ab6f0;                                        // 0x001ab6cc: b 0x1ab6f0
    /* FPU: sub.s $f1, $f1, $f0 */                              // 0x001ab6d4: sub.s $f1, $f1, $f0
    v0 = 0x8000 << 16;                                          // 0x001ab6d8: lui $v0, 0x8000
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001ab6dc: cvt.w.s $f1, $f1
    /* move from FPU: $v1, $f1 */                               // 0x001ab6e0: mfc1 $v1, $f1
    /* nop */                                                   // 0x001ab6e4: nop 
    v1 = v1 | v0;                                               // 0x001ab6e8: or $v1, $v1, $v0
label_0x1ab6f0:
    at = 0x7000 << 16;                                          // 0x001ab700: lui $at, 0x7000
    v1 = a0 | v1;                                               // 0x001ab710: or $v1, $a0, $v1
    v0 = 0x4f00 << 16;                                          // 0x001ab714: lui $v0, 0x4f00
    v1 = a1 | v1;                                               // 0x001ab718: or $v1, $a1, $v1
    /* move to FPU: $v0, $f0 */                                 // 0x001ab720: mtc1 $v0, $f0
    at = 0x29 << 16;                                            // 0x001ab724: lui $at, 0x29
    FPU_F1 = *(float*)((at) + -0x4c);  // Load float            // 0x001ab728: lwc1 $f1, -0x4c($at)
    /* FPU: c.ole.s $f0, $f1 */                                 // 0x001ab72c: c.ole.s $f0, $f1
    /* bc1t 0x1ab748 */                                         // 0x001ab730: bc1t 0x1ab748
    /* nop */                                                   // 0x001ab734: nop 
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001ab738: cvt.w.s $f1, $f1
    /* move from FPU: $v1, $f1 */                               // 0x001ab73c: mfc1 $v1, $f1
    goto label_0x1ab764;                                        // 0x001ab740: b 0x1ab764
    /* FPU: sub.s $f1, $f1, $f0 */                              // 0x001ab748: sub.s $f1, $f1, $f0
    v0 = 0x8000 << 16;                                          // 0x001ab74c: lui $v0, 0x8000
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001ab750: cvt.w.s $f1, $f1
    /* move from FPU: $v1, $f1 */                               // 0x001ab754: mfc1 $v1, $f1
    /* nop */                                                   // 0x001ab758: nop 
    v1 = v1 | v0;                                               // 0x001ab75c: or $v1, $v1, $v0
label_0x1ab764:
    at = 0x7000 << 16;                                          // 0x001ab764: lui $at, 0x7000
    a0 = 0x7000 << 16;                                          // 0x001ab77c: lui $a0, 0x7000
    v0 = v1 | v0;                                               // 0x001ab788: or $v0, $v1, $v0
    v0 = a1 | v0;                                               // 0x001ab78c: or $v0, $a1, $v0
    func_00193f40();  // 0x193e90                                // 0x001ab790: jal 0x193e90
    v0 = 1;                                                     // 0x001ab798: addiu $v0, $zero, 1
label_0x1ab79c:
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001ab7a0: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001ab7a8: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001ab7ac: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001ab7b0: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001ab7b4: jr $ra
    sp = sp + 0x60;                                             // 0x001ab7b8: addiu $sp, $sp, 0x60
}