void func_00194790() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x00194790: addiu $sp, $sp, -0x40
    at = 0x29 << 16;                                            // 0x00194794: lui $at, 0x29
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001947a0: addu.qb $zero, $sp, $s1
    v0 = g_00290364;  // Global at 0x00290364                   // 0x001947a8: lw $v0, 0x364($at)
    if (v0 == 0) goto label_0x1947bc;                           // 0x001947ac: beqz $v0, 0x1947bc
    goto label_0x194aa4;                                        // 0x001947b4: b 0x194aa4
    v0 = 1;                                                     // 0x001947b8: addiu $v0, $zero, 1
label_0x1947bc:
    a0 = 0x21 << 16;                                            // 0x001947bc: lui $a0, 0x21
    a1 = 0x7000 << 16;                                          // 0x001947c0: lui $a1, 0x7000
    a0 = a0 + 0x6520;                                           // 0x001947c4: addiu $a0, $a0, 0x6520
    func_00189ad0();  // 0x1899f8                                // 0x001947c8: jal 0x1899f8
    a2 = 3;                                                     // 0x001947cc: addiu $a2, $zero, 3
    a3 = *(uint16_t*)((gp) + -0x6440);                          // 0x001947d0: lhu $a3, -0x6440($gp)
    v0 = 0 | 0x8080;                                            // 0x001947d4: ori $v0, $zero, 0x8080
    v1 = 1;                                                     // 0x001947d8: addiu $v1, $zero, 1
    a0 = 0x29 << 16;                                            // 0x001947e0: lui $a0, 0x29
    v0 = v0 | 0x8080;                                           // 0x001947e8: ori $v0, $v0, 0x8080
    at = 0x7000 << 16;                                          // 0x001947ec: lui $at, 0x7000
    v0 = v0 | v1;                                               // 0x001947f0: or $v0, $v0, $v1
    a0 = a0 + -0x7380;                                          // 0x001947f4: addiu $a0, $a0, -0x7380
    a1 = s1 + 0xc;                                              // 0x001947f8: addiu $a1, $s1, 0xc
    a2 = s1 + 0xe;                                              // 0x001947fc: addiu $a2, $s1, 0xe
    v1 = a3 + -1;                                               // 0x00194804: addiu $v1, $a3, -1
    v0 = v1 << 3;                                               // 0x00194808: sll $v0, $v1, 3
    v0 = v0 - v1;                                               // 0x0019480c: subu $v0, $v0, $v1
    v0 = v0 << 3;                                               // 0x00194810: sll $v0, $v0, 3
    s0 = a0 + v0;                                               // 0x00194814: addu $s0, $a0, $v0
    func_001988b0();  // 0x198870                                // 0x00194818: jal 0x198870
    v0 = *(int16_t*)((s1) + 0xe);                               // 0x00194820: lh $v0, 0xe($s1)
    at = 0x7000 << 16;                                          // 0x00194824: lui $at, 0x7000
    v1 = *(int16_t*)((s1) + 0xc);                               // 0x00194828: lh $v1, 0xc($s1)
    v0 = v0 << 4;                                               // 0x0019482c: sll $v0, $v0, 4
    v1 = v1 << 4;                                               // 0x00194830: sll $v1, $v1, 4
    v0 = v1 | v0;                                               // 0x00194838: or $v0, $v1, $v0
    func_001988d0();  // 0x1988b0                                // 0x00194840: jal 0x1988b0
    a0 = *(int16_t*)(s1);                                       // 0x00194844: lh $a0, 0($s1)
    a0 = *(int16_t*)((s1) + 2);                                 // 0x00194848: lh $a0, 2($s1)
    func_00198910();  // 0x1988d0                                // 0x00194850: jal 0x1988d0
    at = 0x29 << 16;                                            // 0x00194858: lui $at, 0x29
    v1 = g_00290314;  // Global at 0x00290314                   // 0x00194860: lw $v1, 0x314($at)
    v0 = 0x4f00 << 16;                                          // 0x00194864: lui $v0, 0x4f00
    /* move to FPU: $v0, $f0 */                                 // 0x00194874: mtc1 $v0, $f0
    at = 0x29 << 16;                                            // 0x00194878: lui $at, 0x29
    v1 = v1 + a0;                                               // 0x0019487c: addu $v1, $v1, $a0
    v0 = g_00290318;  // Global at 0x00290318                   // 0x00194880: lw $v0, 0x318($at)
    v1 = v1 << 4;                                               // 0x00194884: sll $v1, $v1, 4
    at = 0x29 << 16;                                            // 0x00194888: lui $at, 0x29
    v0 = v0 + a1;                                               // 0x0019488c: addu $v0, $v0, $a1
    FPU_F1 = *(float*)((at) + -0x4c);  // Load float            // 0x00194890: lwc1 $f1, -0x4c($at)
    v0 = v0 << 4;                                               // 0x00194894: sll $v0, $v0, 4
    /* FPU: c.ole.s $f0, $f1 */                                 // 0x0019489c: c.ole.s $f0, $f1
    /* bc1t 0x1948b8 */                                         // 0x001948a0: bc1t 0x1948b8
    a2 = v1 | v0;                                               // 0x001948a4: or $a2, $v1, $v0
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001948a8: cvt.w.s $f1, $f1
    /* move from FPU: $v1, $f1 */                               // 0x001948ac: mfc1 $v1, $f1
    goto label_0x1948d4;                                        // 0x001948b0: b 0x1948d4
    /* FPU: sub.s $f1, $f1, $f0 */                              // 0x001948b8: sub.s $f1, $f1, $f0
    v0 = 0x8000 << 16;                                          // 0x001948bc: lui $v0, 0x8000
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001948c0: cvt.w.s $f1, $f1
    /* move from FPU: $v1, $f1 */                               // 0x001948c4: mfc1 $v1, $f1
    /* nop */                                                   // 0x001948c8: nop 
    v1 = v1 | v0;                                               // 0x001948cc: or $v1, $v1, $v0
