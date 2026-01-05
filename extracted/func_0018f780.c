void func_0018f780() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x90;                                            // 0x0018f780: addiu $sp, $sp, -0x90
    /* FPU: dps.w.ph $ac0, $sp, $s5 */                          // 0x0018f788: dps.w.ph $ac0, $sp, $s5
    /* FPU: subu.qb $zero, $sp, $s3 */                          // 0x0018f794: subu.qb $zero, $sp, $s3
    /* FPU: dpa.w.ph $ac0, $sp, $s1 */                          // 0x0018f7a4: dpa.w.ph $ac0, $sp, $s1
    *(float*)((sp) + 0x10) = FPU_F24;  // Store float           // 0x0018f7b4: swc1 $f24, 0x10($sp)
    s0 = a3 >> 1;                                               // 0x0018f7b8: sra $s0, $a3, 1
    *(float*)((sp) + 0xc) = FPU_F23;  // Store float            // 0x0018f7bc: swc1 $f23, 0xc($sp)
    *(float*)((sp) + 8) = FPU_F22;  // Store float              // 0x0018f7c0: swc1 $f22, 8($sp)
    *(float*)((sp) + 4) = FPU_F21;  // Store float              // 0x0018f7c4: swc1 $f21, 4($sp)
    *(float*)(sp) = FPU_F20;  // Store float                    // 0x0018f7c8: swc1 $f20, 0($sp)
    /* FPU: mov.s $f23, $f12 */                                 // 0x0018f7cc: mov.s $f23, $f12
    if (s2 >= 0) goto label_0x18f7e0;                           // 0x0018f7d0: bgez $s2, 0x18f7e0
    /* FPU: mov.s $f22, $f13 */                                 // 0x0018f7d4: mov.s $f22, $f13
    v0 = s2 + 1;                                                // 0x0018f7d8: addiu $v0, $s2, 1
    s0 = v0 >> 1;                                               // 0x0018f7dc: sra $s0, $v0, 1
label_0x18f7e0:
    /* move to FPU: $s0, $f0 */                                 // 0x0018f7e0: mtc1 $s0, $f0
    v0 = s1 >> 1;                                               // 0x0018f7e4: sra $v0, $s1, 1
    if (s1 >= 0) goto label_0x18f7f8;                           // 0x0018f7e8: bgez $s1, 0x18f7f8
    /* FPU: cvt.s.w $f24, $f0 */                                // 0x0018f7ec: cvt.s.w $f24, $f0
    v0 = s1 + 1;                                                // 0x0018f7f0: addiu $v0, $s1, 1
    v0 = v0 >> 1;                                               // 0x0018f7f4: sra $v0, $v0, 1
