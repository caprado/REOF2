void func_001207a8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_10, local_14;
    
    sp = sp + -0x40;                                            // 0x001207a8: addiu $sp, $sp, -0x40
    /* FPU: mov.s $f1, $f12 */                                  // 0x001207ac: mov.s $f1, $f12
    /* move from FPU: $s2, $f1 */                               // 0x001207c0: mfc1 $s2, $f1
    v1 = 0x7fff << 16;                                          // 0x001207c4: lui $v1, 0x7fff
    v0 = 0x3f49 << 16;                                          // 0x001207c8: lui $v0, 0x3f49
    v1 = v1 | 0xffff;                                           // 0x001207cc: ori $v1, $v1, 0xffff
    v0 = v0 | 0xfd8;                                            // 0x001207d0: ori $v0, $v0, 0xfd8
    s0 = s2 & v1;                                               // 0x001207d4: and $s0, $s2, $v1
    v0 = (v0 < s0) ? 1 : 0;                                     // 0x001207d8: slt $v0, $v0, $s0
    if (v0 != 0) goto label_0x1207f8;                           // 0x001207dc: bnez $v0, 0x1207f8
    *(float*)(s1) = FPU_F1;  // Store float                     // 0x001207e4: swc1 $f1, 0($s1)
    goto label_0x120b40;                                        // 0x001207ec: b 0x120b40
    *(uint32_t*)((s1) + 4) = 0;                                 // 0x001207f0: sw $zero, 4($s1)
    /* nop */                                                   // 0x001207f4: nop 
label_0x1207f8:
    v0 = 0x4016 << 16;                                          // 0x001207f8: lui $v0, 0x4016
    v0 = v0 | 0xcbe3;                                           // 0x001207fc: ori $v0, $v0, 0xcbe3
    v0 = (v0 < s0) ? 1 : 0;                                     // 0x00120800: slt $v0, $v0, $s0
    if (v0 != 0) goto label_0x1208f0;                           // 0x00120804: bnez $v0, 0x1208f0
    v0 = 0x4349 << 16;                                          // 0x00120808: lui $v0, 0x4349
    if (s2 <= 0) goto label_0x120880;                           // 0x0012080c: blez $s2, 0x120880
    v1 = -0x10;                                                 // 0x00120810: addiu $v1, $zero, -0x10
    at = 0x3fc9 << 16;                                          // 0x00120814: lui $at, 0x3fc9
    at = at | 0xf80;                                            // 0x00120818: ori $at, $at, 0xf80
    /* move to FPU: $at, $f0 */                                 // 0x0012081c: mtc1 $at, $f0
    v0 = 0x3fc9 << 16;                                          // 0x00120820: lui $v0, 0x3fc9
    v1 = s0 & v1;                                               // 0x00120824: and $v1, $s0, $v1
    v0 = v0 | 0xfd0;                                            // 0x00120828: ori $v0, $v0, 0xfd0
    if (v1 == v0) goto label_0x120848;                          // 0x0012082c: beq $v1, $v0, 0x120848
    /* FPU: sub.s $f12, $f1, $f0 */                             // 0x00120830: sub.s $f12, $f1, $f0
    at = 0x3735 << 16;                                          // 0x00120834: lui $at, 0x3735
    at = at | 0x4442;                                           // 0x00120838: ori $at, $at, 0x4442
    /* move to FPU: $at, $f2 */                                 // 0x0012083c: mtc1 $at, $f2
    goto label_0x120868;                                        // 0x00120840: b 0x120868
    /* FPU: sub.s $f1, $f12, $f2 */                             // 0x00120844: sub.s $f1, $f12, $f2
