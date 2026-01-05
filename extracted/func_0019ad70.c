void func_0019ad70() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_5c, local_6c, local_7c;
    
    sp = sp + -0xc0;                                            // 0x0019ad70: addiu $sp, $sp, -0xc0
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x0019ad78: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x0019ad84: addu.qb $zero, $sp, $s1
    a0 = 0x1b0;                                                 // 0x0019ad90: addiu $a0, $zero, 0x1b0
    a1 = 0x10;                                                  // 0x0019ad94: addiu $a1, $zero, 0x10
    func_0018dc30();  // 18dc30                                // 0x0019ad98: jal 0x18dc30
    v1 = 0x2000 << 16;                                          // 0x0019ada0: lui $v1, 0x2000
    t0 = 0x28 << 16;                                            // 0x0019ada4: lui $t0, 0x28
    v1 = v1 | 0x1a;                                             // 0x0019ada8: ori $v1, $v1, 0x1a
    a2 = 0x1300 << 16;                                          // 0x0019adac: lui $a2, 0x1300
    g_70000000 = v1;  // Global at 0x70000000                   // 0x0019adb0: sw $v1, 0($v0)
    a1 = 0x6c18 << 16;                                          // 0x0019adb4: lui $a1, 0x6c18
    g_70000004 = s1;  // Global at 0x70000004                   // 0x0019adb8: sw $s1, 4($v0)
    v1 = 0x100 << 16;                                           // 0x0019adbc: lui $v1, 0x100
    a0 = v1 | 0x404;                                            // 0x0019adc4: ori $a0, $v1, 0x404
    g_70000010 = a2;  // Global at 0x70000010                   // 0x0019adc8: sw $a2, 0x10($v0)
    v1 = 0x3f80 << 16;                                          // 0x0019adcc: lui $v1, 0x3f80
    g_70000014 = 0;  // Global at 0x70000014                    // 0x0019add0: sw $zero, 0x14($v0)
    /* move to FPU: $v1, $f0 */                                 // 0x0019add4: mtc1 $v1, $f0
    g_70000018 = a0;  // Global at 0x70000018                   // 0x0019add8: sw $a0, 0x18($v0)
    g_7000001c = a1;  // Global at 0x7000001c                   // 0x0019ade0: sw $a1, 0x1c($v0)
    v1 = 0x7000 << 16;                                          // 0x0019ade4: lui $v1, 0x7000
    t1 = *(int32_t*)((s3) + 0x4c);                              // 0x0019ade8: lw $t1, 0x4c($s3)
    at = 0x28 << 16;                                            // 0x0019adec: lui $at, 0x28
    FPU_F2 = *(float*)((at) + 0x5470);  // Load float           // 0x0019adf0: lwc1 $f2, 0x5470($at)
    a2 = v1 | 0x3700;                                           // 0x0019adf4: ori $a2, $v1, 0x3700
    a3 = v1 | 0x3f40;                                           // 0x0019adf8: ori $a3, $v1, 0x3f40
    a0 = s0 + 0x40;                                             // 0x0019adfc: addiu $a0, $s0, 0x40
    a1 = sp + 0x80;                                             // 0x0019ae00: addiu $a1, $sp, 0x80
    t0 = t0 + 0x5360;                                           // 0x0019ae04: addiu $t0, $t0, 0x5360
    FPU_F1 = *(float*)((t1) + 0x24);  // Load float             // 0x0019ae08: lwc1 $f1, 0x24($t1)
    at = 0x28 << 16;                                            // 0x0019ae0c: lui $at, 0x28
    /* FPU: mul.s $f1, $f2, $f1 */                              // 0x0019ae10: mul.s $f1, $f2, $f1
    *(float*)((v0) + 0x20) = FPU_F1;  // Store float            // 0x0019ae14: swc1 $f1, 0x20($v0)
    v1 = *(int32_t*)((s3) + 0x4c);                              // 0x0019ae18: lw $v1, 0x4c($s3)
    FPU_F2 = *(float*)((at) + 0x5474);  // Load float           // 0x0019ae1c: lwc1 $f2, 0x5474($at)
    FPU_F1 = *(float*)((v1) + 0x24);  // Load float             // 0x0019ae20: lwc1 $f1, 0x24($v1)
    at = 0x28 << 16;                                            // 0x0019ae24: lui $at, 0x28
    /* FPU: mul.s $f1, $f2, $f1 */                              // 0x0019ae28: mul.s $f1, $f2, $f1
    *(float*)((v0) + 0x24) = FPU_F1;  // Store float            // 0x0019ae2c: swc1 $f1, 0x24($v0)
    v1 = *(int32_t*)((s3) + 0x4c);                              // 0x0019ae30: lw $v1, 0x4c($s3)
    FPU_F2 = *(float*)((at) + 0x5478);  // Load float           // 0x0019ae34: lwc1 $f2, 0x5478($at)
    FPU_F1 = *(float*)((v1) + 0x24);  // Load float             // 0x0019ae38: lwc1 $f1, 0x24($v1)
    at = 0x28 << 16;                                            // 0x0019ae3c: lui $at, 0x28
    /* FPU: mul.s $f1, $f2, $f1 */                              // 0x0019ae40: mul.s $f1, $f2, $f1
    *(float*)((v0) + 0x28) = FPU_F1;  // Store float            // 0x0019ae44: swc1 $f1, 0x28($v0)
    FPU_F1 = *(float*)((at) + 0x547c);  // Load float           // 0x0019ae48: lwc1 $f1, 0x547c($at)
    *(float*)((v0) + 0x2c) = FPU_F1;  // Store float            // 0x0019ae4c: swc1 $f1, 0x2c($v0)
    FPU_F1 = *(float*)((gp) + -0x6464);  // Load float          // 0x0019ae50: lwc1 $f1, -0x6464($gp)
    *(float*)((v0) + 0x30) = FPU_F1;  // Store float            // 0x0019ae54: swc1 $f1, 0x30($v0)
    FPU_F2 = *(float*)((gp) + -0x6464);  // Load float          // 0x0019ae58: lwc1 $f2, -0x6464($gp)
    FPU_F1 = *(float*)((gp) + -0x6460);  // Load float          // 0x0019ae5c: lwc1 $f1, -0x6460($gp)
    /* FPU: sub.s $f1, $f2, $f1 */                              // 0x0019ae60: sub.s $f1, $f2, $f1
    /* FPU: div.s $f0, $f0, $f1 */                              // 0x0019ae64: div.s $f0, $f0, $f1
    *(float*)((v0) + 0x34) = FPU_F0;  // Store float            // 0x0019ae68: swc1 $f0, 0x34($v0)
    g_70000038 = 0;  // Global at 0x70000038                    // 0x0019ae6c: sw $zero, 0x38($v0)
    func_00199240();  // 199240                                // 0x0019ae70: jal 0x199240
    g_7000003c = 0;  // Global at 0x7000003c                    // 0x0019ae74: sw $zero, 0x3c($v0)
    a2 = 0x28 << 16;                                            // 0x0019ae78: lui $a2, 0x28
    a0 = s0 + 0x80;                                             // 0x0019ae7c: addiu $a0, $s0, 0x80
    func_001991c0();  // 1991c0                                // 0x0019ae80: jal 0x1991c0
    a2 = a2 + 0x5320;                                           // 0x0019ae84: addiu $a2, $a2, 0x5320
    a2 = 0x28 << 16;                                            // 0x0019ae88: lui $a2, 0x28
    a1 = s0 + 0xc0;                                             // 0x0019ae8c: addiu $a1, $s0, 0xc0
    a2 = a2 + 0x52e0;                                           // 0x0019ae90: addiu $a2, $a2, 0x52e0
    a0 = 8;                                                     // 0x0019ae94: addiu $a0, $zero, 8
