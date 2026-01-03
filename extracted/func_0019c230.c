void func_0019c230() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_4c, local_5c, local_6c;
    
    sp = sp + -0x70;                                            // 0x0019c230: addiu $sp, $sp, -0x70
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x0019c23c: addu.qb $zero, $sp, $s1
    a0 = 0xfa0;                                                 // 0x0019c250: addiu $a0, $zero, 0xfa0
    func_0018dc30();  // 18dc30                                // 0x0019c254: jal 0x18dc30
    a1 = 0x10;                                                  // 0x0019c258: addiu $a1, $zero, 0x10
    v1 = 0x2000 << 16;                                          // 0x0019c25c: lui $v1, 0x2000
    a3 = 0x28 << 16;                                            // 0x0019c260: lui $a3, 0x28
    a0 = v1 | 0xf9;                                             // 0x0019c264: ori $a0, $v1, 0xf9
    a2 = 0x1300 << 16;                                          // 0x0019c268: lui $a2, 0x1300
    *(uint32_t*)(v0) = a0;                                      // 0x0019c26c: sw $a0, 0($v0)
    v1 = 0x100 << 16;                                           // 0x0019c270: lui $v1, 0x100
    *(uint32_t*)((v0) + 4) = s0;                                // 0x0019c274: sw $s0, 4($v0)
    a1 = v1 | 0x404;                                            // 0x0019c278: ori $a1, $v1, 0x404
    v1 = 0x3f80 << 16;                                          // 0x0019c280: lui $v1, 0x3f80
    *(uint32_t*)((v0) + 0x10) = a2;                             // 0x0019c284: sw $a2, 0x10($v0)
    a0 = 0x6cf7 << 16;                                          // 0x0019c288: lui $a0, 0x6cf7
    *(uint32_t*)((v0) + 0x14) = 0;                              // 0x0019c28c: sw $zero, 0x14($v0)
    /* move to FPU: $v1, $f0 */                                 // 0x0019c290: mtc1 $v1, $f0
    *(uint32_t*)((v0) + 0x18) = a1;                             // 0x0019c294: sw $a1, 0x18($v0)
    at = 0x28 << 16;                                            // 0x0019c298: lui $at, 0x28
    *(uint32_t*)((v0) + 0x1c) = a0;                             // 0x0019c29c: sw $a0, 0x1c($v0)
    a3 = a3 + 0x5360;                                           // 0x0019c2a0: addiu $a3, $a3, 0x5360
    v1 = *(int32_t*)((s2) + 0x4c);                              // 0x0019c2a4: lw $v1, 0x4c($s2)
    FPU_F2 = *(float*)((at) + 0x5470);  // Load float           // 0x0019c2a8: lwc1 $f2, 0x5470($at)
    a2 = v0 + 0x40;                                             // 0x0019c2ac: addiu $a2, $v0, 0x40
    a1 = 8;                                                     // 0x0019c2b0: addiu $a1, $zero, 8
    FPU_F1 = *(float*)((v1) + 0x24);  // Load float             // 0x0019c2b4: lwc1 $f1, 0x24($v1)
    at = 0x28 << 16;                                            // 0x0019c2b8: lui $at, 0x28
    /* FPU: mul.s $f1, $f2, $f1 */                              // 0x0019c2bc: mul.s $f1, $f2, $f1
    *(float*)((v0) + 0x20) = FPU_F1;  // Store float            // 0x0019c2c0: swc1 $f1, 0x20($v0)
    v1 = *(int32_t*)((s2) + 0x4c);                              // 0x0019c2c4: lw $v1, 0x4c($s2)
    FPU_F2 = *(float*)((at) + 0x5474);  // Load float           // 0x0019c2c8: lwc1 $f2, 0x5474($at)
    FPU_F1 = *(float*)((v1) + 0x24);  // Load float             // 0x0019c2cc: lwc1 $f1, 0x24($v1)
    at = 0x28 << 16;                                            // 0x0019c2d0: lui $at, 0x28
    /* FPU: mul.s $f1, $f2, $f1 */                              // 0x0019c2d4: mul.s $f1, $f2, $f1
    *(float*)((v0) + 0x24) = FPU_F1;  // Store float            // 0x0019c2d8: swc1 $f1, 0x24($v0)
    v1 = *(int32_t*)((s2) + 0x4c);                              // 0x0019c2dc: lw $v1, 0x4c($s2)
    FPU_F2 = *(float*)((at) + 0x5478);  // Load float           // 0x0019c2e0: lwc1 $f2, 0x5478($at)
    FPU_F1 = *(float*)((v1) + 0x24);  // Load float             // 0x0019c2e4: lwc1 $f1, 0x24($v1)
    at = 0x28 << 16;                                            // 0x0019c2e8: lui $at, 0x28
    /* FPU: mul.s $f1, $f2, $f1 */                              // 0x0019c2ec: mul.s $f1, $f2, $f1
    *(float*)((v0) + 0x28) = FPU_F1;  // Store float            // 0x0019c2f0: swc1 $f1, 0x28($v0)
    FPU_F1 = *(float*)((at) + 0x547c);  // Load float           // 0x0019c2f4: lwc1 $f1, 0x547c($at)
    *(float*)((v0) + 0x2c) = FPU_F1;  // Store float            // 0x0019c2f8: swc1 $f1, 0x2c($v0)
    FPU_F1 = *(float*)((gp) + -0x6464);  // Load float          // 0x0019c2fc: lwc1 $f1, -0x6464($gp)
    *(float*)((v0) + 0x30) = FPU_F1;  // Store float            // 0x0019c300: swc1 $f1, 0x30($v0)
    FPU_F2 = *(float*)((gp) + -0x6464);  // Load float          // 0x0019c304: lwc1 $f2, -0x6464($gp)
    FPU_F1 = *(float*)((gp) + -0x6460);  // Load float          // 0x0019c308: lwc1 $f1, -0x6460($gp)
    /* FPU: sub.s $f1, $f2, $f1 */                              // 0x0019c30c: sub.s $f1, $f2, $f1
    /* FPU: div.s $f0, $f0, $f1 */                              // 0x0019c310: div.s $f0, $f0, $f1
    *(float*)((v0) + 0x34) = FPU_F0;  // Store float            // 0x0019c314: swc1 $f0, 0x34($v0)
    *(uint32_t*)((v0) + 0x38) = 0;                              // 0x0019c318: sw $zero, 0x38($v0)
    *(uint32_t*)((v0) + 0x3c) = 0;                              // 0x0019c31c: sw $zero, 0x3c($v0)
