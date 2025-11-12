void func_001ab7c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x70;                                            // 0x001ab7c0: addiu $sp, $sp, -0x70
    at = 0x29 << 16;                                            // 0x001ab7c4: lui $at, 0x29
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x001ab7cc: subu.qb $zero, $sp, $s5
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001ab7d4: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001ab7dc: addu.qb $zero, $sp, $s1
    v0 = g_00290364;  // Global at 0x00290364                   // 0x001ab7e4: lw $v0, 0x364($at)
    if (v0 == 0) goto label_0x1ab7f8;                           // 0x001ab7e8: beqz $v0, 0x1ab7f8
    goto label_0x1abbec;                                        // 0x001ab7f0: b 0x1abbec
    v0 = 1;                                                     // 0x001ab7f4: addiu $v0, $zero, 1
label_0x1ab7f8:
    a0 = 0x22 << 16;                                            // 0x001ab7f8: lui $a0, 0x22
    a1 = 0x7000 << 16;                                          // 0x001ab7fc: lui $a1, 0x7000
    a0 = a0 + -0x43d0;                                          // 0x001ab800: addiu $a0, $a0, -0x43d0
    func_00189ad0();  // 0x1899f8                                // 0x001ab804: jal 0x1899f8
    a2 = 3;                                                     // 0x001ab808: addiu $a2, $zero, 3
    at = 0x29 << 16;                                            // 0x001ab80c: lui $at, 0x29
    v0 = 0x1000;                                                // 0x001ab810: addiu $v0, $zero, 0x1000
    a0 = g_0028ff7c;  // Global at 0x0028ff7c                   // 0x001ab814: lw $a0, -0x84($at)
    v1 = v0 - a0;                                               // 0x001ab818: subu $v1, $v0, $a0
    if (v1 >= 0) goto label_0x1ab82c;                           // 0x001ab81c: bgez $v1, 0x1ab82c
    v0 = v1 >> 1;                                               // 0x001ab820: sra $v0, $v1, 1
    v0 = v1 + 1;                                                // 0x001ab824: addiu $v0, $v1, 1
    v0 = v0 >> 1;                                               // 0x001ab828: sra $v0, $v0, 1
label_0x1ab82c:
    t1 = v0 << 4;                                               // 0x001ab82c: sll $t1, $v0, 4
    at = 0x29 << 16;                                            // 0x001ab830: lui $at, 0x29
    v0 = g_0028ff80;  // Global at 0x0028ff80                   // 0x001ab834: lw $v0, -0x80($at)
    v1 = 0x1000;                                                // 0x001ab838: addiu $v1, $zero, 0x1000
    v1 = v1 - v0;                                               // 0x001ab83c: subu $v1, $v1, $v0
    if (v1 >= 0) goto label_0x1ab850;                           // 0x001ab840: bgez $v1, 0x1ab850
    v0 = v1 >> 1;                                               // 0x001ab844: sra $v0, $v1, 1
    v0 = v1 + 1;                                                // 0x001ab848: addiu $v0, $v1, 1
    v0 = v0 >> 1;                                               // 0x001ab84c: sra $v0, $v0, 1
