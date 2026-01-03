void func_001abc10() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x80;                                            // 0x001abc10: addiu $sp, $sp, -0x80
    at = 0x29 << 16;                                            // 0x001abc14: lui $at, 0x29
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x001abc20: subu.qb $zero, $sp, $s5
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001abc28: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001abc30: addu.qb $zero, $sp, $s1
    v0 = g_00290364;  // Global at 0x00290364                   // 0x001abc38: lw $v0, 0x364($at)
    if (v0 == 0) goto label_0x1abc4c;                           // 0x001abc3c: beqz $v0, 0x1abc4c
    goto label_0x1abfcc;                                        // 0x001abc44: b 0x1abfcc
    v0 = 1;                                                     // 0x001abc48: addiu $v0, $zero, 1
label_0x1abc4c:
    at = 0x29 << 16;                                            // 0x001abc4c: lui $at, 0x29
    v0 = 0x1000;                                                // 0x001abc50: addiu $v0, $zero, 0x1000
    a0 = g_0028ff7c;  // Global at 0x0028ff7c                   // 0x001abc54: lw $a0, -0x84($at)
    v1 = v0 - a0;                                               // 0x001abc58: subu $v1, $v0, $a0
    if (v1 >= 0) goto label_0x1abc6c;                           // 0x001abc5c: bgez $v1, 0x1abc6c
    v0 = v1 >> 1;                                               // 0x001abc60: sra $v0, $v1, 1
    v0 = v1 + 1;                                                // 0x001abc64: addiu $v0, $v1, 1
    v0 = v0 >> 1;                                               // 0x001abc68: sra $v0, $v0, 1
label_0x1abc6c:
    t3 = v0 << 4;                                               // 0x001abc6c: sll $t3, $v0, 4
    at = 0x29 << 16;                                            // 0x001abc70: lui $at, 0x29
    v0 = g_0028ff80;  // Global at 0x0028ff80                   // 0x001abc74: lw $v0, -0x80($at)
    v1 = 0x1000;                                                // 0x001abc78: addiu $v1, $zero, 0x1000
    v1 = v1 - v0;                                               // 0x001abc7c: subu $v1, $v1, $v0
    if (v1 >= 0) goto label_0x1abc90;                           // 0x001abc80: bgez $v1, 0x1abc90
    v0 = v1 >> 1;                                               // 0x001abc84: sra $v0, $v1, 1
    v0 = v1 + 1;                                                // 0x001abc88: addiu $v0, $v1, 1
    v0 = v0 >> 1;                                               // 0x001abc8c: sra $v0, $v0, 1
