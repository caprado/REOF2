void func_00194280() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00194280: addiu $sp, $sp, -0x30
    at = 0x29 << 16;                                            // 0x00194284: lui $at, 0x29
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x0019428c: addu.qb $zero, $sp, $s1
    v0 = g_00290364;  // Global at 0x00290364                   // 0x00194294: lw $v0, 0x364($at)
    if (v0 == 0) goto label_0x1942a8;                           // 0x00194298: beqz $v0, 0x1942a8
    goto label_0x1944cc;                                        // 0x001942a0: b 0x1944cc
    v0 = 1;                                                     // 0x001942a4: addiu $v0, $zero, 1
label_0x1942a8:
    a0 = 0x21 << 16;                                            // 0x001942a8: lui $a0, 0x21
    a1 = 0x7000 << 16;                                          // 0x001942ac: lui $a1, 0x7000
    a0 = a0 + 0x6480;                                           // 0x001942b0: addiu $a0, $a0, 0x6480
    func_00189ad0();  // 0x1899f8                                // 0x001942b4: jal 0x1899f8
    a2 = 3;                                                     // 0x001942b8: addiu $a2, $zero, 3
    a0 = *(int32_t*)((s0) + 8);                                 // 0x001942bc: lw $a0, 8($s0)
    func_00198aa0();  // 0x1989a0                                // 0x001942c0: jal 0x1989a0
    a0 = (unsigned)v0 >> 0x10;                                  // 0x001942c8: srl $a0, $v0, 0x10
    v1 = (unsigned)v0 >> 8;                                     // 0x001942cc: srl $v1, $v0, 8
    a1 = a0 & 0xff;                                             // 0x001942d0: andi $a1, $a0, 0xff
    v1 = v1 & 0xff;                                             // 0x001942d4: andi $v1, $v1, 0xff
    at = 0x7000 << 16;                                          // 0x001942dc: lui $at, 0x7000
    v1 = v0 & 0xff;                                             // 0x001942e0: andi $v1, $v0, 0xff
    a0 = a1 | a0;                                               // 0x001942e4: or $a0, $a1, $a0
    v0 = (unsigned)v0 >> 0x18;                                  // 0x001942ec: srl $v0, $v0, 0x18
    a0 = v1 | a0;                                               // 0x001942f0: or $a0, $v1, $a0
    v1 = v0 & 0xff;                                             // 0x001942f4: andi $v1, $v0, 0xff
    v0 = 1;                                                     // 0x001942f8: addiu $v0, $zero, 1
    v1 = v1 | a0;                                               // 0x00194304: or $v1, $v1, $a0
    v0 = v1 | v0;                                               // 0x00194308: or $v0, $v1, $v0
    v0 = *(int16_t*)((s0) + 0xe);                               // 0x00194310: lh $v0, 0xe($s0)
    at = 0x7000 << 16;                                          // 0x00194314: lui $at, 0x7000
    v1 = *(int16_t*)((s0) + 0xc);                               // 0x00194318: lh $v1, 0xc($s0)
    v0 = v0 << 4;                                               // 0x0019431c: sll $v0, $v0, 4
    v1 = v1 << 4;                                               // 0x00194320: sll $v1, $v1, 4
    v0 = v1 | v0;                                               // 0x00194328: or $v0, $v1, $v0
    func_001988d0();  // 0x1988b0                                // 0x00194330: jal 0x1988b0
    a0 = *(int16_t*)(s0);                                       // 0x00194334: lh $a0, 0($s0)
    a0 = *(int16_t*)((s0) + 2);                                 // 0x00194338: lh $a0, 2($s0)
    func_00198910();  // 0x1988d0                                // 0x00194340: jal 0x1988d0
    at = 0x29 << 16;                                            // 0x00194348: lui $at, 0x29
    v1 = g_00290314;  // Global at 0x00290314                   // 0x00194350: lw $v1, 0x314($at)
    v0 = 0x4f00 << 16;                                          // 0x00194354: lui $v0, 0x4f00
    /* move to FPU: $v0, $f0 */                                 // 0x00194364: mtc1 $v0, $f0
    at = 0x29 << 16;                                            // 0x00194368: lui $at, 0x29
    v1 = v1 + a0;                                               // 0x0019436c: addu $v1, $v1, $a0
    v0 = g_00290318;  // Global at 0x00290318                   // 0x00194370: lw $v0, 0x318($at)
    v1 = v1 << 4;                                               // 0x00194374: sll $v1, $v1, 4
    at = 0x29 << 16;                                            // 0x00194378: lui $at, 0x29
    v0 = v0 + a1;                                               // 0x0019437c: addu $v0, $v0, $a1
    FPU_F1 = *(float*)((at) + -0x4c);  // Load float            // 0x00194380: lwc1 $f1, -0x4c($at)
    v0 = v0 << 4;                                               // 0x00194384: sll $v0, $v0, 4
    /* FPU: c.ole.s $f0, $f1 */                                 // 0x0019438c: c.ole.s $f0, $f1
    /* bc1t 0x1943a8 */                                         // 0x00194390: bc1t 0x1943a8
    a0 = v1 | v0;                                               // 0x00194394: or $a0, $v1, $v0
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x00194398: cvt.w.s $f1, $f1
    /* move from FPU: $v1, $f1 */                               // 0x0019439c: mfc1 $v1, $f1
    goto label_0x1943c4;                                        // 0x001943a0: b 0x1943c4
    /* FPU: sub.s $f1, $f1, $f0 */                              // 0x001943a8: sub.s $f1, $f1, $f0
    v0 = 0x8000 << 16;                                          // 0x001943ac: lui $v0, 0x8000
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001943b0: cvt.w.s $f1, $f1
    /* move from FPU: $v1, $f1 */                               // 0x001943b4: mfc1 $v1, $f1
    /* nop */                                                   // 0x001943b8: nop 
    v1 = v1 | v0;                                               // 0x001943bc: or $v1, $v1, $v0
