void func_0019b730() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_5c, local_6c, local_7c;
    
    sp = sp + -0xc0;                                            // 0x0019b730: addiu $sp, $sp, -0xc0
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x0019b738: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x0019b744: addu.qb $zero, $sp, $s1
    a0 = 0x1b0;                                                 // 0x0019b750: addiu $a0, $zero, 0x1b0
    a1 = 0x10;                                                  // 0x0019b754: addiu $a1, $zero, 0x10
    func_0018dca0();  // 0x18dc30                                // 0x0019b758: jal 0x18dc30
    v1 = 0x2000 << 16;                                          // 0x0019b760: lui $v1, 0x2000
    t0 = 0x28 << 16;                                            // 0x0019b764: lui $t0, 0x28
    v1 = v1 | 0x1a;                                             // 0x0019b768: ori $v1, $v1, 0x1a
    a2 = 0x1300 << 16;                                          // 0x0019b76c: lui $a2, 0x1300
    g_70000000 = v1;  // Global at 0x70000000                   // 0x0019b770: sw $v1, 0($v0)
    a1 = 0x6c18 << 16;                                          // 0x0019b774: lui $a1, 0x6c18
    g_70000004 = s1;  // Global at 0x70000004                   // 0x0019b778: sw $s1, 4($v0)
    v1 = 0x100 << 16;                                           // 0x0019b77c: lui $v1, 0x100
    a0 = v1 | 0x404;                                            // 0x0019b784: ori $a0, $v1, 0x404
    g_70000010 = a2;  // Global at 0x70000010                   // 0x0019b788: sw $a2, 0x10($v0)
    v1 = 0x3f80 << 16;                                          // 0x0019b78c: lui $v1, 0x3f80
    g_70000014 = 0;  // Global at 0x70000014                    // 0x0019b790: sw $zero, 0x14($v0)
    /* move to FPU: $v1, $f0 */                                 // 0x0019b794: mtc1 $v1, $f0
    g_70000018 = a0;  // Global at 0x70000018                   // 0x0019b798: sw $a0, 0x18($v0)
    g_7000001c = a1;  // Global at 0x7000001c                   // 0x0019b7a0: sw $a1, 0x1c($v0)
    v1 = 0x7000 << 16;                                          // 0x0019b7a4: lui $v1, 0x7000
    t1 = *(int32_t*)((s3) + 0x4c);                              // 0x0019b7a8: lw $t1, 0x4c($s3)
    at = 0x28 << 16;                                            // 0x0019b7ac: lui $at, 0x28
    FPU_F2 = *(float*)((at) + 0x5470);  // Load float           // 0x0019b7b0: lwc1 $f2, 0x5470($at)
    a2 = v1 | 0x3700;                                           // 0x0019b7b4: ori $a2, $v1, 0x3700
    a3 = v1 | 0x3f40;                                           // 0x0019b7b8: ori $a3, $v1, 0x3f40
    a0 = s0 + 0x50;                                             // 0x0019b7bc: addiu $a0, $s0, 0x50
    a1 = sp + 0x80;                                             // 0x0019b7c0: addiu $a1, $sp, 0x80
    t0 = t0 + 0x5360;                                           // 0x0019b7c4: addiu $t0, $t0, 0x5360
    FPU_F1 = *(float*)((t1) + 0x24);  // Load float             // 0x0019b7c8: lwc1 $f1, 0x24($t1)
    at = 0x28 << 16;                                            // 0x0019b7cc: lui $at, 0x28
    /* FPU: mul.s $f1, $f2, $f1 */                              // 0x0019b7d0: mul.s $f1, $f2, $f1
    *(float*)((v0) + 0x20) = FPU_F1;  // Store float            // 0x0019b7d4: swc1 $f1, 0x20($v0)
    v1 = *(int32_t*)((s3) + 0x4c);                              // 0x0019b7d8: lw $v1, 0x4c($s3)
    FPU_F2 = *(float*)((at) + 0x5474);  // Load float           // 0x0019b7dc: lwc1 $f2, 0x5474($at)
    FPU_F1 = *(float*)((v1) + 0x24);  // Load float             // 0x0019b7e0: lwc1 $f1, 0x24($v1)
    at = 0x28 << 16;                                            // 0x0019b7e4: lui $at, 0x28
    /* FPU: mul.s $f1, $f2, $f1 */                              // 0x0019b7e8: mul.s $f1, $f2, $f1
    *(float*)((v0) + 0x24) = FPU_F1;  // Store float            // 0x0019b7ec: swc1 $f1, 0x24($v0)
    v1 = *(int32_t*)((s3) + 0x4c);                              // 0x0019b7f0: lw $v1, 0x4c($s3)
    FPU_F2 = *(float*)((at) + 0x5478);  // Load float           // 0x0019b7f4: lwc1 $f2, 0x5478($at)
    FPU_F1 = *(float*)((v1) + 0x24);  // Load float             // 0x0019b7f8: lwc1 $f1, 0x24($v1)
    at = 0x28 << 16;                                            // 0x0019b7fc: lui $at, 0x28
    /* FPU: mul.s $f1, $f2, $f1 */                              // 0x0019b800: mul.s $f1, $f2, $f1
    *(float*)((v0) + 0x28) = FPU_F1;  // Store float            // 0x0019b804: swc1 $f1, 0x28($v0)
    FPU_F1 = *(float*)((at) + 0x547c);  // Load float           // 0x0019b808: lwc1 $f1, 0x547c($at)
    *(float*)((v0) + 0x2c) = FPU_F1;  // Store float            // 0x0019b80c: swc1 $f1, 0x2c($v0)
    at = 0x28 << 16;                                            // 0x0019b810: lui $at, 0x28
    FPU_F1 = *(float*)((at) + 0x5460);  // Load float           // 0x0019b814: lwc1 $f1, 0x5460($at)
    *(float*)((v0) + 0x30) = FPU_F1;  // Store float            // 0x0019b818: swc1 $f1, 0x30($v0)
    at = 0x28 << 16;                                            // 0x0019b81c: lui $at, 0x28
    FPU_F1 = *(float*)((at) + 0x5464);  // Load float           // 0x0019b820: lwc1 $f1, 0x5464($at)
    *(float*)((v0) + 0x34) = FPU_F1;  // Store float            // 0x0019b824: swc1 $f1, 0x34($v0)
    at = 0x28 << 16;                                            // 0x0019b828: lui $at, 0x28
    FPU_F1 = *(float*)((at) + 0x5468);  // Load float           // 0x0019b82c: lwc1 $f1, 0x5468($at)
    *(float*)((v0) + 0x38) = FPU_F1;  // Store float            // 0x0019b830: swc1 $f1, 0x38($v0)
    at = 0x28 << 16;                                            // 0x0019b834: lui $at, 0x28
    FPU_F1 = *(float*)((at) + 0x546c);  // Load float           // 0x0019b838: lwc1 $f1, 0x546c($at)
    *(float*)((v0) + 0x3c) = FPU_F1;  // Store float            // 0x0019b83c: swc1 $f1, 0x3c($v0)
    FPU_F1 = *(float*)((gp) + -0x6464);  // Load float          // 0x0019b840: lwc1 $f1, -0x6464($gp)
    *(float*)((v0) + 0x40) = FPU_F1;  // Store float            // 0x0019b844: swc1 $f1, 0x40($v0)
    FPU_F2 = *(float*)((gp) + -0x6464);  // Load float          // 0x0019b848: lwc1 $f2, -0x6464($gp)
    FPU_F1 = *(float*)((gp) + -0x6460);  // Load float          // 0x0019b84c: lwc1 $f1, -0x6460($gp)
    /* FPU: sub.s $f1, $f2, $f1 */                              // 0x0019b850: sub.s $f1, $f2, $f1
    /* FPU: div.s $f0, $f0, $f1 */                              // 0x0019b854: div.s $f0, $f0, $f1
    *(float*)((v0) + 0x44) = FPU_F0;  // Store float            // 0x0019b858: swc1 $f0, 0x44($v0)
    g_70000048 = 0;  // Global at 0x70000048                    // 0x0019b85c: sw $zero, 0x48($v0)
    func_00199320();  // 0x199240                                // 0x0019b860: jal 0x199240
    g_7000004c = 0;  // Global at 0x7000004c                    // 0x0019b864: sw $zero, 0x4c($v0)
    a2 = 0x28 << 16;                                            // 0x0019b868: lui $a2, 0x28
    a0 = s0 + 0x90;                                             // 0x0019b86c: addiu $a0, $s0, 0x90
    func_00199240();  // 0x1991c0                                // 0x0019b870: jal 0x1991c0
    a2 = a2 + 0x5320;                                           // 0x0019b874: addiu $a2, $a2, 0x5320
    func_00199b40();  // 0x199b10                                // 0x0019b878: jal 0x199b10
    a0 = s0 + 0xd0;                                             // 0x0019b87c: addiu $a0, $s0, 0xd0
    at = 0x28 << 16;                                            // 0x0019b880: lui $at, 0x28
    v0 = 0x3f80 << 16;                                          // 0x0019b884: lui $v0, 0x3f80
    FPU_F1 = *(float*)((at) + 0x4854);  // Load float           // 0x0019b888: lwc1 $f1, 0x4854($at)
    local_5c = v0;                                              // 0x0019b88c: sw $v0, 0x5c($sp)
    local_6c = v0;                                              // 0x0019b890: sw $v0, 0x6c($sp)
    a0 = s0 + 0x100;                                            // 0x0019b894: addiu $a0, $s0, 0x100
    local_7c = v0;                                              // 0x0019b898: sw $v0, 0x7c($sp)
    a1 = s0 + 0x130;                                            // 0x0019b89c: addiu $a1, $s0, 0x130
    v0 = 0x7000 << 16;                                          // 0x0019b8a0: lui $v0, 0x7000
    a3 = sp + 0x50;                                             // 0x0019b8a4: addiu $a3, $sp, 0x50
    a2 = v0 | 0x3700;                                           // 0x0019b8a8: ori $a2, $v0, 0x3700
    at = 0x28 << 16;                                            // 0x0019b8ac: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x4858);  // Load float           // 0x0019b8b0: lwc1 $f0, 0x4858($at)
    /* FPU: neg.s $f1, $f1 */                                   // 0x0019b8b4: neg.s $f1, $f1
    *(float*)((sp) + 0x50) = FPU_F1;  // Store float            // 0x0019b8b8: swc1 $f1, 0x50($sp)
    at = 0x28 << 16;                                            // 0x0019b8bc: lui $at, 0x28
    FPU_F4 = *(float*)((at) + 0x485c);  // Load float           // 0x0019b8c0: lwc1 $f4, 0x485c($at)
    /* FPU: neg.s $f5, $f0 */                                   // 0x0019b8c4: neg.s $f5, $f0
    *(float*)((sp) + 0x54) = FPU_F5;  // Store float            // 0x0019b8c8: swc1 $f5, 0x54($sp)
    at = 0x28 << 16;                                            // 0x0019b8cc: lui $at, 0x28
    FPU_F3 = *(float*)((at) + 0x48c8);  // Load float           // 0x0019b8d0: lwc1 $f3, 0x48c8($at)
    /* FPU: neg.s $f4, $f4 */                                   // 0x0019b8d4: neg.s $f4, $f4
    *(float*)((sp) + 0x58) = FPU_F4;  // Store float            // 0x0019b8d8: swc1 $f4, 0x58($sp)
    at = 0x28 << 16;                                            // 0x0019b8dc: lui $at, 0x28
    FPU_F2 = *(float*)((at) + 0x48cc);  // Load float           // 0x0019b8e0: lwc1 $f2, 0x48cc($at)
    *(float*)((sp) + 0x60) = FPU_F3;  // Store float            // 0x0019b8e4: swc1 $f3, 0x60($sp)
    at = 0x28 << 16;                                            // 0x0019b8e8: lui $at, 0x28
    FPU_F1 = *(float*)((at) + 0x48d0);  // Load float           // 0x0019b8ec: lwc1 $f1, 0x48d0($at)
    *(float*)((sp) + 0x64) = FPU_F2;  // Store float            // 0x0019b8f0: swc1 $f2, 0x64($sp)
    at = 0x28 << 16;                                            // 0x0019b8f4: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x4930);  // Load float           // 0x0019b8f8: lwc1 $f0, 0x4930($at)
    *(float*)((sp) + 0x68) = FPU_F1;  // Store float            // 0x0019b8fc: swc1 $f1, 0x68($sp)
    at = 0x28 << 16;                                            // 0x0019b900: lui $at, 0x28
    FPU_F1 = *(float*)((at) + 0x4934);  // Load float           // 0x0019b904: lwc1 $f1, 0x4934($at)
    *(float*)((sp) + 0x70) = FPU_F0;  // Store float            // 0x0019b908: swc1 $f0, 0x70($sp)
    at = 0x28 << 16;                                            // 0x0019b90c: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x4938);  // Load float           // 0x0019b910: lwc1 $f0, 0x4938($at)
    *(float*)((sp) + 0x74) = FPU_F1;  // Store float            // 0x0019b914: swc1 $f1, 0x74($sp)
    func_001996b0();  // 0x199580                                // 0x0019b918: jal 0x199580
    *(float*)((sp) + 0x78) = FPU_F0;  // Store float            // 0x0019b91c: swc1 $f0, 0x78($sp)
    v0 = *(int32_t*)((s3) + 0x4c);                              // 0x0019b920: lw $v0, 0x4c($s3)
    FPU_F12 = *(float*)((v0) + 0x24);  // Load float            // 0x0019b924: lwc1 $f12, 0x24($v0)
    func_00199a60();  // 0x1998d0                                // 0x0019b928: jal 0x1998d0
    a0 = s0 + 0x140;                                            // 0x0019b92c: addiu $a0, $s0, 0x140
    v1 = 0x1500 << 16;                                          // 0x0019b930: lui $v1, 0x1500
    v1 = s2 | v1;                                               // 0x0019b938: or $v1, $s2, $v1
    *(uint32_t*)((s0) + 0x1a0) = v1;                            // 0x0019b93c: sw $v1, 0x1a0($s0)
    *(uint32_t*)((s0) + 0x1a4) = 0;                             // 0x0019b940: sw $zero, 0x1a4($s0)
    *(uint32_t*)((s0) + 0x1a8) = 0;                             // 0x0019b944: sw $zero, 0x1a8($s0)
    *(uint32_t*)((s0) + 0x1ac) = 0;                             // 0x0019b948: sw $zero, 0x1ac($s0)
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x0019b954: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x0019b958: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0019b95c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0019b960: jr $ra
    sp = sp + 0xc0;                                             // 0x0019b964: addiu $sp, $sp, 0xc0
}