label_0x1948d4:
    at = 0x7000 << 16;                                          // 0x001948d4: lui $at, 0x7000
    a1 = s1 + 0x10;                                             // 0x001948e4: addiu $a1, $s1, 0x10
    v0 = v0 | a2;                                               // 0x001948e8: or $v0, $v0, $a2
    a2 = s1 + 0x12;                                             // 0x001948ec: addiu $a2, $s1, 0x12
    func_001988b0();  // 0x198870                                // 0x001948f0: jal 0x198870
    v0 = *(int16_t*)((s1) + 0x12);                              // 0x001948f8: lh $v0, 0x12($s1)
    at = 0x7000 << 16;                                          // 0x001948fc: lui $at, 0x7000
    v1 = *(int16_t*)((s1) + 0x10);                              // 0x00194900: lh $v1, 0x10($s1)
    v0 = v0 << 4;                                               // 0x00194904: sll $v0, $v0, 4
    v1 = v1 << 4;                                               // 0x00194908: sll $v1, $v1, 4
    v0 = v1 | v0;                                               // 0x00194910: or $v0, $v1, $v0
    func_001988d0();  // 0x1988b0                                // 0x00194918: jal 0x1988b0
    a0 = *(int16_t*)((s1) + 4);                                 // 0x0019491c: lh $a0, 4($s1)
    a0 = *(int16_t*)((s1) + 6);                                 // 0x00194920: lh $a0, 6($s1)
    func_00198910();  // 0x1988d0                                // 0x00194928: jal 0x1988d0
    at = 0x29 << 16;                                            // 0x00194930: lui $at, 0x29
    v1 = g_00290314;  // Global at 0x00290314                   // 0x00194938: lw $v1, 0x314($at)
    v0 = 0x4f00 << 16;                                          // 0x0019493c: lui $v0, 0x4f00
    /* move to FPU: $v0, $f0 */                                 // 0x0019494c: mtc1 $v0, $f0
    at = 0x29 << 16;                                            // 0x00194950: lui $at, 0x29
    v1 = v1 + a0;                                               // 0x00194954: addu $v1, $v1, $a0
    v0 = g_00290318;  // Global at 0x00290318                   // 0x00194958: lw $v0, 0x318($at)
    v1 = v1 << 4;                                               // 0x0019495c: sll $v1, $v1, 4
    at = 0x29 << 16;                                            // 0x00194960: lui $at, 0x29
    v0 = v0 + a1;                                               // 0x00194964: addu $v0, $v0, $a1
    FPU_F1 = *(float*)((at) + -0x4c);  // Load float            // 0x00194968: lwc1 $f1, -0x4c($at)
    v0 = v0 << 4;                                               // 0x0019496c: sll $v0, $v0, 4
    /* FPU: c.ole.s $f0, $f1 */                                 // 0x00194974: c.ole.s $f0, $f1
    /* bc1t 0x194990 */                                         // 0x00194978: bc1t 0x194990
    a2 = v1 | v0;                                               // 0x0019497c: or $a2, $v1, $v0
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x00194980: cvt.w.s $f1, $f1
    /* move from FPU: $v1, $f1 */                               // 0x00194984: mfc1 $v1, $f1
    goto label_0x1949ac;                                        // 0x00194988: b 0x1949ac
    /* FPU: sub.s $f1, $f1, $f0 */                              // 0x00194990: sub.s $f1, $f1, $f0
    v0 = 0x8000 << 16;                                          // 0x00194994: lui $v0, 0x8000
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x00194998: cvt.w.s $f1, $f1
    /* move from FPU: $v1, $f1 */                               // 0x0019499c: mfc1 $v1, $f1
    /* nop */                                                   // 0x001949a0: nop 
    v1 = v1 | v0;                                               // 0x001949a4: or $v1, $v1, $v0