label_0x18f7f8:
    /* move to FPU: $v0, $f0 */                                 // 0x0018f7f8: mtc1 $v0, $f0
    a0 = 0x28 << 16;                                            // 0x0018f7fc: lui $a0, 0x28
    a0 = a0 + 0x53e0;                                           // 0x0018f800: addiu $a0, $a0, 0x53e0
    func_0018fba0();  // 18fba0                                // 0x0018f804: jal 0x18fba0
    /* FPU: cvt.s.w $f20, $f0 */                                // 0x0018f808: cvt.s.w $f20, $f0
    at = 0x28 << 16;                                            // 0x0018f80c: lui $at, 0x28
    v0 = 0x3f80 << 16;                                          // 0x0018f810: lui $v0, 0x3f80
    *(float*)((at) + 0x53e0) = FPU_F24;  // Store float         // 0x0018f814: swc1 $f24, 0x53e0($at)
    /* FPU: neg.s $f0, $f20 */                                  // 0x0018f818: neg.s $f0, $f20
    at = 0x28 << 16;                                            // 0x0018f81c: lui $at, 0x28
    *(float*)((at) + 0x53f4) = FPU_F0;  // Store float          // 0x0018f820: swc1 $f0, 0x53f4($at)
    at = 0x28 << 16;                                            // 0x0018f824: lui $at, 0x28
    *(float*)((at) + 0x5418) = FPU_F23;  // Store float         // 0x0018f828: swc1 $f23, 0x5418($at)
    at = 0x28 << 16;                                            // 0x0018f82c: lui $at, 0x28
    /* move to FPU: $s4, $f1 */                                 // 0x0018f830: mtc1 $s4, $f1
    g_0028541c = v0;  // Global at 0x0028541c                   // 0x0018f834: sw $v0, 0x541c($at)
    at = 0x29 << 16;                                            // 0x0018f838: lui $at, 0x29
    /* move to FPU: $s3, $f0 */                                 // 0x0018f83c: mtc1 $s3, $f0
    v0 = g_0028ff74;  // Global at 0x0028ff74                   // 0x0018f840: lw $v0, -0x8c($at)
    /* FPU: cvt.s.w $f1, $f1 */                                 // 0x0018f844: cvt.s.w $f1, $f1
    at = 0x28 << 16;                                            // 0x0018f848: lui $at, 0x28
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x0018f84c: cvt.s.w $f0, $f0
    /* FPU: sub.s $f21, $f22, $f23 */                           // 0x0018f850: sub.s $f21, $f22, $f23
    *(float*)((at) + 0x5408) = FPU_F21;  // Store float         // 0x0018f854: swc1 $f21, 0x5408($at)
    /* FPU: add.s $f1, $f1, $f24 */                             // 0x0018f858: add.s $f1, $f1, $f24
    at = 0x28 << 16;                                            // 0x0018f85c: lui $at, 0x28
    *(float*)((at) + 0x5410) = FPU_F1;  // Store float          // 0x0018f860: swc1 $f1, 0x5410($at)
    /* FPU: add.s $f0, $f0, $f20 */                             // 0x0018f864: add.s $f0, $f0, $f20
    at = 0x28 << 16;                                            // 0x0018f868: lui $at, 0x28
    if (v0 != 0) goto label_0x18f89c;                           // 0x0018f86c: bnez $v0, 0x18f89c
    *(float*)((at) + 0x5414) = FPU_F0;  // Store float          // 0x0018f870: swc1 $f0, 0x5414($at)
    if (s3 >= 0) goto label_0x18f884;                           // 0x0018f874: bgez $s3, 0x18f884
    v0 = s3 >> 1;                                               // 0x0018f878: sra $v0, $s3, 1
    v0 = s3 + 1;                                                // 0x0018f87c: addiu $v0, $s3, 1
    v0 = v0 >> 1;                                               // 0x0018f880: sra $v0, $v0, 1
label_0x18f884:
    if (s1 >= 0) goto label_0x18f898;                           // 0x0018f888: bgez $s1, 0x18f898
    v0 = s1 >> 1;                                               // 0x0018f88c: sra $v0, $s1, 1
    v0 = s1 + 1;                                                // 0x0018f890: addiu $v0, $s1, 1
    v0 = v0 >> 1;                                               // 0x0018f894: sra $v0, $v0, 1
label_0x18f898:
label_0x18f89c:
    /* move to FPU: $s0, $f0 */                                 // 0x0018f89c: mtc1 $s0, $f0
    v0 = s1 >> 1;                                               // 0x0018f8a0: sra $v0, $s1, 1
    if (s1 >= 0) goto label_0x18f8b4;                           // 0x0018f8a4: bgez $s1, 0x18f8b4
    /* FPU: cvt.s.w $f24, $f0 */                                // 0x0018f8a8: cvt.s.w $f24, $f0
    v0 = s1 + 1;                                                // 0x0018f8ac: addiu $v0, $s1, 1
    v0 = v0 >> 1;                                               // 0x0018f8b0: sra $v0, $v0, 1
