void func_001944e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001944e0: addiu $sp, $sp, -0x30
    at = 0x29 << 16;                                            // 0x001944e4: lui $at, 0x29
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001944ec: addu.qb $zero, $sp, $s1
    v0 = g_00290364;  // Global at 0x00290364                   // 0x001944f4: lw $v0, 0x364($at)
    if (v0 == 0) goto label_0x194508;                           // 0x001944f8: beqz $v0, 0x194508
    goto label_0x194774;                                        // 0x00194500: b 0x194774
    v0 = 1;                                                     // 0x00194504: addiu $v0, $zero, 1
label_0x194508:
    a0 = 0x21 << 16;                                            // 0x00194508: lui $a0, 0x21
    a1 = 0x7000 << 16;                                          // 0x0019450c: lui $a1, 0x7000
    a0 = a0 + 0x64d0;                                           // 0x00194510: addiu $a0, $a0, 0x64d0
    func_00189ad0();  // 0x1899f8                                // 0x00194514: jal 0x1899f8
    a2 = 3;                                                     // 0x00194518: addiu $a2, $zero, 3
    a0 = *(int32_t*)((s0) + 0xc);                               // 0x0019451c: lw $a0, 0xc($s0)
    func_00198aa0();  // 0x1989a0                                // 0x00194520: jal 0x1989a0
    a1 = 1;                                                     // 0x00194524: addiu $a1, $zero, 1
    a0 = (unsigned)v0 >> 0x10;                                  // 0x00194528: srl $a0, $v0, 0x10
    v1 = (unsigned)v0 >> 8;                                     // 0x0019452c: srl $v1, $v0, 8
    a1 = a0 & 0xff;                                             // 0x00194530: andi $a1, $a0, 0xff
    v1 = v1 & 0xff;                                             // 0x00194534: andi $v1, $v1, 0xff
    at = 0x7000 << 16;                                          // 0x0019453c: lui $at, 0x7000
    v1 = v0 & 0xff;                                             // 0x00194540: andi $v1, $v0, 0xff
    a0 = a1 | a0;                                               // 0x00194544: or $a0, $a1, $a0
    v0 = (unsigned)v0 >> 0x18;                                  // 0x0019454c: srl $v0, $v0, 0x18
    a0 = v1 | a0;                                               // 0x00194550: or $a0, $v1, $a0
    v1 = v0 & 0xff;                                             // 0x00194554: andi $v1, $v0, 0xff
    v0 = 1;                                                     // 0x00194558: addiu $v0, $zero, 1
    v1 = v1 | a0;                                               // 0x00194564: or $v1, $v1, $a0
    v0 = v1 | v0;                                               // 0x00194568: or $v0, $v1, $v0
    func_001988d0();  // 0x1988b0                                // 0x00194570: jal 0x1988b0
    a0 = *(int16_t*)(s0);                                       // 0x00194574: lh $a0, 0($s0)
    a0 = *(int16_t*)((s0) + 2);                                 // 0x00194578: lh $a0, 2($s0)
    func_00198910();  // 0x1988d0                                // 0x00194580: jal 0x1988d0
    at = 0x29 << 16;                                            // 0x00194588: lui $at, 0x29
    v1 = g_00290314;  // Global at 0x00290314                   // 0x00194590: lw $v1, 0x314($at)
    v0 = 0x4f00 << 16;                                          // 0x00194594: lui $v0, 0x4f00
    /* move to FPU: $v0, $f0 */                                 // 0x001945a4: mtc1 $v0, $f0
    at = 0x29 << 16;                                            // 0x001945a8: lui $at, 0x29
    v1 = v1 + a0;                                               // 0x001945ac: addu $v1, $v1, $a0
    v0 = g_00290318;  // Global at 0x00290318                   // 0x001945b0: lw $v0, 0x318($at)
    v1 = v1 << 4;                                               // 0x001945b4: sll $v1, $v1, 4
    at = 0x29 << 16;                                            // 0x001945b8: lui $at, 0x29
    v0 = v0 + a1;                                               // 0x001945bc: addu $v0, $v0, $a1
    FPU_F1 = *(float*)((at) + -0x4c);  // Load float            // 0x001945c0: lwc1 $f1, -0x4c($at)
    v0 = v0 << 4;                                               // 0x001945c4: sll $v0, $v0, 4
    /* FPU: c.ole.s $f0, $f1 */                                 // 0x001945cc: c.ole.s $f0, $f1
    /* bc1t 0x1945e8 */                                         // 0x001945d0: bc1t 0x1945e8
    a0 = v1 | v0;                                               // 0x001945d4: or $a0, $v1, $v0
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001945d8: cvt.w.s $f1, $f1
    /* move from FPU: $v1, $f1 */                               // 0x001945dc: mfc1 $v1, $f1
    goto label_0x194604;                                        // 0x001945e0: b 0x194604
    /* FPU: sub.s $f1, $f1, $f0 */                              // 0x001945e8: sub.s $f1, $f1, $f0
    v0 = 0x8000 << 16;                                          // 0x001945ec: lui $v0, 0x8000
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001945f0: cvt.w.s $f1, $f1
    /* move from FPU: $v1, $f1 */                               // 0x001945f4: mfc1 $v1, $f1
    /* nop */                                                   // 0x001945f8: nop 
    v1 = v1 | v0;                                               // 0x001945fc: or $v1, $v1, $v0