label_0x1949ac:
    at = 0x7000 << 16;                                          // 0x001949ac: lui $at, 0x7000
    a1 = s1 + 0x14;                                             // 0x001949bc: addiu $a1, $s1, 0x14
    v0 = v0 | a2;                                               // 0x001949c0: or $v0, $v0, $a2
    a2 = s1 + 0x16;                                             // 0x001949c4: addiu $a2, $s1, 0x16
    func_001988b0();  // 0x198870                                // 0x001949c8: jal 0x198870
    v0 = *(int16_t*)((s1) + 0x16);                              // 0x001949d0: lh $v0, 0x16($s1)
    at = 0x7000 << 16;                                          // 0x001949d4: lui $at, 0x7000
    v1 = *(int16_t*)((s1) + 0x14);                              // 0x001949d8: lh $v1, 0x14($s1)
    v0 = v0 << 4;                                               // 0x001949dc: sll $v0, $v0, 4
    v1 = v1 << 4;                                               // 0x001949e0: sll $v1, $v1, 4
    v0 = v1 | v0;                                               // 0x001949e8: or $v0, $v1, $v0
    func_001988d0();  // 0x1988b0                                // 0x001949f0: jal 0x1988b0
    a0 = *(int16_t*)((s1) + 8);                                 // 0x001949f4: lh $a0, 8($s1)
    a0 = *(int16_t*)((s1) + 0xa);                               // 0x001949f8: lh $a0, 0xa($s1)
    func_00198910();  // 0x1988d0                                // 0x00194a00: jal 0x1988d0
    at = 0x29 << 16;                                            // 0x00194a08: lui $at, 0x29
    v1 = g_00290314;  // Global at 0x00290314                   // 0x00194a10: lw $v1, 0x314($at)
    v0 = 0x4f00 << 16;                                          // 0x00194a14: lui $v0, 0x4f00
    /* move to FPU: $v0, $f0 */                                 // 0x00194a24: mtc1 $v0, $f0
    at = 0x29 << 16;                                            // 0x00194a28: lui $at, 0x29
    v1 = v1 + a0;                                               // 0x00194a2c: addu $v1, $v1, $a0
    v0 = g_00290318;  // Global at 0x00290318                   // 0x00194a30: lw $v0, 0x318($at)
    v1 = v1 << 4;                                               // 0x00194a34: sll $v1, $v1, 4
    at = 0x29 << 16;                                            // 0x00194a38: lui $at, 0x29
    v0 = v0 + a1;                                               // 0x00194a3c: addu $v0, $v0, $a1
    FPU_F1 = *(float*)((at) + -0x4c);  // Load float            // 0x00194a40: lwc1 $f1, -0x4c($at)
    v0 = v0 << 4;                                               // 0x00194a44: sll $v0, $v0, 4
    /* FPU: c.ole.s $f0, $f1 */                                 // 0x00194a4c: c.ole.s $f0, $f1
    /* bc1t 0x194a68 */                                         // 0x00194a50: bc1t 0x194a68
    a1 = v1 | v0;                                               // 0x00194a54: or $a1, $v1, $v0
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x00194a58: cvt.w.s $f1, $f1
    /* move from FPU: $v1, $f1 */                               // 0x00194a5c: mfc1 $v1, $f1
    goto label_0x194a84;                                        // 0x00194a60: b 0x194a84
    /* FPU: sub.s $f1, $f1, $f0 */                              // 0x00194a68: sub.s $f1, $f1, $f0
    v0 = 0x8000 << 16;                                          // 0x00194a6c: lui $v0, 0x8000
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x00194a70: cvt.w.s $f1, $f1
    /* move from FPU: $v1, $f1 */                               // 0x00194a74: mfc1 $v1, $f1
    /* nop */                                                   // 0x00194a78: nop 
    v1 = v1 | v0;                                               // 0x00194a7c: or $v1, $v1, $v0
label_0x194a84:
    at = 0x7000 << 16;                                          // 0x00194a84: lui $at, 0x7000
    a0 = 0x7000 << 16;                                          // 0x00194a8c: lui $a0, 0x7000
    v0 = v0 | a1;                                               // 0x00194a94: or $v0, $v0, $a1
    func_00193f40();  // 0x193e90                                // 0x00194a98: jal 0x193e90
    v0 = 1;                                                     // 0x00194aa0: addiu $v0, $zero, 1
label_0x194aa4:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x00194aa8: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x00194aac: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x00194ab0: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x00194ab4: jr $ra
    sp = sp + 0x40;                                             // 0x00194ab8: addiu $sp, $sp, 0x40
}