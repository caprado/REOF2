void func_001ab230() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x60;                                            // 0x001ab230: addiu $sp, $sp, -0x60
    at = 0x29 << 16;                                            // 0x001ab234: lui $at, 0x29
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001ab240: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001ab248: addu.qb $zero, $sp, $s1
    v0 = g_00290364;  // Global at 0x00290364                   // 0x001ab250: lw $v0, 0x364($at)
    if (v0 == 0) goto label_0x1ab264;                           // 0x001ab254: beqz $v0, 0x1ab264
    goto label_0x1ab50c;                                        // 0x001ab25c: b 0x1ab50c
    v0 = 1;                                                     // 0x001ab260: addiu $v0, $zero, 1
label_0x1ab264:
    at = 0x29 << 16;                                            // 0x001ab264: lui $at, 0x29
    v0 = 0x1000;                                                // 0x001ab268: addiu $v0, $zero, 0x1000
    a0 = g_0028ff7c;  // Global at 0x0028ff7c                   // 0x001ab26c: lw $a0, -0x84($at)
    v1 = v0 - a0;                                               // 0x001ab270: subu $v1, $v0, $a0
    if (v1 >= 0) goto label_0x1ab284;                           // 0x001ab274: bgez $v1, 0x1ab284
    v0 = v1 >> 1;                                               // 0x001ab278: sra $v0, $v1, 1
    v0 = v1 + 1;                                                // 0x001ab27c: addiu $v0, $v1, 1
    v0 = v0 >> 1;                                               // 0x001ab280: sra $v0, $v0, 1
label_0x1ab284:
    t1 = v0 << 4;                                               // 0x001ab284: sll $t1, $v0, 4
    at = 0x29 << 16;                                            // 0x001ab288: lui $at, 0x29
    v0 = g_0028ff80;  // Global at 0x0028ff80                   // 0x001ab28c: lw $v0, -0x80($at)
    v1 = 0x1000;                                                // 0x001ab290: addiu $v1, $zero, 0x1000
    v1 = v1 - v0;                                               // 0x001ab294: subu $v1, $v1, $v0
    if (v1 >= 0) goto label_0x1ab2a8;                           // 0x001ab298: bgez $v1, 0x1ab2a8
    v0 = v1 >> 1;                                               // 0x001ab29c: sra $v0, $v1, 1
    v0 = v1 + 1;                                                // 0x001ab2a0: addiu $v0, $v1, 1
    v0 = v0 >> 1;                                               // 0x001ab2a4: sra $v0, $v0, 1
label_0x1ab2a8:
    /* move to FPU: $a0, $f1 */                                 // 0x001ab2a8: mtc1 $a0, $f1
    t0 = v0 << 4;                                               // 0x001ab2ac: sll $t0, $v0, 4
    v0 = 0x4420 << 16;                                          // 0x001ab2b0: lui $v0, 0x4420
    a1 = *(int16_t*)((s4) + 2);                                 // 0x001ab2b4: lh $a1, 2($s4)
    /* FPU: cvt.s.w $f1, $f1 */                                 // 0x001ab2b8: cvt.s.w $f1, $f1
    v1 = *(int16_t*)((s4) + 6);                                 // 0x001ab2bc: lh $v1, 6($s4)
    a3 = *(int16_t*)(s4);                                       // 0x001ab2c0: lh $a3, 0($s4)
    a2 = 0x4180 << 16;                                          // 0x001ab2c4: lui $a2, 0x4180
    a0 = *(int16_t*)((s4) + 4);                                 // 0x001ab2c8: lh $a0, 4($s4)
    at = 0x29 << 16;                                            // 0x001ab2cc: lui $at, 0x29
    s2 = a1 << 4;                                               // 0x001ab2d0: sll $s2, $a1, 4
    /* move to FPU: $v0, $f0 */                                 // 0x001ab2d4: mtc1 $v0, $f0
    /* nop */                                                   // 0x001ab2d8: nop 
    /* FPU: div.s $f2, $f1, $f0 */                              // 0x001ab2dc: div.s $f2, $f1, $f0
    v0 = g_0028ff74;  // Global at 0x0028ff74                   // 0x001ab2e0: lw $v0, -0x8c($at)
    /* move to FPU: $a3, $f0 */                                 // 0x001ab2e4: mtc1 $a3, $f0
    /* move to FPU: $a2, $f1 */                                 // 0x001ab2e8: mtc1 $a2, $f1
    /* nop */                                                   // 0x001ab2ec: nop 
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x001ab2f0: cvt.s.w $f0, $f0
    /* FPU: mul.s $f0, $f0, $f2 */                              // 0x001ab2f4: mul.s $f0, $f0, $f2
    /* FPU: mul.s $f0, $f1, $f0 */                              // 0x001ab2f8: mul.s $f0, $f1, $f0
    /* FPU: cvt.w.s $f0, $f0 */                                 // 0x001ab2fc: cvt.w.s $f0, $f0
    /* move from FPU: $s3, $f0 */                               // 0x001ab300: mfc1 $s3, $f0
    /* move to FPU: $a0, $f0 */                                 // 0x001ab304: mtc1 $a0, $f0
    /* nop */                                                   // 0x001ab308: nop 
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x001ab30c: cvt.s.w $f0, $f0
    /* FPU: mul.s $f0, $f0, $f2 */                              // 0x001ab310: mul.s $f0, $f0, $f2
    /* FPU: mul.s $f0, $f1, $f0 */                              // 0x001ab314: mul.s $f0, $f1, $f0
    /* FPU: cvt.w.s $f0, $f0 */                                 // 0x001ab318: cvt.w.s $f0, $f0
    /* move from FPU: $s1, $f0 */                               // 0x001ab31c: mfc1 $s1, $f0
    if (v0 != 0) goto label_0x1ab330;                           // 0x001ab320: bnez $v0, 0x1ab330
    s0 = v1 << 4;                                               // 0x001ab324: sll $s0, $v1, 4
    s2 = s2 >> 1;                                               // 0x001ab328: sra $s2, $s2, 1
    s0 = s0 >> 1;                                               // 0x001ab32c: sra $s0, $s0, 1
