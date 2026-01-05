void func_00195040() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0xb0;                                            // 0x00195040: addiu $sp, $sp, -0xb0
    at = 0x29 << 16;                                            // 0x00195044: lui $at, 0x29
    /* FPU: dpa.w.ph $ac0, $sp, $s2 */                          // 0x00195050: dpa.w.ph $ac0, $sp, $s2
    /* FPU: addu.qb $zero, $sp, $s0 */                          // 0x00195058: addu.qb $zero, $sp, $s0
    *(float*)((sp) + 4) = FPU_F21;  // Store float              // 0x0019505c: swc1 $f21, 4($sp)
    *(float*)(sp) = FPU_F20;  // Store float                    // 0x00195060: swc1 $f20, 0($sp)
    v0 = g_00290364;  // Global at 0x00290364                   // 0x00195064: lw $v0, 0x364($at)
    if (v0 == 0) goto label_0x195078;                           // 0x00195068: beqz $v0, 0x195078
    goto label_0x195370;                                        // 0x00195070: b 0x195370
    v0 = 1;                                                     // 0x00195074: addiu $v0, $zero, 1
label_0x195078:
    a0 = 0x21 << 16;                                            // 0x00195078: lui $a0, 0x21
    a1 = 0x7000 << 16;                                          // 0x0019507c: lui $a1, 0x7000
    a0 = a0 + 0x6610;                                           // 0x00195080: addiu $a0, $a0, 0x6610
    func_001899f8();  // 1899f8                                // 0x00195084: jal 0x1899f8
    a2 = 3;                                                     // 0x00195088: addiu $a2, $zero, 3
    v0 = 0x7000 << 16;                                          // 0x0019508c: lui $v0, 0x7000
    a0 = sp + 0x60;                                             // 0x00195090: addiu $a0, $sp, 0x60
    a1 = v0 | 0x3700;                                           // 0x00195094: ori $a1, $v0, 0x3700
    func_00191030();  // 191030                                // 0x00195098: jal 0x191030
    a2 = v0 | 0x3f40;                                           // 0x0019509c: ori $a2, $v0, 0x3f40
    a0 = sp + 0x60;                                             // 0x001950a0: addiu $a0, $sp, 0x60
    a2 = 0x28 << 16;                                            // 0x001950a4: lui $a2, 0x28
    a2 = a2 + 0x53a0;                                           // 0x001950a8: addiu $a2, $a2, 0x53a0
    func_00191030();  // 191030                                // 0x001950ac: jal 0x191030
    a0 = sp + 0xa0;                                             // 0x001950b4: addiu $a0, $sp, 0xa0
    func_00191860();  // 191860                                // 0x001950bc: jal 0x191860
    a2 = sp + 0x60;                                             // 0x001950c0: addiu $a2, $sp, 0x60
    s0 = sp + 0xac;                                             // 0x001950c4: addiu $s0, $sp, 0xac
    v0 = 0x3f80 << 16;                                          // 0x001950c8: lui $v0, 0x3f80
    FPU_F0 = *(float*)(s0);  // Load float                      // 0x001950cc: lwc1 $f0, 0($s0)
    a1 = 1;                                                     // 0x001950d0: addiu $a1, $zero, 1
    /* move to FPU: $v0, $f1 */                                 // 0x001950d4: mtc1 $v0, $f1
    /* nop */                                                   // 0x001950d8: nop 
    /* FPU: div.s $f0, $f1, $f0 */                              // 0x001950dc: div.s $f0, $f1, $f0
    /* nop */                                                   // 0x001950e0: nop 
    *(float*)(s0) = FPU_F0;  // Store float                     // 0x001950e4: swc1 $f0, 0($s0)
    func_001989a0();  // 1989a0                                // 0x001950e8: jal 0x1989a0
    a0 = *(int32_t*)((s3) + 0x18);                              // 0x001950ec: lw $a0, 0x18($s3)
    a0 = (unsigned)v0 >> 0x10;                                  // 0x001950f0: srl $a0, $v0, 0x10
    v1 = (unsigned)v0 >> 8;                                     // 0x001950f4: srl $v1, $v0, 8
    a1 = a0 & 0xff;                                             // 0x001950f8: andi $a1, $a0, 0xff
    v1 = v1 & 0xff;                                             // 0x001950fc: andi $v1, $v1, 0xff
    at = 0x7000 << 16;                                          // 0x00195104: lui $at, 0x7000
    v1 = v0 & 0xff;                                             // 0x00195108: andi $v1, $v0, 0xff
    a0 = a1 | a0;                                               // 0x0019510c: or $a0, $a1, $a0
    v0 = (unsigned)v0 >> 0x18;                                  // 0x00195114: srl $v0, $v0, 0x18
    a0 = v1 | a0;                                               // 0x00195118: or $a0, $v1, $a0
    v1 = v0 & 0xff;                                             // 0x0019511c: andi $v1, $v0, 0xff
    v1 = v1 | a0;                                               // 0x00195128: or $v1, $v1, $a0
    v0 = v0 | v1;                                               // 0x00195130: or $v0, $v0, $v1
    func_00198910();  // 198910                                // 0x00195138: jal 0x198910
    FPU_F12 = *(float*)((sp) + 0xa0);  // Load float            // 0x0019513c: lwc1 $f12, 0xa0($sp)
    s2 = sp + 0xa4;                                             // 0x00195140: addiu $s2, $sp, 0xa4
    FPU_F12 = *(float*)(s2);  // Load float                     // 0x00195144: lwc1 $f12, 0($s2)
    func_00198930();  // 198930                                // 0x00195148: jal 0x198930
    /* FPU: mov.s $f21, $f0 */                                  // 0x0019514c: mov.s $f21, $f0
    s1 = sp + 0xa8;                                             // 0x00195150: addiu $s1, $sp, 0xa8
    FPU_F12 = *(float*)(s1);  // Load float                     // 0x00195154: lwc1 $f12, 0($s1)
    func_00198970();  // 198970                                // 0x00195158: jal 0x198970
    /* FPU: mov.s $f20, $f0 */                                  // 0x0019515c: mov.s $f20, $f0
    /* FPU: mov.s $f14, $f0 */                                  // 0x00195160: mov.s $f14, $f0
    /* FPU: mov.s $f12, $f21 */                                 // 0x00195164: mov.s $f12, $f21
    func_00193f40();  // 193f40                                // 0x00195168: jal 0x193f40
    /* FPU: mov.s $f13, $f20 */                                 // 0x0019516c: mov.s $f13, $f20
    if (v0 != 0) goto label_0x195180;                           // 0x00195170: bnez $v0, 0x195180
    at = 0x29 << 16;                                            // 0x00195174: lui $at, 0x29
    goto label_0x195370;                                        // 0x00195178: b 0x195370
