void func_0019b480() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_4c, local_5c, local_6c;
    
    sp = sp + -0x70;                                            // 0x0019b480: addiu $sp, $sp, -0x70
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x0019b48c: addu.qb $zero, $sp, $s1
    a0 = 0xf80;                                                 // 0x0019b4a0: addiu $a0, $zero, 0xf80
    func_0018dc30();  // 18dc30                                // 0x0019b4a4: jal 0x18dc30
    a1 = 0x10;                                                  // 0x0019b4a8: addiu $a1, $zero, 0x10
    v1 = 0x2000 << 16;                                          // 0x0019b4ac: lui $v1, 0x2000
    a3 = 0x28 << 16;                                            // 0x0019b4b0: lui $a3, 0x28
    a0 = v1 | 0xf7;                                             // 0x0019b4b4: ori $a0, $v1, 0xf7
    a2 = 0x1300 << 16;                                          // 0x0019b4b8: lui $a2, 0x1300
    *(uint32_t*)(v0) = a0;                                      // 0x0019b4bc: sw $a0, 0($v0)
    v1 = 0x100 << 16;                                           // 0x0019b4c0: lui $v1, 0x100
    *(uint32_t*)((v0) + 4) = s0;                                // 0x0019b4c4: sw $s0, 4($v0)
    a1 = v1 | 0x404;                                            // 0x0019b4c8: ori $a1, $v1, 0x404
    v1 = 0x3f80 << 16;                                          // 0x0019b4d0: lui $v1, 0x3f80
    *(uint32_t*)((v0) + 0x10) = a2;                             // 0x0019b4d4: sw $a2, 0x10($v0)
    a0 = 0x6cf5 << 16;                                          // 0x0019b4d8: lui $a0, 0x6cf5
    *(uint32_t*)((v0) + 0x14) = 0;                              // 0x0019b4dc: sw $zero, 0x14($v0)
    /* move to FPU: $v1, $f0 */                                 // 0x0019b4e0: mtc1 $v1, $f0
    *(uint32_t*)((v0) + 0x18) = a1;                             // 0x0019b4e4: sw $a1, 0x18($v0)
    at = 0x28 << 16;                                            // 0x0019b4e8: lui $at, 0x28
    *(uint32_t*)((v0) + 0x1c) = a0;                             // 0x0019b4ec: sw $a0, 0x1c($v0)
    a3 = a3 + 0x5360;                                           // 0x0019b4f0: addiu $a3, $a3, 0x5360
    v1 = *(int32_t*)((s2) + 0x4c);                              // 0x0019b4f4: lw $v1, 0x4c($s2)
    FPU_F2 = *(float*)((at) + 0x5470);  // Load float           // 0x0019b4f8: lwc1 $f2, 0x5470($at)
    a2 = v0 + 0x50;                                             // 0x0019b4fc: addiu $a2, $v0, 0x50
    a1 = 8;                                                     // 0x0019b500: addiu $a1, $zero, 8
    FPU_F1 = *(float*)((v1) + 0x24);  // Load float             // 0x0019b504: lwc1 $f1, 0x24($v1)
    at = 0x28 << 16;                                            // 0x0019b508: lui $at, 0x28
    /* FPU: mul.s $f1, $f2, $f1 */                              // 0x0019b50c: mul.s $f1, $f2, $f1
    *(float*)((v0) + 0x20) = FPU_F1;  // Store float            // 0x0019b510: swc1 $f1, 0x20($v0)
    v1 = *(int32_t*)((s2) + 0x4c);                              // 0x0019b514: lw $v1, 0x4c($s2)
    FPU_F2 = *(float*)((at) + 0x5474);  // Load float           // 0x0019b518: lwc1 $f2, 0x5474($at)
    FPU_F1 = *(float*)((v1) + 0x24);  // Load float             // 0x0019b51c: lwc1 $f1, 0x24($v1)
    at = 0x28 << 16;                                            // 0x0019b520: lui $at, 0x28
    /* FPU: mul.s $f1, $f2, $f1 */                              // 0x0019b524: mul.s $f1, $f2, $f1
    *(float*)((v0) + 0x24) = FPU_F1;  // Store float            // 0x0019b528: swc1 $f1, 0x24($v0)
    v1 = *(int32_t*)((s2) + 0x4c);                              // 0x0019b52c: lw $v1, 0x4c($s2)
    FPU_F2 = *(float*)((at) + 0x5478);  // Load float           // 0x0019b530: lwc1 $f2, 0x5478($at)
    FPU_F1 = *(float*)((v1) + 0x24);  // Load float             // 0x0019b534: lwc1 $f1, 0x24($v1)
    at = 0x28 << 16;                                            // 0x0019b538: lui $at, 0x28
    /* FPU: mul.s $f1, $f2, $f1 */                              // 0x0019b53c: mul.s $f1, $f2, $f1
    *(float*)((v0) + 0x28) = FPU_F1;  // Store float            // 0x0019b540: swc1 $f1, 0x28($v0)
    FPU_F1 = *(float*)((at) + 0x547c);  // Load float           // 0x0019b544: lwc1 $f1, 0x547c($at)
    *(float*)((v0) + 0x2c) = FPU_F1;  // Store float            // 0x0019b548: swc1 $f1, 0x2c($v0)
    at = 0x28 << 16;                                            // 0x0019b54c: lui $at, 0x28
    FPU_F1 = *(float*)((at) + 0x5460);  // Load float           // 0x0019b550: lwc1 $f1, 0x5460($at)
    *(float*)((v0) + 0x30) = FPU_F1;  // Store float            // 0x0019b554: swc1 $f1, 0x30($v0)
    at = 0x28 << 16;                                            // 0x0019b558: lui $at, 0x28
    FPU_F1 = *(float*)((at) + 0x5464);  // Load float           // 0x0019b55c: lwc1 $f1, 0x5464($at)
    *(float*)((v0) + 0x34) = FPU_F1;  // Store float            // 0x0019b560: swc1 $f1, 0x34($v0)
    at = 0x28 << 16;                                            // 0x0019b564: lui $at, 0x28
    FPU_F1 = *(float*)((at) + 0x5468);  // Load float           // 0x0019b568: lwc1 $f1, 0x5468($at)
    *(float*)((v0) + 0x38) = FPU_F1;  // Store float            // 0x0019b56c: swc1 $f1, 0x38($v0)
    at = 0x28 << 16;                                            // 0x0019b570: lui $at, 0x28
    FPU_F1 = *(float*)((at) + 0x546c);  // Load float           // 0x0019b574: lwc1 $f1, 0x546c($at)
    *(float*)((v0) + 0x3c) = FPU_F1;  // Store float            // 0x0019b578: swc1 $f1, 0x3c($v0)
    FPU_F1 = *(float*)((gp) + -0x6464);  // Load float          // 0x0019b57c: lwc1 $f1, -0x6464($gp)
    *(float*)((v0) + 0x40) = FPU_F1;  // Store float            // 0x0019b580: swc1 $f1, 0x40($v0)
    FPU_F2 = *(float*)((gp) + -0x6464);  // Load float          // 0x0019b584: lwc1 $f2, -0x6464($gp)
    FPU_F1 = *(float*)((gp) + -0x6460);  // Load float          // 0x0019b588: lwc1 $f1, -0x6460($gp)
    /* FPU: sub.s $f1, $f2, $f1 */                              // 0x0019b58c: sub.s $f1, $f2, $f1
    /* FPU: div.s $f0, $f0, $f1 */                              // 0x0019b590: div.s $f0, $f0, $f1
    *(float*)((v0) + 0x44) = FPU_F0;  // Store float            // 0x0019b594: swc1 $f0, 0x44($v0)
    *(uint32_t*)((v0) + 0x48) = 0;                              // 0x0019b598: sw $zero, 0x48($v0)
    *(uint32_t*)((v0) + 0x4c) = 0;                              // 0x0019b59c: sw $zero, 0x4c($v0)