label_0x120848:
    at = 0x3735 << 16;                                          // 0x00120848: lui $at, 0x3735
    at = at | 0x43ff;                                           // 0x0012084c: ori $at, $at, 0x43ff
    /* move to FPU: $at, $f0 */                                 // 0x00120850: mtc1 $at, $f0
    at = 0x2e85 << 16;                                          // 0x00120854: lui $at, 0x2e85
    at = at | 0xa308;                                           // 0x00120858: ori $at, $at, 0xa308
    /* move to FPU: $at, $f2 */                                 // 0x0012085c: mtc1 $at, $f2
    /* FPU: sub.s $f12, $f12, $f0 */                            // 0x00120860: sub.s $f12, $f12, $f0
    /* FPU: sub.s $f1, $f12, $f2 */                             // 0x00120864: sub.s $f1, $f12, $f2
label_0x120868:
    /* FPU: sub.s $f0, $f12, $f1 */                             // 0x00120868: sub.s $f0, $f12, $f1
    *(float*)(s1) = FPU_F1;  // Store float                     // 0x0012086c: swc1 $f1, 0($s1)
    /* FPU: sub.s $f0, $f0, $f2 */                              // 0x00120870: sub.s $f0, $f0, $f2
    *(float*)((s1) + 4) = FPU_F0;  // Store float               // 0x00120874: swc1 $f0, 4($s1)
    goto label_0x120b40;                                        // 0x00120878: b 0x120b40
    v0 = 1;                                                     // 0x0012087c: addiu $v0, $zero, 1
label_0x120880:
    at = 0x3fc9 << 16;                                          // 0x00120880: lui $at, 0x3fc9
    at = at | 0xf80;                                            // 0x00120884: ori $at, $at, 0xf80
    /* move to FPU: $at, $f0 */                                 // 0x00120888: mtc1 $at, $f0
    v0 = 0x3fc9 << 16;                                          // 0x0012088c: lui $v0, 0x3fc9
    v1 = s0 & v1;                                               // 0x00120890: and $v1, $s0, $v1
    v0 = v0 | 0xfd0;                                            // 0x00120894: ori $v0, $v0, 0xfd0
    if (v1 == v0) goto label_0x1208b8;                          // 0x00120898: beq $v1, $v0, 0x1208b8
    /* FPU: add.s $f12, $f1, $f0 */                             // 0x0012089c: add.s $f12, $f1, $f0
    at = 0x3735 << 16;                                          // 0x001208a0: lui $at, 0x3735
    at = at | 0x4442;                                           // 0x001208a4: ori $at, $at, 0x4442
    /* move to FPU: $at, $f2 */                                 // 0x001208a8: mtc1 $at, $f2
    goto label_0x1208d8;                                        // 0x001208ac: b 0x1208d8
    /* FPU: add.s $f1, $f12, $f2 */                             // 0x001208b0: add.s $f1, $f12, $f2
    /* nop */                                                   // 0x001208b4: nop 
label_0x1208b8:
    at = 0x3735 << 16;                                          // 0x001208b8: lui $at, 0x3735
    at = at | 0x43ff;                                           // 0x001208bc: ori $at, $at, 0x43ff
    /* move to FPU: $at, $f0 */                                 // 0x001208c0: mtc1 $at, $f0
    at = 0x2e85 << 16;                                          // 0x001208c4: lui $at, 0x2e85
    at = at | 0xa308;                                           // 0x001208c8: ori $at, $at, 0xa308
    /* move to FPU: $at, $f2 */                                 // 0x001208cc: mtc1 $at, $f2
    /* FPU: add.s $f12, $f12, $f0 */                            // 0x001208d0: add.s $f12, $f12, $f0
    /* FPU: add.s $f1, $f12, $f2 */                             // 0x001208d4: add.s $f1, $f12, $f2
label_0x1208d8:
    /* FPU: sub.s $f0, $f12, $f1 */                             // 0x001208d8: sub.s $f0, $f12, $f1
    *(float*)(s1) = FPU_F1;  // Store float                     // 0x001208dc: swc1 $f1, 0($s1)
    /* FPU: add.s $f0, $f0, $f2 */                              // 0x001208e0: add.s $f0, $f0, $f2
    *(float*)((s1) + 4) = FPU_F0;  // Store float               // 0x001208e4: swc1 $f0, 4($s1)
    goto label_0x120b40;                                        // 0x001208e8: b 0x120b40
    v0 = -1;                                                    // 0x001208ec: addiu $v0, $zero, -1