label_0x194604:
    at = 0x7000 << 16;                                          // 0x00194604: lui $at, 0x7000
    v0 = v0 | a0;                                               // 0x00194610: or $v0, $v0, $a0
    func_001988d0();  // 0x1988b0                                // 0x00194618: jal 0x1988b0
    a0 = *(int16_t*)((s0) + 4);                                 // 0x0019461c: lh $a0, 4($s0)
    a0 = *(int16_t*)((s0) + 6);                                 // 0x00194620: lh $a0, 6($s0)
    func_00198910();  // 0x1988d0                                // 0x00194628: jal 0x1988d0
    at = 0x29 << 16;                                            // 0x00194630: lui $at, 0x29
    v1 = g_00290314;  // Global at 0x00290314                   // 0x00194638: lw $v1, 0x314($at)
    v0 = 0x4f00 << 16;                                          // 0x0019463c: lui $v0, 0x4f00
    /* move to FPU: $v0, $f0 */                                 // 0x0019464c: mtc1 $v0, $f0
    at = 0x29 << 16;                                            // 0x00194650: lui $at, 0x29
    v1 = v1 + a0;                                               // 0x00194654: addu $v1, $v1, $a0
    v0 = g_00290318;  // Global at 0x00290318                   // 0x00194658: lw $v0, 0x318($at)
    v1 = v1 << 4;                                               // 0x0019465c: sll $v1, $v1, 4
    at = 0x29 << 16;                                            // 0x00194660: lui $at, 0x29
    v0 = v0 + a1;                                               // 0x00194664: addu $v0, $v0, $a1
    FPU_F1 = *(float*)((at) + -0x4c);  // Load float            // 0x00194668: lwc1 $f1, -0x4c($at)
    v0 = v0 << 4;                                               // 0x0019466c: sll $v0, $v0, 4
    /* FPU: c.ole.s $f0, $f1 */                                 // 0x00194674: c.ole.s $f0, $f1
    /* bc1t 0x194690 */                                         // 0x00194678: bc1t 0x194690
    a0 = v1 | v0;                                               // 0x0019467c: or $a0, $v1, $v0
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x00194680: cvt.w.s $f1, $f1
    /* move from FPU: $v1, $f1 */                               // 0x00194684: mfc1 $v1, $f1
    goto label_0x1946ac;                                        // 0x00194688: b 0x1946ac
    /* FPU: sub.s $f1, $f1, $f0 */                              // 0x00194690: sub.s $f1, $f1, $f0
    v0 = 0x8000 << 16;                                          // 0x00194694: lui $v0, 0x8000
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x00194698: cvt.w.s $f1, $f1
    /* move from FPU: $v1, $f1 */                               // 0x0019469c: mfc1 $v1, $f1
    /* nop */                                                   // 0x001946a0: nop 
    v1 = v1 | v0;                                               // 0x001946a4: or $v1, $v1, $v0