label_0x18f8b4:
    /* move to FPU: $v0, $f0 */                                 // 0x0018f8b4: mtc1 $v0, $f0
    func_0018fba0();  // 18fba0                                // 0x0018f8bc: jal 0x18fba0
    /* FPU: cvt.s.w $f20, $f0 */                                // 0x0018f8c0: cvt.s.w $f20, $f0
    /* move to FPU: $s1, $f2 */                                 // 0x0018f8c4: mtc1 $s1, $f2
    a0 = 0x3f00 << 16;                                          // 0x0018f8c8: lui $a0, 0x3f00
    /* move to FPU: $s4, $f1 */                                 // 0x0018f8cc: mtc1 $s4, $f1
    v0 = 0x4500 << 16;                                          // 0x0018f8d0: lui $v0, 0x4500
    /* move to FPU: $s3, $f0 */                                 // 0x0018f8d4: mtc1 $s3, $f0
    a1 = 0x3f80 << 16;                                          // 0x0018f8d8: lui $a1, 0x3f80
    /* FPU: cvt.s.w $f5, $f2 */                                 // 0x0018f8dc: cvt.s.w $f5, $f2
    at = 0x29 << 16;                                            // 0x0018f8e0: lui $at, 0x29
    v1 = 0x800;                                                 // 0x0018f8e4: addiu $v1, $zero, 0x800
    /* FPU: cvt.s.w $f1, $f1 */                                 // 0x0018f8e8: cvt.s.w $f1, $f1
    /* move to FPU: $s2, $f3 */                                 // 0x0018f8ec: mtc1 $s2, $f3
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x0018f8f0: cvt.s.w $f0, $f0
    *(float*)(s5) = FPU_F24;  // Store float                    // 0x0018f8f4: swc1 $f24, 0($s5)
    /* FPU: neg.s $f2, $f20 */                                  // 0x0018f8f8: neg.s $f2, $f20
    *(float*)((s5) + 0x14) = FPU_F2;  // Store float            // 0x0018f8fc: swc1 $f2, 0x14($s5)
    /* FPU: add.s $f7, $f1, $f24 */                             // 0x0018f900: add.s $f7, $f1, $f24
    *(float*)((s5) + 0x28) = FPU_F21;  // Store float           // 0x0018f904: swc1 $f21, 0x28($s5)
    /* FPU: add.s $f2, $f0, $f20 */                             // 0x0018f908: add.s $f2, $f0, $f20
    *(float*)((s5) + 0x30) = FPU_F7;  // Store float            // 0x0018f90c: swc1 $f7, 0x30($s5)
    *(float*)((s5) + 0x34) = FPU_F2;  // Store float            // 0x0018f910: swc1 $f2, 0x34($s5)
    *(uint32_t*)((s5) + 0x3c) = a1;                             // 0x0018f914: sw $a1, 0x3c($s5)
    /* FPU: cvt.s.w $f6, $f3 */                                 // 0x0018f918: cvt.s.w $f6, $f3
    FPU_F7 = *(float*)((at) + -0x4c);  // Load float            // 0x0018f91c: lwc1 $f7, -0x4c($at)
    /* move to FPU: $a0, $f8 */                                 // 0x0018f920: mtc1 $a0, $f8
    FPU_F3 = *(float*)((s5) + 0x28);  // Load float             // 0x0018f924: lwc1 $f3, 0x28($s5)
    /* move to FPU: $v0, $f4 */                                 // 0x0018f928: mtc1 $v0, $f4
    /* move to FPU: $zero, $f2 */                               // 0x0018f92c: mtc1 $zero, $f2
    /* FPU: neg.s $f7, $f7 */                                   // 0x0018f930: neg.s $f7, $f7
    at = 0x29 << 16;                                            // 0x0018f934: lui $at, 0x29
    /* FPU: mul.s $f7, $f8, $f7 */                              // 0x0018f938: mul.s $f7, $f8, $f7
    /* FPU: mul.s $f3, $f3, $f7 */                              // 0x0018f93c: mul.s $f3, $f3, $f7
    *(float*)((s5) + 0x28) = FPU_F3;  // Store float            // 0x0018f940: swc1 $f3, 0x28($s5)
    v0 = *(int32_t*)((gp) + -0x6448);                           // 0x0018f944: lw $v0, -0x6448($gp)
    FPU_F3 = *(float*)((s5) + 0x30);  // Load float             // 0x0018f948: lwc1 $f3, 0x30($s5)
    v0 = v0 >> 1;                                               // 0x0018f94c: sra $v0, $v0, 1
    v0 = v1 - v0;                                               // 0x0018f950: subu $v0, $v1, $v0
    /* move to FPU: $v0, $f7 */                                 // 0x0018f954: mtc1 $v0, $f7
    /* nop */                                                   // 0x0018f958: nop 
    /* FPU: cvt.s.w $f7, $f7 */                                 // 0x0018f95c: cvt.s.w $f7, $f7
    /* FPU: add.s $f3, $f3, $f7 */                              // 0x0018f960: add.s $f3, $f3, $f7
    *(float*)((s5) + 0x30) = FPU_F3;  // Store float            // 0x0018f964: swc1 $f3, 0x30($s5)
    v0 = *(int32_t*)((gp) + -0x644c);                           // 0x0018f968: lw $v0, -0x644c($gp)
    FPU_F3 = *(float*)((s5) + 0x34);  // Load float             // 0x0018f96c: lwc1 $f3, 0x34($s5)
    v0 = v0 >> 1;                                               // 0x0018f970: sra $v0, $v0, 1
    v0 = v1 - v0;                                               // 0x0018f974: subu $v0, $v1, $v0
    /* move to FPU: $v0, $f7 */                                 // 0x0018f978: mtc1 $v0, $f7
    /* nop */                                                   // 0x0018f97c: nop 
    /* FPU: cvt.s.w $f7, $f7 */                                 // 0x0018f980: cvt.s.w $f7, $f7
    /* FPU: add.s $f3, $f3, $f7 */                              // 0x0018f984: add.s $f3, $f3, $f7
    *(float*)((s5) + 0x34) = FPU_F3;  // Store float            // 0x0018f988: swc1 $f3, 0x34($s5)
    FPU_F3 = *(float*)((at) + -0x4c);  // Load float            // 0x0018f98c: lwc1 $f3, -0x4c($at)
    /* FPU: mul.s $f3, $f8, $f3 */                              // 0x0018f990: mul.s $f3, $f8, $f3
    *(float*)((s5) + 0x38) = FPU_F3;  // Store float            // 0x0018f994: swc1 $f3, 0x38($s5)
    FPU_F3 = *(float*)((s5) + 0x30);  // Load float             // 0x0018f998: lwc1 $f3, 0x30($s5)
    *(float*)((gp) + -0x64b0) = FPU_F3;  // Store float         // 0x0018f99c: swc1 $f3, -0x64b0($gp)
    FPU_F7 = *(float*)((s5) + 0x34);  // Load float             // 0x0018f9a0: lwc1 $f7, 0x34($s5)
    FPU_F3 = *(float*)((gp) + -0x64b0);  // Load float          // 0x0018f9a4: lwc1 $f3, -0x64b0($gp)
    *(float*)((gp) + -0x64b4) = FPU_F7;  // Store float         // 0x0018f9a8: swc1 $f7, -0x64b4($gp)
    /* FPU: sub.s $f3, $f4, $f3 */                              // 0x0018f9ac: sub.s $f3, $f4, $f3
    /* FPU: c.olt.s $f3, $f2 */                                 // 0x0018f9b0: c.olt.s $f3, $f2
    *(float*)((gp) + -0x64a0) = FPU_F1;  // Store float         // 0x0018f9b4: swc1 $f1, -0x64a0($gp)
    *(float*)((gp) + -0x64a4) = FPU_F0;  // Store float         // 0x0018f9b8: swc1 $f0, -0x64a4($gp)
    *(float*)((gp) + -0x64a8) = FPU_F6;  // Store float         // 0x0018f9bc: swc1 $f6, -0x64a8($gp)
    *(float*)((gp) + -0x64ac) = FPU_F5;  // Store float         // 0x0018f9c0: swc1 $f5, -0x64ac($gp)
    /* bc1f 0x18f9e0 */                                         // 0x0018f9c4: bc1f 0x18f9e0
    *(float*)((gp) + -0x64b8) = FPU_F3;  // Store float         // 0x0018f9c8: swc1 $f3, -0x64b8($gp)
    v0 = 0xbf80 << 16;                                          // 0x0018f9cc: lui $v0, 0xbf80
    /* move to FPU: $v0, $f0 */                                 // 0x0018f9d0: mtc1 $v0, $f0
    /* nop */                                                   // 0x0018f9d4: nop 
    /* FPU: mul.s $f0, $f3, $f0 */                              // 0x0018f9d8: mul.s $f0, $f3, $f0
    *(float*)((gp) + -0x64b8) = FPU_F0;  // Store float         // 0x0018f9dc: swc1 $f0, -0x64b8($gp)
    FPU_F1 = *(float*)((gp) + -0x64b4);  // Load float          // 0x0018f9e0: lwc1 $f1, -0x64b4($gp)
    v0 = 0x4500 << 16;                                          // 0x0018f9e4: lui $v0, 0x4500
    /* move to FPU: $v0, $f3 */                                 // 0x0018f9e8: mtc1 $v0, $f3
    FPU_F2 = *(float*)((gp) + -0x64b8);  // Load float          // 0x0018f9ec: lwc1 $f2, -0x64b8($gp)
    /* move to FPU: $zero, $f0 */                               // 0x0018f9f0: mtc1 $zero, $f0
    /* nop */                                                   // 0x0018f9f4: nop 
    /* FPU: sub.s $f1, $f3, $f1 */                              // 0x0018f9f8: sub.s $f1, $f3, $f1
    /* FPU: sub.s $f2, $f3, $f2 */                              // 0x0018f9fc: sub.s $f2, $f3, $f2
    /* FPU: c.olt.s $f1, $f0 */                                 // 0x0018fa00: c.olt.s $f1, $f0
    *(float*)((gp) + -0x64b8) = FPU_F2;  // Store float         // 0x0018fa04: swc1 $f2, -0x64b8($gp)
    /* bc1f 0x18fa24 */                                         // 0x0018fa08: bc1f 0x18fa24
    *(float*)((gp) + -0x64bc) = FPU_F1;  // Store float         // 0x0018fa0c: swc1 $f1, -0x64bc($gp)
    v0 = 0xbf80 << 16;                                          // 0x0018fa10: lui $v0, 0xbf80
    /* move to FPU: $v0, $f0 */                                 // 0x0018fa14: mtc1 $v0, $f0
    /* nop */                                                   // 0x0018fa18: nop 
    /* FPU: mul.s $f0, $f1, $f0 */                              // 0x0018fa1c: mul.s $f0, $f1, $f0
    *(float*)((gp) + -0x64bc) = FPU_F0;  // Store float         // 0x0018fa20: swc1 $f0, -0x64bc($gp)
    FPU_F1 = *(float*)((gp) + -0x64bc);  // Load float          // 0x0018fa24: lwc1 $f1, -0x64bc($gp)
    v0 = 0x4500 << 16;                                          // 0x0018fa28: lui $v0, 0x4500
    /* move to FPU: $v0, $f2 */                                 // 0x0018fa2c: mtc1 $v0, $f2
    FPU_F0 = *(float*)((gp) + -0x64b8);  // Load float          // 0x0018fa34: lwc1 $f0, -0x64b8($gp)
    /* FPU: mov.s $f12, $f23 */                                 // 0x0018fa3c: mov.s $f12, $f23
    /* FPU: sub.s $f1, $f2, $f1 */                              // 0x0018fa40: sub.s $f1, $f2, $f1
    *(float*)((gp) + -0x64bc) = FPU_F1;  // Store float         // 0x0018fa44: swc1 $f1, -0x64bc($gp)
    /* FPU: cvt.w.s $f1, $f0 */                                 // 0x0018fa48: cvt.w.s $f1, $f0
    FPU_F0 = *(float*)((gp) + -0x64bc);  // Load float          // 0x0018fa4c: lwc1 $f0, -0x64bc($gp)
    /* move from FPU: $a2, $f1 */                               // 0x0018fa50: mfc1 $a2, $f1
    /* FPU: cvt.w.s $f0, $f0 */                                 // 0x0018fa54: cvt.w.s $f0, $f0
    /* move from FPU: $a3, $f0 */                               // 0x0018fa58: mfc1 $a3, $f0
    func_0018faa0();  // 18faa0                                // 0x0018fa5c: jal 0x18faa0
    /* FPU: mov.s $f13, $f22 */                                 // 0x0018fa60: mov.s $f13, $f22
    FPU_F24 = *(float*)((sp) + 0x10);  // Load float            // 0x0018fa68: lwc1 $f24, 0x10($sp)
    FPU_F23 = *(float*)((sp) + 0xc);  // Load float             // 0x0018fa70: lwc1 $f23, 0xc($sp)
    /* FPU: ld.b $w1, -0x4c($zero) */                           // 0x0018fa74: ld.b $w1, -0x4c($zero)
    FPU_F22 = *(float*)((sp) + 8);  // Load float               // 0x0018fa78: lwc1 $f22, 8($sp)
    /* FPU: aver_u.h $w1, $w0, $w19 */                          // 0x0018fa7c: aver_u.h $w1, $w0, $w19
    FPU_F21 = *(float*)((sp) + 4);  // Load float               // 0x0018fa80: lwc1 $f21, 4($sp)
    /* FPU: xori.b $w1, $w0, 0xb2 */                            // 0x0018fa84: xori.b $w1, $w0, 0xb2
    FPU_F20 = *(float*)(sp);  // Load float                     // 0x0018fa88: lwc1 $f20, 0($sp)
    /* FPU: ld.b $w0, -0x50($zero) */                           // 0x0018fa90: ld.b $w0, -0x50($zero)
    return;                                                     // 0x0018fa94: jr $ra
    sp = sp + 0x90;                                             // 0x0018fa98: addiu $sp, $sp, 0x90
}