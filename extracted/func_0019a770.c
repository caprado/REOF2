void func_0019a770() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x80;                                            // 0x0019a770: addiu $sp, $sp, -0x80
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x0019a77c: addu.qb $zero, $sp, $s1
    a0 = 0x110;                                                 // 0x0019a790: addiu $a0, $zero, 0x110
    func_0018dc30();  // 18dc30                                // 0x0019a794: jal 0x18dc30
    a1 = 0x10;                                                  // 0x0019a798: addiu $a1, $zero, 0x10
    v1 = 0x2000 << 16;                                          // 0x0019a79c: lui $v1, 0x2000
    t0 = 0x28 << 16;                                            // 0x0019a7a0: lui $t0, 0x28
    a0 = v1 | 0x10;                                             // 0x0019a7a4: ori $a0, $v1, 0x10
    a1 = 0x1300 << 16;                                          // 0x0019a7a8: lui $a1, 0x1300
    *(uint32_t*)(v0) = a0;                                      // 0x0019a7ac: sw $a0, 0($v0)
    v1 = 0x100 << 16;                                           // 0x0019a7b0: lui $v1, 0x100
    *(uint32_t*)((v0) + 4) = s0;                                // 0x0019a7b4: sw $s0, 4($v0)
    a2 = v1 | 0x404;                                            // 0x0019a7b8: ori $a2, $v1, 0x404
    a3 = 0x6c0e << 16;                                          // 0x0019a7c0: lui $a3, 0x6c0e
    *(uint32_t*)((v0) + 0x10) = a1;                             // 0x0019a7c4: sw $a1, 0x10($v0)
    v1 = 0x7000 << 16;                                          // 0x0019a7c8: lui $v1, 0x7000
    *(uint32_t*)((v0) + 0x14) = 0;                              // 0x0019a7cc: sw $zero, 0x14($v0)
    at = 0x28 << 16;                                            // 0x0019a7d0: lui $at, 0x28
    *(uint32_t*)((v0) + 0x18) = a2;                             // 0x0019a7d4: sw $a2, 0x18($v0)
    a0 = v0 + 0x40;                                             // 0x0019a7d8: addiu $a0, $v0, 0x40
    *(uint32_t*)((v0) + 0x1c) = a3;                             // 0x0019a7dc: sw $a3, 0x1c($v0)
    a2 = v1 | 0x3700;                                           // 0x0019a7e0: ori $a2, $v1, 0x3700
    a3 = v1 | 0x3f40;                                           // 0x0019a7e4: ori $a3, $v1, 0x3f40
    a1 = sp + 0x40;                                             // 0x0019a7e8: addiu $a1, $sp, 0x40
    v1 = *(int32_t*)((s2) + 0x4c);                              // 0x0019a7ec: lw $v1, 0x4c($s2)
    FPU_F1 = *(float*)((at) + 0x5470);  // Load float           // 0x0019a7f0: lwc1 $f1, 0x5470($at)
    t0 = t0 + 0x5360;                                           // 0x0019a7f4: addiu $t0, $t0, 0x5360
    FPU_F0 = *(float*)((v1) + 0x24);  // Load float             // 0x0019a7f8: lwc1 $f0, 0x24($v1)
    at = 0x28 << 16;                                            // 0x0019a7fc: lui $at, 0x28
    /* FPU: mul.s $f0, $f1, $f0 */                              // 0x0019a800: mul.s $f0, $f1, $f0
    *(float*)((v0) + 0x20) = FPU_F0;  // Store float            // 0x0019a804: swc1 $f0, 0x20($v0)
    v1 = *(int32_t*)((s2) + 0x4c);                              // 0x0019a808: lw $v1, 0x4c($s2)
    FPU_F1 = *(float*)((at) + 0x5474);  // Load float           // 0x0019a80c: lwc1 $f1, 0x5474($at)
    FPU_F0 = *(float*)((v1) + 0x24);  // Load float             // 0x0019a810: lwc1 $f0, 0x24($v1)
    at = 0x28 << 16;                                            // 0x0019a814: lui $at, 0x28
    /* FPU: mul.s $f0, $f1, $f0 */                              // 0x0019a818: mul.s $f0, $f1, $f0
    *(float*)((v0) + 0x24) = FPU_F0;  // Store float            // 0x0019a81c: swc1 $f0, 0x24($v0)
    v1 = *(int32_t*)((s2) + 0x4c);                              // 0x0019a820: lw $v1, 0x4c($s2)
    FPU_F1 = *(float*)((at) + 0x5478);  // Load float           // 0x0019a824: lwc1 $f1, 0x5478($at)
    FPU_F0 = *(float*)((v1) + 0x24);  // Load float             // 0x0019a828: lwc1 $f0, 0x24($v1)
    at = 0x28 << 16;                                            // 0x0019a82c: lui $at, 0x28
    /* FPU: mul.s $f0, $f1, $f0 */                              // 0x0019a830: mul.s $f0, $f1, $f0
    *(float*)((v0) + 0x28) = FPU_F0;  // Store float            // 0x0019a834: swc1 $f0, 0x28($v0)
    FPU_F0 = *(float*)((at) + 0x547c);  // Load float           // 0x0019a838: lwc1 $f0, 0x547c($at)
    *(float*)((v0) + 0x2c) = FPU_F0;  // Store float            // 0x0019a83c: swc1 $f0, 0x2c($v0)
    at = 0x28 << 16;                                            // 0x0019a840: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x5460);  // Load float           // 0x0019a844: lwc1 $f0, 0x5460($at)
    *(float*)((v0) + 0x30) = FPU_F0;  // Store float            // 0x0019a848: swc1 $f0, 0x30($v0)
    at = 0x28 << 16;                                            // 0x0019a84c: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x5464);  // Load float           // 0x0019a850: lwc1 $f0, 0x5464($at)
    *(float*)((v0) + 0x34) = FPU_F0;  // Store float            // 0x0019a854: swc1 $f0, 0x34($v0)
    at = 0x28 << 16;                                            // 0x0019a858: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x5468);  // Load float           // 0x0019a85c: lwc1 $f0, 0x5468($at)
    *(float*)((v0) + 0x38) = FPU_F0;  // Store float            // 0x0019a860: swc1 $f0, 0x38($v0)
    at = 0x28 << 16;                                            // 0x0019a864: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x546c);  // Load float           // 0x0019a868: lwc1 $f0, 0x546c($at)
    func_00199240();  // 199240                                // 0x0019a86c: jal 0x199240
    *(float*)((v0) + 0x3c) = FPU_F0;  // Store float            // 0x0019a870: swc1 $f0, 0x3c($v0)
    a2 = 0x28 << 16;                                            // 0x0019a874: lui $a2, 0x28
    a0 = v0 + 0x80;                                             // 0x0019a878: addiu $a0, $v0, 0x80
    func_001991c0();  // 1991c0                                // 0x0019a87c: jal 0x1991c0
    a2 = a2 + 0x5320;                                           // 0x0019a880: addiu $a2, $a2, 0x5320
    a3 = 0x28 << 16;                                            // 0x0019a884: lui $a3, 0x28
    a2 = v0 + 0xc0;                                             // 0x0019a888: addiu $a2, $v0, 0xc0
    a3 = a3 + 0x52e0;                                           // 0x0019a88c: addiu $a3, $a3, 0x52e0
    a1 = 8;                                                     // 0x0019a890: addiu $a1, $zero, 8
