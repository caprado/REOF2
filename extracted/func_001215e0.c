void func_001215e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x10;                                            // 0x001215e0: addiu $sp, $sp, -0x10
    /* FPU: mov.s $f0, $f12 */                                  // 0x001215e4: mov.s $f0, $f12
    *(float*)(sp) = FPU_F0;  // Store float                     // 0x001215e8: swc1 $f0, 0($sp)
    v1 = 0x7fff << 16;                                          // 0x001215ec: lui $v1, 0x7fff
    a2 = local_0;                                               // 0x001215f0: lw $a2, 0($sp)
    /* FPU: cvt.w.s $f0, $f12 */                                // 0x001215f4: cvt.w.s $f0, $f12
    /* move from FPU: $a1, $f0 */                               // 0x001215f8: mfc1 $a1, $f0
    v1 = v1 | 0xffff;                                           // 0x001215fc: ori $v1, $v1, 0xffff
    v0 = 0x31ff << 16;                                          // 0x00121600: lui $v0, 0x31ff
    v1 = a2 & v1;                                               // 0x00121604: and $v1, $a2, $v1
    v0 = v0 | 0xffff;                                           // 0x00121608: ori $v0, $v0, 0xffff
    v0 = (v0 < v1) ? 1 : 0;                                     // 0x0012160c: slt $v0, $v0, $v1
    /* bnezl $v0, 0x121624 */                                   // 0x00121610: bnezl $v0, 0x121624
    /* FPU: mul.s $f3, $f12, $f12 */                            // 0x00121614: mul.s $f3, $f12, $f12
    if (a1 == 0) goto label_0x1216dc;                           // 0x00121618: beqz $a1, 0x1216dc
    /* FPU: mov.s $f0, $f12 */                                  // 0x0012161c: mov.s $f0, $f12
    /* FPU: mul.s $f3, $f12, $f12 */                            // 0x00121620: mul.s $f3, $f12, $f12
    at = 0x2f2e << 16;                                          // 0x00121624: lui $at, 0x2f2e
    at = at | 0xc9d2;                                           // 0x00121628: ori $at, $at, 0xc9d2
    /* move to FPU: $at, $f0 */                                 // 0x0012162c: mtc1 $at, $f0
    at = 0xb2d7 << 16;                                          // 0x00121630: lui $at, 0xb2d7
    at = at | 0x2f34;                                           // 0x00121634: ori $at, $at, 0x2f34
    /* move to FPU: $at, $f1 */                                 // 0x00121638: mtc1 $at, $f1
    /* FPU: mul.s $f0, $f3, $f0 */                              // 0x0012163c: mul.s $f0, $f3, $f0
    /* FPU: mul.s $f4, $f3, $f12 */                             // 0x00121640: mul.s $f4, $f3, $f12
    /* FPU: add.s $f0, $f0, $f1 */                              // 0x00121644: add.s $f0, $f0, $f1
    at = 0x3638 << 16;                                          // 0x00121648: lui $at, 0x3638
    at = at | 0xef1a;                                           // 0x0012164c: ori $at, $at, 0xef1a
    /* move to FPU: $at, $f1 */                                 // 0x00121650: mtc1 $at, $f1
    /* FPU: mul.s $f0, $f3, $f0 */                              // 0x00121654: mul.s $f0, $f3, $f0
    /* FPU: add.s $f0, $f0, $f1 */                              // 0x00121658: add.s $f0, $f0, $f1
    at = 0xb950 << 16;                                          // 0x0012165c: lui $at, 0xb950
    at = at | 0xd01;                                            // 0x00121660: ori $at, $at, 0xd01
    /* move to FPU: $at, $f1 */                                 // 0x00121664: mtc1 $at, $f1
    /* FPU: mul.s $f0, $f3, $f0 */                              // 0x00121668: mul.s $f0, $f3, $f0
    /* FPU: add.s $f0, $f0, $f1 */                              // 0x0012166c: add.s $f0, $f0, $f1
    at = 0x3c08 << 16;                                          // 0x00121670: lui $at, 0x3c08
    at = at | 0x8889;                                           // 0x00121674: ori $at, $at, 0x8889
    /* move to FPU: $at, $f1 */                                 // 0x00121678: mtc1 $at, $f1
    /* FPU: mul.s $f0, $f3, $f0 */                              // 0x0012167c: mul.s $f0, $f3, $f0
    if (a0 != 0) goto label_0x1216a8;                           // 0x00121680: bnez $a0, 0x1216a8
    /* FPU: add.s $f1, $f0, $f1 */                              // 0x00121684: add.s $f1, $f0, $f1
    /* FPU: mul.s $f0, $f3, $f1 */                              // 0x00121688: mul.s $f0, $f3, $f1
    at = 0xbe2a << 16;                                          // 0x0012168c: lui $at, 0xbe2a
    at = at | 0xaaaa;                                           // 0x00121690: ori $at, $at, 0xaaaa
    /* move to FPU: $at, $f1 */                                 // 0x00121694: mtc1 $at, $f1
    /* FPU: add.s $f0, $f0, $f1 */                              // 0x00121698: add.s $f0, $f0, $f1
    /* FPU: mul.s $f0, $f4, $f0 */                              // 0x0012169c: mul.s $f0, $f4, $f0
    goto label_0x1216dc;                                        // 0x001216a0: b 0x1216dc
    /* FPU: add.s $f0, $f12, $f0 */                             // 0x001216a4: add.s $f0, $f12, $f0
label_0x1216a8:
    at = 0x3f00 << 16;                                          // 0x001216a8: lui $at, 0x3f00
    /* move to FPU: $at, $f0 */                                 // 0x001216ac: mtc1 $at, $f0
    /* FPU: mul.s $f2, $f4, $f1 */                              // 0x001216b0: mul.s $f2, $f4, $f1
    at = 0xbe2a << 16;                                          // 0x001216b4: lui $at, 0xbe2a
    at = at | 0xaaaa;                                           // 0x001216b8: ori $at, $at, 0xaaaa
    /* move to FPU: $at, $f1 */                                 // 0x001216bc: mtc1 $at, $f1
    /* FPU: mul.s $f0, $f13, $f0 */                             // 0x001216c0: mul.s $f0, $f13, $f0
    /* FPU: mul.s $f1, $f4, $f1 */                              // 0x001216c4: mul.s $f1, $f4, $f1
    /* FPU: sub.s $f0, $f0, $f2 */                              // 0x001216c8: sub.s $f0, $f0, $f2
    /* FPU: mul.s $f0, $f3, $f0 */                              // 0x001216cc: mul.s $f0, $f3, $f0
    /* FPU: sub.s $f0, $f0, $f13 */                             // 0x001216d0: sub.s $f0, $f0, $f13
    /* FPU: sub.s $f0, $f0, $f1 */                              // 0x001216d4: sub.s $f0, $f0, $f1
    /* FPU: sub.s $f0, $f12, $f0 */                             // 0x001216d8: sub.s $f0, $f12, $f0
label_0x1216dc:
    return;                                                     // 0x001216dc: jr $ra
    sp = sp + 0x10;                                             // 0x001216e0: addiu $sp, $sp, 0x10
}