label_0x1208f0:
    v0 = v0 | 0xf80;                                            // 0x001208f0: ori $v0, $v0, 0xf80
    v0 = (v0 < s0) ? 1 : 0;                                     // 0x001208f4: slt $v0, $v0, $s0
    /* bnezl $v0, 0x120a80 */                                   // 0x001208f8: bnezl $v0, 0x120a80
    v0 = s0 >> 0x17;                                            // 0x001208fc: sra $v0, $s0, 0x17
    func_00122190();  // 0x122168                                // 0x00120900: jal 0x122168
    /* nop */                                                   // 0x00120904: nop 
    at = 0x3f00 << 16;                                          // 0x00120908: lui $at, 0x3f00
    /* move to FPU: $at, $f2 */                                 // 0x0012090c: mtc1 $at, $f2
    /* FPU: mov.s $f5, $f0 */                                   // 0x00120910: mov.s $f5, $f0
    at = 0x3f22 << 16;                                          // 0x00120914: lui $at, 0x3f22
    at = at | 0xf984;                                           // 0x00120918: ori $at, $at, 0xf984
    /* move to FPU: $at, $f0 */                                 // 0x0012091c: mtc1 $at, $f0
    at = 0x3fc9 << 16;                                          // 0x00120920: lui $at, 0x3fc9
    at = at | 0xf80;                                            // 0x00120924: ori $at, $at, 0xf80
    /* move to FPU: $at, $f1 */                                 // 0x00120928: mtc1 $at, $f1
    /* FPU: mul.s $f0, $f5, $f0 */                              // 0x0012092c: mul.s $f0, $f5, $f0
    at = 0x3735 << 16;                                          // 0x00120930: lui $at, 0x3735
    at = at | 0x4442;                                           // 0x00120934: ori $at, $at, 0x4442
    /* move to FPU: $at, $f3 */                                 // 0x00120938: mtc1 $at, $f3
    /* FPU: add.s $f0, $f0, $f2 */                              // 0x0012093c: add.s $f0, $f0, $f2
    /* FPU: cvt.w.s $f2, $f0 */                                 // 0x00120940: cvt.w.s $f2, $f0
    /* move from FPU: $a1, $f2 */                               // 0x00120944: mfc1 $a1, $f2
    /* move to FPU: $a1, $f6 */                                 // 0x00120948: mtc1 $a1, $f6
    /* FPU: cvt.s.w $f6, $f6 */                                 // 0x0012094c: cvt.s.w $f6, $f6
    v0 = (a1 < 0x20) ? 1 : 0;                                   // 0x00120950: slti $v0, $a1, 0x20
    /* FPU: mul.s $f1, $f6, $f1 */                              // 0x00120954: mul.s $f1, $f6, $f1
    /* FPU: mul.s $f3, $f6, $f3 */                              // 0x00120958: mul.s $f3, $f6, $f3
    if (v0 == 0) goto label_0x120990;                           // 0x0012095c: beqz $v0, 0x120990
    /* FPU: sub.s $f4, $f5, $f1 */                              // 0x00120960: sub.s $f4, $f5, $f1
    v0 = a1 << 2;                                               // 0x00120964: sll $v0, $a1, 2
    v1 = -0x100;                                                // 0x00120968: addiu $v1, $zero, -0x100
    a0 = 0x22 << 16;                                            // 0x0012096c: lui $a0, 0x22
    a0 = a0 + v0;                                               // 0x00120970: addu $a0, $a0, $v0
    a0 = g_0022197c;  // Global at 0x0022197c                   // 0x00120974: lw $a0, 0x197c($a0)
    v1 = s0 & v1;                                               // 0x00120978: and $v1, $s0, $v1
    if (v1 == a0) goto label_0x120994;                          // 0x0012097c: beq $v1, $a0, 0x120994
    /* FPU: sub.s $f0, $f4, $f3 */                              // 0x00120980: sub.s $f0, $f4, $f3
    goto label_0x120a54;                                        // 0x00120984: b 0x120a54
    *(float*)(s1) = FPU_F0;  // Store float                     // 0x00120988: swc1 $f0, 0($s1)
    /* nop */                                                   // 0x0012098c: nop 