label_0x1ab850:
    /* move to FPU: $a0, $f1 */                                 // 0x001ab850: mtc1 $a0, $f1
    t0 = v0 << 4;                                               // 0x001ab854: sll $t0, $v0, 4
    v0 = 0x4420 << 16;                                          // 0x001ab858: lui $v0, 0x4420
    a1 = *(int16_t*)((s0) + 2);                                 // 0x001ab85c: lh $a1, 2($s0)
    /* FPU: cvt.s.w $f1, $f1 */                                 // 0x001ab860: cvt.s.w $f1, $f1
    v1 = *(int16_t*)((s0) + 6);                                 // 0x001ab864: lh $v1, 6($s0)
    a3 = *(int16_t*)(s0);                                       // 0x001ab868: lh $a3, 0($s0)
    a2 = 0x4180 << 16;                                          // 0x001ab86c: lui $a2, 0x4180
    a0 = *(int16_t*)((s0) + 4);                                 // 0x001ab870: lh $a0, 4($s0)
    at = 0x29 << 16;                                            // 0x001ab874: lui $at, 0x29
    s1 = a1 << 4;                                               // 0x001ab878: sll $s1, $a1, 4
    /* move to FPU: $v0, $f0 */                                 // 0x001ab87c: mtc1 $v0, $f0
    /* nop */                                                   // 0x001ab880: nop 
    /* FPU: div.s $f2, $f1, $f0 */                              // 0x001ab884: div.s $f2, $f1, $f0
    v0 = g_0028ff74;  // Global at 0x0028ff74                   // 0x001ab888: lw $v0, -0x8c($at)
    /* move to FPU: $a3, $f0 */                                 // 0x001ab88c: mtc1 $a3, $f0
    /* move to FPU: $a2, $f1 */                                 // 0x001ab890: mtc1 $a2, $f1
    /* nop */                                                   // 0x001ab894: nop 
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x001ab898: cvt.s.w $f0, $f0
    /* FPU: mul.s $f0, $f0, $f2 */                              // 0x001ab89c: mul.s $f0, $f0, $f2
    /* FPU: mul.s $f0, $f1, $f0 */                              // 0x001ab8a0: mul.s $f0, $f1, $f0
    /* FPU: cvt.w.s $f0, $f0 */                                 // 0x001ab8a4: cvt.w.s $f0, $f0
    /* move from FPU: $s2, $f0 */                               // 0x001ab8a8: mfc1 $s2, $f0
    /* move to FPU: $a0, $f0 */                                 // 0x001ab8ac: mtc1 $a0, $f0
    /* nop */                                                   // 0x001ab8b0: nop 
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x001ab8b4: cvt.s.w $f0, $f0
    /* FPU: mul.s $f0, $f0, $f2 */                              // 0x001ab8b8: mul.s $f0, $f0, $f2
    /* FPU: mul.s $f0, $f1, $f0 */                              // 0x001ab8bc: mul.s $f0, $f1, $f0
    /* FPU: cvt.w.s $f0, $f0 */                                 // 0x001ab8c0: cvt.w.s $f0, $f0
    /* move from FPU: $s5, $f0 */                               // 0x001ab8c4: mfc1 $s5, $f0
    if (v0 != 0) goto label_0x1ab8d8;                           // 0x001ab8c8: bnez $v0, 0x1ab8d8
    s4 = v1 << 4;                                               // 0x001ab8cc: sll $s4, $v1, 4
    s1 = s1 >> 1;                                               // 0x001ab8d0: sra $s1, $s1, 1
    s4 = s4 >> 1;                                               // 0x001ab8d4: sra $s4, $s4, 1
label_0x1ab8d8:
    a0 = *(int32_t*)((s0) + 8);                                 // 0x001ab8d8: lw $a0, 8($s0)
    s2 = s2 + t1;                                               // 0x001ab8dc: addu $s2, $s2, $t1
    s5 = s5 + t1;                                               // 0x001ab8e0: addu $s5, $s5, $t1
    s1 = s1 + t0;                                               // 0x001ab8e4: addu $s1, $s1, $t0
    s4 = s4 + t0;                                               // 0x001ab8e8: addu $s4, $s4, $t0
    func_00198aa0();  // 0x1989a0                                // 0x001ab8ec: jal 0x1989a0
    a1 = 1;                                                     // 0x001ab8f0: addiu $a1, $zero, 1
    at = 0x7000 << 16;                                          // 0x001ab900: lui $at, 0x7000
    v1 = (unsigned)v0 >> 0x10;                                  // 0x001ab908: srl $v1, $v0, 0x10
    a1 = v1 & 0xff;                                             // 0x001ab90c: andi $a1, $v1, 0xff
    v1 = (unsigned)v0 >> 8;                                     // 0x001ab910: srl $v1, $v0, 8
    a0 = v1 & 0xff;                                             // 0x001ab914: andi $a0, $v1, 0xff
    v1 = v0 & 0xff;                                             // 0x001ab918: andi $v1, $v0, 0xff
    v0 = (unsigned)v0 >> 0x18;                                  // 0x001ab920: srl $v0, $v0, 0x18
    a0 = a1 | a0;                                               // 0x001ab928: or $a0, $a1, $a0
    v0 = v0 & 0xff;                                             // 0x001ab92c: andi $v0, $v0, 0xff
    a0 = v1 | a0;                                               // 0x001ab930: or $a0, $v1, $a0
    v0 = 1;                                                     // 0x001ab938: addiu $v0, $zero, 1
    v1 = v1 | a0;                                               // 0x001ab93c: or $v1, $v1, $a0
    v1 = v1 | v0;                                               // 0x001ab944: or $v1, $v1, $v0
    v0 = 0x4f00 << 16;                                          // 0x001ab94c: lui $v0, 0x4f00
    at = 0x29 << 16;                                            // 0x001ab950: lui $at, 0x29
    FPU_F1 = *(float*)((at) + -0x4c);  // Load float            // 0x001ab954: lwc1 $f1, -0x4c($at)
    /* move to FPU: $v0, $f0 */                                 // 0x001ab958: mtc1 $v0, $f0
    /* nop */                                                   // 0x001ab95c: nop 
    /* FPU: c.ole.s $f0, $f1 */                                 // 0x001ab960: c.ole.s $f0, $f1
    /* bc1t 0x1ab97c */                                         // 0x001ab964: bc1t 0x1ab97c
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001ab96c: cvt.w.s $f1, $f1
    /* move from FPU: $v1, $f1 */                               // 0x001ab970: mfc1 $v1, $f1
    goto label_0x1ab998;                                        // 0x001ab974: b 0x1ab998
    /* FPU: sub.s $f1, $f1, $f0 */                              // 0x001ab97c: sub.s $f1, $f1, $f0
    v0 = 0x8000 << 16;                                          // 0x001ab980: lui $v0, 0x8000
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001ab984: cvt.w.s $f1, $f1
    /* move from FPU: $v1, $f1 */                               // 0x001ab988: mfc1 $v1, $f1
    /* nop */                                                   // 0x001ab98c: nop 
    v1 = v1 | v0;                                               // 0x001ab990: or $v1, $v1, $v0
