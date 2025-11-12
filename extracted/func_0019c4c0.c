void func_0019c4c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x80;                                            // 0x0019c4c0: addiu $sp, $sp, -0x80
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x0019c4cc: addu.qb $zero, $sp, $s1
    a0 = 0x140;                                                 // 0x0019c4e0: addiu $a0, $zero, 0x140
    func_0018dca0();  // 0x18dc30                                // 0x0019c4e4: jal 0x18dc30
    a1 = 0x10;                                                  // 0x0019c4e8: addiu $a1, $zero, 0x10
    v1 = 0x2000 << 16;                                          // 0x0019c4ec: lui $v1, 0x2000
    t0 = 0x28 << 16;                                            // 0x0019c4f0: lui $t0, 0x28
    a0 = v1 | 0x13;                                             // 0x0019c4f4: ori $a0, $v1, 0x13
    a1 = 0x1300 << 16;                                          // 0x0019c4f8: lui $a1, 0x1300
    *(uint32_t*)(v0) = a0;                                      // 0x0019c4fc: sw $a0, 0($v0)
    v1 = 0x100 << 16;                                           // 0x0019c500: lui $v1, 0x100
    *(uint32_t*)((v0) + 4) = s0;                                // 0x0019c504: sw $s0, 4($v0)
    a2 = v1 | 0x404;                                            // 0x0019c508: ori $a2, $v1, 0x404
    a3 = 0x6c11 << 16;                                          // 0x0019c510: lui $a3, 0x6c11
    *(uint32_t*)((v0) + 0x10) = a1;                             // 0x0019c514: sw $a1, 0x10($v0)
    v1 = 0x7000 << 16;                                          // 0x0019c518: lui $v1, 0x7000
    *(uint32_t*)((v0) + 0x14) = 0;                              // 0x0019c51c: sw $zero, 0x14($v0)
    at = 0x28 << 16;                                            // 0x0019c520: lui $at, 0x28
    *(uint32_t*)((v0) + 0x18) = a2;                             // 0x0019c524: sw $a2, 0x18($v0)
    a0 = v0 + 0x40;                                             // 0x0019c528: addiu $a0, $v0, 0x40
    *(uint32_t*)((v0) + 0x1c) = a3;                             // 0x0019c52c: sw $a3, 0x1c($v0)
    a2 = v1 | 0x3700;                                           // 0x0019c530: ori $a2, $v1, 0x3700
    a3 = v1 | 0x3f40;                                           // 0x0019c534: ori $a3, $v1, 0x3f40
    a1 = sp + 0x40;                                             // 0x0019c538: addiu $a1, $sp, 0x40
    v1 = *(int32_t*)((s2) + 0x4c);                              // 0x0019c53c: lw $v1, 0x4c($s2)
    FPU_F1 = *(float*)((at) + 0x5470);  // Load float           // 0x0019c540: lwc1 $f1, 0x5470($at)
    t0 = t0 + 0x5360;                                           // 0x0019c544: addiu $t0, $t0, 0x5360
    FPU_F0 = *(float*)((v1) + 0x24);  // Load float             // 0x0019c548: lwc1 $f0, 0x24($v1)
    at = 0x28 << 16;                                            // 0x0019c54c: lui $at, 0x28
    /* FPU: mul.s $f0, $f1, $f0 */                              // 0x0019c550: mul.s $f0, $f1, $f0
    *(float*)((v0) + 0x20) = FPU_F0;  // Store float            // 0x0019c554: swc1 $f0, 0x20($v0)
    v1 = *(int32_t*)((s2) + 0x4c);                              // 0x0019c558: lw $v1, 0x4c($s2)
    FPU_F1 = *(float*)((at) + 0x5474);  // Load float           // 0x0019c55c: lwc1 $f1, 0x5474($at)
    FPU_F0 = *(float*)((v1) + 0x24);  // Load float             // 0x0019c560: lwc1 $f0, 0x24($v1)
    at = 0x28 << 16;                                            // 0x0019c564: lui $at, 0x28
    /* FPU: mul.s $f0, $f1, $f0 */                              // 0x0019c568: mul.s $f0, $f1, $f0
    *(float*)((v0) + 0x24) = FPU_F0;  // Store float            // 0x0019c56c: swc1 $f0, 0x24($v0)
    v1 = *(int32_t*)((s2) + 0x4c);                              // 0x0019c570: lw $v1, 0x4c($s2)
    FPU_F1 = *(float*)((at) + 0x5478);  // Load float           // 0x0019c574: lwc1 $f1, 0x5478($at)
    FPU_F0 = *(float*)((v1) + 0x24);  // Load float             // 0x0019c578: lwc1 $f0, 0x24($v1)
    at = 0x28 << 16;                                            // 0x0019c57c: lui $at, 0x28
    /* FPU: mul.s $f0, $f1, $f0 */                              // 0x0019c580: mul.s $f0, $f1, $f0
    *(float*)((v0) + 0x28) = FPU_F0;  // Store float            // 0x0019c584: swc1 $f0, 0x28($v0)
    FPU_F0 = *(float*)((at) + 0x547c);  // Load float           // 0x0019c588: lwc1 $f0, 0x547c($at)
    *(float*)((v0) + 0x2c) = FPU_F0;  // Store float            // 0x0019c58c: swc1 $f0, 0x2c($v0)
    at = 0x28 << 16;                                            // 0x0019c590: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x5460);  // Load float           // 0x0019c594: lwc1 $f0, 0x5460($at)
    *(float*)((v0) + 0x30) = FPU_F0;  // Store float            // 0x0019c598: swc1 $f0, 0x30($v0)
    at = 0x28 << 16;                                            // 0x0019c59c: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x5464);  // Load float           // 0x0019c5a0: lwc1 $f0, 0x5464($at)
    *(float*)((v0) + 0x34) = FPU_F0;  // Store float            // 0x0019c5a4: swc1 $f0, 0x34($v0)
    at = 0x28 << 16;                                            // 0x0019c5a8: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x5468);  // Load float           // 0x0019c5ac: lwc1 $f0, 0x5468($at)
    *(float*)((v0) + 0x38) = FPU_F0;  // Store float            // 0x0019c5b0: swc1 $f0, 0x38($v0)
    at = 0x28 << 16;                                            // 0x0019c5b4: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x546c);  // Load float           // 0x0019c5b8: lwc1 $f0, 0x546c($at)
    func_00199320();  // 0x199240                                // 0x0019c5bc: jal 0x199240
    *(float*)((v0) + 0x3c) = FPU_F0;  // Store float            // 0x0019c5c0: swc1 $f0, 0x3c($v0)
    a2 = 0x28 << 16;                                            // 0x0019c5c4: lui $a2, 0x28
    a0 = v0 + 0x80;                                             // 0x0019c5c8: addiu $a0, $v0, 0x80
    func_00199240();  // 0x1991c0                                // 0x0019c5cc: jal 0x1991c0
    a2 = a2 + 0x5320;                                           // 0x0019c5d0: addiu $a2, $a2, 0x5320
    func_00199b40();  // 0x199b10                                // 0x0019c5d4: jal 0x199b10
    a0 = v0 + 0xc0;                                             // 0x0019c5d8: addiu $a0, $v0, 0xc0
    a3 = 0x28 << 16;                                            // 0x0019c5dc: lui $a3, 0x28
    a2 = v0 + 0xf0;                                             // 0x0019c5e0: addiu $a2, $v0, 0xf0
    a3 = a3 + 0x52e0;                                           // 0x0019c5e4: addiu $a3, $a3, 0x52e0
    a1 = 8;                                                     // 0x0019c5e8: addiu $a1, $zero, 8
