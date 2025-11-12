void func_001953a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0xb0;                                            // 0x001953a0: addiu $sp, $sp, -0xb0
    at = 0x29 << 16;                                            // 0x001953a4: lui $at, 0x29
    /* FPU: dpa.w.ph $ac0, $sp, $s2 */                          // 0x001953b0: dpa.w.ph $ac0, $sp, $s2
    /* FPU: addu.qb $zero, $sp, $s0 */                          // 0x001953b8: addu.qb $zero, $sp, $s0
    *(float*)((sp) + 4) = FPU_F21;  // Store float              // 0x001953bc: swc1 $f21, 4($sp)
    *(float*)(sp) = FPU_F20;  // Store float                    // 0x001953c0: swc1 $f20, 0($sp)
    v0 = g_00290364;  // Global at 0x00290364                   // 0x001953c4: lw $v0, 0x364($at)
    if (v0 == 0) goto label_0x1953d8;                           // 0x001953c8: beqz $v0, 0x1953d8
    goto label_0x195648;                                        // 0x001953d0: b 0x195648
    v0 = 1;                                                     // 0x001953d4: addiu $v0, $zero, 1
label_0x1953d8:
    a0 = 0x21 << 16;                                            // 0x001953d8: lui $a0, 0x21
    a1 = 0x7000 << 16;                                          // 0x001953dc: lui $a1, 0x7000
    a0 = a0 + 0x6660;                                           // 0x001953e0: addiu $a0, $a0, 0x6660
    func_00189ad0();  // 0x1899f8                                // 0x001953e4: jal 0x1899f8
    a2 = 3;                                                     // 0x001953e8: addiu $a2, $zero, 3
    v0 = 0x7000 << 16;                                          // 0x001953ec: lui $v0, 0x7000
    a0 = sp + 0x60;                                             // 0x001953f0: addiu $a0, $sp, 0x60
    a1 = v0 | 0x3700;                                           // 0x001953f4: ori $a1, $v0, 0x3700
    func_001910b0();  // 0x191030                                // 0x001953f8: jal 0x191030
    a2 = v0 | 0x3f40;                                           // 0x001953fc: ori $a2, $v0, 0x3f40
    a0 = sp + 0x60;                                             // 0x00195400: addiu $a0, $sp, 0x60
    a2 = 0x28 << 16;                                            // 0x00195404: lui $a2, 0x28
    a2 = a2 + 0x53a0;                                           // 0x00195408: addiu $a2, $a2, 0x53a0
    func_001910b0();  // 0x191030                                // 0x0019540c: jal 0x191030
    a0 = sp + 0xa0;                                             // 0x00195414: addiu $a0, $sp, 0xa0
    func_001918f0();  // 0x191860                                // 0x0019541c: jal 0x191860
    a2 = sp + 0x60;                                             // 0x00195420: addiu $a2, $sp, 0x60
    s2 = sp + 0xac;                                             // 0x00195424: addiu $s2, $sp, 0xac
    v0 = 0x3f80 << 16;                                          // 0x00195428: lui $v0, 0x3f80
    FPU_F0 = *(float*)(s2);  // Load float                      // 0x0019542c: lwc1 $f0, 0($s2)
    a1 = 1;                                                     // 0x00195430: addiu $a1, $zero, 1
    /* move to FPU: $v0, $f1 */                                 // 0x00195434: mtc1 $v0, $f1
    /* nop */                                                   // 0x00195438: nop 
    /* FPU: div.s $f0, $f1, $f0 */                              // 0x0019543c: div.s $f0, $f1, $f0
    /* nop */                                                   // 0x00195440: nop 
    *(float*)(s2) = FPU_F0;  // Store float                     // 0x00195444: swc1 $f0, 0($s2)
    func_00198aa0();  // 0x1989a0                                // 0x00195448: jal 0x1989a0
    a0 = *(int32_t*)((s3) + 0x18);                              // 0x0019544c: lw $a0, 0x18($s3)
    a0 = (unsigned)v0 >> 0x10;                                  // 0x00195450: srl $a0, $v0, 0x10
    v1 = (unsigned)v0 >> 8;                                     // 0x00195454: srl $v1, $v0, 8
    a1 = a0 & 0xff;                                             // 0x00195458: andi $a1, $a0, 0xff
    v1 = v1 & 0xff;                                             // 0x0019545c: andi $v1, $v1, 0xff
    at = 0x7000 << 16;                                          // 0x00195464: lui $at, 0x7000
    v1 = v0 & 0xff;                                             // 0x00195468: andi $v1, $v0, 0xff
    a0 = a1 | a0;                                               // 0x0019546c: or $a0, $a1, $a0
    v0 = (unsigned)v0 >> 0x18;                                  // 0x00195474: srl $v0, $v0, 0x18
    a0 = v1 | a0;                                               // 0x00195478: or $a0, $v1, $a0
    v1 = v0 & 0xff;                                             // 0x0019547c: andi $v1, $v0, 0xff
    v1 = v1 | a0;                                               // 0x00195488: or $v1, $v1, $a0
    v0 = v0 | v1;                                               // 0x00195490: or $v0, $v0, $v1
    func_00198930();  // 0x198910                                // 0x00195498: jal 0x198910
    FPU_F12 = *(float*)((sp) + 0xa0);  // Load float            // 0x0019549c: lwc1 $f12, 0xa0($sp)
    s1 = sp + 0xa4;                                             // 0x001954a0: addiu $s1, $sp, 0xa4
    FPU_F12 = *(float*)(s1);  // Load float                     // 0x001954a4: lwc1 $f12, 0($s1)
    func_00198970();  // 0x198930                                // 0x001954a8: jal 0x198930
    /* FPU: mov.s $f21, $f0 */                                  // 0x001954ac: mov.s $f21, $f0
    s0 = sp + 0xa8;                                             // 0x001954b0: addiu $s0, $sp, 0xa8
    FPU_F12 = *(float*)(s0);  // Load float                     // 0x001954b4: lwc1 $f12, 0($s0)
    func_001989a0();  // 0x198970                                // 0x001954b8: jal 0x198970
    /* FPU: mov.s $f20, $f0 */                                  // 0x001954bc: mov.s $f20, $f0
    at = 0x29 << 16;                                            // 0x001954c0: lui $at, 0x29
    v0 = 0x4f00 << 16;                                          // 0x001954c4: lui $v0, 0x4f00
    FPU_F3 = *(float*)((at) + 0x314);  // Load float            // 0x001954c8: lwc1 $f3, 0x314($at)
    /* move to FPU: $v0, $f1 */                                 // 0x001954cc: mtc1 $v0, $f1
    /* nop */                                                   // 0x001954d0: nop 
    /* FPU: c.ole.s $f1, $f0 */                                 // 0x001954d4: c.ole.s $f1, $f0
    at = 0x29 << 16;                                            // 0x001954d8: lui $at, 0x29
    FPU_F2 = *(float*)((at) + 0x318);  // Load float            // 0x001954dc: lwc1 $f2, 0x318($at)
    /* FPU: cvt.s.w $f3, $f3 */                                 // 0x001954e0: cvt.s.w $f3, $f3
    /* FPU: cvt.s.w $f2, $f2 */                                 // 0x001954e4: cvt.s.w $f2, $f2
    /* FPU: add.s $f3, $f3, $f21 */                             // 0x001954e8: add.s $f3, $f3, $f21
    /* FPU: add.s $f2, $f2, $f20 */                             // 0x001954ec: add.s $f2, $f2, $f20
    /* FPU: cvt.w.s $f3, $f3 */                                 // 0x001954f0: cvt.w.s $f3, $f3
    /* move from FPU: $v0, $f3 */                               // 0x001954f4: mfc1 $v0, $f3
    /* FPU: cvt.w.s $f2, $f2 */                                 // 0x001954f8: cvt.w.s $f2, $f2
    v1 = v0 << 4;                                               // 0x001954fc: sll $v1, $v0, 4
    /* move from FPU: $v0, $f2 */                               // 0x00195500: mfc1 $v0, $f2
    /* nop */                                                   // 0x00195504: nop 
    v0 = v0 << 4;                                               // 0x00195508: sll $v0, $v0, 4
    /* bc1t 0x195528 */                                         // 0x00195510: bc1t 0x195528
    a2 = v1 | v0;                                               // 0x00195514: or $a2, $v1, $v0
    /* FPU: cvt.w.s $f0, $f0 */                                 // 0x00195518: cvt.w.s $f0, $f0
    /* move from FPU: $v1, $f0 */                               // 0x0019551c: mfc1 $v1, $f0
    goto label_0x195544;                                        // 0x00195520: b 0x195544
    /* FPU: sub.s $f0, $f0, $f1 */                              // 0x00195528: sub.s $f0, $f0, $f1
    v0 = 0x8000 << 16;                                          // 0x0019552c: lui $v0, 0x8000
    /* FPU: cvt.w.s $f0, $f0 */                                 // 0x00195530: cvt.w.s $f0, $f0
    /* move from FPU: $v1, $f0 */                               // 0x00195534: mfc1 $v1, $f0
    /* nop */                                                   // 0x00195538: nop 
    v1 = v1 | v0;                                               // 0x0019553c: or $v1, $v1, $v0