label_0x120990:
    /* FPU: sub.s $f0, $f4, $f3 */                              // 0x00120990: sub.s $f0, $f4, $f3
label_0x120994:
    a0 = s0 >> 0x17;                                            // 0x00120994: sra $a0, $s0, 0x17
    *(float*)(s1) = FPU_F0;  // Store float                     // 0x00120998: swc1 $f0, 0($s1)
    *(float*)((sp) + 0x10) = FPU_F0;  // Store float            // 0x0012099c: swc1 $f0, 0x10($sp)
    v1 = local_10;                                              // 0x001209a0: lw $v1, 0x10($sp)
    v0 = (unsigned)v1 >> 0x17;                                  // 0x001209a4: srl $v0, $v1, 0x17
    v0 = v0 & 0xff;                                             // 0x001209a8: andi $v0, $v0, 0xff
    v1 = a0 - v0;                                               // 0x001209ac: subu $v1, $a0, $v0
    v1 = (v1 < 9) ? 1 : 0;                                      // 0x001209b0: slti $v1, $v1, 9
    /* bnezl $v1, 0x120a58 */                                   // 0x001209b4: bnezl $v1, 0x120a58
    FPU_F1 = *(float*)(s1);  // Load float                      // 0x001209b8: lwc1 $f1, 0($s1)
    at = 0x3735 << 16;                                          // 0x001209bc: lui $at, 0x3735
    at = at | 0x43ff;                                           // 0x001209c0: ori $at, $at, 0x43ff
    /* move to FPU: $at, $f0 */                                 // 0x001209c4: mtc1 $at, $f0
    /* FPU: mov.s $f5, $f4 */                                   // 0x001209c8: mov.s $f5, $f4
    at = 0x2e85 << 16;                                          // 0x001209cc: lui $at, 0x2e85
    at = at | 0xa308;                                           // 0x001209d0: ori $at, $at, 0xa308
    /* move to FPU: $at, $f2 */                                 // 0x001209d4: mtc1 $at, $f2
    /* FPU: mul.s $f3, $f6, $f0 */                              // 0x001209d8: mul.s $f3, $f6, $f0
    /* FPU: mul.s $f2, $f6, $f2 */                              // 0x001209dc: mul.s $f2, $f6, $f2
    /* FPU: sub.s $f4, $f4, $f3 */                              // 0x001209e0: sub.s $f4, $f4, $f3
    /* FPU: sub.s $f0, $f5, $f4 */                              // 0x001209e4: sub.s $f0, $f5, $f4
    /* FPU: sub.s $f0, $f0, $f3 */                              // 0x001209e8: sub.s $f0, $f0, $f3
    /* FPU: sub.s $f3, $f2, $f0 */                              // 0x001209ec: sub.s $f3, $f2, $f0
    /* FPU: sub.s $f1, $f4, $f3 */                              // 0x001209f0: sub.s $f1, $f4, $f3
    *(float*)(s1) = FPU_F1;  // Store float                     // 0x001209f4: swc1 $f1, 0($s1)
    *(float*)((sp) + 0x14) = FPU_F1;  // Store float            // 0x001209f8: swc1 $f1, 0x14($sp)
    v1 = local_14;                                              // 0x001209fc: lw $v1, 0x14($sp)
    v0 = (unsigned)v1 >> 0x17;                                  // 0x00120a00: srl $v0, $v1, 0x17
    v0 = v0 & 0xff;                                             // 0x00120a04: andi $v0, $v0, 0xff
    v1 = a0 - v0;                                               // 0x00120a08: subu $v1, $a0, $v0
    v1 = (v1 < 0x1a) ? 1 : 0;                                   // 0x00120a0c: slti $v1, $v1, 0x1a
    /* bnezl $v1, 0x120a58 */                                   // 0x00120a10: bnezl $v1, 0x120a58
    FPU_F1 = *(float*)(s1);  // Load float                      // 0x00120a14: lwc1 $f1, 0($s1)
    at = 0x2e85 << 16;                                          // 0x00120a18: lui $at, 0x2e85
    at = at | 0xa300;                                           // 0x00120a1c: ori $at, $at, 0xa300
    /* move to FPU: $at, $f0 */                                 // 0x00120a20: mtc1 $at, $f0
    /* FPU: mov.s $f5, $f4 */                                   // 0x00120a24: mov.s $f5, $f4
    at = 0x248d << 16;                                          // 0x00120a28: lui $at, 0x248d
    at = at | 0x3131;                                           // 0x00120a2c: ori $at, $at, 0x3131
    /* move to FPU: $at, $f2 */                                 // 0x00120a30: mtc1 $at, $f2
    /* FPU: mul.s $f3, $f6, $f0 */                              // 0x00120a34: mul.s $f3, $f6, $f0
    /* FPU: mul.s $f2, $f6, $f2 */                              // 0x00120a38: mul.s $f2, $f6, $f2
    /* FPU: sub.s $f4, $f4, $f3 */                              // 0x00120a3c: sub.s $f4, $f4, $f3
    /* FPU: sub.s $f0, $f5, $f4 */                              // 0x00120a40: sub.s $f0, $f5, $f4
    /* FPU: sub.s $f0, $f0, $f3 */                              // 0x00120a44: sub.s $f0, $f0, $f3
    /* FPU: sub.s $f3, $f2, $f0 */                              // 0x00120a48: sub.s $f3, $f2, $f0
    /* FPU: sub.s $f1, $f4, $f3 */                              // 0x00120a4c: sub.s $f1, $f4, $f3
    *(float*)(s1) = FPU_F1;  // Store float                     // 0x00120a50: swc1 $f1, 0($s1)
