void func_00194000() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00194000: addiu $sp, $sp, -0x30
    at = 0x29 << 16;                                            // 0x00194004: lui $at, 0x29
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x0019400c: addu.qb $zero, $sp, $s1
    v0 = g_00290364;  // Global at 0x00290364                   // 0x00194014: lw $v0, 0x364($at)
    if (v0 == 0) goto label_0x194028;                           // 0x00194018: beqz $v0, 0x194028
    goto label_0x194264;                                        // 0x00194020: b 0x194264
    v0 = 1;                                                     // 0x00194024: addiu $v0, $zero, 1
label_0x194028:
    a0 = 0x21 << 16;                                            // 0x00194028: lui $a0, 0x21
    a1 = 0x7000 << 16;                                          // 0x0019402c: lui $a1, 0x7000
    a0 = a0 + 0x6440;                                           // 0x00194030: addiu $a0, $a0, 0x6440
    func_001899f8();  // 1899f8                                // 0x00194034: jal 0x1899f8
    a2 = 3;                                                     // 0x00194038: addiu $a2, $zero, 3
    a0 = *(int32_t*)((s0) + 8);                                 // 0x0019403c: lw $a0, 8($s0)
    func_001989a0();  // 1989a0                                // 0x00194040: jal 0x1989a0
    a1 = 1;                                                     // 0x00194044: addiu $a1, $zero, 1
    a0 = (unsigned)v0 >> 0x10;                                  // 0x00194048: srl $a0, $v0, 0x10
    v1 = (unsigned)v0 >> 8;                                     // 0x0019404c: srl $v1, $v0, 8
    a1 = a0 & 0xff;                                             // 0x00194050: andi $a1, $a0, 0xff
    v1 = v1 & 0xff;                                             // 0x00194054: andi $v1, $v1, 0xff
    at = 0x7000 << 16;                                          // 0x0019405c: lui $at, 0x7000
    v1 = v0 & 0xff;                                             // 0x00194060: andi $v1, $v0, 0xff
    a0 = a1 | a0;                                               // 0x00194064: or $a0, $a1, $a0
    v0 = (unsigned)v0 >> 0x18;                                  // 0x0019406c: srl $v0, $v0, 0x18
    a0 = v1 | a0;                                               // 0x00194070: or $a0, $v1, $a0
    v1 = v0 & 0xff;                                             // 0x00194074: andi $v1, $v0, 0xff
    v0 = 1;                                                     // 0x00194078: addiu $v0, $zero, 1
    v1 = v1 | a0;                                               // 0x00194084: or $v1, $v1, $a0
    v0 = v1 | v0;                                               // 0x00194088: or $v0, $v1, $v0
    func_001988b0();  // 1988b0                                // 0x00194090: jal 0x1988b0
    a0 = *(int16_t*)(s0);                                       // 0x00194094: lh $a0, 0($s0)
    a0 = *(int16_t*)((s0) + 2);                                 // 0x00194098: lh $a0, 2($s0)
    func_001988d0();  // 1988d0                                // 0x001940a0: jal 0x1988d0
    /* move to FPU: $v0, $f0 */                                 // 0x001940b8: mtc1 $v0, $f0
    /* nop */                                                   // 0x001940bc: nop 
    /* FPU: cvt.s.w $f12, $f0 */                                // 0x001940c0: cvt.s.w $f12, $f0
    v0 = 0x3f80 << 16;                                          // 0x001940c4: lui $v0, 0x3f80
    /* move to FPU: $v1, $f0 */                                 // 0x001940c8: mtc1 $v1, $f0
    /* move to FPU: $v0, $f14 */                                // 0x001940cc: mtc1 $v0, $f14
    func_00193f40();  // 193f40                                // 0x001940d0: jal 0x193f40
    /* FPU: cvt.s.w $f13, $f0 */                                // 0x001940d4: cvt.s.w $f13, $f0
    if (v0 != 0) goto label_0x1940e8;                           // 0x001940d8: bnez $v0, 0x1940e8
    at = 0x29 << 16;                                            // 0x001940dc: lui $at, 0x29
    goto label_0x194264;                                        // 0x001940e0: b 0x194264
label_0x1940e8:
    v0 = 0x4f00 << 16;                                          // 0x001940e8: lui $v0, 0x4f00
    a0 = g_00290314;  // Global at 0x00290314                   // 0x001940ec: lw $a0, 0x314($at)
    /* move to FPU: $v0, $f0 */                                 // 0x00194100: mtc1 $v0, $f0
    at = 0x29 << 16;                                            // 0x00194104: lui $at, 0x29
    a0 = a0 + a1;                                               // 0x00194108: addu $a0, $a0, $a1
    v0 = g_00290318;  // Global at 0x00290318                   // 0x0019410c: lw $v0, 0x318($at)
    at = 0x29 << 16;                                            // 0x00194110: lui $at, 0x29
    v0 = v0 + v1;                                               // 0x00194114: addu $v0, $v0, $v1
    FPU_F1 = *(float*)((at) + -0x4c);  // Load float            // 0x00194118: lwc1 $f1, -0x4c($at)
    v0 = v0 << 4;                                               // 0x0019411c: sll $v0, $v0, 4
    v1 = a0 << 4;                                               // 0x00194120: sll $v1, $a0, 4
    /* FPU: c.ole.s $f0, $f1 */                                 // 0x00194128: c.ole.s $f0, $f1
    /* bc1t 0x194144 */                                         // 0x0019412c: bc1t 0x194144
    a0 = v1 | v0;                                               // 0x00194130: or $a0, $v1, $v0
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x00194134: cvt.w.s $f1, $f1
    /* move from FPU: $v1, $f1 */                               // 0x00194138: mfc1 $v1, $f1
    goto label_0x194160;                                        // 0x0019413c: b 0x194160
    /* FPU: sub.s $f1, $f1, $f0 */                              // 0x00194144: sub.s $f1, $f1, $f0
    v0 = 0x8000 << 16;                                          // 0x00194148: lui $v0, 0x8000
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x0019414c: cvt.w.s $f1, $f1
    /* move from FPU: $v1, $f1 */                               // 0x00194150: mfc1 $v1, $f1
    /* nop */                                                   // 0x00194154: nop 
    v1 = v1 | v0;                                               // 0x00194158: or $v1, $v1, $v0