label_0x195180:
    v0 = 0x4f00 << 16;                                          // 0x00195180: lui $v0, 0x4f00
    FPU_F2 = *(float*)((at) + 0x314);  // Load float            // 0x00195184: lwc1 $f2, 0x314($at)
    /* move to FPU: $v0, $f0 */                                 // 0x00195188: mtc1 $v0, $f0
    /* nop */                                                   // 0x0019518c: nop 
    /* FPU: c.ole.s $f0, $f14 */                                // 0x00195190: c.ole.s $f0, $f14
    at = 0x29 << 16;                                            // 0x00195194: lui $at, 0x29
    FPU_F1 = *(float*)((at) + 0x318);  // Load float            // 0x00195198: lwc1 $f1, 0x318($at)
    /* FPU: cvt.s.w $f2, $f2 */                                 // 0x0019519c: cvt.s.w $f2, $f2
    /* FPU: cvt.s.w $f1, $f1 */                                 // 0x001951a0: cvt.s.w $f1, $f1
    /* FPU: add.s $f2, $f2, $f21 */                             // 0x001951a4: add.s $f2, $f2, $f21
    /* FPU: add.s $f1, $f1, $f20 */                             // 0x001951a8: add.s $f1, $f1, $f20
    /* FPU: cvt.w.s $f2, $f2 */                                 // 0x001951ac: cvt.w.s $f2, $f2
    /* move from FPU: $v0, $f2 */                               // 0x001951b0: mfc1 $v0, $f2
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001951b4: cvt.w.s $f1, $f1
    v1 = v0 << 4;                                               // 0x001951b8: sll $v1, $v0, 4
    /* move from FPU: $v0, $f1 */                               // 0x001951bc: mfc1 $v0, $f1
    /* nop */                                                   // 0x001951c0: nop 
    v0 = v0 << 4;                                               // 0x001951c4: sll $v0, $v0, 4
    /* bc1t 0x1951e4 */                                         // 0x001951cc: bc1t 0x1951e4
    a2 = v1 | v0;                                               // 0x001951d0: or $a2, $v1, $v0
    /* FPU: cvt.w.s $f14, $f14 */                               // 0x001951d4: cvt.w.s $f14, $f14
    /* move from FPU: $v1, $f14 */                              // 0x001951d8: mfc1 $v1, $f14
    goto label_0x195200;                                        // 0x001951dc: b 0x195200
    /* FPU: sub.s $f14, $f14, $f0 */                            // 0x001951e4: sub.s $f14, $f14, $f0
    v0 = 0x8000 << 16;                                          // 0x001951e8: lui $v0, 0x8000
    /* FPU: cvt.w.s $f14, $f14 */                               // 0x001951ec: cvt.w.s $f14, $f14
    /* move from FPU: $v1, $f14 */                              // 0x001951f0: mfc1 $v1, $f14
    /* nop */                                                   // 0x001951f4: nop 
    v1 = v1 | v0;                                               // 0x001951f8: or $v1, $v1, $v0
