void func_0019afa0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_4c, local_5c, local_6c;
    
    sp = sp + -0x70;                                            // 0x0019afa0: addiu $sp, $sp, -0x70
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x0019afac: addu.qb $zero, $sp, $s1
    a0 = 0xfb0;                                                 // 0x0019afc0: addiu $a0, $zero, 0xfb0
    func_0018dca0();  // 0x18dc30                                // 0x0019afc4: jal 0x18dc30
    a1 = 0x10;                                                  // 0x0019afc8: addiu $a1, $zero, 0x10
    v1 = 0x2000 << 16;                                          // 0x0019afcc: lui $v1, 0x2000
    a3 = 0x28 << 16;                                            // 0x0019afd0: lui $a3, 0x28
    a0 = v1 | 0xfa;                                             // 0x0019afd4: ori $a0, $v1, 0xfa
    a2 = 0x1300 << 16;                                          // 0x0019afd8: lui $a2, 0x1300
    *(uint32_t*)(v0) = a0;                                      // 0x0019afdc: sw $a0, 0($v0)
    v1 = 0x100 << 16;                                           // 0x0019afe0: lui $v1, 0x100
    *(uint32_t*)((v0) + 4) = s0;                                // 0x0019afe4: sw $s0, 4($v0)
    a1 = v1 | 0x404;                                            // 0x0019afe8: ori $a1, $v1, 0x404
    v1 = 0x3f80 << 16;                                          // 0x0019aff0: lui $v1, 0x3f80
    *(uint32_t*)((v0) + 0x10) = a2;                             // 0x0019aff4: sw $a2, 0x10($v0)
    a0 = 0x6cf8 << 16;                                          // 0x0019aff8: lui $a0, 0x6cf8
    *(uint32_t*)((v0) + 0x14) = 0;                              // 0x0019affc: sw $zero, 0x14($v0)
    /* move to FPU: $v1, $f0 */                                 // 0x0019b000: mtc1 $v1, $f0
    *(uint32_t*)((v0) + 0x18) = a1;                             // 0x0019b004: sw $a1, 0x18($v0)
    at = 0x28 << 16;                                            // 0x0019b008: lui $at, 0x28
    *(uint32_t*)((v0) + 0x1c) = a0;                             // 0x0019b00c: sw $a0, 0x1c($v0)
    a3 = a3 + 0x5360;                                           // 0x0019b010: addiu $a3, $a3, 0x5360
    v1 = *(int32_t*)((s2) + 0x4c);                              // 0x0019b014: lw $v1, 0x4c($s2)
    FPU_F2 = *(float*)((at) + 0x5470);  // Load float           // 0x0019b018: lwc1 $f2, 0x5470($at)
    a2 = v0 + 0x40;                                             // 0x0019b01c: addiu $a2, $v0, 0x40
    a1 = 8;                                                     // 0x0019b020: addiu $a1, $zero, 8
    FPU_F1 = *(float*)((v1) + 0x24);  // Load float             // 0x0019b024: lwc1 $f1, 0x24($v1)
    at = 0x28 << 16;                                            // 0x0019b028: lui $at, 0x28
    /* FPU: mul.s $f1, $f2, $f1 */                              // 0x0019b02c: mul.s $f1, $f2, $f1
    *(float*)((v0) + 0x20) = FPU_F1;  // Store float            // 0x0019b030: swc1 $f1, 0x20($v0)
    v1 = *(int32_t*)((s2) + 0x4c);                              // 0x0019b034: lw $v1, 0x4c($s2)
    FPU_F2 = *(float*)((at) + 0x5474);  // Load float           // 0x0019b038: lwc1 $f2, 0x5474($at)
    FPU_F1 = *(float*)((v1) + 0x24);  // Load float             // 0x0019b03c: lwc1 $f1, 0x24($v1)
    at = 0x28 << 16;                                            // 0x0019b040: lui $at, 0x28
    /* FPU: mul.s $f1, $f2, $f1 */                              // 0x0019b044: mul.s $f1, $f2, $f1
    *(float*)((v0) + 0x24) = FPU_F1;  // Store float            // 0x0019b048: swc1 $f1, 0x24($v0)
    v1 = *(int32_t*)((s2) + 0x4c);                              // 0x0019b04c: lw $v1, 0x4c($s2)
    FPU_F2 = *(float*)((at) + 0x5478);  // Load float           // 0x0019b050: lwc1 $f2, 0x5478($at)
    FPU_F1 = *(float*)((v1) + 0x24);  // Load float             // 0x0019b054: lwc1 $f1, 0x24($v1)
    at = 0x28 << 16;                                            // 0x0019b058: lui $at, 0x28
    /* FPU: mul.s $f1, $f2, $f1 */                              // 0x0019b05c: mul.s $f1, $f2, $f1
    *(float*)((v0) + 0x28) = FPU_F1;  // Store float            // 0x0019b060: swc1 $f1, 0x28($v0)
    FPU_F1 = *(float*)((at) + 0x547c);  // Load float           // 0x0019b064: lwc1 $f1, 0x547c($at)
    *(float*)((v0) + 0x2c) = FPU_F1;  // Store float            // 0x0019b068: swc1 $f1, 0x2c($v0)
    FPU_F1 = *(float*)((gp) + -0x6464);  // Load float          // 0x0019b06c: lwc1 $f1, -0x6464($gp)
    *(float*)((v0) + 0x30) = FPU_F1;  // Store float            // 0x0019b070: swc1 $f1, 0x30($v0)
    FPU_F2 = *(float*)((gp) + -0x6464);  // Load float          // 0x0019b074: lwc1 $f2, -0x6464($gp)
    FPU_F1 = *(float*)((gp) + -0x6460);  // Load float          // 0x0019b078: lwc1 $f1, -0x6460($gp)
    /* FPU: sub.s $f1, $f2, $f1 */                              // 0x0019b07c: sub.s $f1, $f2, $f1
    /* FPU: div.s $f0, $f0, $f1 */                              // 0x0019b080: div.s $f0, $f0, $f1
    *(float*)((v0) + 0x34) = FPU_F0;  // Store float            // 0x0019b084: swc1 $f0, 0x34($v0)
    *(uint32_t*)((v0) + 0x38) = 0;                              // 0x0019b088: sw $zero, 0x38($v0)
    *(uint32_t*)((v0) + 0x3c) = 0;                              // 0x0019b08c: sw $zero, 0x3c($v0)