label_0x19b5a0:
    a0 = g_00285360;  // Global at 0x00285360                   // 0x0019b5a0: lw $a0, 0($a3)
    a1 = a1 + -1;                                               // 0x0019b5a4: addiu $a1, $a1, -1
    v1 = g_00285364;  // Global at 0x00285364                   // 0x0019b5a8: lw $v1, 4($a3)
    g_13000000 = a0;  // Global at 0x13000000                   // 0x0019b5ac: sw $a0, 0($a2)
    a3 = a3 + 8;                                                // 0x0019b5b0: addiu $a3, $a3, 8
    g_13000004 = v1;  // Global at 0x13000004                   // 0x0019b5b4: sw $v1, 4($a2)
    if (a1 > 0) goto label_0x19b5a0;                            // 0x0019b5b8: bgtz $a1, 0x19b5a0
    a2 = a2 + 8;                                                // 0x0019b5bc: addiu $a2, $a2, 8
    a3 = 0x28 << 16;                                            // 0x0019b5c0: lui $a3, 0x28
    a2 = v0 + 0x90;                                             // 0x0019b5c4: addiu $a2, $v0, 0x90
    a3 = a3 + 0x5320;                                           // 0x0019b5c8: addiu $a3, $a3, 0x5320
    a1 = 8;                                                     // 0x0019b5cc: addiu $a1, $zero, 8
