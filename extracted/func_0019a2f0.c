void func_0019a2f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x80;                                            // 0x0019a2f0: addiu $sp, $sp, -0x80
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x0019a2fc: addu.qb $zero, $sp, $s1
    a0 = 0x100;                                                 // 0x0019a310: addiu $a0, $zero, 0x100
    func_0018dca0();  // 0x18dc30                                // 0x0019a314: jal 0x18dc30
    a1 = 0x10;                                                  // 0x0019a318: addiu $a1, $zero, 0x10
    v1 = 0x2000 << 16;                                          // 0x0019a31c: lui $v1, 0x2000
    t0 = 0x28 << 16;                                            // 0x0019a320: lui $t0, 0x28
    a0 = v1 | 0xf;                                              // 0x0019a324: ori $a0, $v1, 0xf
    a1 = 0x1300 << 16;                                          // 0x0019a328: lui $a1, 0x1300
    *(uint32_t*)(v0) = a0;                                      // 0x0019a32c: sw $a0, 0($v0)
    v1 = 0x100 << 16;                                           // 0x0019a330: lui $v1, 0x100
    *(uint32_t*)((v0) + 4) = s0;                                // 0x0019a334: sw $s0, 4($v0)
    a2 = v1 | 0x404;                                            // 0x0019a338: ori $a2, $v1, 0x404
    a3 = 0x6c0d << 16;                                          // 0x0019a340: lui $a3, 0x6c0d
    *(uint32_t*)((v0) + 0x10) = a1;                             // 0x0019a344: sw $a1, 0x10($v0)
    v1 = 0x7000 << 16;                                          // 0x0019a348: lui $v1, 0x7000
    *(uint32_t*)((v0) + 0x14) = 0;                              // 0x0019a34c: sw $zero, 0x14($v0)
    at = 0x28 << 16;                                            // 0x0019a350: lui $at, 0x28
    *(uint32_t*)((v0) + 0x18) = a2;                             // 0x0019a354: sw $a2, 0x18($v0)
    a0 = v0 + 0x40;                                             // 0x0019a358: addiu $a0, $v0, 0x40
    *(uint32_t*)((v0) + 0x1c) = a3;                             // 0x0019a35c: sw $a3, 0x1c($v0)
    a2 = v1 | 0x3700;                                           // 0x0019a360: ori $a2, $v1, 0x3700
    a3 = v1 | 0x3f40;                                           // 0x0019a364: ori $a3, $v1, 0x3f40
    a1 = sp + 0x40;                                             // 0x0019a368: addiu $a1, $sp, 0x40
    v1 = *(int32_t*)((s2) + 0x4c);                              // 0x0019a36c: lw $v1, 0x4c($s2)
    FPU_F1 = *(float*)((at) + 0x5470);  // Load float           // 0x0019a370: lwc1 $f1, 0x5470($at)
    t0 = t0 + 0x5360;                                           // 0x0019a374: addiu $t0, $t0, 0x5360
    FPU_F0 = *(float*)((v1) + 0x24);  // Load float             // 0x0019a378: lwc1 $f0, 0x24($v1)
    at = 0x28 << 16;                                            // 0x0019a37c: lui $at, 0x28
    /* FPU: mul.s $f0, $f1, $f0 */                              // 0x0019a380: mul.s $f0, $f1, $f0
    *(float*)((v0) + 0x20) = FPU_F0;  // Store float            // 0x0019a384: swc1 $f0, 0x20($v0)
    v1 = *(int32_t*)((s2) + 0x4c);                              // 0x0019a388: lw $v1, 0x4c($s2)
    FPU_F1 = *(float*)((at) + 0x5474);  // Load float           // 0x0019a38c: lwc1 $f1, 0x5474($at)
    FPU_F0 = *(float*)((v1) + 0x24);  // Load float             // 0x0019a390: lwc1 $f0, 0x24($v1)
    at = 0x28 << 16;                                            // 0x0019a394: lui $at, 0x28
    /* FPU: mul.s $f0, $f1, $f0 */                              // 0x0019a398: mul.s $f0, $f1, $f0
    *(float*)((v0) + 0x24) = FPU_F0;  // Store float            // 0x0019a39c: swc1 $f0, 0x24($v0)
    v1 = *(int32_t*)((s2) + 0x4c);                              // 0x0019a3a0: lw $v1, 0x4c($s2)
    FPU_F1 = *(float*)((at) + 0x5478);  // Load float           // 0x0019a3a4: lwc1 $f1, 0x5478($at)
    FPU_F0 = *(float*)((v1) + 0x24);  // Load float             // 0x0019a3a8: lwc1 $f0, 0x24($v1)
    at = 0x28 << 16;                                            // 0x0019a3ac: lui $at, 0x28
    /* FPU: mul.s $f0, $f1, $f0 */                              // 0x0019a3b0: mul.s $f0, $f1, $f0
    *(float*)((v0) + 0x28) = FPU_F0;  // Store float            // 0x0019a3b4: swc1 $f0, 0x28($v0)
    FPU_F0 = *(float*)((at) + 0x547c);  // Load float           // 0x0019a3b8: lwc1 $f0, 0x547c($at)
    *(float*)((v0) + 0x2c) = FPU_F0;  // Store float            // 0x0019a3bc: swc1 $f0, 0x2c($v0)
    at = 0x28 << 16;                                            // 0x0019a3c0: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x5460);  // Load float           // 0x0019a3c4: lwc1 $f0, 0x5460($at)
    *(float*)((v0) + 0x30) = FPU_F0;  // Store float            // 0x0019a3c8: swc1 $f0, 0x30($v0)
    at = 0x28 << 16;                                            // 0x0019a3cc: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x5464);  // Load float           // 0x0019a3d0: lwc1 $f0, 0x5464($at)
    *(float*)((v0) + 0x34) = FPU_F0;  // Store float            // 0x0019a3d4: swc1 $f0, 0x34($v0)
    at = 0x28 << 16;                                            // 0x0019a3d8: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x5468);  // Load float           // 0x0019a3dc: lwc1 $f0, 0x5468($at)
    *(float*)((v0) + 0x38) = FPU_F0;  // Store float            // 0x0019a3e0: swc1 $f0, 0x38($v0)
    at = 0x28 << 16;                                            // 0x0019a3e4: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x546c);  // Load float           // 0x0019a3e8: lwc1 $f0, 0x546c($at)
    func_00199320();  // 0x199240                                // 0x0019a3ec: jal 0x199240
    *(float*)((v0) + 0x3c) = FPU_F0;  // Store float            // 0x0019a3f0: swc1 $f0, 0x3c($v0)
    a2 = 0x28 << 16;                                            // 0x0019a3f4: lui $a2, 0x28
    a0 = v0 + 0x80;                                             // 0x0019a3f8: addiu $a0, $v0, 0x80
    func_00199240();  // 0x1991c0                                // 0x0019a3fc: jal 0x1991c0
    a2 = a2 + 0x5320;                                           // 0x0019a400: addiu $a2, $a2, 0x5320
    func_00199b40();  // 0x199b10                                // 0x0019a404: jal 0x199b10
    a0 = v0 + 0xc0;                                             // 0x0019a408: addiu $a0, $v0, 0xc0
    v1 = 0x1500 << 16;                                          // 0x0019a40c: lui $v1, 0x1500
    v1 = s1 | v1;                                               // 0x0019a410: or $v1, $s1, $v1
    *(uint32_t*)((v0) + 0xf0) = v1;                             // 0x0019a414: sw $v1, 0xf0($v0)
    *(uint32_t*)((v0) + 0xf4) = 0;                              // 0x0019a418: sw $zero, 0xf4($v0)
    *(uint32_t*)((v0) + 0xf8) = 0;                              // 0x0019a41c: sw $zero, 0xf8($v0)
    *(uint32_t*)((v0) + 0xfc) = 0;                              // 0x0019a420: sw $zero, 0xfc($v0)
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x0019a428: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x0019a42c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0019a430: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0019a434: jr $ra
    sp = sp + 0x80;                                             // 0x0019a438: addiu $sp, $sp, 0x80
}