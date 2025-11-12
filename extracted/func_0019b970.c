void func_0019b970() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_4c, local_5c, local_6c;
    
    sp = sp + -0x70;                                            // 0x0019b970: addiu $sp, $sp, -0x70
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x0019b97c: addu.qb $zero, $sp, $s1
    a0 = 0xfb0;                                                 // 0x0019b990: addiu $a0, $zero, 0xfb0
    func_0018dca0();  // 0x18dc30                                // 0x0019b994: jal 0x18dc30
    a1 = 0x10;                                                  // 0x0019b998: addiu $a1, $zero, 0x10
    v1 = 0x2000 << 16;                                          // 0x0019b99c: lui $v1, 0x2000
    a3 = 0x28 << 16;                                            // 0x0019b9a0: lui $a3, 0x28
    a0 = v1 | 0xfa;                                             // 0x0019b9a4: ori $a0, $v1, 0xfa
    a2 = 0x1300 << 16;                                          // 0x0019b9a8: lui $a2, 0x1300
    *(uint32_t*)(v0) = a0;                                      // 0x0019b9ac: sw $a0, 0($v0)
    v1 = 0x100 << 16;                                           // 0x0019b9b0: lui $v1, 0x100
    *(uint32_t*)((v0) + 4) = s0;                                // 0x0019b9b4: sw $s0, 4($v0)
    a1 = v1 | 0x404;                                            // 0x0019b9b8: ori $a1, $v1, 0x404
    v1 = 0x3f80 << 16;                                          // 0x0019b9c0: lui $v1, 0x3f80
    *(uint32_t*)((v0) + 0x10) = a2;                             // 0x0019b9c4: sw $a2, 0x10($v0)
    a0 = 0x6cf8 << 16;                                          // 0x0019b9c8: lui $a0, 0x6cf8
    *(uint32_t*)((v0) + 0x14) = 0;                              // 0x0019b9cc: sw $zero, 0x14($v0)
    /* move to FPU: $v1, $f0 */                                 // 0x0019b9d0: mtc1 $v1, $f0
    *(uint32_t*)((v0) + 0x18) = a1;                             // 0x0019b9d4: sw $a1, 0x18($v0)
    at = 0x28 << 16;                                            // 0x0019b9d8: lui $at, 0x28
    *(uint32_t*)((v0) + 0x1c) = a0;                             // 0x0019b9dc: sw $a0, 0x1c($v0)
    a3 = a3 + 0x5360;                                           // 0x0019b9e0: addiu $a3, $a3, 0x5360
    v1 = *(int32_t*)((s2) + 0x4c);                              // 0x0019b9e4: lw $v1, 0x4c($s2)
    FPU_F2 = *(float*)((at) + 0x5470);  // Load float           // 0x0019b9e8: lwc1 $f2, 0x5470($at)
    a2 = v0 + 0x50;                                             // 0x0019b9ec: addiu $a2, $v0, 0x50
    a1 = 8;                                                     // 0x0019b9f0: addiu $a1, $zero, 8
    FPU_F1 = *(float*)((v1) + 0x24);  // Load float             // 0x0019b9f4: lwc1 $f1, 0x24($v1)
    at = 0x28 << 16;                                            // 0x0019b9f8: lui $at, 0x28
    /* FPU: mul.s $f1, $f2, $f1 */                              // 0x0019b9fc: mul.s $f1, $f2, $f1
    *(float*)((v0) + 0x20) = FPU_F1;  // Store float            // 0x0019ba00: swc1 $f1, 0x20($v0)
    v1 = *(int32_t*)((s2) + 0x4c);                              // 0x0019ba04: lw $v1, 0x4c($s2)
    FPU_F2 = *(float*)((at) + 0x5474);  // Load float           // 0x0019ba08: lwc1 $f2, 0x5474($at)
    FPU_F1 = *(float*)((v1) + 0x24);  // Load float             // 0x0019ba0c: lwc1 $f1, 0x24($v1)
    at = 0x28 << 16;                                            // 0x0019ba10: lui $at, 0x28
    /* FPU: mul.s $f1, $f2, $f1 */                              // 0x0019ba14: mul.s $f1, $f2, $f1
    *(float*)((v0) + 0x24) = FPU_F1;  // Store float            // 0x0019ba18: swc1 $f1, 0x24($v0)
    v1 = *(int32_t*)((s2) + 0x4c);                              // 0x0019ba1c: lw $v1, 0x4c($s2)
    FPU_F2 = *(float*)((at) + 0x5478);  // Load float           // 0x0019ba20: lwc1 $f2, 0x5478($at)
    FPU_F1 = *(float*)((v1) + 0x24);  // Load float             // 0x0019ba24: lwc1 $f1, 0x24($v1)
    at = 0x28 << 16;                                            // 0x0019ba28: lui $at, 0x28
    /* FPU: mul.s $f1, $f2, $f1 */                              // 0x0019ba2c: mul.s $f1, $f2, $f1
    *(float*)((v0) + 0x28) = FPU_F1;  // Store float            // 0x0019ba30: swc1 $f1, 0x28($v0)
    FPU_F1 = *(float*)((at) + 0x547c);  // Load float           // 0x0019ba34: lwc1 $f1, 0x547c($at)
    *(float*)((v0) + 0x2c) = FPU_F1;  // Store float            // 0x0019ba38: swc1 $f1, 0x2c($v0)
    at = 0x28 << 16;                                            // 0x0019ba3c: lui $at, 0x28
    FPU_F1 = *(float*)((at) + 0x5460);  // Load float           // 0x0019ba40: lwc1 $f1, 0x5460($at)
    *(float*)((v0) + 0x30) = FPU_F1;  // Store float            // 0x0019ba44: swc1 $f1, 0x30($v0)
    at = 0x28 << 16;                                            // 0x0019ba48: lui $at, 0x28
    FPU_F1 = *(float*)((at) + 0x5464);  // Load float           // 0x0019ba4c: lwc1 $f1, 0x5464($at)
    *(float*)((v0) + 0x34) = FPU_F1;  // Store float            // 0x0019ba50: swc1 $f1, 0x34($v0)
    at = 0x28 << 16;                                            // 0x0019ba54: lui $at, 0x28
    FPU_F1 = *(float*)((at) + 0x5468);  // Load float           // 0x0019ba58: lwc1 $f1, 0x5468($at)
    *(float*)((v0) + 0x38) = FPU_F1;  // Store float            // 0x0019ba5c: swc1 $f1, 0x38($v0)
    at = 0x28 << 16;                                            // 0x0019ba60: lui $at, 0x28
    FPU_F1 = *(float*)((at) + 0x546c);  // Load float           // 0x0019ba64: lwc1 $f1, 0x546c($at)
    *(float*)((v0) + 0x3c) = FPU_F1;  // Store float            // 0x0019ba68: swc1 $f1, 0x3c($v0)
    FPU_F1 = *(float*)((gp) + -0x6464);  // Load float          // 0x0019ba6c: lwc1 $f1, -0x6464($gp)
    *(float*)((v0) + 0x40) = FPU_F1;  // Store float            // 0x0019ba70: swc1 $f1, 0x40($v0)
    FPU_F2 = *(float*)((gp) + -0x6464);  // Load float          // 0x0019ba74: lwc1 $f2, -0x6464($gp)
    FPU_F1 = *(float*)((gp) + -0x6460);  // Load float          // 0x0019ba78: lwc1 $f1, -0x6460($gp)
    /* FPU: sub.s $f1, $f2, $f1 */                              // 0x0019ba7c: sub.s $f1, $f2, $f1
    /* FPU: div.s $f0, $f0, $f1 */                              // 0x0019ba80: div.s $f0, $f0, $f1
    *(float*)((v0) + 0x44) = FPU_F0;  // Store float            // 0x0019ba84: swc1 $f0, 0x44($v0)
    *(uint32_t*)((v0) + 0x48) = 0;                              // 0x0019ba88: sw $zero, 0x48($v0)
    *(uint32_t*)((v0) + 0x4c) = 0;                              // 0x0019ba8c: sw $zero, 0x4c($v0)