label_0x1ab998:
    v0 = s3 | s2;                                               // 0x001ab998: or $v0, $s3, $s2
    at = 0x7000 << 16;                                          // 0x001ab9a0: lui $at, 0x7000
    v0 = v1 | v0;                                               // 0x001ab9a8: or $v0, $v1, $v0
    a0 = *(int32_t*)((s0) + 0xc);                               // 0x001ab9b0: lw $a0, 0xc($s0)
    func_00198aa0();  // 0x1989a0                                // 0x001ab9b4: jal 0x1989a0
    a1 = 1;                                                     // 0x001ab9b8: addiu $a1, $zero, 1
    v1 = (unsigned)v0 >> 0x10;                                  // 0x001ab9bc: srl $v1, $v0, 0x10
    a1 = v1 & 0xff;                                             // 0x001ab9c4: andi $a1, $v1, 0xff
    at = 0x7000 << 16;                                          // 0x001ab9c8: lui $at, 0x7000
    v1 = (unsigned)v0 >> 8;                                     // 0x001ab9cc: srl $v1, $v0, 8
    a0 = v1 & 0xff;                                             // 0x001ab9d0: andi $a0, $v1, 0xff
    v1 = v0 & 0xff;                                             // 0x001ab9d4: andi $v1, $v0, 0xff
    v0 = (unsigned)v0 >> 0x18;                                  // 0x001ab9dc: srl $v0, $v0, 0x18
    a0 = a1 | a0;                                               // 0x001ab9e4: or $a0, $a1, $a0
    v0 = v0 & 0xff;                                             // 0x001ab9e8: andi $v0, $v0, 0xff
    a0 = v1 | a0;                                               // 0x001ab9ec: or $a0, $v1, $a0
    v0 = 1;                                                     // 0x001ab9f4: addiu $v0, $zero, 1
    v1 = v1 | a0;                                               // 0x001ab9f8: or $v1, $v1, $a0
    v1 = v1 | v0;                                               // 0x001aba00: or $v1, $v1, $v0
    v0 = 0x4f00 << 16;                                          // 0x001aba08: lui $v0, 0x4f00
    at = 0x29 << 16;                                            // 0x001aba0c: lui $at, 0x29
    FPU_F1 = *(float*)((at) + -0x4c);  // Load float            // 0x001aba10: lwc1 $f1, -0x4c($at)
    /* move to FPU: $v0, $f0 */                                 // 0x001aba14: mtc1 $v0, $f0
    /* nop */                                                   // 0x001aba18: nop 
    /* FPU: c.ole.s $f0, $f1 */                                 // 0x001aba1c: c.ole.s $f0, $f1
    /* bc1t 0x1aba38 */                                         // 0x001aba20: bc1t 0x1aba38
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001aba28: cvt.w.s $f1, $f1
    /* move from FPU: $v1, $f1 */                               // 0x001aba2c: mfc1 $v1, $f1
    goto label_0x1aba54;                                        // 0x001aba30: b 0x1aba54
    /* FPU: sub.s $f1, $f1, $f0 */                              // 0x001aba38: sub.s $f1, $f1, $f0
    v0 = 0x8000 << 16;                                          // 0x001aba3c: lui $v0, 0x8000
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001aba40: cvt.w.s $f1, $f1
    /* move from FPU: $v1, $f1 */                               // 0x001aba44: mfc1 $v1, $f1
    /* nop */                                                   // 0x001aba48: nop 
    v1 = v1 | v0;                                               // 0x001aba4c: or $v1, $v1, $v0