label_0x19b090:
    a0 = g_00285360;  // Global at 0x00285360                   // 0x0019b090: lw $a0, 0($a3)
    a1 = a1 + -1;                                               // 0x0019b094: addiu $a1, $a1, -1
    v1 = g_00285364;  // Global at 0x00285364                   // 0x0019b098: lw $v1, 4($a3)
    g_13000000 = a0;  // Global at 0x13000000                   // 0x0019b09c: sw $a0, 0($a2)
    a3 = a3 + 8;                                                // 0x0019b0a0: addiu $a3, $a3, 8
    g_13000004 = v1;  // Global at 0x13000004                   // 0x0019b0a4: sw $v1, 4($a2)
    if (a1 > 0) goto label_0x19b090;                            // 0x0019b0a8: bgtz $a1, 0x19b090
    a2 = a2 + 8;                                                // 0x0019b0ac: addiu $a2, $a2, 8
    a3 = 0x28 << 16;                                            // 0x0019b0b0: lui $a3, 0x28
    a2 = v0 + 0x80;                                             // 0x0019b0b4: addiu $a2, $v0, 0x80
    a3 = a3 + 0x5320;                                           // 0x0019b0b8: addiu $a3, $a3, 0x5320
    a1 = 8;                                                     // 0x0019b0bc: addiu $a1, $zero, 8
label_0x19b0c0:
    a0 = g_00285320;  // Global at 0x00285320                   // 0x0019b0c0: lw $a0, 0($a3)
    a1 = a1 + -1;                                               // 0x0019b0c4: addiu $a1, $a1, -1
    v1 = g_00285324;  // Global at 0x00285324                   // 0x0019b0c8: lw $v1, 4($a3)
    g_13000008 = a0;  // Global at 0x13000008                   // 0x0019b0cc: sw $a0, 0($a2)
    a3 = a3 + 8;                                                // 0x0019b0d0: addiu $a3, $a3, 8
    g_1300000c = v1;  // Global at 0x1300000c                   // 0x0019b0d4: sw $v1, 4($a2)
    if (a1 > 0) goto label_0x19b0c0;                            // 0x0019b0d8: bgtz $a1, 0x19b0c0
    a2 = a2 + 8;                                                // 0x0019b0dc: addiu $a2, $a2, 8
    a3 = 0x28 << 16;                                            // 0x0019b0e0: lui $a3, 0x28
    a2 = v0 + 0xc0;                                             // 0x0019b0e4: addiu $a2, $v0, 0xc0
    a3 = a3 + 0x52e0;                                           // 0x0019b0e8: addiu $a3, $a3, 0x52e0
    a1 = 8;                                                     // 0x0019b0ec: addiu $a1, $zero, 8