label_0x19ba90:
    a0 = g_00285360;  // Global at 0x00285360                   // 0x0019ba90: lw $a0, 0($a3)
    a1 = a1 + -1;                                               // 0x0019ba94: addiu $a1, $a1, -1
    v1 = g_00285364;  // Global at 0x00285364                   // 0x0019ba98: lw $v1, 4($a3)
    g_13000000 = a0;  // Global at 0x13000000                   // 0x0019ba9c: sw $a0, 0($a2)
    a3 = a3 + 8;                                                // 0x0019baa0: addiu $a3, $a3, 8
    g_13000004 = v1;  // Global at 0x13000004                   // 0x0019baa4: sw $v1, 4($a2)
    if (a1 > 0) goto label_0x19ba90;                            // 0x0019baa8: bgtz $a1, 0x19ba90
    a2 = a2 + 8;                                                // 0x0019baac: addiu $a2, $a2, 8
    a3 = 0x28 << 16;                                            // 0x0019bab0: lui $a3, 0x28
    a2 = v0 + 0x90;                                             // 0x0019bab4: addiu $a2, $v0, 0x90
    a3 = a3 + 0x5320;                                           // 0x0019bab8: addiu $a3, $a3, 0x5320
    a1 = 8;                                                     // 0x0019babc: addiu $a1, $zero, 8