label_0x1946ac:
    at = 0x7000 << 16;                                          // 0x001946ac: lui $at, 0x7000
    v0 = v0 | a0;                                               // 0x001946b8: or $v0, $v0, $a0
    func_001988d0();  // 0x1988b0                                // 0x001946c0: jal 0x1988b0
    a0 = *(int16_t*)((s0) + 8);                                 // 0x001946c4: lh $a0, 8($s0)
    a0 = *(int16_t*)((s0) + 0xa);                               // 0x001946c8: lh $a0, 0xa($s0)
    func_00198910();  // 0x1988d0                                // 0x001946d0: jal 0x1988d0
    at = 0x29 << 16;                                            // 0x001946d8: lui $at, 0x29
    v1 = g_00290314;  // Global at 0x00290314                   // 0x001946e0: lw $v1, 0x314($at)
    v0 = 0x4f00 << 16;                                          // 0x001946e4: lui $v0, 0x4f00
    /* move to FPU: $v0, $f0 */                                 // 0x001946f4: mtc1 $v0, $f0
    at = 0x29 << 16;                                            // 0x001946f8: lui $at, 0x29
    v1 = v1 + a0;                                               // 0x001946fc: addu $v1, $v1, $a0
    v0 = g_00290318;  // Global at 0x00290318                   // 0x00194700: lw $v0, 0x318($at)
    v1 = v1 << 4;                                               // 0x00194704: sll $v1, $v1, 4
    at = 0x29 << 16;                                            // 0x00194708: lui $at, 0x29
    v0 = v0 + a1;                                               // 0x0019470c: addu $v0, $v0, $a1
    FPU_F1 = *(float*)((at) + -0x4c);  // Load float            // 0x00194710: lwc1 $f1, -0x4c($at)
    v0 = v0 << 4;                                               // 0x00194714: sll $v0, $v0, 4
    /* FPU: c.ole.s $f0, $f1 */                                 // 0x0019471c: c.ole.s $f0, $f1
    /* bc1t 0x194738 */                                         // 0x00194720: bc1t 0x194738
    a1 = v1 | v0;                                               // 0x00194724: or $a1, $v1, $v0
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x00194728: cvt.w.s $f1, $f1
    /* move from FPU: $v1, $f1 */                               // 0x0019472c: mfc1 $v1, $f1
    goto label_0x194754;                                        // 0x00194730: b 0x194754
    /* FPU: sub.s $f1, $f1, $f0 */                              // 0x00194738: sub.s $f1, $f1, $f0
    v0 = 0x8000 << 16;                                          // 0x0019473c: lui $v0, 0x8000
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x00194740: cvt.w.s $f1, $f1
    /* move from FPU: $v1, $f1 */                               // 0x00194744: mfc1 $v1, $f1
    /* nop */                                                   // 0x00194748: nop 
    v1 = v1 | v0;                                               // 0x0019474c: or $v1, $v1, $v0
label_0x194754:
    at = 0x7000 << 16;                                          // 0x00194754: lui $at, 0x7000
    a0 = 0x7000 << 16;                                          // 0x0019475c: lui $a0, 0x7000
    v0 = v0 | a1;                                               // 0x00194764: or $v0, $v0, $a1
    func_00193f40();  // 0x193e90                                // 0x00194768: jal 0x193e90
    v0 = 1;                                                     // 0x00194770: addiu $v0, $zero, 1
label_0x194774:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x00194778: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0019477c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x00194780: jr $ra
    sp = sp + 0x30;                                             // 0x00194784: addiu $sp, $sp, 0x30
}