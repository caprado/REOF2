void func_0019a440() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x80;                                            // 0x0019a440: addiu $sp, $sp, -0x80
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x0019a44c: addu.qb $zero, $sp, $s1
    a0 = 0x110;                                                 // 0x0019a460: addiu $a0, $zero, 0x110
    func_0018dca0();  // 0x18dc30                                // 0x0019a464: jal 0x18dc30
    a1 = 0x10;                                                  // 0x0019a468: addiu $a1, $zero, 0x10
    v1 = 0x2000 << 16;                                          // 0x0019a46c: lui $v1, 0x2000
    t0 = 0x28 << 16;                                            // 0x0019a470: lui $t0, 0x28
    a0 = v1 | 0x10;                                             // 0x0019a474: ori $a0, $v1, 0x10
    a1 = 0x1300 << 16;                                          // 0x0019a478: lui $a1, 0x1300
    *(uint32_t*)(v0) = a0;                                      // 0x0019a47c: sw $a0, 0($v0)
    v1 = 0x100 << 16;                                           // 0x0019a480: lui $v1, 0x100
    *(uint32_t*)((v0) + 4) = s0;                                // 0x0019a484: sw $s0, 4($v0)
    a2 = v1 | 0x404;                                            // 0x0019a488: ori $a2, $v1, 0x404
    a3 = 0x6c0e << 16;                                          // 0x0019a490: lui $a3, 0x6c0e
    *(uint32_t*)((v0) + 0x10) = a1;                             // 0x0019a494: sw $a1, 0x10($v0)
    v1 = 0x7000 << 16;                                          // 0x0019a498: lui $v1, 0x7000
    *(uint32_t*)((v0) + 0x14) = 0;                              // 0x0019a49c: sw $zero, 0x14($v0)
    at = 0x28 << 16;                                            // 0x0019a4a0: lui $at, 0x28
    *(uint32_t*)((v0) + 0x18) = a2;                             // 0x0019a4a4: sw $a2, 0x18($v0)
    a0 = v0 + 0x40;                                             // 0x0019a4a8: addiu $a0, $v0, 0x40
    *(uint32_t*)((v0) + 0x1c) = a3;                             // 0x0019a4ac: sw $a3, 0x1c($v0)
    a2 = v1 | 0x3700;                                           // 0x0019a4b0: ori $a2, $v1, 0x3700
    a3 = v1 | 0x3f40;                                           // 0x0019a4b4: ori $a3, $v1, 0x3f40
    a1 = sp + 0x40;                                             // 0x0019a4b8: addiu $a1, $sp, 0x40
    v1 = *(int32_t*)((s2) + 0x4c);                              // 0x0019a4bc: lw $v1, 0x4c($s2)
    FPU_F1 = *(float*)((at) + 0x5470);  // Load float           // 0x0019a4c0: lwc1 $f1, 0x5470($at)
    t0 = t0 + 0x5360;                                           // 0x0019a4c4: addiu $t0, $t0, 0x5360
    FPU_F0 = *(float*)((v1) + 0x24);  // Load float             // 0x0019a4c8: lwc1 $f0, 0x24($v1)
    at = 0x28 << 16;                                            // 0x0019a4cc: lui $at, 0x28
    /* FPU: mul.s $f0, $f1, $f0 */                              // 0x0019a4d0: mul.s $f0, $f1, $f0
    *(float*)((v0) + 0x20) = FPU_F0;  // Store float            // 0x0019a4d4: swc1 $f0, 0x20($v0)
    v1 = *(int32_t*)((s2) + 0x4c);                              // 0x0019a4d8: lw $v1, 0x4c($s2)
    FPU_F1 = *(float*)((at) + 0x5474);  // Load float           // 0x0019a4dc: lwc1 $f1, 0x5474($at)
    FPU_F0 = *(float*)((v1) + 0x24);  // Load float             // 0x0019a4e0: lwc1 $f0, 0x24($v1)
    at = 0x28 << 16;                                            // 0x0019a4e4: lui $at, 0x28
    /* FPU: mul.s $f0, $f1, $f0 */                              // 0x0019a4e8: mul.s $f0, $f1, $f0
    *(float*)((v0) + 0x24) = FPU_F0;  // Store float            // 0x0019a4ec: swc1 $f0, 0x24($v0)
    v1 = *(int32_t*)((s2) + 0x4c);                              // 0x0019a4f0: lw $v1, 0x4c($s2)
    FPU_F1 = *(float*)((at) + 0x5478);  // Load float           // 0x0019a4f4: lwc1 $f1, 0x5478($at)
    FPU_F0 = *(float*)((v1) + 0x24);  // Load float             // 0x0019a4f8: lwc1 $f0, 0x24($v1)
    at = 0x28 << 16;                                            // 0x0019a4fc: lui $at, 0x28
    /* FPU: mul.s $f0, $f1, $f0 */                              // 0x0019a500: mul.s $f0, $f1, $f0
    *(float*)((v0) + 0x28) = FPU_F0;  // Store float            // 0x0019a504: swc1 $f0, 0x28($v0)
    FPU_F0 = *(float*)((at) + 0x547c);  // Load float           // 0x0019a508: lwc1 $f0, 0x547c($at)
    *(float*)((v0) + 0x2c) = FPU_F0;  // Store float            // 0x0019a50c: swc1 $f0, 0x2c($v0)
    at = 0x28 << 16;                                            // 0x0019a510: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x5460);  // Load float           // 0x0019a514: lwc1 $f0, 0x5460($at)
    *(float*)((v0) + 0x30) = FPU_F0;  // Store float            // 0x0019a518: swc1 $f0, 0x30($v0)
    at = 0x28 << 16;                                            // 0x0019a51c: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x5464);  // Load float           // 0x0019a520: lwc1 $f0, 0x5464($at)
    *(float*)((v0) + 0x34) = FPU_F0;  // Store float            // 0x0019a524: swc1 $f0, 0x34($v0)
    at = 0x28 << 16;                                            // 0x0019a528: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x5468);  // Load float           // 0x0019a52c: lwc1 $f0, 0x5468($at)
    *(float*)((v0) + 0x38) = FPU_F0;  // Store float            // 0x0019a530: swc1 $f0, 0x38($v0)
    at = 0x28 << 16;                                            // 0x0019a534: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x546c);  // Load float           // 0x0019a538: lwc1 $f0, 0x546c($at)
    func_00199320();  // 0x199240                                // 0x0019a53c: jal 0x199240
    *(float*)((v0) + 0x3c) = FPU_F0;  // Store float            // 0x0019a540: swc1 $f0, 0x3c($v0)
    a2 = 0x28 << 16;                                            // 0x0019a544: lui $a2, 0x28
    a0 = v0 + 0x80;                                             // 0x0019a548: addiu $a0, $v0, 0x80
    func_00199240();  // 0x1991c0                                // 0x0019a54c: jal 0x1991c0
    a2 = a2 + 0x5320;                                           // 0x0019a550: addiu $a2, $a2, 0x5320
    func_00199b40();  // 0x199b10                                // 0x0019a554: jal 0x199b10
    a0 = v0 + 0xc0;                                             // 0x0019a558: addiu $a0, $v0, 0xc0
    FPU_F1 = *(float*)((gp) + -0x6464);  // Load float          // 0x0019a55c: lwc1 $f1, -0x6464($gp)
    v1 = 0x3f80 << 16;                                          // 0x0019a560: lui $v1, 0x3f80
    /* move to FPU: $v1, $f0 */                                 // 0x0019a564: mtc1 $v1, $f0
    v1 = 0x1500 << 16;                                          // 0x0019a568: lui $v1, 0x1500
    v1 = s1 | v1;                                               // 0x0019a56c: or $v1, $s1, $v1
    *(float*)((v0) + 0xf0) = FPU_F1;  // Store float            // 0x0019a570: swc1 $f1, 0xf0($v0)
    FPU_F2 = *(float*)((gp) + -0x6464);  // Load float          // 0x0019a574: lwc1 $f2, -0x6464($gp)
    FPU_F1 = *(float*)((gp) + -0x6460);  // Load float          // 0x0019a578: lwc1 $f1, -0x6460($gp)
    /* FPU: sub.s $f1, $f2, $f1 */                              // 0x0019a57c: sub.s $f1, $f2, $f1
    /* FPU: div.s $f0, $f0, $f1 */                              // 0x0019a580: div.s $f0, $f0, $f1
    *(float*)((v0) + 0xf4) = FPU_F0;  // Store float            // 0x0019a584: swc1 $f0, 0xf4($v0)
    *(uint32_t*)((v0) + 0xf8) = 0;                              // 0x0019a588: sw $zero, 0xf8($v0)
    *(uint32_t*)((v0) + 0xfc) = 0;                              // 0x0019a58c: sw $zero, 0xfc($v0)
    *(uint32_t*)((v0) + 0x100) = v1;                            // 0x0019a590: sw $v1, 0x100($v0)
    *(uint32_t*)((v0) + 0x104) = 0;                             // 0x0019a594: sw $zero, 0x104($v0)
    *(uint32_t*)((v0) + 0x108) = 0;                             // 0x0019a598: sw $zero, 0x108($v0)
    *(uint32_t*)((v0) + 0x10c) = 0;                             // 0x0019a59c: sw $zero, 0x10c($v0)
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x0019a5a4: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x0019a5a8: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0019a5ac: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0019a5b0: jr $ra
    sp = sp + 0x80;                                             // 0x0019a5b4: addiu $sp, $sp, 0x80
}