label_0x1aba54:
    v0 = s1 | s2;                                               // 0x001aba54: or $v0, $s1, $s2
    at = 0x7000 << 16;                                          // 0x001aba5c: lui $at, 0x7000
    v0 = v1 | v0;                                               // 0x001aba64: or $v0, $v1, $v0
    a0 = *(int32_t*)((s0) + 0x10);                              // 0x001aba6c: lw $a0, 0x10($s0)
    func_00198aa0();  // 0x1989a0                                // 0x001aba70: jal 0x1989a0
    a1 = 1;                                                     // 0x001aba74: addiu $a1, $zero, 1
    a0 = (unsigned)v0 >> 0x10;                                  // 0x001aba7c: srl $a0, $v0, 0x10
    a1 = a0 & 0xff;                                             // 0x001aba84: andi $a1, $a0, 0xff
    a0 = (unsigned)v0 >> 8;                                     // 0x001aba8c: srl $a0, $v0, 8
    v1 = v0 & 0xff;                                             // 0x001aba90: andi $v1, $v0, 0xff
    a0 = a0 & 0xff;                                             // 0x001aba94: andi $a0, $a0, 0xff
    v0 = (unsigned)v0 >> 0x18;                                  // 0x001aba9c: srl $v0, $v0, 0x18
    v0 = v0 & 0xff;                                             // 0x001abaa0: andi $v0, $v0, 0xff
    a0 = a1 | a0;                                               // 0x001abaa8: or $a0, $a1, $a0
    v1 = v1 | a0;                                               // 0x001abab0: or $v1, $v1, $a0
    at = 0x7000 << 16;                                          // 0x001abab4: lui $at, 0x7000
    a0 = v0 | v1;                                               // 0x001abab8: or $a0, $v0, $v1
    v0 = 1;                                                     // 0x001ababc: addiu $v0, $zero, 1
    v1 = a0 | v1;                                               // 0x001abac4: or $v1, $a0, $v1
    v0 = 0x4f00 << 16;                                          // 0x001abac8: lui $v0, 0x4f00
    /* move to FPU: $v0, $f0 */                                 // 0x001abad0: mtc1 $v0, $f0
    at = 0x29 << 16;                                            // 0x001abad4: lui $at, 0x29
    FPU_F1 = *(float*)((at) + -0x4c);  // Load float            // 0x001abad8: lwc1 $f1, -0x4c($at)
    /* FPU: c.ole.s $f0, $f1 */                                 // 0x001abadc: c.ole.s $f0, $f1
    /* bc1t 0x1abaf8 */                                         // 0x001abae0: bc1t 0x1abaf8
    /* nop */                                                   // 0x001abae4: nop 
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001abae8: cvt.w.s $f1, $f1
    /* move from FPU: $v1, $f1 */                               // 0x001abaec: mfc1 $v1, $f1
    goto label_0x1abb14;                                        // 0x001abaf0: b 0x1abb14
    /* FPU: sub.s $f1, $f1, $f0 */                              // 0x001abaf8: sub.s $f1, $f1, $f0
    v0 = 0x8000 << 16;                                          // 0x001abafc: lui $v0, 0x8000
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001abb00: cvt.w.s $f1, $f1
    /* move from FPU: $v1, $f1 */                               // 0x001abb04: mfc1 $v1, $f1
    /* nop */                                                   // 0x001abb08: nop 
    v1 = v1 | v0;                                               // 0x001abb0c: or $v1, $v1, $v0
