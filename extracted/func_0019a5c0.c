void func_0019a5c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x80;                                            // 0x0019a5c0: addiu $sp, $sp, -0x80
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x0019a5cc: addu.qb $zero, $sp, $s1
    a0 = 0x150;                                                 // 0x0019a5e0: addiu $a0, $zero, 0x150
    func_0018dca0();  // 0x18dc30                                // 0x0019a5e4: jal 0x18dc30
    a1 = 0x10;                                                  // 0x0019a5e8: addiu $a1, $zero, 0x10
    v1 = 0x2000 << 16;                                          // 0x0019a5ec: lui $v1, 0x2000
    t0 = 0x28 << 16;                                            // 0x0019a5f0: lui $t0, 0x28
    a0 = v1 | 0x14;                                             // 0x0019a5f4: ori $a0, $v1, 0x14
    a1 = 0x1300 << 16;                                          // 0x0019a5f8: lui $a1, 0x1300
    *(uint32_t*)(v0) = a0;                                      // 0x0019a5fc: sw $a0, 0($v0)
    v1 = 0x100 << 16;                                           // 0x0019a600: lui $v1, 0x100
    *(uint32_t*)((v0) + 4) = s0;                                // 0x0019a604: sw $s0, 4($v0)
    a2 = v1 | 0x404;                                            // 0x0019a608: ori $a2, $v1, 0x404
    a3 = 0x6c12 << 16;                                          // 0x0019a610: lui $a3, 0x6c12
    *(uint32_t*)((v0) + 0x10) = a1;                             // 0x0019a614: sw $a1, 0x10($v0)
    v1 = 0x7000 << 16;                                          // 0x0019a618: lui $v1, 0x7000
    *(uint32_t*)((v0) + 0x14) = 0;                              // 0x0019a61c: sw $zero, 0x14($v0)
    at = 0x28 << 16;                                            // 0x0019a620: lui $at, 0x28
    *(uint32_t*)((v0) + 0x18) = a2;                             // 0x0019a624: sw $a2, 0x18($v0)
    a0 = v0 + 0x40;                                             // 0x0019a628: addiu $a0, $v0, 0x40
    *(uint32_t*)((v0) + 0x1c) = a3;                             // 0x0019a62c: sw $a3, 0x1c($v0)
    a2 = v1 | 0x3700;                                           // 0x0019a630: ori $a2, $v1, 0x3700
    a3 = v1 | 0x3f40;                                           // 0x0019a634: ori $a3, $v1, 0x3f40
    a1 = sp + 0x40;                                             // 0x0019a638: addiu $a1, $sp, 0x40
    v1 = *(int32_t*)((s2) + 0x4c);                              // 0x0019a63c: lw $v1, 0x4c($s2)
    FPU_F1 = *(float*)((at) + 0x5470);  // Load float           // 0x0019a640: lwc1 $f1, 0x5470($at)
    t0 = t0 + 0x5360;                                           // 0x0019a644: addiu $t0, $t0, 0x5360
    FPU_F0 = *(float*)((v1) + 0x24);  // Load float             // 0x0019a648: lwc1 $f0, 0x24($v1)
    at = 0x28 << 16;                                            // 0x0019a64c: lui $at, 0x28
    /* FPU: mul.s $f0, $f1, $f0 */                              // 0x0019a650: mul.s $f0, $f1, $f0
    *(float*)((v0) + 0x20) = FPU_F0;  // Store float            // 0x0019a654: swc1 $f0, 0x20($v0)
    v1 = *(int32_t*)((s2) + 0x4c);                              // 0x0019a658: lw $v1, 0x4c($s2)
    FPU_F1 = *(float*)((at) + 0x5474);  // Load float           // 0x0019a65c: lwc1 $f1, 0x5474($at)
    FPU_F0 = *(float*)((v1) + 0x24);  // Load float             // 0x0019a660: lwc1 $f0, 0x24($v1)
    at = 0x28 << 16;                                            // 0x0019a664: lui $at, 0x28
    /* FPU: mul.s $f0, $f1, $f0 */                              // 0x0019a668: mul.s $f0, $f1, $f0
    *(float*)((v0) + 0x24) = FPU_F0;  // Store float            // 0x0019a66c: swc1 $f0, 0x24($v0)
    v1 = *(int32_t*)((s2) + 0x4c);                              // 0x0019a670: lw $v1, 0x4c($s2)
    FPU_F1 = *(float*)((at) + 0x5478);  // Load float           // 0x0019a674: lwc1 $f1, 0x5478($at)
    FPU_F0 = *(float*)((v1) + 0x24);  // Load float             // 0x0019a678: lwc1 $f0, 0x24($v1)
    at = 0x28 << 16;                                            // 0x0019a67c: lui $at, 0x28
    /* FPU: mul.s $f0, $f1, $f0 */                              // 0x0019a680: mul.s $f0, $f1, $f0
    *(float*)((v0) + 0x28) = FPU_F0;  // Store float            // 0x0019a684: swc1 $f0, 0x28($v0)
    FPU_F0 = *(float*)((at) + 0x547c);  // Load float           // 0x0019a688: lwc1 $f0, 0x547c($at)
    *(float*)((v0) + 0x2c) = FPU_F0;  // Store float            // 0x0019a68c: swc1 $f0, 0x2c($v0)
    at = 0x28 << 16;                                            // 0x0019a690: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x5460);  // Load float           // 0x0019a694: lwc1 $f0, 0x5460($at)
    *(float*)((v0) + 0x30) = FPU_F0;  // Store float            // 0x0019a698: swc1 $f0, 0x30($v0)
    at = 0x28 << 16;                                            // 0x0019a69c: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x5464);  // Load float           // 0x0019a6a0: lwc1 $f0, 0x5464($at)
    *(float*)((v0) + 0x34) = FPU_F0;  // Store float            // 0x0019a6a4: swc1 $f0, 0x34($v0)
    at = 0x28 << 16;                                            // 0x0019a6a8: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x5468);  // Load float           // 0x0019a6ac: lwc1 $f0, 0x5468($at)
    *(float*)((v0) + 0x38) = FPU_F0;  // Store float            // 0x0019a6b0: swc1 $f0, 0x38($v0)
    at = 0x28 << 16;                                            // 0x0019a6b4: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x546c);  // Load float           // 0x0019a6b8: lwc1 $f0, 0x546c($at)
    func_00199320();  // 0x199240                                // 0x0019a6bc: jal 0x199240
    *(float*)((v0) + 0x3c) = FPU_F0;  // Store float            // 0x0019a6c0: swc1 $f0, 0x3c($v0)
    a2 = 0x28 << 16;                                            // 0x0019a6c4: lui $a2, 0x28
    a0 = v0 + 0x80;                                             // 0x0019a6c8: addiu $a0, $v0, 0x80
    func_00199240();  // 0x1991c0                                // 0x0019a6cc: jal 0x1991c0
    a2 = a2 + 0x5320;                                           // 0x0019a6d0: addiu $a2, $a2, 0x5320
    func_00199b40();  // 0x199b10                                // 0x0019a6d4: jal 0x199b10
    a0 = v0 + 0xc0;                                             // 0x0019a6d8: addiu $a0, $v0, 0xc0
    a3 = 0x28 << 16;                                            // 0x0019a6dc: lui $a3, 0x28
    a2 = v0 + 0x100;                                            // 0x0019a6e0: addiu $a2, $v0, 0x100
    a3 = a3 + 0x52e0;                                           // 0x0019a6e4: addiu $a3, $a3, 0x52e0
    a1 = 8;                                                     // 0x0019a6e8: addiu $a1, $zero, 8