label_0x195544:
    at = 0x7000 << 16;                                          // 0x00195544: lui $at, 0x7000
    a1 = s3 + 0xc;                                              // 0x0019554c: addiu $a1, $s3, 0xc
    a0 = sp + 0xa0;                                             // 0x00195554: addiu $a0, $sp, 0xa0
    v0 = v0 | a2;                                               // 0x00195558: or $v0, $v0, $a2
    a2 = sp + 0x60;                                             // 0x0019555c: addiu $a2, $sp, 0x60
    func_001918f0();  // 0x191860                                // 0x00195560: jal 0x191860
    FPU_F0 = *(float*)(s2);  // Load float                      // 0x00195568: lwc1 $f0, 0($s2)
    v0 = 0x3f80 << 16;                                          // 0x0019556c: lui $v0, 0x3f80
    /* move to FPU: $v0, $f1 */                                 // 0x00195570: mtc1 $v0, $f1
    /* nop */                                                   // 0x00195574: nop 
    /* FPU: div.s $f0, $f1, $f0 */                              // 0x00195578: div.s $f0, $f1, $f0
    /* nop */                                                   // 0x0019557c: nop 
    *(float*)(s2) = FPU_F0;  // Store float                     // 0x00195580: swc1 $f0, 0($s2)
    func_00198930();  // 0x198910                                // 0x00195584: jal 0x198910
    FPU_F12 = *(float*)((sp) + 0xa0);  // Load float            // 0x00195588: lwc1 $f12, 0xa0($sp)
    FPU_F12 = *(float*)(s1);  // Load float                     // 0x0019558c: lwc1 $f12, 0($s1)
    func_00198970();  // 0x198930                                // 0x00195590: jal 0x198930
    /* FPU: mov.s $f21, $f0 */                                  // 0x00195594: mov.s $f21, $f0
    FPU_F12 = *(float*)(s0);  // Load float                     // 0x00195598: lwc1 $f12, 0($s0)
    func_001989a0();  // 0x198970                                // 0x0019559c: jal 0x198970
    /* FPU: mov.s $f20, $f0 */                                  // 0x001955a0: mov.s $f20, $f0
    at = 0x29 << 16;                                            // 0x001955a4: lui $at, 0x29
    v0 = 0x4f00 << 16;                                          // 0x001955a8: lui $v0, 0x4f00
    FPU_F3 = *(float*)((at) + 0x314);  // Load float            // 0x001955ac: lwc1 $f3, 0x314($at)
    /* move to FPU: $v0, $f1 */                                 // 0x001955b0: mtc1 $v0, $f1
    /* nop */                                                   // 0x001955b4: nop 
    /* FPU: c.ole.s $f1, $f0 */                                 // 0x001955b8: c.ole.s $f1, $f0
    at = 0x29 << 16;                                            // 0x001955bc: lui $at, 0x29
    FPU_F2 = *(float*)((at) + 0x318);  // Load float            // 0x001955c0: lwc1 $f2, 0x318($at)
    /* FPU: cvt.s.w $f3, $f3 */                                 // 0x001955c4: cvt.s.w $f3, $f3
    /* FPU: cvt.s.w $f2, $f2 */                                 // 0x001955c8: cvt.s.w $f2, $f2
    /* FPU: add.s $f3, $f3, $f21 */                             // 0x001955cc: add.s $f3, $f3, $f21
    /* FPU: add.s $f2, $f2, $f20 */                             // 0x001955d0: add.s $f2, $f2, $f20
    /* FPU: cvt.w.s $f3, $f3 */                                 // 0x001955d4: cvt.w.s $f3, $f3
    /* move from FPU: $v0, $f3 */                               // 0x001955d8: mfc1 $v0, $f3
    /* FPU: cvt.w.s $f2, $f2 */                                 // 0x001955dc: cvt.w.s $f2, $f2
    v1 = v0 << 4;                                               // 0x001955e0: sll $v1, $v0, 4
    /* move from FPU: $v0, $f2 */                               // 0x001955e4: mfc1 $v0, $f2
    /* nop */                                                   // 0x001955e8: nop 
    v0 = v0 << 4;                                               // 0x001955ec: sll $v0, $v0, 4
    /* bc1t 0x19560c */                                         // 0x001955f4: bc1t 0x19560c
    a1 = v1 | v0;                                               // 0x001955f8: or $a1, $v1, $v0
    /* FPU: cvt.w.s $f0, $f0 */                                 // 0x001955fc: cvt.w.s $f0, $f0
    /* move from FPU: $v1, $f0 */                               // 0x00195600: mfc1 $v1, $f0
    goto label_0x195628;                                        // 0x00195604: b 0x195628
    /* FPU: sub.s $f0, $f0, $f1 */                              // 0x0019560c: sub.s $f0, $f0, $f1
    v0 = 0x8000 << 16;                                          // 0x00195610: lui $v0, 0x8000
    /* FPU: cvt.w.s $f0, $f0 */                                 // 0x00195614: cvt.w.s $f0, $f0
    /* move from FPU: $v1, $f0 */                               // 0x00195618: mfc1 $v1, $f0
    /* nop */                                                   // 0x0019561c: nop 
    v1 = v1 | v0;                                               // 0x00195620: or $v1, $v1, $v0
