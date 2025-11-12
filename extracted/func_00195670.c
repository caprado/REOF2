void func_00195670() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0xc0;                                            // 0x00195670: addiu $sp, $sp, -0xc0
    at = 0x29 << 16;                                            // 0x00195674: lui $at, 0x29
    /* FPU: dpa.w.ph $ac0, $sp, $s2 */                          // 0x00195680: dpa.w.ph $ac0, $sp, $s2
    /* FPU: addu.qb $zero, $sp, $s0 */                          // 0x00195688: addu.qb $zero, $sp, $s0
    *(float*)((sp) + 4) = FPU_F21;  // Store float              // 0x0019568c: swc1 $f21, 4($sp)
    *(float*)(sp) = FPU_F20;  // Store float                    // 0x00195690: swc1 $f20, 0($sp)
    v0 = g_00290364;  // Global at 0x00290364                   // 0x00195694: lw $v0, 0x364($at)
    if (v0 == 0) goto label_0x1956a8;                           // 0x00195698: beqz $v0, 0x1956a8
    goto label_0x195970;                                        // 0x001956a0: b 0x195970
    v0 = 1;                                                     // 0x001956a4: addiu $v0, $zero, 1
label_0x1956a8:
    a0 = 0x21 << 16;                                            // 0x001956a8: lui $a0, 0x21
    a1 = 0x7000 << 16;                                          // 0x001956ac: lui $a1, 0x7000
    a0 = a0 + 0x66a0;                                           // 0x001956b0: addiu $a0, $a0, 0x66a0
    func_00189ad0();  // 0x1899f8                                // 0x001956b4: jal 0x1899f8
    a2 = 3;                                                     // 0x001956b8: addiu $a2, $zero, 3
    v0 = 0x7000 << 16;                                          // 0x001956bc: lui $v0, 0x7000
    a0 = sp + 0x60;                                             // 0x001956c0: addiu $a0, $sp, 0x60
    a1 = v0 | 0x3700;                                           // 0x001956c4: ori $a1, $v0, 0x3700
    func_001910b0();  // 0x191030                                // 0x001956c8: jal 0x191030
    a2 = v0 | 0x3f40;                                           // 0x001956cc: ori $a2, $v0, 0x3f40
    a0 = sp + 0x60;                                             // 0x001956d0: addiu $a0, $sp, 0x60
    a2 = 0x28 << 16;                                            // 0x001956d4: lui $a2, 0x28
    a2 = a2 + 0x53a0;                                           // 0x001956d8: addiu $a2, $a2, 0x53a0
    func_001910b0();  // 0x191030                                // 0x001956dc: jal 0x191030
    a0 = *(int32_t*)((s3) + 0x18);                              // 0x001956e4: lw $a0, 0x18($s3)
    func_00198aa0();  // 0x1989a0                                // 0x001956e8: jal 0x1989a0
    a0 = sp + 0xa0;                                             // 0x001956f4: addiu $a0, $sp, 0xa0
    func_001918f0();  // 0x191860                                // 0x001956fc: jal 0x191860
    a2 = sp + 0x60;                                             // 0x00195700: addiu $a2, $sp, 0x60
    s2 = sp + 0xac;                                             // 0x00195704: addiu $s2, $sp, 0xac
    v0 = 0x3f80 << 16;                                          // 0x00195708: lui $v0, 0x3f80
    FPU_F0 = *(float*)(s2);  // Load float                      // 0x0019570c: lwc1 $f0, 0($s2)
    v1 = (unsigned)s0 >> 0x10;                                  // 0x00195710: srl $v1, $s0, 0x10
    /* move to FPU: $v0, $f1 */                                 // 0x00195714: mtc1 $v0, $f1
    a0 = v1 & 0xff;                                             // 0x00195718: andi $a0, $v1, 0xff
    at = 0x7000 << 16;                                          // 0x0019571c: lui $at, 0x7000
    v0 = (unsigned)s0 >> 8;                                     // 0x00195720: srl $v0, $s0, 8
    v0 = v0 & 0xff;                                             // 0x00195724: andi $v0, $v0, 0xff
    /* FPU: div.s $f0, $f1, $f0 */                              // 0x0019572c: div.s $f0, $f1, $f0
    v0 = s0 & 0xff;                                             // 0x00195730: andi $v0, $s0, 0xff
    v1 = a0 | v1;                                               // 0x00195734: or $v1, $a0, $v1
    v1 = v0 | v1;                                               // 0x0019573c: or $v1, $v0, $v1
    v0 = (unsigned)s0 >> 0x18;                                  // 0x00195740: srl $v0, $s0, 0x18
    v0 = v0 & 0xff;                                             // 0x00195744: andi $v0, $v0, 0xff
    v1 = v0 | v1;                                               // 0x0019574c: or $v1, $v0, $v1
    *(float*)(s2) = FPU_F0;  // Store float                     // 0x00195750: swc1 $f0, 0($s2)
    v0 = v0 | v1;                                               // 0x0019575c: or $v0, $v0, $v1
    FPU_F1 = *(float*)(s2);  // Load float                      // 0x00195764: lwc1 $f1, 0($s2)
    at = 0x7000 << 16;                                          // 0x00195768: lui $at, 0x7000
    FPU_F0 = *(float*)((s3) + 0x1c);  // Load float             // 0x0019576c: lwc1 $f0, 0x1c($s3)
    /* FPU: mul.s $f0, $f0, $f1 */                              // 0x00195770: mul.s $f0, $f0, $f1
    *(float*)((sp) + 0xbc) = FPU_F0;  // Store float            // 0x00195774: swc1 $f0, 0xbc($sp)
    FPU_F0 = *(float*)((s3) + 0x20);  // Load float             // 0x00195778: lwc1 $f0, 0x20($s3)
    /* FPU: mul.s $f0, $f0, $f1 */                              // 0x00195780: mul.s $f0, $f0, $f1
    *(float*)((sp) + 0xb8) = FPU_F0;  // Store float            // 0x00195784: swc1 $f0, 0xb8($sp)
    v0 = v1 | v0;                                               // 0x00195790: or $v0, $v1, $v0
    func_00198930();  // 0x198910                                // 0x00195798: jal 0x198910
    FPU_F12 = *(float*)((sp) + 0xa0);  // Load float            // 0x0019579c: lwc1 $f12, 0xa0($sp)
    s1 = sp + 0xa4;                                             // 0x001957a0: addiu $s1, $sp, 0xa4
    FPU_F12 = *(float*)(s1);  // Load float                     // 0x001957a4: lwc1 $f12, 0($s1)
    func_00198970();  // 0x198930                                // 0x001957a8: jal 0x198930
    /* FPU: mov.s $f21, $f0 */                                  // 0x001957ac: mov.s $f21, $f0
    s0 = sp + 0xa8;                                             // 0x001957b0: addiu $s0, $sp, 0xa8
    FPU_F12 = *(float*)(s0);  // Load float                     // 0x001957b4: lwc1 $f12, 0($s0)
    func_001989a0();  // 0x198970                                // 0x001957b8: jal 0x198970
    /* FPU: mov.s $f20, $f0 */                                  // 0x001957bc: mov.s $f20, $f0
    at = 0x29 << 16;                                            // 0x001957c0: lui $at, 0x29
    v0 = 0x4f00 << 16;                                          // 0x001957c4: lui $v0, 0x4f00
    FPU_F3 = *(float*)((at) + 0x314);  // Load float            // 0x001957c8: lwc1 $f3, 0x314($at)
    /* move to FPU: $v0, $f1 */                                 // 0x001957cc: mtc1 $v0, $f1
    /* nop */                                                   // 0x001957d0: nop 
    /* FPU: c.ole.s $f1, $f0 */                                 // 0x001957d4: c.ole.s $f1, $f0
    at = 0x29 << 16;                                            // 0x001957d8: lui $at, 0x29
    FPU_F2 = *(float*)((at) + 0x318);  // Load float            // 0x001957dc: lwc1 $f2, 0x318($at)
    /* FPU: cvt.s.w $f3, $f3 */                                 // 0x001957e0: cvt.s.w $f3, $f3
    /* FPU: cvt.s.w $f2, $f2 */                                 // 0x001957e4: cvt.s.w $f2, $f2
    /* FPU: add.s $f3, $f3, $f21 */                             // 0x001957e8: add.s $f3, $f3, $f21
    /* FPU: add.s $f2, $f2, $f20 */                             // 0x001957ec: add.s $f2, $f2, $f20
    /* FPU: cvt.w.s $f3, $f3 */                                 // 0x001957f0: cvt.w.s $f3, $f3
    /* move from FPU: $v0, $f3 */                               // 0x001957f4: mfc1 $v0, $f3
    /* FPU: cvt.w.s $f2, $f2 */                                 // 0x001957f8: cvt.w.s $f2, $f2
    v1 = v0 << 4;                                               // 0x001957fc: sll $v1, $v0, 4
    /* move from FPU: $v0, $f2 */                               // 0x00195800: mfc1 $v0, $f2
    /* nop */                                                   // 0x00195804: nop 
    v0 = v0 << 4;                                               // 0x00195808: sll $v0, $v0, 4
    /* bc1t 0x195828 */                                         // 0x00195810: bc1t 0x195828
    a2 = v1 | v0;                                               // 0x00195814: or $a2, $v1, $v0
    /* FPU: cvt.w.s $f0, $f0 */                                 // 0x00195818: cvt.w.s $f0, $f0
    /* move from FPU: $v1, $f0 */                               // 0x0019581c: mfc1 $v1, $f0
    goto label_0x195844;                                        // 0x00195820: b 0x195844
    /* FPU: sub.s $f0, $f0, $f1 */                              // 0x00195828: sub.s $f0, $f0, $f1
    v0 = 0x8000 << 16;                                          // 0x0019582c: lui $v0, 0x8000
    /* FPU: cvt.w.s $f0, $f0 */                                 // 0x00195830: cvt.w.s $f0, $f0
    /* move from FPU: $v1, $f0 */                               // 0x00195834: mfc1 $v1, $f0
    /* nop */                                                   // 0x00195838: nop 
    v1 = v1 | v0;                                               // 0x0019583c: or $v1, $v1, $v0