label_0x19bac0:
    a0 = g_00285320;  // Global at 0x00285320                   // 0x0019bac0: lw $a0, 0($a3)
    a1 = a1 + -1;                                               // 0x0019bac4: addiu $a1, $a1, -1
    v1 = g_00285324;  // Global at 0x00285324                   // 0x0019bac8: lw $v1, 4($a3)
    g_13000008 = a0;  // Global at 0x13000008                   // 0x0019bacc: sw $a0, 0($a2)
    a3 = a3 + 8;                                                // 0x0019bad0: addiu $a3, $a3, 8
    g_1300000c = v1;  // Global at 0x1300000c                   // 0x0019bad4: sw $v1, 4($a2)
    if (a1 > 0) goto label_0x19bac0;                            // 0x0019bad8: bgtz $a1, 0x19bac0
    a2 = a2 + 8;                                                // 0x0019badc: addiu $a2, $a2, 8
label_0x19bae4:
    v1 = *(int32_t*)((s2) + 0x54);                              // 0x0019bae4: lw $v1, 0x54($s2)
    a0 = 1;                                                     // 0x0019bae8: addiu $a0, $zero, 1
    a0 = a0 << t0;                                              // 0x0019baec: sllv $a0, $a0, $t0
    v1 = v1 & a0;                                               // 0x0019baf0: and $v1, $v1, $a0
    if (v1 == 0) goto label_0x19bb30;                           // 0x0019baf4: beqz $v1, 0x19bb30
    v1 = t0 << 1;                                               // 0x0019baf8: sll $v1, $t0, 1
    at = 0x7000 << 16;                                          // 0x0019bafc: lui $at, 0x7000
    a0 = v1 + t0;                                               // 0x0019bb00: addu $a0, $v1, $t0
    a2 = t0 << 6;                                               // 0x0019bb04: sll $a2, $t0, 6
    v1 = v0 + a2;                                               // 0x0019bb08: addu $v1, $v0, $a2
    at = at | 0x3700;                                           // 0x0019bb0c: ori $at, $at, 0x3700
    a0 = a0 << 4;                                               // 0x0019bb10: sll $a0, $a0, 4
    a1 = v1 + 0x1a0;                                            // 0x0019bb14: addiu $a1, $v1, 0x1a0
    v1 = v0 + a0;                                               // 0x0019bb18: addu $v1, $v0, $a0
    a2 = a2 + at;                                               // 0x0019bb1c: addu $a2, $a2, $at
    a0 = v1 + 0x9a0;                                            // 0x0019bb20: addiu $a0, $v1, 0x9a0
    v1 = 0x7000 << 16;                                          // 0x0019bb24: lui $v1, 0x7000
    func_00199400();  // 0x199320                                // 0x0019bb28: jal 0x199320
    a3 = v1 | 0x3f40;                                           // 0x0019bb2c: ori $a3, $v1, 0x3f40
