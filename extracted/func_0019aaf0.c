void func_0019aaf0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_4c, local_5c, local_6c;
    
    sp = sp + -0x70;                                            // 0x0019aaf0: addiu $sp, $sp, -0x70
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x0019aafc: addu.qb $zero, $sp, $s1
    a0 = 0xf70;                                                 // 0x0019ab10: addiu $a0, $zero, 0xf70
    func_0018dca0();  // 0x18dc30                                // 0x0019ab14: jal 0x18dc30
    a1 = 0x10;                                                  // 0x0019ab18: addiu $a1, $zero, 0x10
    v1 = 0x2000 << 16;                                          // 0x0019ab1c: lui $v1, 0x2000
    a3 = 0x28 << 16;                                            // 0x0019ab20: lui $a3, 0x28
    a0 = v1 | 0xf6;                                             // 0x0019ab24: ori $a0, $v1, 0xf6
    a2 = 0x1300 << 16;                                          // 0x0019ab28: lui $a2, 0x1300
    *(uint32_t*)(v0) = a0;                                      // 0x0019ab2c: sw $a0, 0($v0)
    v1 = 0x100 << 16;                                           // 0x0019ab30: lui $v1, 0x100
    *(uint32_t*)((v0) + 4) = s0;                                // 0x0019ab34: sw $s0, 4($v0)
    a1 = v1 | 0x404;                                            // 0x0019ab38: ori $a1, $v1, 0x404
    v1 = 0x3f80 << 16;                                          // 0x0019ab40: lui $v1, 0x3f80
    *(uint32_t*)((v0) + 0x10) = a2;                             // 0x0019ab44: sw $a2, 0x10($v0)
    a0 = 0x6cf4 << 16;                                          // 0x0019ab48: lui $a0, 0x6cf4
    *(uint32_t*)((v0) + 0x14) = 0;                              // 0x0019ab4c: sw $zero, 0x14($v0)
    /* move to FPU: $v1, $f0 */                                 // 0x0019ab50: mtc1 $v1, $f0
    *(uint32_t*)((v0) + 0x18) = a1;                             // 0x0019ab54: sw $a1, 0x18($v0)
    at = 0x28 << 16;                                            // 0x0019ab58: lui $at, 0x28
    *(uint32_t*)((v0) + 0x1c) = a0;                             // 0x0019ab5c: sw $a0, 0x1c($v0)
    a3 = a3 + 0x5360;                                           // 0x0019ab60: addiu $a3, $a3, 0x5360
    v1 = *(int32_t*)((s2) + 0x4c);                              // 0x0019ab64: lw $v1, 0x4c($s2)
    FPU_F2 = *(float*)((at) + 0x5470);  // Load float           // 0x0019ab68: lwc1 $f2, 0x5470($at)
    a2 = v0 + 0x40;                                             // 0x0019ab6c: addiu $a2, $v0, 0x40
    a1 = 8;                                                     // 0x0019ab70: addiu $a1, $zero, 8
    FPU_F1 = *(float*)((v1) + 0x24);  // Load float             // 0x0019ab74: lwc1 $f1, 0x24($v1)
    at = 0x28 << 16;                                            // 0x0019ab78: lui $at, 0x28
    /* FPU: mul.s $f1, $f2, $f1 */                              // 0x0019ab7c: mul.s $f1, $f2, $f1
    *(float*)((v0) + 0x20) = FPU_F1;  // Store float            // 0x0019ab80: swc1 $f1, 0x20($v0)
    v1 = *(int32_t*)((s2) + 0x4c);                              // 0x0019ab84: lw $v1, 0x4c($s2)
    FPU_F2 = *(float*)((at) + 0x5474);  // Load float           // 0x0019ab88: lwc1 $f2, 0x5474($at)
    FPU_F1 = *(float*)((v1) + 0x24);  // Load float             // 0x0019ab8c: lwc1 $f1, 0x24($v1)
    at = 0x28 << 16;                                            // 0x0019ab90: lui $at, 0x28
    /* FPU: mul.s $f1, $f2, $f1 */                              // 0x0019ab94: mul.s $f1, $f2, $f1
    *(float*)((v0) + 0x24) = FPU_F1;  // Store float            // 0x0019ab98: swc1 $f1, 0x24($v0)
    v1 = *(int32_t*)((s2) + 0x4c);                              // 0x0019ab9c: lw $v1, 0x4c($s2)
    FPU_F2 = *(float*)((at) + 0x5478);  // Load float           // 0x0019aba0: lwc1 $f2, 0x5478($at)
    FPU_F1 = *(float*)((v1) + 0x24);  // Load float             // 0x0019aba4: lwc1 $f1, 0x24($v1)
    at = 0x28 << 16;                                            // 0x0019aba8: lui $at, 0x28
    /* FPU: mul.s $f1, $f2, $f1 */                              // 0x0019abac: mul.s $f1, $f2, $f1
    *(float*)((v0) + 0x28) = FPU_F1;  // Store float            // 0x0019abb0: swc1 $f1, 0x28($v0)
    FPU_F1 = *(float*)((at) + 0x547c);  // Load float           // 0x0019abb4: lwc1 $f1, 0x547c($at)
    *(float*)((v0) + 0x2c) = FPU_F1;  // Store float            // 0x0019abb8: swc1 $f1, 0x2c($v0)
    FPU_F1 = *(float*)((gp) + -0x6464);  // Load float          // 0x0019abbc: lwc1 $f1, -0x6464($gp)
    *(float*)((v0) + 0x30) = FPU_F1;  // Store float            // 0x0019abc0: swc1 $f1, 0x30($v0)
    FPU_F2 = *(float*)((gp) + -0x6464);  // Load float          // 0x0019abc4: lwc1 $f2, -0x6464($gp)
    FPU_F1 = *(float*)((gp) + -0x6460);  // Load float          // 0x0019abc8: lwc1 $f1, -0x6460($gp)
    /* FPU: sub.s $f1, $f2, $f1 */                              // 0x0019abcc: sub.s $f1, $f2, $f1
    /* FPU: div.s $f0, $f0, $f1 */                              // 0x0019abd0: div.s $f0, $f0, $f1
    *(float*)((v0) + 0x34) = FPU_F0;  // Store float            // 0x0019abd4: swc1 $f0, 0x34($v0)
    *(uint32_t*)((v0) + 0x38) = 0;                              // 0x0019abd8: sw $zero, 0x38($v0)
    *(uint32_t*)((v0) + 0x3c) = 0;                              // 0x0019abdc: sw $zero, 0x3c($v0)