label_0x19c320:
    a0 = g_00285360;  // Global at 0x00285360                   // 0x0019c320: lw $a0, 0($a3)
    a1 = a1 + -1;                                               // 0x0019c324: addiu $a1, $a1, -1
    v1 = g_00285364;  // Global at 0x00285364                   // 0x0019c328: lw $v1, 4($a3)
    g_13000000 = a0;  // Global at 0x13000000                   // 0x0019c32c: sw $a0, 0($a2)
    a3 = a3 + 8;                                                // 0x0019c330: addiu $a3, $a3, 8
    g_13000004 = v1;  // Global at 0x13000004                   // 0x0019c334: sw $v1, 4($a2)
    if (a1 > 0) goto label_0x19c320;                            // 0x0019c338: bgtz $a1, 0x19c320
    a2 = a2 + 8;                                                // 0x0019c33c: addiu $a2, $a2, 8
    a3 = 0x28 << 16;                                            // 0x0019c340: lui $a3, 0x28
    a2 = v0 + 0x80;                                             // 0x0019c344: addiu $a2, $v0, 0x80
    a3 = a3 + 0x5320;                                           // 0x0019c348: addiu $a3, $a3, 0x5320
    a1 = 8;                                                     // 0x0019c34c: addiu $a1, $zero, 8
label_0x19c350:
    a0 = g_00285320;  // Global at 0x00285320                   // 0x0019c350: lw $a0, 0($a3)
    a1 = a1 + -1;                                               // 0x0019c354: addiu $a1, $a1, -1
    v1 = g_00285324;  // Global at 0x00285324                   // 0x0019c358: lw $v1, 4($a3)
    g_13000008 = a0;  // Global at 0x13000008                   // 0x0019c35c: sw $a0, 0($a2)
    a3 = a3 + 8;                                                // 0x0019c360: addiu $a3, $a3, 8
    g_1300000c = v1;  // Global at 0x1300000c                   // 0x0019c364: sw $v1, 4($a2)
    if (a1 > 0) goto label_0x19c350;                            // 0x0019c368: bgtz $a1, 0x19c350
    a2 = a2 + 8;                                                // 0x0019c36c: addiu $a2, $a2, 8