label_0x1abc90:
    /* move to FPU: $a0, $f1 */                                 // 0x001abc90: mtc1 $a0, $f1
    t2 = v0 << 4;                                               // 0x001abc94: sll $t2, $v0, 4
    v0 = 0x4420 << 16;                                          // 0x001abc98: lui $v0, 0x4420
    t0 = 0x4180 << 16;                                          // 0x001abc9c: lui $t0, 0x4180
    /* FPU: cvt.s.w $f1, $f1 */                                 // 0x001abca0: cvt.s.w $f1, $f1
    a3 = *(int16_t*)((s6) + 2);                                 // 0x001abca4: lh $a3, 2($s6)
    a1 = *(int16_t*)((s6) + 6);                                 // 0x001abca8: lh $a1, 6($s6)
    at = 0x29 << 16;                                            // 0x001abcac: lui $at, 0x29
    v1 = *(int16_t*)((s6) + 0xa);                               // 0x001abcb0: lh $v1, 0xa($s6)
    t1 = *(int16_t*)(s6);                                       // 0x001abcb4: lh $t1, 0($s6)
    a2 = *(int16_t*)((s6) + 4);                                 // 0x001abcb8: lh $a2, 4($s6)
    a0 = *(int16_t*)((s6) + 8);                                 // 0x001abcbc: lh $a0, 8($s6)
    /* move to FPU: $v0, $f0 */                                 // 0x001abcc0: mtc1 $v0, $f0
    s4 = a3 << 4;                                               // 0x001abcc4: sll $s4, $a3, 4
    /* move to FPU: $t0, $f2 */                                 // 0x001abcc8: mtc1 $t0, $f2
    s2 = a1 << 4;                                               // 0x001abccc: sll $s2, $a1, 4
    /* FPU: div.s $f3, $f1, $f0 */                              // 0x001abcd0: div.s $f3, $f1, $f0
    v0 = g_0028ff74;  // Global at 0x0028ff74                   // 0x001abcd4: lw $v0, -0x8c($at)
    /* move to FPU: $t1, $f0 */                                 // 0x001abcd8: mtc1 $t1, $f0
    /* move to FPU: $a2, $f1 */                                 // 0x001abcdc: mtc1 $a2, $f1
    /* nop */                                                   // 0x001abce0: nop 
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x001abce4: cvt.s.w $f0, $f0
    /* FPU: mul.s $f0, $f0, $f3 */                              // 0x001abce8: mul.s $f0, $f0, $f3
    /* FPU: mul.s $f0, $f2, $f0 */                              // 0x001abcec: mul.s $f0, $f2, $f0
    /* FPU: cvt.w.s $f0, $f0 */                                 // 0x001abcf0: cvt.w.s $f0, $f0
    /* move from FPU: $s5, $f0 */                               // 0x001abcf4: mfc1 $s5, $f0
    /* FPU: cvt.s.w $f1, $f1 */                                 // 0x001abcf8: cvt.s.w $f1, $f1
    /* move to FPU: $a0, $f0 */                                 // 0x001abcfc: mtc1 $a0, $f0
    /* nop */                                                   // 0x001abd00: nop 
    /* FPU: mul.s $f1, $f1, $f3 */                              // 0x001abd04: mul.s $f1, $f1, $f3
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x001abd08: cvt.s.w $f0, $f0
    /* FPU: mul.s $f0, $f0, $f3 */                              // 0x001abd0c: mul.s $f0, $f0, $f3
    /* FPU: mul.s $f1, $f2, $f1 */                              // 0x001abd10: mul.s $f1, $f2, $f1
    /* FPU: mul.s $f0, $f2, $f0 */                              // 0x001abd14: mul.s $f0, $f2, $f0
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001abd18: cvt.w.s $f1, $f1
    /* FPU: cvt.w.s $f0, $f0 */                                 // 0x001abd1c: cvt.w.s $f0, $f0
    /* move from FPU: $s3, $f1 */                               // 0x001abd20: mfc1 $s3, $f1
    /* move from FPU: $s1, $f0 */                               // 0x001abd24: mfc1 $s1, $f0
    if (v0 != 0) goto label_0x1abd3c;                           // 0x001abd28: bnez $v0, 0x1abd3c
    s0 = v1 << 4;                                               // 0x001abd2c: sll $s0, $v1, 4
    s4 = s4 >> 1;                                               // 0x001abd30: sra $s4, $s4, 1
    s2 = s2 >> 1;                                               // 0x001abd34: sra $s2, $s2, 1
    s0 = s0 >> 1;                                               // 0x001abd38: sra $s0, $s0, 1