label_0x120a54:
    FPU_F1 = *(float*)(s1);  // Load float                      // 0x00120a54: lwc1 $f1, 0($s1)
    /* FPU: sub.s $f0, $f4, $f1 */                              // 0x00120a58: sub.s $f0, $f4, $f1
    /* FPU: sub.s $f0, $f0, $f3 */                              // 0x00120a5c: sub.s $f0, $f0, $f3
    if (s2 >= 0) goto label_0x120a78;                           // 0x00120a60: bgez $s2, 0x120a78
    *(float*)((s1) + 4) = FPU_F0;  // Store float               // 0x00120a64: swc1 $f0, 4($s1)
    /* FPU: neg.s $f1, $f1 */                                   // 0x00120a68: neg.s $f1, $f1
    goto label_0x120b34;                                        // 0x00120a6c: b 0x120b34
    v0 = -a1;                                                   // 0x00120a70: negu $v0, $a1
    /* nop */                                                   // 0x00120a74: nop 
label_0x120a78:
    goto label_0x120b40;                                        // 0x00120a78: b 0x120b40
    a2 = v0 + -0x86;                                            // 0x00120a80: addiu $a2, $v0, -0x86
    v1 = a2 << 0x17;                                            // 0x00120a84: sll $v1, $a2, 0x17
    s0 = s0 - v1;                                               // 0x00120a88: subu $s0, $s0, $v1
    /* move to FPU: $s0, $f12 */                                // 0x00120a8c: mtc1 $s0, $f12
    at = 0x4380 << 16;                                          // 0x00120a90: lui $at, 0x4380
    /* move to FPU: $at, $f2 */                                 // 0x00120a94: mtc1 $at, $f2
    v1 = 1;                                                     // 0x00120a98: addiu $v1, $zero, 1