label_0x195200:
    at = 0x7000 << 16;                                          // 0x00195200: lui $at, 0x7000
    a0 = sp + 0xa0;                                             // 0x00195208: addiu $a0, $sp, 0xa0
    a1 = s3 + 0xc;                                              // 0x00195210: addiu $a1, $s3, 0xc
    v0 = v0 | a2;                                               // 0x00195214: or $v0, $v0, $a2
    a2 = sp + 0x60;                                             // 0x00195218: addiu $a2, $sp, 0x60
    func_00191860();  // 191860                                // 0x0019521c: jal 0x191860
    FPU_F0 = *(float*)(s0);  // Load float                      // 0x00195224: lwc1 $f0, 0($s0)
    v0 = 0x3f80 << 16;                                          // 0x00195228: lui $v0, 0x3f80
    /* move to FPU: $v0, $f1 */                                 // 0x0019522c: mtc1 $v0, $f1
    a1 = 1;                                                     // 0x00195230: addiu $a1, $zero, 1
    /* FPU: div.s $f0, $f1, $f0 */                              // 0x00195234: div.s $f0, $f1, $f0
    /* nop */                                                   // 0x00195238: nop 
    *(float*)(s0) = FPU_F0;  // Store float                     // 0x0019523c: swc1 $f0, 0($s0)
    func_001989a0();  // 1989a0                                // 0x00195240: jal 0x1989a0
    a0 = *(int32_t*)((s3) + 0x1c);                              // 0x00195244: lw $a0, 0x1c($s3)
    a0 = (unsigned)v0 >> 0x10;                                  // 0x00195248: srl $a0, $v0, 0x10
    a2 = a0 & 0xff;                                             // 0x00195250: andi $a2, $a0, 0xff
    at = 0x7000 << 16;                                          // 0x00195254: lui $at, 0x7000
    a0 = (unsigned)v0 >> 8;                                     // 0x00195258: srl $a0, $v0, 8
    a1 = a0 & 0xff;                                             // 0x0019525c: andi $a1, $a0, 0xff
    a0 = v0 & 0xff;                                             // 0x00195260: andi $a0, $v0, 0xff
    v0 = (unsigned)v0 >> 0x18;                                  // 0x00195268: srl $v0, $v0, 0x18
    a1 = a2 | a1;                                               // 0x00195270: or $a1, $a2, $a1
    v0 = v0 & 0xff;                                             // 0x00195274: andi $v0, $v0, 0xff
    a1 = a0 | a1;                                               // 0x00195278: or $a1, $a0, $a1
    v1 = a0 | a1;                                               // 0x00195284: or $v1, $a0, $a1
    v0 = v0 | v1;                                               // 0x00195288: or $v0, $v0, $v1
    func_00198910();  // 198910                                // 0x00195290: jal 0x198910
    FPU_F12 = *(float*)((sp) + 0xa0);  // Load float            // 0x00195294: lwc1 $f12, 0xa0($sp)
    FPU_F12 = *(float*)(s2);  // Load float                     // 0x00195298: lwc1 $f12, 0($s2)
    func_00198930();  // 198930                                // 0x0019529c: jal 0x198930
    /* FPU: mov.s $f21, $f0 */                                  // 0x001952a0: mov.s $f21, $f0
    FPU_F12 = *(float*)(s1);  // Load float                     // 0x001952a4: lwc1 $f12, 0($s1)
    func_00198970();  // 198970                                // 0x001952a8: jal 0x198970
    /* FPU: mov.s $f20, $f0 */                                  // 0x001952ac: mov.s $f20, $f0
    /* FPU: mov.s $f14, $f0 */                                  // 0x001952b0: mov.s $f14, $f0
    /* FPU: mov.s $f12, $f21 */                                 // 0x001952b4: mov.s $f12, $f21
    func_00193f40();  // 193f40                                // 0x001952b8: jal 0x193f40
    /* FPU: mov.s $f13, $f20 */                                 // 0x001952bc: mov.s $f13, $f20
    if (v0 != 0) goto label_0x1952d0;                           // 0x001952c0: bnez $v0, 0x1952d0
    at = 0x29 << 16;                                            // 0x001952c4: lui $at, 0x29
    goto label_0x195370;                                        // 0x001952c8: b 0x195370