label_0x1ab330:
    a0 = 0x22 << 16;                                            // 0x001ab330: lui $a0, 0x22
    s3 = s3 + t1;                                               // 0x001ab334: addu $s3, $s3, $t1
    s2 = s2 + t0;                                               // 0x001ab338: addu $s2, $s2, $t0
    a0 = a0 + -0x4460;                                          // 0x001ab33c: addiu $a0, $a0, -0x4460
    a1 = 0x7000 << 16;                                          // 0x001ab340: lui $a1, 0x7000
    func_001899f8();  // 1899f8                                // 0x001ab344: jal 0x1899f8
    a2 = 3;                                                     // 0x001ab348: addiu $a2, $zero, 3
    a0 = *(int32_t*)((s4) + 8);                                 // 0x001ab34c: lw $a0, 8($s4)
    func_001989a0();  // 1989a0                                // 0x001ab350: jal 0x1989a0
    a0 = (unsigned)v0 >> 0x10;                                  // 0x001ab358: srl $a0, $v0, 0x10
    v1 = (unsigned)v0 >> 8;                                     // 0x001ab35c: srl $v1, $v0, 8
    a1 = a0 & 0xff;                                             // 0x001ab360: andi $a1, $a0, 0xff
    v1 = v1 & 0xff;                                             // 0x001ab364: andi $v1, $v1, 0xff
    at = 0x7000 << 16;                                          // 0x001ab36c: lui $at, 0x7000
    v1 = v0 & 0xff;                                             // 0x001ab370: andi $v1, $v0, 0xff
    a0 = a1 | a0;                                               // 0x001ab374: or $a0, $a1, $a0
    v0 = (unsigned)v0 >> 0x18;                                  // 0x001ab37c: srl $v0, $v0, 0x18
    a1 = v1 | a0;                                               // 0x001ab380: or $a1, $v1, $a0
    v1 = v0 & 0xff;                                             // 0x001ab384: andi $v1, $v0, 0xff
    v0 = 1;                                                     // 0x001ab38c: addiu $v0, $zero, 1
    a0 = a0 | a1;                                               // 0x001ab394: or $a0, $a0, $a1
    v0 = 0x4f00 << 16;                                          // 0x001ab398: lui $v0, 0x4f00
    v1 = a0 | v1;                                               // 0x001ab39c: or $v1, $a0, $v1
    /* move to FPU: $v0, $f0 */                                 // 0x001ab3a0: mtc1 $v0, $f0
    v1 = *(int16_t*)((s4) + 0xc);                               // 0x001ab3a8: lh $v1, 0xc($s4)
    at = 0x7000 << 16;                                          // 0x001ab3ac: lui $at, 0x7000
    v0 = *(int16_t*)((s4) + 0xe);                               // 0x001ab3b0: lh $v0, 0xe($s4)
    v1 = v1 << 4;                                               // 0x001ab3b4: sll $v1, $v1, 4
    v0 = v0 << 4;                                               // 0x001ab3b8: sll $v0, $v0, 4
    v1 = v1 + 8;                                                // 0x001ab3bc: addiu $v1, $v1, 8
    v0 = v0 + 8;                                                // 0x001ab3c0: addiu $v0, $v0, 8
    v0 = v1 | v0;                                               // 0x001ab3d8: or $v0, $v1, $v0
    at = 0x29 << 16;                                            // 0x001ab3e0: lui $at, 0x29
    FPU_F1 = *(float*)((at) + -0x4c);  // Load float            // 0x001ab3e4: lwc1 $f1, -0x4c($at)
    /* FPU: c.ole.s $f0, $f1 */                                 // 0x001ab3e8: c.ole.s $f0, $f1
    /* bc1t 0x1ab404 */                                         // 0x001ab3ec: bc1t 0x1ab404
    /* nop */                                                   // 0x001ab3f0: nop 
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001ab3f4: cvt.w.s $f1, $f1
    /* move from FPU: $v1, $f1 */                               // 0x001ab3f8: mfc1 $v1, $f1
    goto label_0x1ab420;                                        // 0x001ab3fc: b 0x1ab420
    /* FPU: sub.s $f1, $f1, $f0 */                              // 0x001ab404: sub.s $f1, $f1, $f0
    v0 = 0x8000 << 16;                                          // 0x001ab408: lui $v0, 0x8000
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001ab40c: cvt.w.s $f1, $f1
    /* move from FPU: $v1, $f1 */                               // 0x001ab410: mfc1 $v1, $f1
    /* nop */                                                   // 0x001ab414: nop 
    v1 = v1 | v0;                                               // 0x001ab418: or $v1, $v1, $v0