label_0x1943c4:
    at = 0x7000 << 16;                                          // 0x001943c4: lui $at, 0x7000
    v0 = v0 | a0;                                               // 0x001943d0: or $v0, $v0, $a0
    v0 = *(int16_t*)((s0) + 0x12);                              // 0x001943d8: lh $v0, 0x12($s0)
    at = 0x7000 << 16;                                          // 0x001943dc: lui $at, 0x7000
    v1 = *(int16_t*)((s0) + 0x10);                              // 0x001943e0: lh $v1, 0x10($s0)
    v0 = v0 << 4;                                               // 0x001943e4: sll $v0, $v0, 4
    v1 = v1 << 4;                                               // 0x001943e8: sll $v1, $v1, 4
    v0 = v1 | v0;                                               // 0x001943f0: or $v0, $v1, $v0
    v1 = *(int16_t*)(s0);                                       // 0x001943f8: lh $v1, 0($s0)
    v0 = *(int16_t*)((s0) + 4);                                 // 0x001943fc: lh $v0, 4($s0)
    v0 = v1 + v0;                                               // 0x00194400: addu $v0, $v1, $v0
    func_001988d0();  // 0x1988b0                                // 0x00194408: jal 0x1988b0
    v1 = *(int16_t*)((s0) + 2);                                 // 0x00194414: lh $v1, 2($s0)
    v0 = *(int16_t*)((s0) + 6);                                 // 0x00194418: lh $v0, 6($s0)
    v0 = v1 + v0;                                               // 0x00194420: addu $v0, $v1, $v0
    func_00198910();  // 0x1988d0                                // 0x00194428: jal 0x1988d0
    at = 0x29 << 16;                                            // 0x00194430: lui $at, 0x29
    v1 = g_00290314;  // Global at 0x00290314                   // 0x00194438: lw $v1, 0x314($at)
    v0 = 0x4f00 << 16;                                          // 0x0019443c: lui $v0, 0x4f00
    /* move to FPU: $v0, $f0 */                                 // 0x0019444c: mtc1 $v0, $f0
    at = 0x29 << 16;                                            // 0x00194450: lui $at, 0x29
    v1 = v1 + a0;                                               // 0x00194454: addu $v1, $v1, $a0
    v0 = g_00290318;  // Global at 0x00290318                   // 0x00194458: lw $v0, 0x318($at)
    v1 = v1 << 4;                                               // 0x0019445c: sll $v1, $v1, 4
    at = 0x29 << 16;                                            // 0x00194460: lui $at, 0x29
    v0 = v0 + a1;                                               // 0x00194464: addu $v0, $v0, $a1
    FPU_F1 = *(float*)((at) + -0x4c);  // Load float            // 0x00194468: lwc1 $f1, -0x4c($at)
    v0 = v0 << 4;                                               // 0x0019446c: sll $v0, $v0, 4
    /* FPU: c.ole.s $f0, $f1 */                                 // 0x00194474: c.ole.s $f0, $f1
    /* bc1t 0x194490 */                                         // 0x00194478: bc1t 0x194490
    a1 = v1 | v0;                                               // 0x0019447c: or $a1, $v1, $v0
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x00194480: cvt.w.s $f1, $f1
    /* move from FPU: $v1, $f1 */                               // 0x00194484: mfc1 $v1, $f1
    goto label_0x1944ac;                                        // 0x00194488: b 0x1944ac
    /* FPU: sub.s $f1, $f1, $f0 */                              // 0x00194490: sub.s $f1, $f1, $f0
    v0 = 0x8000 << 16;                                          // 0x00194494: lui $v0, 0x8000
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x00194498: cvt.w.s $f1, $f1
    /* move from FPU: $v1, $f1 */                               // 0x0019449c: mfc1 $v1, $f1
    /* nop */                                                   // 0x001944a0: nop 
    v1 = v1 | v0;                                               // 0x001944a4: or $v1, $v1, $v0
label_0x1944ac:
    at = 0x7000 << 16;                                          // 0x001944ac: lui $at, 0x7000
    a0 = 0x7000 << 16;                                          // 0x001944b4: lui $a0, 0x7000
    v0 = v0 | a1;                                               // 0x001944bc: or $v0, $v0, $a1
    func_00193f40();  // 0x193e90                                // 0x001944c0: jal 0x193e90
    v0 = 1;                                                     // 0x001944c8: addiu $v0, $zero, 1
label_0x1944cc:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001944d0: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001944d4: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001944d8: jr $ra
    sp = sp + 0x30;                                             // 0x001944dc: addiu $sp, $sp, 0x30
}