label_0x1952d0:
    v0 = 0x4f00 << 16;                                          // 0x001952d0: lui $v0, 0x4f00
    FPU_F2 = *(float*)((at) + 0x314);  // Load float            // 0x001952d4: lwc1 $f2, 0x314($at)
    /* move to FPU: $v0, $f0 */                                 // 0x001952d8: mtc1 $v0, $f0
    /* nop */                                                   // 0x001952dc: nop 
    /* FPU: c.ole.s $f0, $f14 */                                // 0x001952e0: c.ole.s $f0, $f14
    at = 0x29 << 16;                                            // 0x001952e4: lui $at, 0x29
    FPU_F1 = *(float*)((at) + 0x318);  // Load float            // 0x001952e8: lwc1 $f1, 0x318($at)
    /* FPU: cvt.s.w $f2, $f2 */                                 // 0x001952ec: cvt.s.w $f2, $f2
    /* FPU: cvt.s.w $f1, $f1 */                                 // 0x001952f0: cvt.s.w $f1, $f1
    /* FPU: add.s $f2, $f2, $f21 */                             // 0x001952f4: add.s $f2, $f2, $f21
    /* FPU: add.s $f1, $f1, $f20 */                             // 0x001952f8: add.s $f1, $f1, $f20
    /* FPU: cvt.w.s $f2, $f2 */                                 // 0x001952fc: cvt.w.s $f2, $f2
    /* move from FPU: $v0, $f2 */                               // 0x00195300: mfc1 $v0, $f2
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x00195304: cvt.w.s $f1, $f1
    v1 = v0 << 4;                                               // 0x00195308: sll $v1, $v0, 4
    /* move from FPU: $v0, $f1 */                               // 0x0019530c: mfc1 $v0, $f1
    /* nop */                                                   // 0x00195310: nop 
    v0 = v0 << 4;                                               // 0x00195314: sll $v0, $v0, 4
    /* bc1t 0x195334 */                                         // 0x0019531c: bc1t 0x195334
    a1 = v1 | v0;                                               // 0x00195320: or $a1, $v1, $v0
    /* FPU: cvt.w.s $f14, $f14 */                               // 0x00195324: cvt.w.s $f14, $f14
    /* move from FPU: $v1, $f14 */                              // 0x00195328: mfc1 $v1, $f14
    goto label_0x195350;                                        // 0x0019532c: b 0x195350
    /* FPU: sub.s $f14, $f14, $f0 */                            // 0x00195334: sub.s $f14, $f14, $f0
    v0 = 0x8000 << 16;                                          // 0x00195338: lui $v0, 0x8000
    /* FPU: cvt.w.s $f14, $f14 */                               // 0x0019533c: cvt.w.s $f14, $f14
    /* move from FPU: $v1, $f14 */                              // 0x00195340: mfc1 $v1, $f14
    /* nop */                                                   // 0x00195344: nop 
    v1 = v1 | v0;                                               // 0x00195348: or $v1, $v1, $v0
label_0x195350:
    at = 0x7000 << 16;                                          // 0x00195350: lui $at, 0x7000
    a0 = 0x7000 << 16;                                          // 0x00195358: lui $a0, 0x7000
    v0 = v0 | a1;                                               // 0x00195360: or $v0, $v0, $a1
    func_00193e90();  // 193e90                                // 0x00195364: jal 0x193e90
    v0 = 1;                                                     // 0x0019536c: addiu $v0, $zero, 1
label_0x195370:
    FPU_F21 = *(float*)((sp) + 4);  // Load float               // 0x00195374: lwc1 $f21, 4($sp)
    /* FPU: xori.b $w1, $w0, 0xb3 */                            // 0x00195378: xori.b $w1, $w0, 0xb3
    FPU_F20 = *(float*)(sp);  // Load float                     // 0x0019537c: lwc1 $f20, 0($sp)
    /* FPU: ld.b $w0, -0x4f($zero) */                           // 0x00195384: ld.b $w0, -0x4f($zero)
    /* FPU: aver_u.h $w0, $w0, $w16 */                          // 0x00195388: aver_u.h $w0, $w0, $w16
    return;                                                     // 0x0019538c: jr $ra
    sp = sp + 0xb0;                                             // 0x00195390: addiu $sp, $sp, 0xb0
}