label_0x19a894:
    a0 = g_002852e0;  // Global at 0x002852e0                   // 0x0019a894: lw $a0, 0($a3)
    a1 = a1 + -1;                                               // 0x0019a898: addiu $a1, $a1, -1
    v1 = g_002852e4;  // Global at 0x002852e4                   // 0x0019a89c: lw $v1, 4($a3)
    g_00285320 = a0;  // Global at 0x00285320                   // 0x0019a8a0: sw $a0, 0($a2)
    a3 = a3 + 8;                                                // 0x0019a8a4: addiu $a3, $a3, 8
    g_00285324 = v1;  // Global at 0x00285324                   // 0x0019a8a8: sw $v1, 4($a2)
    if (a1 > 0) goto label_0x19a894;                            // 0x0019a8ac: bgtz $a1, 0x19a894
    a2 = a2 + 8;                                                // 0x0019a8b0: addiu $a2, $a2, 8
    v1 = 0x1500 << 16;                                          // 0x0019a8b4: lui $v1, 0x1500
    v1 = s1 | v1;                                               // 0x0019a8b8: or $v1, $s1, $v1
    *(uint32_t*)((v0) + 0x100) = v1;                            // 0x0019a8bc: sw $v1, 0x100($v0)
    *(uint32_t*)((v0) + 0x104) = 0;                             // 0x0019a8c0: sw $zero, 0x104($v0)
    *(uint32_t*)((v0) + 0x108) = 0;                             // 0x0019a8c4: sw $zero, 0x108($v0)
    *(uint32_t*)((v0) + 0x10c) = 0;                             // 0x0019a8c8: sw $zero, 0x10c($v0)
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x0019a8d0: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x0019a8d4: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0019a8d8: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0019a8dc: jr $ra
    sp = sp + 0x80;                                             // 0x0019a8e0: addiu $sp, $sp, 0x80
}