label_0x19ae98:
    v1 = g_002852e0;  // Global at 0x002852e0                   // 0x0019ae98: lw $v1, 0($a2)
    a0 = a0 + -1;                                               // 0x0019ae9c: addiu $a0, $a0, -1
    v0 = g_002852e4;  // Global at 0x002852e4                   // 0x0019aea0: lw $v0, 4($a2)
    g_6c180000 = v1;  // Global at 0x6c180000                   // 0x0019aea4: sw $v1, 0($a1)
    a2 = a2 + 8;                                                // 0x0019aea8: addiu $a2, $a2, 8
    g_6c180004 = v0;  // Global at 0x6c180004                   // 0x0019aeac: sw $v0, 4($a1)
    if (a0 > 0) goto label_0x19ae98;                            // 0x0019aeb0: bgtz $a0, 0x19ae98
    a1 = a1 + 8;                                                // 0x0019aeb4: addiu $a1, $a1, 8
    at = 0x28 << 16;                                            // 0x0019aeb8: lui $at, 0x28
    v0 = 0x3f80 << 16;                                          // 0x0019aebc: lui $v0, 0x3f80
    FPU_F1 = *(float*)((at) + 0x4854);  // Load float           // 0x0019aec0: lwc1 $f1, 0x4854($at)
    local_5c = v0;                                              // 0x0019aec4: sw $v0, 0x5c($sp)
    local_6c = v0;                                              // 0x0019aec8: sw $v0, 0x6c($sp)
    a0 = s0 + 0x100;                                            // 0x0019aecc: addiu $a0, $s0, 0x100
    local_7c = v0;                                              // 0x0019aed0: sw $v0, 0x7c($sp)
    a1 = s0 + 0x130;                                            // 0x0019aed4: addiu $a1, $s0, 0x130
    v0 = 0x7000 << 16;                                          // 0x0019aed8: lui $v0, 0x7000
    a3 = sp + 0x50;                                             // 0x0019aedc: addiu $a3, $sp, 0x50
    a2 = v0 | 0x3700;                                           // 0x0019aee0: ori $a2, $v0, 0x3700
    at = 0x28 << 16;                                            // 0x0019aee4: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x4858);  // Load float           // 0x0019aee8: lwc1 $f0, 0x4858($at)
    /* FPU: neg.s $f1, $f1 */                                   // 0x0019aeec: neg.s $f1, $f1
    *(float*)((sp) + 0x50) = FPU_F1;  // Store float            // 0x0019aef0: swc1 $f1, 0x50($sp)
    at = 0x28 << 16;                                            // 0x0019aef4: lui $at, 0x28
    FPU_F4 = *(float*)((at) + 0x485c);  // Load float           // 0x0019aef8: lwc1 $f4, 0x485c($at)
    /* FPU: neg.s $f5, $f0 */                                   // 0x0019aefc: neg.s $f5, $f0
    *(float*)((sp) + 0x54) = FPU_F5;  // Store float            // 0x0019af00: swc1 $f5, 0x54($sp)
    at = 0x28 << 16;                                            // 0x0019af04: lui $at, 0x28
    FPU_F3 = *(float*)((at) + 0x48c8);  // Load float           // 0x0019af08: lwc1 $f3, 0x48c8($at)
    /* FPU: neg.s $f4, $f4 */                                   // 0x0019af0c: neg.s $f4, $f4
    *(float*)((sp) + 0x58) = FPU_F4;  // Store float            // 0x0019af10: swc1 $f4, 0x58($sp)
    at = 0x28 << 16;                                            // 0x0019af14: lui $at, 0x28
    FPU_F2 = *(float*)((at) + 0x48cc);  // Load float           // 0x0019af18: lwc1 $f2, 0x48cc($at)
    *(float*)((sp) + 0x60) = FPU_F3;  // Store float            // 0x0019af1c: swc1 $f3, 0x60($sp)
    at = 0x28 << 16;                                            // 0x0019af20: lui $at, 0x28
    FPU_F1 = *(float*)((at) + 0x48d0);  // Load float           // 0x0019af24: lwc1 $f1, 0x48d0($at)
    *(float*)((sp) + 0x64) = FPU_F2;  // Store float            // 0x0019af28: swc1 $f2, 0x64($sp)
    at = 0x28 << 16;                                            // 0x0019af2c: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x4930);  // Load float           // 0x0019af30: lwc1 $f0, 0x4930($at)
    *(float*)((sp) + 0x68) = FPU_F1;  // Store float            // 0x0019af34: swc1 $f1, 0x68($sp)
    at = 0x28 << 16;                                            // 0x0019af38: lui $at, 0x28
    FPU_F1 = *(float*)((at) + 0x4934);  // Load float           // 0x0019af3c: lwc1 $f1, 0x4934($at)
    *(float*)((sp) + 0x70) = FPU_F0;  // Store float            // 0x0019af40: swc1 $f0, 0x70($sp)
    at = 0x28 << 16;                                            // 0x0019af44: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x4938);  // Load float           // 0x0019af48: lwc1 $f0, 0x4938($at)
    *(float*)((sp) + 0x74) = FPU_F1;  // Store float            // 0x0019af4c: swc1 $f1, 0x74($sp)
    func_00199580();  // 199580                                // 0x0019af50: jal 0x199580
    *(float*)((sp) + 0x78) = FPU_F0;  // Store float            // 0x0019af54: swc1 $f0, 0x78($sp)
    v0 = *(int32_t*)((s3) + 0x4c);                              // 0x0019af58: lw $v0, 0x4c($s3)
    FPU_F12 = *(float*)((v0) + 0x24);  // Load float            // 0x0019af5c: lwc1 $f12, 0x24($v0)
    func_001998d0();  // 1998d0                                // 0x0019af60: jal 0x1998d0
    a0 = s0 + 0x140;                                            // 0x0019af64: addiu $a0, $s0, 0x140
    v1 = 0x1500 << 16;                                          // 0x0019af68: lui $v1, 0x1500
    v1 = s2 | v1;                                               // 0x0019af70: or $v1, $s2, $v1
    *(uint32_t*)((s0) + 0x1a0) = v1;                            // 0x0019af74: sw $v1, 0x1a0($s0)
    *(uint32_t*)((s0) + 0x1a4) = 0;                             // 0x0019af78: sw $zero, 0x1a4($s0)
    *(uint32_t*)((s0) + 0x1a8) = 0;                             // 0x0019af7c: sw $zero, 0x1a8($s0)
    *(uint32_t*)((s0) + 0x1ac) = 0;                             // 0x0019af80: sw $zero, 0x1ac($s0)
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x0019af8c: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x0019af90: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0019af94: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0019af98: jr $ra
    sp = sp + 0xc0;                                             // 0x0019af9c: addiu $sp, $sp, 0xc0
}