label_0x19c374:
    v1 = *(int32_t*)((s2) + 0x54);                              // 0x0019c374: lw $v1, 0x54($s2)
    a0 = 1;                                                     // 0x0019c378: addiu $a0, $zero, 1
    a0 = a0 << t0;                                              // 0x0019c37c: sllv $a0, $a0, $t0
    v1 = v1 & a0;                                               // 0x0019c380: and $v1, $v1, $a0
    if (v1 == 0) goto label_0x19c3c0;                           // 0x0019c384: beqz $v1, 0x19c3c0
    v1 = t0 << 1;                                               // 0x0019c388: sll $v1, $t0, 1
    at = 0x7000 << 16;                                          // 0x0019c38c: lui $at, 0x7000
    a0 = v1 + t0;                                               // 0x0019c390: addu $a0, $v1, $t0
    a2 = t0 << 6;                                               // 0x0019c394: sll $a2, $t0, 6
    v1 = v0 + a2;                                               // 0x0019c398: addu $v1, $v0, $a2
    at = at | 0x3700;                                           // 0x0019c39c: ori $at, $at, 0x3700
    a0 = a0 << 4;                                               // 0x0019c3a0: sll $a0, $a0, 4
    a1 = v1 + 0x190;                                            // 0x0019c3a4: addiu $a1, $v1, 0x190
    v1 = v0 + a0;                                               // 0x0019c3a8: addu $v1, $v0, $a0
    a2 = a2 + at;                                               // 0x0019c3ac: addu $a2, $a2, $at
    a0 = v1 + 0x990;                                            // 0x0019c3b0: addiu $a0, $v1, 0x990
    v1 = 0x7000 << 16;                                          // 0x0019c3b4: lui $v1, 0x7000
    func_00199320();  // 199320                                // 0x0019c3b8: jal 0x199320
    a3 = v1 | 0x3f40;                                           // 0x0019c3bc: ori $a3, $v1, 0x3f40