label_0x19b0f0:
    a0 = g_002852e0;  // Global at 0x002852e0                   // 0x0019b0f0: lw $a0, 0($a3)
    a1 = a1 + -1;                                               // 0x0019b0f4: addiu $a1, $a1, -1
    v1 = g_002852e4;  // Global at 0x002852e4                   // 0x0019b0f8: lw $v1, 4($a3)
    g_13000010 = a0;  // Global at 0x13000010                   // 0x0019b0fc: sw $a0, 0($a2)
    a3 = a3 + 8;                                                // 0x0019b100: addiu $a3, $a3, 8
    g_13000014 = v1;  // Global at 0x13000014                   // 0x0019b104: sw $v1, 4($a2)
    if (a1 > 0) goto label_0x19b0f0;                            // 0x0019b108: bgtz $a1, 0x19b0f0
    a2 = a2 + 8;                                                // 0x0019b10c: addiu $a2, $a2, 8
label_0x19b114:
    v1 = *(int32_t*)((s2) + 0x54);                              // 0x0019b114: lw $v1, 0x54($s2)
    a0 = 1;                                                     // 0x0019b118: addiu $a0, $zero, 1
    a0 = a0 << t0;                                              // 0x0019b11c: sllv $a0, $a0, $t0
    v1 = v1 & a0;                                               // 0x0019b120: and $v1, $v1, $a0
    if (v1 == 0) goto label_0x19b160;                           // 0x0019b124: beqz $v1, 0x19b160
    v1 = t0 << 1;                                               // 0x0019b128: sll $v1, $t0, 1
    at = 0x7000 << 16;                                          // 0x0019b12c: lui $at, 0x7000
    a0 = v1 + t0;                                               // 0x0019b130: addu $a0, $v1, $t0
    a2 = t0 << 6;                                               // 0x0019b134: sll $a2, $t0, 6
    v1 = v0 + a2;                                               // 0x0019b138: addu $v1, $v0, $a2
    at = at | 0x3700;                                           // 0x0019b13c: ori $at, $at, 0x3700
    a0 = a0 << 4;                                               // 0x0019b140: sll $a0, $a0, 4
    a1 = v1 + 0x1a0;                                            // 0x0019b144: addiu $a1, $v1, 0x1a0
    v1 = v0 + a0;                                               // 0x0019b148: addu $v1, $v0, $a0
    a2 = a2 + at;                                               // 0x0019b14c: addu $a2, $a2, $at
    a0 = v1 + 0x9a0;                                            // 0x0019b150: addiu $a0, $v1, 0x9a0
    v1 = 0x7000 << 16;                                          // 0x0019b154: lui $v1, 0x7000
    func_00199400();  // 0x199320                                // 0x0019b158: jal 0x199320
    a3 = v1 | 0x3f40;                                           // 0x0019b15c: ori $a3, $v1, 0x3f40