label_0x19b5d0:
    a0 = g_00285320;  // Global at 0x00285320                   // 0x0019b5d0: lw $a0, 0($a3)
    a1 = a1 + -1;                                               // 0x0019b5d4: addiu $a1, $a1, -1
    v1 = g_00285324;  // Global at 0x00285324                   // 0x0019b5d8: lw $v1, 4($a3)
    g_13000008 = a0;  // Global at 0x13000008                   // 0x0019b5dc: sw $a0, 0($a2)
    a3 = a3 + 8;                                                // 0x0019b5e0: addiu $a3, $a3, 8
    g_1300000c = v1;  // Global at 0x1300000c                   // 0x0019b5e4: sw $v1, 4($a2)
    if (a1 > 0) goto label_0x19b5d0;                            // 0x0019b5e8: bgtz $a1, 0x19b5d0
    a2 = a2 + 8;                                                // 0x0019b5ec: addiu $a2, $a2, 8
label_0x19b5f4:
    v1 = *(int32_t*)((s2) + 0x54);                              // 0x0019b5f4: lw $v1, 0x54($s2)
    a0 = 1;                                                     // 0x0019b5f8: addiu $a0, $zero, 1
    a0 = a0 << t0;                                              // 0x0019b5fc: sllv $a0, $a0, $t0
    v1 = v1 & a0;                                               // 0x0019b600: and $v1, $v1, $a0
    if (v1 == 0) goto label_0x19b640;                           // 0x0019b604: beqz $v1, 0x19b640
    v1 = t0 << 1;                                               // 0x0019b608: sll $v1, $t0, 1
    at = 0x7000 << 16;                                          // 0x0019b60c: lui $at, 0x7000
    a0 = v1 + t0;                                               // 0x0019b610: addu $a0, $v1, $t0
    a2 = t0 << 6;                                               // 0x0019b614: sll $a2, $t0, 6
    v1 = v0 + a2;                                               // 0x0019b618: addu $v1, $v0, $a2
    at = at | 0x3700;                                           // 0x0019b61c: ori $at, $at, 0x3700
    a0 = a0 << 4;                                               // 0x0019b620: sll $a0, $a0, 4
    a1 = v1 + 0x170;                                            // 0x0019b624: addiu $a1, $v1, 0x170
    v1 = v0 + a0;                                               // 0x0019b628: addu $v1, $v0, $a0
    a2 = a2 + at;                                               // 0x0019b62c: addu $a2, $a2, $at
    a0 = v1 + 0x970;                                            // 0x0019b630: addiu $a0, $v1, 0x970
    v1 = 0x7000 << 16;                                          // 0x0019b634: lui $v1, 0x7000
    func_00199320();  // 199320                                // 0x0019b638: jal 0x199320
    a3 = v1 | 0x3f40;                                           // 0x0019b63c: ori $a3, $v1, 0x3f40
