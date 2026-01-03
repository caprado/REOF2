void func_0010a388() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    /* move from FPU: $a2, $f12 */                              // 0x0010a388: mfc1 $a2, $f12
    sp = sp + -0x10;                                            // 0x0010a38c: addiu $sp, $sp, -0x10
    *(float*)((sp) + 8) = FPU_F20;  // Store float              // 0x0010a394: swc1 $f20, 8($sp)
    v0 = 0x7fff << 16;                                          // 0x0010a398: lui $v0, 0x7fff
    v0 = v0 | 0xffff;                                           // 0x0010a39c: ori $v0, $v0, 0xffff
    v1 = 0x7f << 16;                                            // 0x0010a3a0: lui $v1, 0x7f
    v0 = a2 & v0;                                               // 0x0010a3a4: and $v0, $a2, $v0
    v1 = v1 | 0xffff;                                           // 0x0010a3a8: ori $v1, $v1, 0xffff
    a1 = (unsigned)v0 >> 0x17;                                  // 0x0010a3ac: srl $a1, $v0, 0x17
    v1 = ((unsigned)v1 < (unsigned)v0) ? 1 : 0;                 // 0x0010a3b0: sltu $v1, $v1, $v0
    /* FPU: mov.s $f0, $f12 */                                  // 0x0010a3b4: mov.s $f0, $f12
    if (v1 == 0) goto label_0x10a440;                           // 0x0010a3b8: beqz $v1, 0x10a440
    a1 = a1 + a0;                                               // 0x0010a3bc: addu $a1, $a1, $a0
    v0 = (a1 < 0x100) ? 1 : 0;                                  // 0x0010a3c0: slti $v0, $a1, 0x100
    if (v0 != 0) goto label_0x10a3e0;                           // 0x0010a3c4: bnez $v0, 0x10a3e0
    /* FPU: mov.s $f13, $f12 */                                 // 0x0010a3c8: mov.s $f13, $f12
    at = 0x7149 << 16;                                          // 0x0010a3cc: lui $at, 0x7149
    at = at | 0xf2c9;                                           // 0x0010a3d0: ori $at, $at, 0xf2c9
    /* move to FPU: $at, $f20 */                                // 0x0010a3d4: mtc1 $at, $f20
    goto label_0x10a434;                                        // 0x0010a3d8: b 0x10a434
    /* nop */                                                   // 0x0010a3dc: nop 
label_0x10a3e0:
    if (a1 <= 0) goto label_0x10a408;                           // 0x0010a3e0: blez $a1, 0x10a408
    v0 = 0 | 0xc350;                                            // 0x0010a3e4: ori $v0, $zero, 0xc350
    v0 = 0x807f << 16;                                          // 0x0010a3e8: lui $v0, 0x807f
    v1 = a1 << 0x17;                                            // 0x0010a3ec: sll $v1, $a1, 0x17
    v0 = v0 | 0xffff;                                           // 0x0010a3f0: ori $v0, $v0, 0xffff
    v0 = a2 & v0;                                               // 0x0010a3f4: and $v0, $a2, $v0
    v0 = v0 | v1;                                               // 0x0010a3f8: or $v0, $v0, $v1
    /* move to FPU: $v0, $f12 */                                // 0x0010a3fc: mtc1 $v0, $f12
    goto label_0x10a440;                                        // 0x0010a400: b 0x10a440
    /* FPU: mov.s $f0, $f12 */                                  // 0x0010a404: mov.s $f0, $f12
label_0x10a408:
    v0 = (v0 < a0) ? 1 : 0;                                     // 0x0010a408: slt $v0, $v0, $a0
    if (v0 == 0) goto label_0x10a428;                           // 0x0010a40c: beqz $v0, 0x10a428
    /* FPU: mov.s $f13, $f12 */                                 // 0x0010a410: mov.s $f13, $f12
    at = 0x7149 << 16;                                          // 0x0010a414: lui $at, 0x7149
    at = at | 0xf2c9;                                           // 0x0010a418: ori $at, $at, 0xf2c9
    /* move to FPU: $at, $f20 */                                // 0x0010a41c: mtc1 $at, $f20
    goto label_0x10a434;                                        // 0x0010a420: b 0x10a434
    /* nop */                                                   // 0x0010a424: nop 
label_0x10a428:
    at = 0xda2 << 16;                                           // 0x0010a428: lui $at, 0xda2
    at = at | 0x425f;                                           // 0x0010a42c: ori $at, $at, 0x425f
    /* move to FPU: $at, $f20 */                                // 0x0010a430: mtc1 $at, $f20
label_0x10a434:
    func_0010a2b8();  // 10a2b8                                // 0x0010a434: jal 0x10a2b8
    /* FPU: mov.s $f12, $f20 */                                 // 0x0010a438: mov.s $f12, $f20
    /* FPU: mul.s $f0, $f0, $f20 */                             // 0x0010a43c: mul.s $f0, $f0, $f20
label_0x10a440:
    FPU_F20 = *(float*)((sp) + 8);  // Load float               // 0x0010a444: lwc1 $f20, 8($sp)
    return;                                                     // 0x0010a448: jr $ra
    sp = sp + 0x10;                                             // 0x0010a44c: addiu $sp, $sp, 0x10
}