label_0x1abb14:
    v0 = s3 | s2;                                               // 0x001abb14: or $v0, $s3, $s2
    at = 0x7000 << 16;                                          // 0x001abb1c: lui $at, 0x7000
    v0 = v1 | v0;                                               // 0x001abb24: or $v0, $v1, $v0
    a0 = *(int32_t*)((s0) + 0x14);                              // 0x001abb2c: lw $a0, 0x14($s0)
    func_00198aa0();  // 0x1989a0                                // 0x001abb30: jal 0x1989a0
    a1 = 1;                                                     // 0x001abb34: addiu $a1, $zero, 1
    a0 = (unsigned)v0 >> 0x10;                                  // 0x001abb38: srl $a0, $v0, 0x10
    v1 = (unsigned)v0 >> 8;                                     // 0x001abb3c: srl $v1, $v0, 8
    a1 = a0 & 0xff;                                             // 0x001abb40: andi $a1, $a0, 0xff
    v1 = v1 & 0xff;                                             // 0x001abb44: andi $v1, $v1, 0xff
    at = 0x7000 << 16;                                          // 0x001abb4c: lui $at, 0x7000
    v1 = v0 & 0xff;                                             // 0x001abb50: andi $v1, $v0, 0xff
    a0 = a1 | a0;                                               // 0x001abb54: or $a0, $a1, $a0
    v0 = (unsigned)v0 >> 0x18;                                  // 0x001abb5c: srl $v0, $v0, 0x18
    a1 = v1 | a0;                                               // 0x001abb60: or $a1, $v1, $a0
    v1 = v0 & 0xff;                                             // 0x001abb64: andi $v1, $v0, 0xff
    v0 = 1;                                                     // 0x001abb6c: addiu $v0, $zero, 1
    a0 = a0 | a1;                                               // 0x001abb74: or $a0, $a0, $a1
    v1 = a0 | v1;                                               // 0x001abb78: or $v1, $a0, $v1
    v0 = 0x4f00 << 16;                                          // 0x001abb7c: lui $v0, 0x4f00
    /* move to FPU: $v0, $f0 */                                 // 0x001abb84: mtc1 $v0, $f0
    at = 0x29 << 16;                                            // 0x001abb88: lui $at, 0x29
    FPU_F1 = *(float*)((at) + -0x4c);  // Load float            // 0x001abb8c: lwc1 $f1, -0x4c($at)
    /* FPU: c.ole.s $f0, $f1 */                                 // 0x001abb90: c.ole.s $f0, $f1
    /* bc1t 0x1abbac */                                         // 0x001abb94: bc1t 0x1abbac
    /* nop */                                                   // 0x001abb98: nop 
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001abb9c: cvt.w.s $f1, $f1
    /* move from FPU: $v1, $f1 */                               // 0x001abba0: mfc1 $v1, $f1
    goto label_0x1abbc8;                                        // 0x001abba4: b 0x1abbc8
    /* FPU: sub.s $f1, $f1, $f0 */                              // 0x001abbac: sub.s $f1, $f1, $f0
    v0 = 0x8000 << 16;                                          // 0x001abbb0: lui $v0, 0x8000
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001abbb4: cvt.w.s $f1, $f1
    /* move from FPU: $v1, $f1 */                               // 0x001abbb8: mfc1 $v1, $f1
    /* nop */                                                   // 0x001abbbc: nop 
    v1 = v1 | v0;                                               // 0x001abbc0: or $v1, $v1, $v0
label_0x1abbc8:
    v0 = s1 | s2;                                               // 0x001abbc8: or $v0, $s1, $s2
    at = 0x7000 << 16;                                          // 0x001abbd0: lui $at, 0x7000
    a0 = 0x7000 << 16;                                          // 0x001abbd8: lui $a0, 0x7000
    v0 = v1 | v0;                                               // 0x001abbdc: or $v0, $v1, $v0
    func_00193f40();  // 0x193e90                                // 0x001abbe0: jal 0x193e90
    v0 = 1;                                                     // 0x001abbe8: addiu $v0, $zero, 1
label_0x1abbec:
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x001abbf0: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001abbf4: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001abbfc: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001abc00: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001abc04: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001abc08: jr $ra
    sp = sp + 0x70;                                             // 0x001abc0c: addiu $sp, $sp, 0x70
}