label_0x19b640:
    t0 = t0 + 1;                                                // 0x0019b640: addiu $t0, $t0, 1
    v1 = (t0 < 0x20) ? 1 : 0;                                   // 0x0019b644: slti $v1, $t0, 0x20
    if (v1 != 0) goto label_0x19b5f4;                           // 0x0019b648: bnez $v1, 0x19b5f4
    at = 0x28 << 16;                                            // 0x0019b64c: lui $at, 0x28
    v1 = 0x3f80 << 16;                                          // 0x0019b650: lui $v1, 0x3f80
    FPU_F1 = *(float*)((at) + 0x4854);  // Load float           // 0x0019b654: lwc1 $f1, 0x4854($at)
    local_4c = v1;                                              // 0x0019b658: sw $v1, 0x4c($sp)
    local_5c = v1;                                              // 0x0019b65c: sw $v1, 0x5c($sp)
    a0 = v0 + 0xd0;                                             // 0x0019b660: addiu $a0, $v0, 0xd0
    local_6c = v1;                                              // 0x0019b664: sw $v1, 0x6c($sp)
    a1 = v0 + 0x100;                                            // 0x0019b668: addiu $a1, $v0, 0x100
    v1 = 0x7000 << 16;                                          // 0x0019b66c: lui $v1, 0x7000
    a3 = sp + 0x40;                                             // 0x0019b670: addiu $a3, $sp, 0x40
    a2 = v1 | 0x3f40;                                           // 0x0019b674: ori $a2, $v1, 0x3f40
    at = 0x28 << 16;                                            // 0x0019b678: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x4858);  // Load float           // 0x0019b67c: lwc1 $f0, 0x4858($at)
    /* FPU: neg.s $f1, $f1 */                                   // 0x0019b680: neg.s $f1, $f1
    *(float*)((sp) + 0x40) = FPU_F1;  // Store float            // 0x0019b684: swc1 $f1, 0x40($sp)
    at = 0x28 << 16;                                            // 0x0019b688: lui $at, 0x28
    FPU_F4 = *(float*)((at) + 0x485c);  // Load float           // 0x0019b68c: lwc1 $f4, 0x485c($at)
    /* FPU: neg.s $f5, $f0 */                                   // 0x0019b690: neg.s $f5, $f0
    *(float*)((sp) + 0x44) = FPU_F5;  // Store float            // 0x0019b694: swc1 $f5, 0x44($sp)
    at = 0x28 << 16;                                            // 0x0019b698: lui $at, 0x28
    FPU_F3 = *(float*)((at) + 0x48c8);  // Load float           // 0x0019b69c: lwc1 $f3, 0x48c8($at)
    /* FPU: neg.s $f4, $f4 */                                   // 0x0019b6a0: neg.s $f4, $f4
    *(float*)((sp) + 0x48) = FPU_F4;  // Store float            // 0x0019b6a4: swc1 $f4, 0x48($sp)
    at = 0x28 << 16;                                            // 0x0019b6a8: lui $at, 0x28
    FPU_F2 = *(float*)((at) + 0x48cc);  // Load float           // 0x0019b6ac: lwc1 $f2, 0x48cc($at)
    *(float*)((sp) + 0x50) = FPU_F3;  // Store float            // 0x0019b6b0: swc1 $f3, 0x50($sp)
    at = 0x28 << 16;                                            // 0x0019b6b4: lui $at, 0x28
    FPU_F1 = *(float*)((at) + 0x48d0);  // Load float           // 0x0019b6b8: lwc1 $f1, 0x48d0($at)
    *(float*)((sp) + 0x54) = FPU_F2;  // Store float            // 0x0019b6bc: swc1 $f2, 0x54($sp)
    at = 0x28 << 16;                                            // 0x0019b6c0: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x4930);  // Load float           // 0x0019b6c4: lwc1 $f0, 0x4930($at)
    *(float*)((sp) + 0x58) = FPU_F1;  // Store float            // 0x0019b6c8: swc1 $f1, 0x58($sp)
    at = 0x28 << 16;                                            // 0x0019b6cc: lui $at, 0x28
    FPU_F1 = *(float*)((at) + 0x4934);  // Load float           // 0x0019b6d0: lwc1 $f1, 0x4934($at)
    *(float*)((sp) + 0x60) = FPU_F0;  // Store float            // 0x0019b6d4: swc1 $f0, 0x60($sp)
    at = 0x28 << 16;                                            // 0x0019b6d8: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x4938);  // Load float           // 0x0019b6dc: lwc1 $f0, 0x4938($at)
    *(float*)((sp) + 0x64) = FPU_F1;  // Store float            // 0x0019b6e0: swc1 $f1, 0x64($sp)
    func_001996b0();  // 1996b0                                // 0x0019b6e4: jal 0x1996b0
    *(float*)((sp) + 0x68) = FPU_F0;  // Store float            // 0x0019b6e8: swc1 $f0, 0x68($sp)
    v1 = *(int32_t*)((s2) + 0x4c);                              // 0x0019b6ec: lw $v1, 0x4c($s2)
    FPU_F12 = *(float*)((v1) + 0x24);  // Load float            // 0x0019b6f0: lwc1 $f12, 0x24($v1)
    func_001998d0();  // 1998d0                                // 0x0019b6f4: jal 0x1998d0
    a0 = v0 + 0x110;                                            // 0x0019b6f8: addiu $a0, $v0, 0x110
    v1 = 0x1500 << 16;                                          // 0x0019b6fc: lui $v1, 0x1500
    v1 = s1 | v1;                                               // 0x0019b700: or $v1, $s1, $v1
    *(uint32_t*)((v0) + 0xf70) = v1;                            // 0x0019b704: sw $v1, 0xf70($v0)
    *(uint32_t*)((v0) + 0xf74) = 0;                             // 0x0019b708: sw $zero, 0xf74($v0)
    *(uint32_t*)((v0) + 0xf78) = 0;                             // 0x0019b70c: sw $zero, 0xf78($v0)
    *(uint32_t*)((v0) + 0xf7c) = 0;                             // 0x0019b710: sw $zero, 0xf7c($v0)
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x0019b718: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x0019b71c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0019b720: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0019b724: jr $ra
    sp = sp + 0x70;                                             // 0x0019b728: addiu $sp, $sp, 0x70
}