label_0x1ab420:
    v0 = s3 + s1;                                               // 0x001ab42c: addu $v0, $s3, $s1
    v0 = s2 + s0;                                               // 0x001ab43c: addu $v0, $s2, $s0
    a0 = a1 | a0;                                               // 0x001ab458: or $a0, $a1, $a0
    a1 = v1 | v0;                                               // 0x001ab45c: or $a1, $v1, $v0
    at = 0x7000 << 16;                                          // 0x001ab460: lui $at, 0x7000
    v0 = 0x4f00 << 16;                                          // 0x001ab464: lui $v0, 0x4f00
    v1 = a2 | a0;                                               // 0x001ab468: or $v1, $a2, $a0
    /* move to FPU: $v0, $f0 */                                 // 0x001ab46c: mtc1 $v0, $f0
    v1 = *(int16_t*)((s4) + 0x10);                              // 0x001ab474: lh $v1, 0x10($s4)
    at = 0x7000 << 16;                                          // 0x001ab478: lui $at, 0x7000
    v0 = *(int16_t*)((s4) + 0x12);                              // 0x001ab47c: lh $v0, 0x12($s4)
    v1 = v1 << 4;                                               // 0x001ab480: sll $v1, $v1, 4
    v0 = v0 << 4;                                               // 0x001ab484: sll $v0, $v0, 4
    v1 = v1 + 8;                                                // 0x001ab488: addiu $v1, $v1, 8
    v0 = v0 + 8;                                                // 0x001ab48c: addiu $v0, $v0, 8
    v0 = v1 | v0;                                               // 0x001ab4a4: or $v0, $v1, $v0
    at = 0x29 << 16;                                            // 0x001ab4ac: lui $at, 0x29
    FPU_F1 = *(float*)((at) + -0x4c);  // Load float            // 0x001ab4b0: lwc1 $f1, -0x4c($at)
    /* FPU: c.ole.s $f0, $f1 */                                 // 0x001ab4b4: c.ole.s $f0, $f1
    /* bc1t 0x1ab4d0 */                                         // 0x001ab4b8: bc1t 0x1ab4d0
    /* nop */                                                   // 0x001ab4bc: nop 
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001ab4c0: cvt.w.s $f1, $f1
    /* move from FPU: $v1, $f1 */                               // 0x001ab4c4: mfc1 $v1, $f1
    goto label_0x1ab4ec;                                        // 0x001ab4c8: b 0x1ab4ec
    /* FPU: sub.s $f1, $f1, $f0 */                              // 0x001ab4d0: sub.s $f1, $f1, $f0
    v0 = 0x8000 << 16;                                          // 0x001ab4d4: lui $v0, 0x8000
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001ab4d8: cvt.w.s $f1, $f1
    /* move from FPU: $v1, $f1 */                               // 0x001ab4dc: mfc1 $v1, $f1
    /* nop */                                                   // 0x001ab4e0: nop 
    v1 = v1 | v0;                                               // 0x001ab4e4: or $v1, $v1, $v0
label_0x1ab4ec:
    at = 0x7000 << 16;                                          // 0x001ab4ec: lui $at, 0x7000
    a0 = 0x7000 << 16;                                          // 0x001ab4f4: lui $a0, 0x7000
    v0 = v0 | a1;                                               // 0x001ab4fc: or $v0, $v0, $a1
    func_00193e90();  // 193e90                                // 0x001ab500: jal 0x193e90
    v0 = 1;                                                     // 0x001ab508: addiu $v0, $zero, 1
label_0x1ab50c:
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001ab510: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001ab518: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001ab51c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001ab520: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001ab524: jr $ra
    sp = sp + 0x60;                                             // 0x001ab528: addiu $sp, $sp, 0x60
}