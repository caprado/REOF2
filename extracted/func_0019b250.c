void func_0019b250() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_5c, local_6c, local_7c;
    
    sp = sp + -0xc0;                                            // 0x0019b250: addiu $sp, $sp, -0xc0
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x0019b258: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x0019b264: addu.qb $zero, $sp, $s1
    a0 = 0x180;                                                 // 0x0019b270: addiu $a0, $zero, 0x180
    a1 = 0x10;                                                  // 0x0019b274: addiu $a1, $zero, 0x10
    func_0018dca0();  // 0x18dc30                                // 0x0019b278: jal 0x18dc30
    v1 = 0x2000 << 16;                                          // 0x0019b280: lui $v1, 0x2000
    t0 = 0x28 << 16;                                            // 0x0019b284: lui $t0, 0x28
    v1 = v1 | 0x17;                                             // 0x0019b288: ori $v1, $v1, 0x17
    a2 = 0x1300 << 16;                                          // 0x0019b28c: lui $a2, 0x1300
    g_70000000 = v1;  // Global at 0x70000000                   // 0x0019b290: sw $v1, 0($v0)
    a1 = 0x6c15 << 16;                                          // 0x0019b294: lui $a1, 0x6c15
    g_70000004 = s1;  // Global at 0x70000004                   // 0x0019b298: sw $s1, 4($v0)
    v1 = 0x100 << 16;                                           // 0x0019b29c: lui $v1, 0x100
    a0 = v1 | 0x404;                                            // 0x0019b2a4: ori $a0, $v1, 0x404
    g_70000010 = a2;  // Global at 0x70000010                   // 0x0019b2a8: sw $a2, 0x10($v0)
    v1 = 0x3f80 << 16;                                          // 0x0019b2ac: lui $v1, 0x3f80
    g_70000014 = 0;  // Global at 0x70000014                    // 0x0019b2b0: sw $zero, 0x14($v0)
    /* move to FPU: $v1, $f0 */                                 // 0x0019b2b4: mtc1 $v1, $f0
    g_70000018 = a0;  // Global at 0x70000018                   // 0x0019b2b8: sw $a0, 0x18($v0)
    g_7000001c = a1;  // Global at 0x7000001c                   // 0x0019b2c0: sw $a1, 0x1c($v0)
    v1 = 0x7000 << 16;                                          // 0x0019b2c4: lui $v1, 0x7000
    t1 = *(int32_t*)((s3) + 0x4c);                              // 0x0019b2c8: lw $t1, 0x4c($s3)
    at = 0x28 << 16;                                            // 0x0019b2cc: lui $at, 0x28
    FPU_F2 = *(float*)((at) + 0x5470);  // Load float           // 0x0019b2d0: lwc1 $f2, 0x5470($at)
    a2 = v1 | 0x3700;                                           // 0x0019b2d4: ori $a2, $v1, 0x3700
    a3 = v1 | 0x3f40;                                           // 0x0019b2d8: ori $a3, $v1, 0x3f40
    a0 = s0 + 0x50;                                             // 0x0019b2dc: addiu $a0, $s0, 0x50
    a1 = sp + 0x80;                                             // 0x0019b2e0: addiu $a1, $sp, 0x80
    t0 = t0 + 0x5360;                                           // 0x0019b2e4: addiu $t0, $t0, 0x5360
    FPU_F1 = *(float*)((t1) + 0x24);  // Load float             // 0x0019b2e8: lwc1 $f1, 0x24($t1)
    at = 0x28 << 16;                                            // 0x0019b2ec: lui $at, 0x28
    /* FPU: mul.s $f1, $f2, $f1 */                              // 0x0019b2f0: mul.s $f1, $f2, $f1
    *(float*)((v0) + 0x20) = FPU_F1;  // Store float            // 0x0019b2f4: swc1 $f1, 0x20($v0)
    v1 = *(int32_t*)((s3) + 0x4c);                              // 0x0019b2f8: lw $v1, 0x4c($s3)
    FPU_F2 = *(float*)((at) + 0x5474);  // Load float           // 0x0019b2fc: lwc1 $f2, 0x5474($at)
    FPU_F1 = *(float*)((v1) + 0x24);  // Load float             // 0x0019b300: lwc1 $f1, 0x24($v1)
    at = 0x28 << 16;                                            // 0x0019b304: lui $at, 0x28
    /* FPU: mul.s $f1, $f2, $f1 */                              // 0x0019b308: mul.s $f1, $f2, $f1
    *(float*)((v0) + 0x24) = FPU_F1;  // Store float            // 0x0019b30c: swc1 $f1, 0x24($v0)
    v1 = *(int32_t*)((s3) + 0x4c);                              // 0x0019b310: lw $v1, 0x4c($s3)
    FPU_F2 = *(float*)((at) + 0x5478);  // Load float           // 0x0019b314: lwc1 $f2, 0x5478($at)
    FPU_F1 = *(float*)((v1) + 0x24);  // Load float             // 0x0019b318: lwc1 $f1, 0x24($v1)
    at = 0x28 << 16;                                            // 0x0019b31c: lui $at, 0x28
    /* FPU: mul.s $f1, $f2, $f1 */                              // 0x0019b320: mul.s $f1, $f2, $f1
    *(float*)((v0) + 0x28) = FPU_F1;  // Store float            // 0x0019b324: swc1 $f1, 0x28($v0)
    FPU_F1 = *(float*)((at) + 0x547c);  // Load float           // 0x0019b328: lwc1 $f1, 0x547c($at)
    *(float*)((v0) + 0x2c) = FPU_F1;  // Store float            // 0x0019b32c: swc1 $f1, 0x2c($v0)
    at = 0x28 << 16;                                            // 0x0019b330: lui $at, 0x28
    FPU_F1 = *(float*)((at) + 0x5460);  // Load float           // 0x0019b334: lwc1 $f1, 0x5460($at)
    *(float*)((v0) + 0x30) = FPU_F1;  // Store float            // 0x0019b338: swc1 $f1, 0x30($v0)
    at = 0x28 << 16;                                            // 0x0019b33c: lui $at, 0x28
    FPU_F1 = *(float*)((at) + 0x5464);  // Load float           // 0x0019b340: lwc1 $f1, 0x5464($at)
    *(float*)((v0) + 0x34) = FPU_F1;  // Store float            // 0x0019b344: swc1 $f1, 0x34($v0)
    at = 0x28 << 16;                                            // 0x0019b348: lui $at, 0x28
    FPU_F1 = *(float*)((at) + 0x5468);  // Load float           // 0x0019b34c: lwc1 $f1, 0x5468($at)
    *(float*)((v0) + 0x38) = FPU_F1;  // Store float            // 0x0019b350: swc1 $f1, 0x38($v0)
    at = 0x28 << 16;                                            // 0x0019b354: lui $at, 0x28
    FPU_F1 = *(float*)((at) + 0x546c);  // Load float           // 0x0019b358: lwc1 $f1, 0x546c($at)
    *(float*)((v0) + 0x3c) = FPU_F1;  // Store float            // 0x0019b35c: swc1 $f1, 0x3c($v0)
    FPU_F1 = *(float*)((gp) + -0x6464);  // Load float          // 0x0019b360: lwc1 $f1, -0x6464($gp)
    *(float*)((v0) + 0x40) = FPU_F1;  // Store float            // 0x0019b364: swc1 $f1, 0x40($v0)
    FPU_F2 = *(float*)((gp) + -0x6464);  // Load float          // 0x0019b368: lwc1 $f2, -0x6464($gp)
    FPU_F1 = *(float*)((gp) + -0x6460);  // Load float          // 0x0019b36c: lwc1 $f1, -0x6460($gp)
    /* FPU: sub.s $f1, $f2, $f1 */                              // 0x0019b370: sub.s $f1, $f2, $f1
    /* FPU: div.s $f0, $f0, $f1 */                              // 0x0019b374: div.s $f0, $f0, $f1
    *(float*)((v0) + 0x44) = FPU_F0;  // Store float            // 0x0019b378: swc1 $f0, 0x44($v0)
    g_70000048 = 0;  // Global at 0x70000048                    // 0x0019b37c: sw $zero, 0x48($v0)
    func_00199320();  // 0x199240                                // 0x0019b380: jal 0x199240
    g_7000004c = 0;  // Global at 0x7000004c                    // 0x0019b384: sw $zero, 0x4c($v0)
    a2 = 0x28 << 16;                                            // 0x0019b388: lui $a2, 0x28
    a0 = s0 + 0x90;                                             // 0x0019b38c: addiu $a0, $s0, 0x90
    func_00199240();  // 0x1991c0                                // 0x0019b390: jal 0x1991c0
    a2 = a2 + 0x5320;                                           // 0x0019b394: addiu $a2, $a2, 0x5320
    at = 0x28 << 16;                                            // 0x0019b398: lui $at, 0x28
    v0 = 0x3f80 << 16;                                          // 0x0019b39c: lui $v0, 0x3f80
    FPU_F1 = *(float*)((at) + 0x4854);  // Load float           // 0x0019b3a0: lwc1 $f1, 0x4854($at)
    local_5c = v0;                                              // 0x0019b3a4: sw $v0, 0x5c($sp)
    local_6c = v0;                                              // 0x0019b3a8: sw $v0, 0x6c($sp)
    a0 = s0 + 0xd0;                                             // 0x0019b3ac: addiu $a0, $s0, 0xd0
    local_7c = v0;                                              // 0x0019b3b0: sw $v0, 0x7c($sp)
    a1 = s0 + 0x100;                                            // 0x0019b3b4: addiu $a1, $s0, 0x100
    v0 = 0x7000 << 16;                                          // 0x0019b3b8: lui $v0, 0x7000
    a3 = sp + 0x50;                                             // 0x0019b3bc: addiu $a3, $sp, 0x50
    a2 = v0 | 0x3700;                                           // 0x0019b3c0: ori $a2, $v0, 0x3700
    at = 0x28 << 16;                                            // 0x0019b3c4: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x4858);  // Load float           // 0x0019b3c8: lwc1 $f0, 0x4858($at)
    /* FPU: neg.s $f1, $f1 */                                   // 0x0019b3cc: neg.s $f1, $f1
    *(float*)((sp) + 0x50) = FPU_F1;  // Store float            // 0x0019b3d0: swc1 $f1, 0x50($sp)
    at = 0x28 << 16;                                            // 0x0019b3d4: lui $at, 0x28
    FPU_F4 = *(float*)((at) + 0x485c);  // Load float           // 0x0019b3d8: lwc1 $f4, 0x485c($at)
    /* FPU: neg.s $f5, $f0 */                                   // 0x0019b3dc: neg.s $f5, $f0
    *(float*)((sp) + 0x54) = FPU_F5;  // Store float            // 0x0019b3e0: swc1 $f5, 0x54($sp)
    at = 0x28 << 16;                                            // 0x0019b3e4: lui $at, 0x28
    FPU_F3 = *(float*)((at) + 0x48c8);  // Load float           // 0x0019b3e8: lwc1 $f3, 0x48c8($at)
    /* FPU: neg.s $f4, $f4 */                                   // 0x0019b3ec: neg.s $f4, $f4
    *(float*)((sp) + 0x58) = FPU_F4;  // Store float            // 0x0019b3f0: swc1 $f4, 0x58($sp)
    at = 0x28 << 16;                                            // 0x0019b3f4: lui $at, 0x28
    FPU_F2 = *(float*)((at) + 0x48cc);  // Load float           // 0x0019b3f8: lwc1 $f2, 0x48cc($at)
    *(float*)((sp) + 0x60) = FPU_F3;  // Store float            // 0x0019b3fc: swc1 $f3, 0x60($sp)
    at = 0x28 << 16;                                            // 0x0019b400: lui $at, 0x28
    FPU_F1 = *(float*)((at) + 0x48d0);  // Load float           // 0x0019b404: lwc1 $f1, 0x48d0($at)
    *(float*)((sp) + 0x64) = FPU_F2;  // Store float            // 0x0019b408: swc1 $f2, 0x64($sp)
    at = 0x28 << 16;                                            // 0x0019b40c: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x4930);  // Load float           // 0x0019b410: lwc1 $f0, 0x4930($at)
    *(float*)((sp) + 0x68) = FPU_F1;  // Store float            // 0x0019b414: swc1 $f1, 0x68($sp)
    at = 0x28 << 16;                                            // 0x0019b418: lui $at, 0x28
    FPU_F1 = *(float*)((at) + 0x4934);  // Load float           // 0x0019b41c: lwc1 $f1, 0x4934($at)
    *(float*)((sp) + 0x70) = FPU_F0;  // Store float            // 0x0019b420: swc1 $f0, 0x70($sp)
    at = 0x28 << 16;                                            // 0x0019b424: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x4938);  // Load float           // 0x0019b428: lwc1 $f0, 0x4938($at)
    *(float*)((sp) + 0x74) = FPU_F1;  // Store float            // 0x0019b42c: swc1 $f1, 0x74($sp)
    func_001996b0();  // 0x199580                                // 0x0019b430: jal 0x199580
    *(float*)((sp) + 0x78) = FPU_F0;  // Store float            // 0x0019b434: swc1 $f0, 0x78($sp)
    v0 = *(int32_t*)((s3) + 0x4c);                              // 0x0019b438: lw $v0, 0x4c($s3)
    FPU_F12 = *(float*)((v0) + 0x24);  // Load float            // 0x0019b43c: lwc1 $f12, 0x24($v0)
    func_00199a60();  // 0x1998d0                                // 0x0019b440: jal 0x1998d0
    a0 = s0 + 0x110;                                            // 0x0019b444: addiu $a0, $s0, 0x110
    v1 = 0x1500 << 16;                                          // 0x0019b448: lui $v1, 0x1500
    v1 = s2 | v1;                                               // 0x0019b450: or $v1, $s2, $v1
    *(uint32_t*)((s0) + 0x170) = v1;                            // 0x0019b454: sw $v1, 0x170($s0)
    *(uint32_t*)((s0) + 0x174) = 0;                             // 0x0019b458: sw $zero, 0x174($s0)
    *(uint32_t*)((s0) + 0x178) = 0;                             // 0x0019b45c: sw $zero, 0x178($s0)
    *(uint32_t*)((s0) + 0x17c) = 0;                             // 0x0019b460: sw $zero, 0x17c($s0)
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x0019b46c: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x0019b470: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0019b474: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0019b478: jr $ra
    sp = sp + 0xc0;                                             // 0x0019b47c: addiu $sp, $sp, 0xc0
}