label_0x19c5ec:
    a0 = g_002852e0;  // Global at 0x002852e0                   // 0x0019c5ec: lw $a0, 0($a3)
    a1 = a1 + -1;                                               // 0x0019c5f0: addiu $a1, $a1, -1
    v1 = g_002852e4;  // Global at 0x002852e4                   // 0x0019c5f4: lw $v1, 4($a3)
    g_00285320 = a0;  // Global at 0x00285320                   // 0x0019c5f8: sw $a0, 0($a2)
    a3 = a3 + 8;                                                // 0x0019c5fc: addiu $a3, $a3, 8
    g_00285324 = v1;  // Global at 0x00285324                   // 0x0019c600: sw $v1, 4($a2)
    if (a1 > 0) goto label_0x19c5ec;                            // 0x0019c604: bgtz $a1, 0x19c5ec
    a2 = a2 + 8;                                                // 0x0019c608: addiu $a2, $a2, 8
    v1 = 0x1500 << 16;                                          // 0x0019c60c: lui $v1, 0x1500
    v1 = s1 | v1;                                               // 0x0019c610: or $v1, $s1, $v1
    *(uint32_t*)((v0) + 0x130) = v1;                            // 0x0019c614: sw $v1, 0x130($v0)
    *(uint32_t*)((v0) + 0x134) = 0;                             // 0x0019c618: sw $zero, 0x134($v0)
    *(uint32_t*)((v0) + 0x138) = 0;                             // 0x0019c61c: sw $zero, 0x138($v0)
    *(uint32_t*)((v0) + 0x13c) = 0;                             // 0x0019c620: sw $zero, 0x13c($v0)
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x0019c628: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x0019c62c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0019c630: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0019c634: jr $ra
    sp = sp + 0x80;                                             // 0x0019c638: addiu $sp, $sp, 0x80
}