label_0x19abe0:
    a0 = g_00285360;  // Global at 0x00285360                   // 0x0019abe0: lw $a0, 0($a3)
    a1 = a1 + -1;                                               // 0x0019abe4: addiu $a1, $a1, -1
    v1 = g_00285364;  // Global at 0x00285364                   // 0x0019abe8: lw $v1, 4($a3)
    g_13000000 = a0;  // Global at 0x13000000                   // 0x0019abec: sw $a0, 0($a2)
    a3 = a3 + 8;                                                // 0x0019abf0: addiu $a3, $a3, 8
    g_13000004 = v1;  // Global at 0x13000004                   // 0x0019abf4: sw $v1, 4($a2)
    if (a1 > 0) goto label_0x19abe0;                            // 0x0019abf8: bgtz $a1, 0x19abe0
    a2 = a2 + 8;                                                // 0x0019abfc: addiu $a2, $a2, 8
    a3 = 0x28 << 16;                                            // 0x0019ac00: lui $a3, 0x28
    a2 = v0 + 0x80;                                             // 0x0019ac04: addiu $a2, $v0, 0x80
    a3 = a3 + 0x5320;                                           // 0x0019ac08: addiu $a3, $a3, 0x5320
    a1 = 8;                                                     // 0x0019ac0c: addiu $a1, $zero, 8
label_0x19ac10:
    a0 = g_00285320;  // Global at 0x00285320                   // 0x0019ac10: lw $a0, 0($a3)
    a1 = a1 + -1;                                               // 0x0019ac14: addiu $a1, $a1, -1
    v1 = g_00285324;  // Global at 0x00285324                   // 0x0019ac18: lw $v1, 4($a3)
    g_13000008 = a0;  // Global at 0x13000008                   // 0x0019ac1c: sw $a0, 0($a2)
    a3 = a3 + 8;                                                // 0x0019ac20: addiu $a3, $a3, 8
    g_1300000c = v1;  // Global at 0x1300000c                   // 0x0019ac24: sw $v1, 4($a2)
    if (a1 > 0) goto label_0x19ac10;                            // 0x0019ac28: bgtz $a1, 0x19ac10
    a2 = a2 + 8;                                                // 0x0019ac2c: addiu $a2, $a2, 8