label_0x1abd3c:
    a0 = 0x22 << 16;                                            // 0x001abd3c: lui $a0, 0x22
    s5 = s5 + t3;                                               // 0x001abd40: addu $s5, $s5, $t3
    s4 = s4 + t2;                                               // 0x001abd44: addu $s4, $s4, $t2
    s3 = s3 + t3;                                               // 0x001abd48: addu $s3, $s3, $t3
    s1 = s1 + t3;                                               // 0x001abd4c: addu $s1, $s1, $t3
    s2 = s2 + t2;                                               // 0x001abd50: addu $s2, $s2, $t2
    s0 = s0 + t2;                                               // 0x001abd54: addu $s0, $s0, $t2
    a0 = a0 + -0x4360;                                          // 0x001abd58: addiu $a0, $a0, -0x4360
    a1 = 0x7000 << 16;                                          // 0x001abd5c: lui $a1, 0x7000
    func_001899f8();  // 1899f8                                // 0x001abd60: jal 0x1899f8
    a2 = 3;                                                     // 0x001abd64: addiu $a2, $zero, 3
    a0 = *(int32_t*)((s6) + 0xc);                               // 0x001abd68: lw $a0, 0xc($s6)
    func_001989a0();  // 1989a0                                // 0x001abd6c: jal 0x1989a0
    a0 = (unsigned)v0 >> 0x10;                                  // 0x001abd74: srl $a0, $v0, 0x10
    v1 = (unsigned)v0 >> 8;                                     // 0x001abd78: srl $v1, $v0, 8
    a1 = a0 & 0xff;                                             // 0x001abd7c: andi $a1, $a0, 0xff
    v1 = v1 & 0xff;                                             // 0x001abd80: andi $v1, $v1, 0xff
    at = 0x7000 << 16;                                          // 0x001abd88: lui $at, 0x7000
    v1 = v0 & 0xff;                                             // 0x001abd8c: andi $v1, $v0, 0xff
    a0 = a1 | a0;                                               // 0x001abd90: or $a0, $a1, $a0
    v0 = (unsigned)v0 >> 0x18;                                  // 0x001abd98: srl $v0, $v0, 0x18
    a1 = v1 | a0;                                               // 0x001abd9c: or $a1, $v1, $a0
    v1 = v0 & 0xff;                                             // 0x001abda0: andi $v1, $v0, 0xff
    v0 = 1;                                                     // 0x001abda8: addiu $v0, $zero, 1
    a0 = a0 | a1;                                               // 0x001abdb0: or $a0, $a0, $a1
    v0 = 0x4f00 << 16;                                          // 0x001abdb4: lui $v0, 0x4f00
    v1 = a0 | v1;                                               // 0x001abdb8: or $v1, $a0, $v1
    /* move to FPU: $v0, $f0 */                                 // 0x001abdbc: mtc1 $v0, $f0
    v1 = *(int16_t*)((s6) + 0x10);                              // 0x001abdc4: lh $v1, 0x10($s6)
    at = 0x7000 << 16;                                          // 0x001abdc8: lui $at, 0x7000
    v0 = *(int16_t*)((s6) + 0x12);                              // 0x001abdcc: lh $v0, 0x12($s6)
    v1 = v1 << 4;                                               // 0x001abdd0: sll $v1, $v1, 4
    v0 = v0 << 4;                                               // 0x001abdd4: sll $v0, $v0, 4
    v1 = v1 + 8;                                                // 0x001abdd8: addiu $v1, $v1, 8
    v0 = v0 + 8;                                                // 0x001abddc: addiu $v0, $v0, 8
    v0 = v1 | v0;                                               // 0x001abdf4: or $v0, $v1, $v0
    at = 0x29 << 16;                                            // 0x001abdfc: lui $at, 0x29
    FPU_F1 = *(float*)((at) + -0x4c);  // Load float            // 0x001abe00: lwc1 $f1, -0x4c($at)
    /* FPU: c.ole.s $f0, $f1 */                                 // 0x001abe04: c.ole.s $f0, $f1
    /* bc1t 0x1abe20 */                                         // 0x001abe08: bc1t 0x1abe20
    /* nop */                                                   // 0x001abe0c: nop 
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001abe10: cvt.w.s $f1, $f1
    /* move from FPU: $v1, $f1 */                               // 0x001abe14: mfc1 $v1, $f1
    goto label_0x1abe3c;                                        // 0x001abe18: b 0x1abe3c
    /* FPU: sub.s $f1, $f1, $f0 */                              // 0x001abe20: sub.s $f1, $f1, $f0
    v0 = 0x8000 << 16;                                          // 0x001abe24: lui $v0, 0x8000
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001abe28: cvt.w.s $f1, $f1
    /* move from FPU: $v1, $f1 */                               // 0x001abe2c: mfc1 $v1, $f1
    /* nop */                                                   // 0x001abe30: nop 
    v1 = v1 | v0;                                               // 0x001abe34: or $v1, $v1, $v0
label_0x1abe3c:
    at = 0x7000 << 16;                                          // 0x001abe4c: lui $at, 0x7000
    v0 = 0x4f00 << 16;                                          // 0x001abe5c: lui $v0, 0x4f00
    v1 = a0 | v1;                                               // 0x001abe60: or $v1, $a0, $v1
    v1 = a1 | v1;                                               // 0x001abe64: or $v1, $a1, $v1
    /* move to FPU: $v0, $f0 */                                 // 0x001abe6c: mtc1 $v0, $f0
    v1 = *(int16_t*)((s6) + 0x14);                              // 0x001abe70: lh $v1, 0x14($s6)
    at = 0x7000 << 16;                                          // 0x001abe74: lui $at, 0x7000
    v0 = *(int16_t*)((s6) + 0x16);                              // 0x001abe78: lh $v0, 0x16($s6)
    v1 = v1 << 4;                                               // 0x001abe7c: sll $v1, $v1, 4
    v0 = v0 << 4;                                               // 0x001abe80: sll $v0, $v0, 4
    v1 = v1 + 8;                                                // 0x001abe84: addiu $v1, $v1, 8
    v0 = v0 + 8;                                                // 0x001abe88: addiu $v0, $v0, 8
    v0 = v1 | v0;                                               // 0x001abea0: or $v0, $v1, $v0
    at = 0x29 << 16;                                            // 0x001abea8: lui $at, 0x29
    FPU_F1 = *(float*)((at) + -0x4c);  // Load float            // 0x001abeac: lwc1 $f1, -0x4c($at)
    /* FPU: c.ole.s $f0, $f1 */                                 // 0x001abeb0: c.ole.s $f0, $f1
    /* bc1t 0x1abecc */                                         // 0x001abeb4: bc1t 0x1abecc
    /* nop */                                                   // 0x001abeb8: nop 
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001abebc: cvt.w.s $f1, $f1
    /* move from FPU: $v1, $f1 */                               // 0x001abec0: mfc1 $v1, $f1
    goto label_0x1abee8;                                        // 0x001abec4: b 0x1abee8
    /* FPU: sub.s $f1, $f1, $f0 */                              // 0x001abecc: sub.s $f1, $f1, $f0
    v0 = 0x8000 << 16;                                          // 0x001abed0: lui $v0, 0x8000
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001abed4: cvt.w.s $f1, $f1
    /* move from FPU: $v1, $f1 */                               // 0x001abed8: mfc1 $v1, $f1
    /* nop */                                                   // 0x001abedc: nop 
    v1 = v1 | v0;                                               // 0x001abee0: or $v1, $v1, $v0