label_0x19bb30:
    t0 = t0 + 1;                                                // 0x0019bb30: addiu $t0, $t0, 1
    v1 = (t0 < 0x20) ? 1 : 0;                                   // 0x0019bb34: slti $v1, $t0, 0x20
    if (v1 != 0) goto label_0x19bae4;                           // 0x0019bb38: bnez $v1, 0x19bae4
    a0 = v0 + 0xd0;                                             // 0x0019bb3c: addiu $a0, $v0, 0xd0
    func_00199b40();  // 0x199b10                                // 0x0019bb40: jal 0x199b10
    /* nop */                                                   // 0x0019bb44: nop 
    at = 0x28 << 16;                                            // 0x0019bb48: lui $at, 0x28
    v1 = 0x3f80 << 16;                                          // 0x0019bb4c: lui $v1, 0x3f80
    FPU_F1 = *(float*)((at) + 0x4854);  // Load float           // 0x0019bb50: lwc1 $f1, 0x4854($at)
    local_4c = v1;                                              // 0x0019bb54: sw $v1, 0x4c($sp)
    local_5c = v1;                                              // 0x0019bb58: sw $v1, 0x5c($sp)
    a0 = v0 + 0x100;                                            // 0x0019bb5c: addiu $a0, $v0, 0x100
    local_6c = v1;                                              // 0x0019bb60: sw $v1, 0x6c($sp)
    a1 = v0 + 0x130;                                            // 0x0019bb64: addiu $a1, $v0, 0x130
    v1 = 0x7000 << 16;                                          // 0x0019bb68: lui $v1, 0x7000
    a3 = sp + 0x40;                                             // 0x0019bb6c: addiu $a3, $sp, 0x40
    a2 = v1 | 0x3f40;                                           // 0x0019bb70: ori $a2, $v1, 0x3f40
    at = 0x28 << 16;                                            // 0x0019bb74: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x4858);  // Load float           // 0x0019bb78: lwc1 $f0, 0x4858($at)
    /* FPU: neg.s $f1, $f1 */                                   // 0x0019bb7c: neg.s $f1, $f1
    *(float*)((sp) + 0x40) = FPU_F1;  // Store float            // 0x0019bb80: swc1 $f1, 0x40($sp)
    at = 0x28 << 16;                                            // 0x0019bb84: lui $at, 0x28
    FPU_F4 = *(float*)((at) + 0x485c);  // Load float           // 0x0019bb88: lwc1 $f4, 0x485c($at)
    /* FPU: neg.s $f5, $f0 */                                   // 0x0019bb8c: neg.s $f5, $f0
    *(float*)((sp) + 0x44) = FPU_F5;  // Store float            // 0x0019bb90: swc1 $f5, 0x44($sp)
    at = 0x28 << 16;                                            // 0x0019bb94: lui $at, 0x28
    FPU_F3 = *(float*)((at) + 0x48c8);  // Load float           // 0x0019bb98: lwc1 $f3, 0x48c8($at)
    /* FPU: neg.s $f4, $f4 */                                   // 0x0019bb9c: neg.s $f4, $f4
    *(float*)((sp) + 0x48) = FPU_F4;  // Store float            // 0x0019bba0: swc1 $f4, 0x48($sp)
    at = 0x28 << 16;                                            // 0x0019bba4: lui $at, 0x28
    FPU_F2 = *(float*)((at) + 0x48cc);  // Load float           // 0x0019bba8: lwc1 $f2, 0x48cc($at)
    *(float*)((sp) + 0x50) = FPU_F3;  // Store float            // 0x0019bbac: swc1 $f3, 0x50($sp)
    at = 0x28 << 16;                                            // 0x0019bbb0: lui $at, 0x28
    FPU_F1 = *(float*)((at) + 0x48d0);  // Load float           // 0x0019bbb4: lwc1 $f1, 0x48d0($at)
    *(float*)((sp) + 0x54) = FPU_F2;  // Store float            // 0x0019bbb8: swc1 $f2, 0x54($sp)
    at = 0x28 << 16;                                            // 0x0019bbbc: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x4930);  // Load float           // 0x0019bbc0: lwc1 $f0, 0x4930($at)
    *(float*)((sp) + 0x58) = FPU_F1;  // Store float            // 0x0019bbc4: swc1 $f1, 0x58($sp)
    at = 0x28 << 16;                                            // 0x0019bbc8: lui $at, 0x28
    FPU_F1 = *(float*)((at) + 0x4934);  // Load float           // 0x0019bbcc: lwc1 $f1, 0x4934($at)
    *(float*)((sp) + 0x60) = FPU_F0;  // Store float            // 0x0019bbd0: swc1 $f0, 0x60($sp)
    at = 0x28 << 16;                                            // 0x0019bbd4: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x4938);  // Load float           // 0x0019bbd8: lwc1 $f0, 0x4938($at)
    *(float*)((sp) + 0x64) = FPU_F1;  // Store float            // 0x0019bbdc: swc1 $f1, 0x64($sp)
    func_00199760();  // 0x1996b0                                // 0x0019bbe0: jal 0x1996b0
    *(float*)((sp) + 0x68) = FPU_F0;  // Store float            // 0x0019bbe4: swc1 $f0, 0x68($sp)
    v1 = *(int32_t*)((s2) + 0x4c);                              // 0x0019bbe8: lw $v1, 0x4c($s2)
    FPU_F12 = *(float*)((v1) + 0x24);  // Load float            // 0x0019bbec: lwc1 $f12, 0x24($v1)
    func_00199a60();  // 0x1998d0                                // 0x0019bbf0: jal 0x1998d0
    a0 = v0 + 0x140;                                            // 0x0019bbf4: addiu $a0, $v0, 0x140
    v1 = 0x1500 << 16;                                          // 0x0019bbf8: lui $v1, 0x1500
    v1 = s1 | v1;                                               // 0x0019bbfc: or $v1, $s1, $v1
    *(uint32_t*)((v0) + 0xfa0) = v1;                            // 0x0019bc00: sw $v1, 0xfa0($v0)
    *(uint32_t*)((v0) + 0xfa4) = 0;                             // 0x0019bc04: sw $zero, 0xfa4($v0)
    *(uint32_t*)((v0) + 0xfa8) = 0;                             // 0x0019bc08: sw $zero, 0xfa8($v0)
    *(uint32_t*)((v0) + 0xfac) = 0;                             // 0x0019bc0c: sw $zero, 0xfac($v0)
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x0019bc14: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x0019bc18: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0019bc1c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0019bc20: jr $ra
    sp = sp + 0x70;                                             // 0x0019bc24: addiu $sp, $sp, 0x70
}