label_0x19ac34:
    v1 = *(int32_t*)((s2) + 0x54);                              // 0x0019ac34: lw $v1, 0x54($s2)
    a0 = 1;                                                     // 0x0019ac38: addiu $a0, $zero, 1
    a0 = a0 << t0;                                              // 0x0019ac3c: sllv $a0, $a0, $t0
    v1 = v1 & a0;                                               // 0x0019ac40: and $v1, $v1, $a0
    if (v1 == 0) goto label_0x19ac80;                           // 0x0019ac44: beqz $v1, 0x19ac80
    v1 = t0 << 1;                                               // 0x0019ac48: sll $v1, $t0, 1
    at = 0x7000 << 16;                                          // 0x0019ac4c: lui $at, 0x7000
    a0 = v1 + t0;                                               // 0x0019ac50: addu $a0, $v1, $t0
    a2 = t0 << 6;                                               // 0x0019ac54: sll $a2, $t0, 6
    v1 = v0 + a2;                                               // 0x0019ac58: addu $v1, $v0, $a2
    at = at | 0x3700;                                           // 0x0019ac5c: ori $at, $at, 0x3700
    a0 = a0 << 4;                                               // 0x0019ac60: sll $a0, $a0, 4
    a1 = v1 + 0x160;                                            // 0x0019ac64: addiu $a1, $v1, 0x160
    v1 = v0 + a0;                                               // 0x0019ac68: addu $v1, $v0, $a0
    a2 = a2 + at;                                               // 0x0019ac6c: addu $a2, $a2, $at
    a0 = v1 + 0x960;                                            // 0x0019ac70: addiu $a0, $v1, 0x960
    v1 = 0x7000 << 16;                                          // 0x0019ac74: lui $v1, 0x7000
    func_00199400();  // 0x199320                                // 0x0019ac78: jal 0x199320
    a3 = v1 | 0x3f40;                                           // 0x0019ac7c: ori $a3, $v1, 0x3f40