label_0x1abee8:
    at = 0x7000 << 16;                                          // 0x001abef8: lui $at, 0x7000
    v0 = 0x4f00 << 16;                                          // 0x001abf08: lui $v0, 0x4f00
    v1 = a0 | v1;                                               // 0x001abf0c: or $v1, $a0, $v1
    v1 = a1 | v1;                                               // 0x001abf10: or $v1, $a1, $v1
    /* move to FPU: $v0, $f0 */                                 // 0x001abf18: mtc1 $v0, $f0
    v1 = *(int16_t*)((s6) + 0x18);                              // 0x001abf1c: lh $v1, 0x18($s6)
    at = 0x7000 << 16;                                          // 0x001abf20: lui $at, 0x7000
    v0 = *(int16_t*)((s6) + 0x1a);                              // 0x001abf24: lh $v0, 0x1a($s6)
    v1 = v1 << 4;                                               // 0x001abf28: sll $v1, $v1, 4
    v0 = v0 << 4;                                               // 0x001abf2c: sll $v0, $v0, 4
    v1 = v1 + 8;                                                // 0x001abf30: addiu $v1, $v1, 8
    v0 = v0 + 8;                                                // 0x001abf34: addiu $v0, $v0, 8
    v0 = v1 | v0;                                               // 0x001abf4c: or $v0, $v1, $v0
    at = 0x29 << 16;                                            // 0x001abf54: lui $at, 0x29
    FPU_F1 = *(float*)((at) + -0x4c);  // Load float            // 0x001abf58: lwc1 $f1, -0x4c($at)
    /* FPU: c.ole.s $f0, $f1 */                                 // 0x001abf5c: c.ole.s $f0, $f1
    /* bc1t 0x1abf78 */                                         // 0x001abf60: bc1t 0x1abf78
    /* nop */                                                   // 0x001abf64: nop 
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001abf68: cvt.w.s $f1, $f1
    /* move from FPU: $v1, $f1 */                               // 0x001abf6c: mfc1 $v1, $f1
    goto label_0x1abf94;                                        // 0x001abf70: b 0x1abf94
    /* FPU: sub.s $f1, $f1, $f0 */                              // 0x001abf78: sub.s $f1, $f1, $f0
    v0 = 0x8000 << 16;                                          // 0x001abf7c: lui $v0, 0x8000
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001abf80: cvt.w.s $f1, $f1
    /* move from FPU: $v1, $f1 */                               // 0x001abf84: mfc1 $v1, $f1
    /* nop */                                                   // 0x001abf88: nop 
    v1 = v1 | v0;                                               // 0x001abf8c: or $v1, $v1, $v0
label_0x1abf94:
    at = 0x7000 << 16;                                          // 0x001abf94: lui $at, 0x7000
    a0 = 0x7000 << 16;                                          // 0x001abfac: lui $a0, 0x7000
    v0 = v1 | v0;                                               // 0x001abfb8: or $v0, $v1, $v0
    v0 = a1 | v0;                                               // 0x001abfbc: or $v0, $a1, $v0
    func_00193e90();  // 193e90                                // 0x001abfc0: jal 0x193e90
    v0 = 1;                                                     // 0x001abfc8: addiu $v0, $zero, 1
label_0x1abfcc:
    /* FPU: ld.b $w1, -0x4a($zero) */                           // 0x001abfd0: ld.b $w1, -0x4a($zero)
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x001abfd4: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001abfd8: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001abfe0: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001abfe4: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001abfe8: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001abfec: jr $ra
    sp = sp + 0x80;                                             // 0x001abff0: addiu $sp, $sp, 0x80
}