label_0x19c3c0:
    t0 = t0 + 1;                                                // 0x0019c3c0: addiu $t0, $t0, 1
    v1 = (t0 < 0x20) ? 1 : 0;                                   // 0x0019c3c4: slti $v1, $t0, 0x20
    if (v1 != 0) goto label_0x19c374;                           // 0x0019c3c8: bnez $v1, 0x19c374
    a0 = v0 + 0xc0;                                             // 0x0019c3cc: addiu $a0, $v0, 0xc0
    func_00199b10();  // 199b10                                // 0x0019c3d0: jal 0x199b10
    /* nop */                                                   // 0x0019c3d4: nop 
    at = 0x28 << 16;                                            // 0x0019c3d8: lui $at, 0x28
    v1 = 0x3f80 << 16;                                          // 0x0019c3dc: lui $v1, 0x3f80
    FPU_F1 = *(float*)((at) + 0x4854);  // Load float           // 0x0019c3e0: lwc1 $f1, 0x4854($at)
    local_4c = v1;                                              // 0x0019c3e4: sw $v1, 0x4c($sp)
    local_5c = v1;                                              // 0x0019c3e8: sw $v1, 0x5c($sp)
    a0 = v0 + 0xf0;                                             // 0x0019c3ec: addiu $a0, $v0, 0xf0
    local_6c = v1;                                              // 0x0019c3f0: sw $v1, 0x6c($sp)
    a1 = v0 + 0x120;                                            // 0x0019c3f4: addiu $a1, $v0, 0x120
    v1 = 0x7000 << 16;                                          // 0x0019c3f8: lui $v1, 0x7000
    a3 = sp + 0x40;                                             // 0x0019c3fc: addiu $a3, $sp, 0x40
    a2 = v1 | 0x3f40;                                           // 0x0019c400: ori $a2, $v1, 0x3f40
    at = 0x28 << 16;                                            // 0x0019c404: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x4858);  // Load float           // 0x0019c408: lwc1 $f0, 0x4858($at)
    /* FPU: neg.s $f1, $f1 */                                   // 0x0019c40c: neg.s $f1, $f1
    *(float*)((sp) + 0x40) = FPU_F1;  // Store float            // 0x0019c410: swc1 $f1, 0x40($sp)
    at = 0x28 << 16;                                            // 0x0019c414: lui $at, 0x28
    FPU_F4 = *(float*)((at) + 0x485c);  // Load float           // 0x0019c418: lwc1 $f4, 0x485c($at)
    /* FPU: neg.s $f5, $f0 */                                   // 0x0019c41c: neg.s $f5, $f0
    *(float*)((sp) + 0x44) = FPU_F5;  // Store float            // 0x0019c420: swc1 $f5, 0x44($sp)
    at = 0x28 << 16;                                            // 0x0019c424: lui $at, 0x28
    FPU_F3 = *(float*)((at) + 0x48c8);  // Load float           // 0x0019c428: lwc1 $f3, 0x48c8($at)
    /* FPU: neg.s $f4, $f4 */                                   // 0x0019c42c: neg.s $f4, $f4
    *(float*)((sp) + 0x48) = FPU_F4;  // Store float            // 0x0019c430: swc1 $f4, 0x48($sp)
    at = 0x28 << 16;                                            // 0x0019c434: lui $at, 0x28
    FPU_F2 = *(float*)((at) + 0x48cc);  // Load float           // 0x0019c438: lwc1 $f2, 0x48cc($at)
    *(float*)((sp) + 0x50) = FPU_F3;  // Store float            // 0x0019c43c: swc1 $f3, 0x50($sp)
    at = 0x28 << 16;                                            // 0x0019c440: lui $at, 0x28
    FPU_F1 = *(float*)((at) + 0x48d0);  // Load float           // 0x0019c444: lwc1 $f1, 0x48d0($at)
    *(float*)((sp) + 0x54) = FPU_F2;  // Store float            // 0x0019c448: swc1 $f2, 0x54($sp)
    at = 0x28 << 16;                                            // 0x0019c44c: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x4930);  // Load float           // 0x0019c450: lwc1 $f0, 0x4930($at)
    *(float*)((sp) + 0x58) = FPU_F1;  // Store float            // 0x0019c454: swc1 $f1, 0x58($sp)
    at = 0x28 << 16;                                            // 0x0019c458: lui $at, 0x28
    FPU_F1 = *(float*)((at) + 0x4934);  // Load float           // 0x0019c45c: lwc1 $f1, 0x4934($at)
    *(float*)((sp) + 0x60) = FPU_F0;  // Store float            // 0x0019c460: swc1 $f0, 0x60($sp)
    at = 0x28 << 16;                                            // 0x0019c464: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x4938);  // Load float           // 0x0019c468: lwc1 $f0, 0x4938($at)
    *(float*)((sp) + 0x64) = FPU_F1;  // Store float            // 0x0019c46c: swc1 $f1, 0x64($sp)
    func_001996b0();  // 1996b0                                // 0x0019c470: jal 0x1996b0
    *(float*)((sp) + 0x68) = FPU_F0;  // Store float            // 0x0019c474: swc1 $f0, 0x68($sp)
    v1 = *(int32_t*)((s2) + 0x4c);                              // 0x0019c478: lw $v1, 0x4c($s2)
    FPU_F12 = *(float*)((v1) + 0x24);  // Load float            // 0x0019c47c: lwc1 $f12, 0x24($v1)
    func_001998d0();  // 1998d0                                // 0x0019c480: jal 0x1998d0
    a0 = v0 + 0x130;                                            // 0x0019c484: addiu $a0, $v0, 0x130
    v1 = 0x1500 << 16;                                          // 0x0019c488: lui $v1, 0x1500
    v1 = s1 | v1;                                               // 0x0019c48c: or $v1, $s1, $v1
    *(uint32_t*)((v0) + 0xf90) = v1;                            // 0x0019c490: sw $v1, 0xf90($v0)
    *(uint32_t*)((v0) + 0xf94) = 0;                             // 0x0019c494: sw $zero, 0xf94($v0)
    *(uint32_t*)((v0) + 0xf98) = 0;                             // 0x0019c498: sw $zero, 0xf98($v0)
    *(uint32_t*)((v0) + 0xf9c) = 0;                             // 0x0019c49c: sw $zero, 0xf9c($v0)
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x0019c4a4: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x0019c4a8: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0019c4ac: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0019c4b0: jr $ra
    sp = sp + 0x70;                                             // 0x0019c4b4: addiu $sp, $sp, 0x70
}