label_0x195844:
    at = 0x7000 << 16;                                          // 0x00195844: lui $at, 0x7000
    a0 = sp + 0xa0;                                             // 0x0019584c: addiu $a0, $sp, 0xa0
    a1 = s3 + 0xc;                                              // 0x00195854: addiu $a1, $s3, 0xc
    v0 = v0 | a2;                                               // 0x00195858: or $v0, $v0, $a2
    a2 = sp + 0x60;                                             // 0x0019585c: addiu $a2, $sp, 0x60
    func_001918f0();  // 0x191860                                // 0x00195860: jal 0x191860
    FPU_F0 = *(float*)(s2);  // Load float                      // 0x00195868: lwc1 $f0, 0($s2)
    v0 = 0x3f80 << 16;                                          // 0x0019586c: lui $v0, 0x3f80
    /* move to FPU: $v0, $f1 */                                 // 0x00195870: mtc1 $v0, $f1
    at = 0x7000 << 16;                                          // 0x00195874: lui $at, 0x7000
    /* FPU: div.s $f1, $f1, $f0 */                              // 0x00195878: div.s $f1, $f1, $f0
    *(float*)(s2) = FPU_F1;  // Store float                     // 0x0019587c: swc1 $f1, 0($s2)
    FPU_F0 = *(float*)((s3) + 0x24);  // Load float             // 0x00195880: lwc1 $f0, 0x24($s3)
    /* FPU: mul.s $f0, $f0, $f1 */                              // 0x00195884: mul.s $f0, $f0, $f1
    *(float*)((sp) + 0xbc) = FPU_F0;  // Store float            // 0x00195888: swc1 $f0, 0xbc($sp)
    FPU_F0 = *(float*)((s3) + 0x28);  // Load float             // 0x0019588c: lwc1 $f0, 0x28($s3)
    /* FPU: mul.s $f0, $f0, $f1 */                              // 0x00195894: mul.s $f0, $f0, $f1
    *(float*)((sp) + 0xb8) = FPU_F0;  // Store float            // 0x00195898: swc1 $f0, 0xb8($sp)
    v0 = v1 | v0;                                               // 0x001958a4: or $v0, $v1, $v0
    func_00198930();  // 0x198910                                // 0x001958ac: jal 0x198910
    FPU_F12 = *(float*)((sp) + 0xa0);  // Load float            // 0x001958b0: lwc1 $f12, 0xa0($sp)
    FPU_F12 = *(float*)(s1);  // Load float                     // 0x001958b4: lwc1 $f12, 0($s1)
    func_00198970();  // 0x198930                                // 0x001958b8: jal 0x198930
    /* FPU: mov.s $f21, $f0 */                                  // 0x001958bc: mov.s $f21, $f0
    FPU_F12 = *(float*)(s0);  // Load float                     // 0x001958c0: lwc1 $f12, 0($s0)
    func_001989a0();  // 0x198970                                // 0x001958c4: jal 0x198970
    /* FPU: mov.s $f20, $f0 */                                  // 0x001958c8: mov.s $f20, $f0
    at = 0x29 << 16;                                            // 0x001958cc: lui $at, 0x29
    v0 = 0x4f00 << 16;                                          // 0x001958d0: lui $v0, 0x4f00
    FPU_F3 = *(float*)((at) + 0x314);  // Load float            // 0x001958d4: lwc1 $f3, 0x314($at)
    /* move to FPU: $v0, $f1 */                                 // 0x001958d8: mtc1 $v0, $f1
    /* nop */                                                   // 0x001958dc: nop 
    /* FPU: c.ole.s $f1, $f0 */                                 // 0x001958e0: c.ole.s $f1, $f0
    at = 0x29 << 16;                                            // 0x001958e4: lui $at, 0x29
    FPU_F2 = *(float*)((at) + 0x318);  // Load float            // 0x001958e8: lwc1 $f2, 0x318($at)
    /* FPU: cvt.s.w $f3, $f3 */                                 // 0x001958ec: cvt.s.w $f3, $f3
    /* FPU: cvt.s.w $f2, $f2 */                                 // 0x001958f0: cvt.s.w $f2, $f2
    /* FPU: add.s $f3, $f3, $f21 */                             // 0x001958f4: add.s $f3, $f3, $f21
    /* FPU: add.s $f2, $f2, $f20 */                             // 0x001958f8: add.s $f2, $f2, $f20
    /* FPU: cvt.w.s $f3, $f3 */                                 // 0x001958fc: cvt.w.s $f3, $f3
    /* move from FPU: $v0, $f3 */                               // 0x00195900: mfc1 $v0, $f3
    /* FPU: cvt.w.s $f2, $f2 */                                 // 0x00195904: cvt.w.s $f2, $f2
    v1 = v0 << 4;                                               // 0x00195908: sll $v1, $v0, 4
    /* move from FPU: $v0, $f2 */                               // 0x0019590c: mfc1 $v0, $f2
    /* nop */                                                   // 0x00195910: nop 
    v0 = v0 << 4;                                               // 0x00195914: sll $v0, $v0, 4
    /* bc1t 0x195934 */                                         // 0x0019591c: bc1t 0x195934
    a1 = v1 | v0;                                               // 0x00195920: or $a1, $v1, $v0
    /* FPU: cvt.w.s $f0, $f0 */                                 // 0x00195924: cvt.w.s $f0, $f0
    /* move from FPU: $v1, $f0 */                               // 0x00195928: mfc1 $v1, $f0
    goto label_0x195950;                                        // 0x0019592c: b 0x195950
    /* FPU: sub.s $f0, $f0, $f1 */                              // 0x00195934: sub.s $f0, $f0, $f1
    v0 = 0x8000 << 16;                                          // 0x00195938: lui $v0, 0x8000
    /* FPU: cvt.w.s $f0, $f0 */                                 // 0x0019593c: cvt.w.s $f0, $f0
    /* move from FPU: $v1, $f0 */                               // 0x00195940: mfc1 $v1, $f0
    /* nop */                                                   // 0x00195944: nop 
    v1 = v1 | v0;                                               // 0x00195948: or $v1, $v1, $v0