label_0x19ac80:
    t0 = t0 + 1;                                                // 0x0019ac80: addiu $t0, $t0, 1
    v1 = (t0 < 0x20) ? 1 : 0;                                   // 0x0019ac84: slti $v1, $t0, 0x20
    if (v1 != 0) goto label_0x19ac34;                           // 0x0019ac88: bnez $v1, 0x19ac34
    at = 0x28 << 16;                                            // 0x0019ac8c: lui $at, 0x28
    v1 = 0x3f80 << 16;                                          // 0x0019ac90: lui $v1, 0x3f80
    FPU_F1 = *(float*)((at) + 0x4854);  // Load float           // 0x0019ac94: lwc1 $f1, 0x4854($at)
    local_4c = v1;                                              // 0x0019ac98: sw $v1, 0x4c($sp)
    local_5c = v1;                                              // 0x0019ac9c: sw $v1, 0x5c($sp)
    a0 = v0 + 0xc0;                                             // 0x0019aca0: addiu $a0, $v0, 0xc0
    local_6c = v1;                                              // 0x0019aca4: sw $v1, 0x6c($sp)
    a1 = v0 + 0xf0;                                             // 0x0019aca8: addiu $a1, $v0, 0xf0
    v1 = 0x7000 << 16;                                          // 0x0019acac: lui $v1, 0x7000
    a3 = sp + 0x40;                                             // 0x0019acb0: addiu $a3, $sp, 0x40
    a2 = v1 | 0x3f40;                                           // 0x0019acb4: ori $a2, $v1, 0x3f40
    at = 0x28 << 16;                                            // 0x0019acb8: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x4858);  // Load float           // 0x0019acbc: lwc1 $f0, 0x4858($at)
    /* FPU: neg.s $f1, $f1 */                                   // 0x0019acc0: neg.s $f1, $f1
    *(float*)((sp) + 0x40) = FPU_F1;  // Store float            // 0x0019acc4: swc1 $f1, 0x40($sp)
    at = 0x28 << 16;                                            // 0x0019acc8: lui $at, 0x28
    FPU_F4 = *(float*)((at) + 0x485c);  // Load float           // 0x0019accc: lwc1 $f4, 0x485c($at)
    /* FPU: neg.s $f5, $f0 */                                   // 0x0019acd0: neg.s $f5, $f0
    *(float*)((sp) + 0x44) = FPU_F5;  // Store float            // 0x0019acd4: swc1 $f5, 0x44($sp)
    at = 0x28 << 16;                                            // 0x0019acd8: lui $at, 0x28
    FPU_F3 = *(float*)((at) + 0x48c8);  // Load float           // 0x0019acdc: lwc1 $f3, 0x48c8($at)
    /* FPU: neg.s $f4, $f4 */                                   // 0x0019ace0: neg.s $f4, $f4
    *(float*)((sp) + 0x48) = FPU_F4;  // Store float            // 0x0019ace4: swc1 $f4, 0x48($sp)
    at = 0x28 << 16;                                            // 0x0019ace8: lui $at, 0x28
    FPU_F2 = *(float*)((at) + 0x48cc);  // Load float           // 0x0019acec: lwc1 $f2, 0x48cc($at)
    *(float*)((sp) + 0x50) = FPU_F3;  // Store float            // 0x0019acf0: swc1 $f3, 0x50($sp)
    at = 0x28 << 16;                                            // 0x0019acf4: lui $at, 0x28
    FPU_F1 = *(float*)((at) + 0x48d0);  // Load float           // 0x0019acf8: lwc1 $f1, 0x48d0($at)
    *(float*)((sp) + 0x54) = FPU_F2;  // Store float            // 0x0019acfc: swc1 $f2, 0x54($sp)
    at = 0x28 << 16;                                            // 0x0019ad00: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x4930);  // Load float           // 0x0019ad04: lwc1 $f0, 0x4930($at)
    *(float*)((sp) + 0x58) = FPU_F1;  // Store float            // 0x0019ad08: swc1 $f1, 0x58($sp)
    at = 0x28 << 16;                                            // 0x0019ad0c: lui $at, 0x28
    FPU_F1 = *(float*)((at) + 0x4934);  // Load float           // 0x0019ad10: lwc1 $f1, 0x4934($at)
    *(float*)((sp) + 0x60) = FPU_F0;  // Store float            // 0x0019ad14: swc1 $f0, 0x60($sp)
    at = 0x28 << 16;                                            // 0x0019ad18: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x4938);  // Load float           // 0x0019ad1c: lwc1 $f0, 0x4938($at)
    *(float*)((sp) + 0x64) = FPU_F1;  // Store float            // 0x0019ad20: swc1 $f1, 0x64($sp)
    func_00199760();  // 0x1996b0                                // 0x0019ad24: jal 0x1996b0
    *(float*)((sp) + 0x68) = FPU_F0;  // Store float            // 0x0019ad28: swc1 $f0, 0x68($sp)
    v1 = *(int32_t*)((s2) + 0x4c);                              // 0x0019ad2c: lw $v1, 0x4c($s2)
    FPU_F12 = *(float*)((v1) + 0x24);  // Load float            // 0x0019ad30: lwc1 $f12, 0x24($v1)
    func_00199a60();  // 0x1998d0                                // 0x0019ad34: jal 0x1998d0
    a0 = v0 + 0x100;                                            // 0x0019ad38: addiu $a0, $v0, 0x100
    v1 = 0x1500 << 16;                                          // 0x0019ad3c: lui $v1, 0x1500
    v1 = s1 | v1;                                               // 0x0019ad40: or $v1, $s1, $v1
    *(uint32_t*)((v0) + 0xf60) = v1;                            // 0x0019ad44: sw $v1, 0xf60($v0)
    *(uint32_t*)((v0) + 0xf64) = 0;                             // 0x0019ad48: sw $zero, 0xf64($v0)
    *(uint32_t*)((v0) + 0xf68) = 0;                             // 0x0019ad4c: sw $zero, 0xf68($v0)
    *(uint32_t*)((v0) + 0xf6c) = 0;                             // 0x0019ad50: sw $zero, 0xf6c($v0)
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x0019ad58: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x0019ad5c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0019ad60: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0019ad64: jr $ra
    sp = sp + 0x70;                                             // 0x0019ad68: addiu $sp, $sp, 0x70
}