label_0x19b160:
    t0 = t0 + 1;                                                // 0x0019b160: addiu $t0, $t0, 1
    v1 = (t0 < 0x20) ? 1 : 0;                                   // 0x0019b164: slti $v1, $t0, 0x20
    if (v1 != 0) goto label_0x19b114;                           // 0x0019b168: bnez $v1, 0x19b114
    at = 0x28 << 16;                                            // 0x0019b16c: lui $at, 0x28
    v1 = 0x3f80 << 16;                                          // 0x0019b170: lui $v1, 0x3f80
    FPU_F1 = *(float*)((at) + 0x4854);  // Load float           // 0x0019b174: lwc1 $f1, 0x4854($at)
    local_4c = v1;                                              // 0x0019b178: sw $v1, 0x4c($sp)
    local_5c = v1;                                              // 0x0019b17c: sw $v1, 0x5c($sp)
    a0 = v0 + 0x100;                                            // 0x0019b180: addiu $a0, $v0, 0x100
    local_6c = v1;                                              // 0x0019b184: sw $v1, 0x6c($sp)
    a1 = v0 + 0x130;                                            // 0x0019b188: addiu $a1, $v0, 0x130
    v1 = 0x7000 << 16;                                          // 0x0019b18c: lui $v1, 0x7000
    a3 = sp + 0x40;                                             // 0x0019b190: addiu $a3, $sp, 0x40
    a2 = v1 | 0x3f40;                                           // 0x0019b194: ori $a2, $v1, 0x3f40
    at = 0x28 << 16;                                            // 0x0019b198: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x4858);  // Load float           // 0x0019b19c: lwc1 $f0, 0x4858($at)
    /* FPU: neg.s $f1, $f1 */                                   // 0x0019b1a0: neg.s $f1, $f1
    *(float*)((sp) + 0x40) = FPU_F1;  // Store float            // 0x0019b1a4: swc1 $f1, 0x40($sp)
    at = 0x28 << 16;                                            // 0x0019b1a8: lui $at, 0x28
    FPU_F4 = *(float*)((at) + 0x485c);  // Load float           // 0x0019b1ac: lwc1 $f4, 0x485c($at)
    /* FPU: neg.s $f5, $f0 */                                   // 0x0019b1b0: neg.s $f5, $f0
    *(float*)((sp) + 0x44) = FPU_F5;  // Store float            // 0x0019b1b4: swc1 $f5, 0x44($sp)
    at = 0x28 << 16;                                            // 0x0019b1b8: lui $at, 0x28
    FPU_F3 = *(float*)((at) + 0x48c8);  // Load float           // 0x0019b1bc: lwc1 $f3, 0x48c8($at)
    /* FPU: neg.s $f4, $f4 */                                   // 0x0019b1c0: neg.s $f4, $f4
    *(float*)((sp) + 0x48) = FPU_F4;  // Store float            // 0x0019b1c4: swc1 $f4, 0x48($sp)
    at = 0x28 << 16;                                            // 0x0019b1c8: lui $at, 0x28
    FPU_F2 = *(float*)((at) + 0x48cc);  // Load float           // 0x0019b1cc: lwc1 $f2, 0x48cc($at)
    *(float*)((sp) + 0x50) = FPU_F3;  // Store float            // 0x0019b1d0: swc1 $f3, 0x50($sp)
    at = 0x28 << 16;                                            // 0x0019b1d4: lui $at, 0x28
    FPU_F1 = *(float*)((at) + 0x48d0);  // Load float           // 0x0019b1d8: lwc1 $f1, 0x48d0($at)
    *(float*)((sp) + 0x54) = FPU_F2;  // Store float            // 0x0019b1dc: swc1 $f2, 0x54($sp)
    at = 0x28 << 16;                                            // 0x0019b1e0: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x4930);  // Load float           // 0x0019b1e4: lwc1 $f0, 0x4930($at)
    *(float*)((sp) + 0x58) = FPU_F1;  // Store float            // 0x0019b1e8: swc1 $f1, 0x58($sp)
    at = 0x28 << 16;                                            // 0x0019b1ec: lui $at, 0x28
    FPU_F1 = *(float*)((at) + 0x4934);  // Load float           // 0x0019b1f0: lwc1 $f1, 0x4934($at)
    *(float*)((sp) + 0x60) = FPU_F0;  // Store float            // 0x0019b1f4: swc1 $f0, 0x60($sp)
    at = 0x28 << 16;                                            // 0x0019b1f8: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x4938);  // Load float           // 0x0019b1fc: lwc1 $f0, 0x4938($at)
    *(float*)((sp) + 0x64) = FPU_F1;  // Store float            // 0x0019b200: swc1 $f1, 0x64($sp)
    func_00199760();  // 0x1996b0                                // 0x0019b204: jal 0x1996b0
    *(float*)((sp) + 0x68) = FPU_F0;  // Store float            // 0x0019b208: swc1 $f0, 0x68($sp)
    v1 = *(int32_t*)((s2) + 0x4c);                              // 0x0019b20c: lw $v1, 0x4c($s2)
    FPU_F12 = *(float*)((v1) + 0x24);  // Load float            // 0x0019b210: lwc1 $f12, 0x24($v1)
    func_00199a60();  // 0x1998d0                                // 0x0019b214: jal 0x1998d0
    a0 = v0 + 0x140;                                            // 0x0019b218: addiu $a0, $v0, 0x140
    v1 = 0x1500 << 16;                                          // 0x0019b21c: lui $v1, 0x1500
    v1 = s1 | v1;                                               // 0x0019b220: or $v1, $s1, $v1
    *(uint32_t*)((v0) + 0xfa0) = v1;                            // 0x0019b224: sw $v1, 0xfa0($v0)
    *(uint32_t*)((v0) + 0xfa4) = 0;                             // 0x0019b228: sw $zero, 0xfa4($v0)
    *(uint32_t*)((v0) + 0xfa8) = 0;                             // 0x0019b22c: sw $zero, 0xfa8($v0)
    *(uint32_t*)((v0) + 0xfac) = 0;                             // 0x0019b230: sw $zero, 0xfac($v0)
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x0019b238: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x0019b23c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0019b240: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0019b244: jr $ra
    sp = sp + 0x70;                                             // 0x0019b248: addiu $sp, $sp, 0x70
}