label_0x195950:
    at = 0x7000 << 16;                                          // 0x00195950: lui $at, 0x7000
    a0 = 0x7000 << 16;                                          // 0x00195958: lui $a0, 0x7000
    v0 = v0 | a1;                                               // 0x00195960: or $v0, $v0, $a1
    func_00193f40();  // 0x193e90                                // 0x00195964: jal 0x193e90
    v0 = 1;                                                     // 0x0019596c: addiu $v0, $zero, 1
label_0x195970:
    FPU_F21 = *(float*)((sp) + 4);  // Load float               // 0x00195974: lwc1 $f21, 4($sp)
    /* FPU: xori.b $w1, $w0, 0xb3 */                            // 0x00195978: xori.b $w1, $w0, 0xb3
    FPU_F20 = *(float*)(sp);  // Load float                     // 0x0019597c: lwc1 $f20, 0($sp)
    /* FPU: ld.b $w0, -0x4f($zero) */                           // 0x00195984: ld.b $w0, -0x4f($zero)
    /* FPU: aver_u.h $w0, $w0, $w16 */                          // 0x00195988: aver_u.h $w0, $w0, $w16
    return;                                                     // 0x0019598c: jr $ra
    sp = sp + 0xc0;                                             // 0x00195990: addiu $sp, $sp, 0xc0
}