label_0x19a6ec:
    a0 = g_002852e0;  // Global at 0x002852e0                   // 0x0019a6ec: lw $a0, 0($a3)
    a1 = a1 + -1;                                               // 0x0019a6f0: addiu $a1, $a1, -1
    v1 = g_002852e4;  // Global at 0x002852e4                   // 0x0019a6f4: lw $v1, 4($a3)
    g_00285320 = a0;  // Global at 0x00285320                   // 0x0019a6f8: sw $a0, 0($a2)
    a3 = a3 + 8;                                                // 0x0019a6fc: addiu $a3, $a3, 8
    g_00285324 = v1;  // Global at 0x00285324                   // 0x0019a700: sw $v1, 4($a2)
    if (a1 > 0) goto label_0x19a6ec;                            // 0x0019a704: bgtz $a1, 0x19a6ec
    a2 = a2 + 8;                                                // 0x0019a708: addiu $a2, $a2, 8
    FPU_F1 = *(float*)((gp) + -0x6464);  // Load float          // 0x0019a70c: lwc1 $f1, -0x6464($gp)
    v1 = 0x3f80 << 16;                                          // 0x0019a710: lui $v1, 0x3f80
    /* move to FPU: $v1, $f0 */                                 // 0x0019a714: mtc1 $v1, $f0
    v1 = 0x1500 << 16;                                          // 0x0019a718: lui $v1, 0x1500
    v1 = s1 | v1;                                               // 0x0019a71c: or $v1, $s1, $v1
    *(float*)((v0) + 0xf0) = FPU_F1;  // Store float            // 0x0019a720: swc1 $f1, 0xf0($v0)
    FPU_F2 = *(float*)((gp) + -0x6464);  // Load float          // 0x0019a724: lwc1 $f2, -0x6464($gp)
    FPU_F1 = *(float*)((gp) + -0x6460);  // Load float          // 0x0019a728: lwc1 $f1, -0x6460($gp)
    /* FPU: sub.s $f1, $f2, $f1 */                              // 0x0019a72c: sub.s $f1, $f2, $f1
    /* FPU: div.s $f0, $f0, $f1 */                              // 0x0019a730: div.s $f0, $f0, $f1
    *(float*)((v0) + 0xf4) = FPU_F0;  // Store float            // 0x0019a734: swc1 $f0, 0xf4($v0)
    *(uint32_t*)((v0) + 0xf8) = 0;                              // 0x0019a738: sw $zero, 0xf8($v0)
    *(uint32_t*)((v0) + 0xfc) = 0;                              // 0x0019a73c: sw $zero, 0xfc($v0)
    *(uint32_t*)((v0) + 0x140) = v1;                            // 0x0019a740: sw $v1, 0x140($v0)
    *(uint32_t*)((v0) + 0x144) = 0;                             // 0x0019a744: sw $zero, 0x144($v0)
    *(uint32_t*)((v0) + 0x148) = 0;                             // 0x0019a748: sw $zero, 0x148($v0)
    *(uint32_t*)((v0) + 0x14c) = 0;                             // 0x0019a74c: sw $zero, 0x14c($v0)
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x0019a754: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x0019a758: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0019a75c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0019a760: jr $ra
    sp = sp + 0x80;                                             // 0x0019a764: addiu $sp, $sp, 0x80
}