label_0x195628:
    at = 0x7000 << 16;                                          // 0x00195628: lui $at, 0x7000
    a0 = 0x7000 << 16;                                          // 0x00195630: lui $a0, 0x7000
    v0 = v0 | a1;                                               // 0x00195638: or $v0, $v0, $a1
    func_00193f40();  // 0x193e90                                // 0x0019563c: jal 0x193e90
    v0 = 1;                                                     // 0x00195644: addiu $v0, $zero, 1
label_0x195648:
    FPU_F21 = *(float*)((sp) + 4);  // Load float               // 0x0019564c: lwc1 $f21, 4($sp)
    /* FPU: xori.b $w1, $w0, 0xb3 */                            // 0x00195650: xori.b $w1, $w0, 0xb3
    FPU_F20 = *(float*)(sp);  // Load float                     // 0x00195654: lwc1 $f20, 0($sp)
    /* FPU: ld.b $w0, -0x4f($zero) */                           // 0x0019565c: ld.b $w0, -0x4f($zero)
    /* FPU: aver_u.h $w0, $w0, $w16 */                          // 0x00195660: aver_u.h $w0, $w0, $w16
    return;                                                     // 0x00195664: jr $ra
    sp = sp + 0xb0;                                             // 0x00195668: addiu $sp, $sp, 0xb0
}