label_0x120aa0:
    /* FPU: cvt.w.s $f0, $f12 */                                // 0x00120aa0: cvt.w.s $f0, $f12
    /* move from FPU: $v0, $f0 */                               // 0x00120aa4: mfc1 $v0, $f0
    v1 = v1 + -1;                                               // 0x00120aa8: addiu $v1, $v1, -1
    /* move to FPU: $v0, $f0 */                                 // 0x00120aac: mtc1 $v0, $f0
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x00120ab0: cvt.s.w $f0, $f0
    /* FPU: sub.s $f1, $f12, $f0 */                             // 0x00120ab4: sub.s $f1, $f12, $f0
    *(float*)(a0) = FPU_F0;  // Store float                     // 0x00120ab8: swc1 $f0, 0($a0)
    a0 = a0 + 4;                                                // 0x00120abc: addiu $a0, $a0, 4
    if (v1 >= 0) goto label_0x120aa0;                           // 0x00120ac0: bgez $v1, 0x120aa0
    /* FPU: mul.s $f12, $f1, $f2 */                             // 0x00120ac4: mul.s $f12, $f1, $f2
    /* move to FPU: $zero, $f1 */                               // 0x00120ac8: mtc1 $zero, $f1
    /* FPU: mov.s $f0, $f12 */                                  // 0x00120acc: mov.s $f0, $f12
    *(float*)((sp) + 8) = FPU_F12;  // Store float              // 0x00120ad0: swc1 $f12, 8($sp)
    /* FPU: c.eq.s $f0, $f1 */                                  // 0x00120ad4: c.eq.s $f0, $f1
    /* bc1f 0x120b04 */                                         // 0x00120ad8: bc1f 0x120b04
    a3 = 3;                                                     // 0x00120adc: addiu $a3, $zero, 3
    v0 = sp + 8;                                                // 0x00120ae0: addiu $v0, $sp, 8
    /* nop */                                                   // 0x00120ae4: nop 
    v0 = v0 + -4;                                               // 0x00120ae8: addiu $v0, $v0, -4
    FPU_F0 = *(float*)(v0);  // Load float                      // 0x00120aec: lwc1 $f0, 0($v0)
    /* FPU: c.eq.s $f0, $f1 */                                  // 0x00120af0: c.eq.s $f0, $f1
    /* nop */                                                   // 0x00120af4: nop 
    /* nop */                                                   // 0x00120af8: nop 
    /* bc1t 0x120ae8 */                                         // 0x00120afc: bc1t 0x120ae8
    a3 = a3 + -1;                                               // 0x00120b00: addiu $a3, $a3, -1
    t1 = 0x22 << 16;                                            // 0x00120b04: lui $t1, 0x22
    t1 = t1 + 0x1668;                                           // 0x00120b0c: addiu $t1, $t1, 0x1668
    func_001215e0();  // 0x120d78                                // 0x00120b14: jal 0x120d78
    t0 = 2;                                                     // 0x00120b18: addiu $t0, $zero, 2
    if (s2 >= 0) goto label_0x120b40;                           // 0x00120b1c: bgez $s2, 0x120b40
    FPU_F1 = *(float*)(s1);  // Load float                      // 0x00120b24: lwc1 $f1, 0($s1)
    v0 = -a1;                                                   // 0x00120b28: negu $v0, $a1
    FPU_F0 = *(float*)((s1) + 4);  // Load float                // 0x00120b2c: lwc1 $f0, 4($s1)
    /* FPU: neg.s $f1, $f1 */                                   // 0x00120b30: neg.s $f1, $f1
label_0x120b34:
    /* FPU: neg.s $f0, $f0 */                                   // 0x00120b34: neg.s $f0, $f0
    *(float*)(s1) = FPU_F1;  // Store float                     // 0x00120b38: swc1 $f1, 0($s1)
    *(float*)((s1) + 4) = FPU_F0;  // Store float               // 0x00120b3c: swc1 $f0, 4($s1)
label_0x120b40:
    return;                                                     // 0x00120b50: jr $ra
    sp = sp + 0x40;                                             // 0x00120b54: addiu $sp, $sp, 0x40
}