label_0x194160:
    at = 0x7000 << 16;                                          // 0x00194160: lui $at, 0x7000
    v0 = v0 | a0;                                               // 0x0019416c: or $v0, $v0, $a0
    func_001988b0();  // 1988b0                                // 0x00194174: jal 0x1988b0
    a0 = *(int16_t*)((s0) + 4);                                 // 0x00194178: lh $a0, 4($s0)
    a0 = *(int16_t*)((s0) + 6);                                 // 0x0019417c: lh $a0, 6($s0)
    func_001988d0();  // 1988d0                                // 0x00194184: jal 0x1988d0
    /* move to FPU: $v0, $f0 */                                 // 0x0019419c: mtc1 $v0, $f0
    /* nop */                                                   // 0x001941a0: nop 
    /* FPU: cvt.s.w $f12, $f0 */                                // 0x001941a4: cvt.s.w $f12, $f0
    v0 = 0x3f80 << 16;                                          // 0x001941a8: lui $v0, 0x3f80
    /* move to FPU: $v1, $f0 */                                 // 0x001941ac: mtc1 $v1, $f0
    /* move to FPU: $v0, $f14 */                                // 0x001941b0: mtc1 $v0, $f14
    func_00193f40();  // 193f40                                // 0x001941b4: jal 0x193f40
    /* FPU: cvt.s.w $f13, $f0 */                                // 0x001941b8: cvt.s.w $f13, $f0
    if (v0 != 0) goto label_0x1941cc;                           // 0x001941bc: bnez $v0, 0x1941cc
    at = 0x29 << 16;                                            // 0x001941c0: lui $at, 0x29
    goto label_0x194264;                                        // 0x001941c4: b 0x194264
label_0x1941cc:
    v0 = 0x4f00 << 16;                                          // 0x001941cc: lui $v0, 0x4f00
    a0 = g_00290314;  // Global at 0x00290314                   // 0x001941d0: lw $a0, 0x314($at)
    /* move to FPU: $v0, $f0 */                                 // 0x001941e4: mtc1 $v0, $f0
    at = 0x29 << 16;                                            // 0x001941e8: lui $at, 0x29
    a0 = a0 + a1;                                               // 0x001941ec: addu $a0, $a0, $a1
    v0 = g_00290318;  // Global at 0x00290318                   // 0x001941f0: lw $v0, 0x318($at)
    at = 0x29 << 16;                                            // 0x001941f4: lui $at, 0x29
    v0 = v0 + v1;                                               // 0x001941f8: addu $v0, $v0, $v1
    FPU_F1 = *(float*)((at) + -0x4c);  // Load float            // 0x001941fc: lwc1 $f1, -0x4c($at)
    v0 = v0 << 4;                                               // 0x00194200: sll $v0, $v0, 4
    v1 = a0 << 4;                                               // 0x00194204: sll $v1, $a0, 4
    /* FPU: c.ole.s $f0, $f1 */                                 // 0x0019420c: c.ole.s $f0, $f1
    /* bc1t 0x194228 */                                         // 0x00194210: bc1t 0x194228
    a1 = v1 | v0;                                               // 0x00194214: or $a1, $v1, $v0
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x00194218: cvt.w.s $f1, $f1
    /* move from FPU: $v1, $f1 */                               // 0x0019421c: mfc1 $v1, $f1
    goto label_0x194244;                                        // 0x00194220: b 0x194244
    /* FPU: sub.s $f1, $f1, $f0 */                              // 0x00194228: sub.s $f1, $f1, $f0
    v0 = 0x8000 << 16;                                          // 0x0019422c: lui $v0, 0x8000
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x00194230: cvt.w.s $f1, $f1
    /* move from FPU: $v1, $f1 */                               // 0x00194234: mfc1 $v1, $f1
    /* nop */                                                   // 0x00194238: nop 
    v1 = v1 | v0;                                               // 0x0019423c: or $v1, $v1, $v0
label_0x194244:
    at = 0x7000 << 16;                                          // 0x00194244: lui $at, 0x7000
    a0 = 0x7000 << 16;                                          // 0x0019424c: lui $a0, 0x7000
    v0 = v0 | a1;                                               // 0x00194254: or $v0, $v0, $a1
    func_00193e90();  // 193e90                                // 0x00194258: jal 0x193e90
    v0 = 1;                                                     // 0x00194260: addiu $v0, $zero, 1
label_0x194264:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x00194268: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0019426c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x00194270: jr $ra
    sp = sp + 0x30;                                             // 0x00194274: addiu $sp, $sp, 0x30
}