void func_00199fa0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0xb0;                                            // 0x00199fa0: addiu $sp, $sp, -0xb0
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x00199fac: addu.qb $zero, $sp, $s1
    a0 = 0x170;                                                 // 0x00199fc0: addiu $a0, $zero, 0x170
    func_0018dc30();  // 18dc30                                // 0x00199fc4: jal 0x18dc30
    a1 = 0x10;                                                  // 0x00199fc8: addiu $a1, $zero, 0x10
    v1 = 0x2000 << 16;                                          // 0x00199fcc: lui $v1, 0x2000
    t0 = 0x28 << 16;                                            // 0x00199fd0: lui $t0, 0x28
    a0 = v1 | 0x16;                                             // 0x00199fd4: ori $a0, $v1, 0x16
    a1 = 0x1300 << 16;                                          // 0x00199fd8: lui $a1, 0x1300
    *(uint32_t*)(v0) = a0;                                      // 0x00199fdc: sw $a0, 0($v0)
    v1 = 0x100 << 16;                                           // 0x00199fe0: lui $v1, 0x100
    *(uint32_t*)((v0) + 4) = s0;                                // 0x00199fe4: sw $s0, 4($v0)
    a2 = v1 | 0x404;                                            // 0x00199fe8: ori $a2, $v1, 0x404
    a3 = 0x6c14 << 16;                                          // 0x00199ff0: lui $a3, 0x6c14
    *(uint32_t*)((v0) + 0x10) = a1;                             // 0x00199ff4: sw $a1, 0x10($v0)
    v1 = 0x7000 << 16;                                          // 0x00199ff8: lui $v1, 0x7000
    *(uint32_t*)((v0) + 0x14) = 0;                              // 0x00199ffc: sw $zero, 0x14($v0)
    at = 0x28 << 16;                                            // 0x0019a000: lui $at, 0x28
    *(uint32_t*)((v0) + 0x18) = a2;                             // 0x0019a004: sw $a2, 0x18($v0)
    a0 = v0 + 0x30;                                             // 0x0019a008: addiu $a0, $v0, 0x30
    *(uint32_t*)((v0) + 0x1c) = a3;                             // 0x0019a00c: sw $a3, 0x1c($v0)
    a2 = v1 | 0x3700;                                           // 0x0019a010: ori $a2, $v1, 0x3700
    a3 = v1 | 0x3f40;                                           // 0x0019a014: ori $a3, $v1, 0x3f40
    a1 = sp + 0x70;                                             // 0x0019a018: addiu $a1, $sp, 0x70
    v1 = *(int32_t*)((s2) + 0x4c);                              // 0x0019a01c: lw $v1, 0x4c($s2)
    FPU_F1 = *(float*)((at) + 0x5470);  // Load float           // 0x0019a020: lwc1 $f1, 0x5470($at)
    t0 = t0 + 0x5360;                                           // 0x0019a024: addiu $t0, $t0, 0x5360
    FPU_F0 = *(float*)((v1) + 0x24);  // Load float             // 0x0019a028: lwc1 $f0, 0x24($v1)
    at = 0x28 << 16;                                            // 0x0019a02c: lui $at, 0x28
    /* FPU: mul.s $f0, $f1, $f0 */                              // 0x0019a030: mul.s $f0, $f1, $f0
    *(float*)((v0) + 0x20) = FPU_F0;  // Store float            // 0x0019a034: swc1 $f0, 0x20($v0)
    v1 = *(int32_t*)((s2) + 0x4c);                              // 0x0019a038: lw $v1, 0x4c($s2)
    FPU_F1 = *(float*)((at) + 0x5474);  // Load float           // 0x0019a03c: lwc1 $f1, 0x5474($at)
    FPU_F0 = *(float*)((v1) + 0x24);  // Load float             // 0x0019a040: lwc1 $f0, 0x24($v1)
    at = 0x28 << 16;                                            // 0x0019a044: lui $at, 0x28
    /* FPU: mul.s $f0, $f1, $f0 */                              // 0x0019a048: mul.s $f0, $f1, $f0
    *(float*)((v0) + 0x24) = FPU_F0;  // Store float            // 0x0019a04c: swc1 $f0, 0x24($v0)
    v1 = *(int32_t*)((s2) + 0x4c);                              // 0x0019a050: lw $v1, 0x4c($s2)
    FPU_F1 = *(float*)((at) + 0x5478);  // Load float           // 0x0019a054: lwc1 $f1, 0x5478($at)
    FPU_F0 = *(float*)((v1) + 0x24);  // Load float             // 0x0019a058: lwc1 $f0, 0x24($v1)
    at = 0x28 << 16;                                            // 0x0019a05c: lui $at, 0x28
    /* FPU: mul.s $f0, $f1, $f0 */                              // 0x0019a060: mul.s $f0, $f1, $f0
    *(float*)((v0) + 0x28) = FPU_F0;  // Store float            // 0x0019a064: swc1 $f0, 0x28($v0)
    FPU_F0 = *(float*)((at) + 0x547c);  // Load float           // 0x0019a068: lwc1 $f0, 0x547c($at)
    func_00199240();  // 199240                                // 0x0019a06c: jal 0x199240
    *(float*)((v0) + 0x2c) = FPU_F0;  // Store float            // 0x0019a070: swc1 $f0, 0x2c($v0)
    a2 = 0x28 << 16;                                            // 0x0019a074: lui $a2, 0x28
    a0 = v0 + 0x70;                                             // 0x0019a078: addiu $a0, $v0, 0x70
    func_001991c0();  // 1991c0                                // 0x0019a07c: jal 0x1991c0
    a2 = a2 + 0x5320;                                           // 0x0019a080: addiu $a2, $a2, 0x5320
    at = 0x28 << 16;                                            // 0x0019a084: lui $at, 0x28
    v1 = 0x7000 << 16;                                          // 0x0019a088: lui $v1, 0x7000
    FPU_F0 = *(float*)((at) + 0x4854);  // Load float           // 0x0019a08c: lwc1 $f0, 0x4854($at)
    a0 = v0 + 0xb0;                                             // 0x0019a090: addiu $a0, $v0, 0xb0
    a1 = v1 | 0x3700;                                           // 0x0019a094: ori $a1, $v1, 0x3700
    a2 = sp + 0x40;                                             // 0x0019a098: addiu $a2, $sp, 0x40
    at = 0x28 << 16;                                            // 0x0019a09c: lui $at, 0x28
    FPU_F5 = *(float*)((at) + 0x4858);  // Load float           // 0x0019a0a0: lwc1 $f5, 0x4858($at)
    /* FPU: neg.s $f6, $f0 */                                   // 0x0019a0a4: neg.s $f6, $f0
    *(float*)((sp) + 0x40) = FPU_F6;  // Store float            // 0x0019a0a8: swc1 $f6, 0x40($sp)
    at = 0x28 << 16;                                            // 0x0019a0ac: lui $at, 0x28
    FPU_F4 = *(float*)((at) + 0x485c);  // Load float           // 0x0019a0b0: lwc1 $f4, 0x485c($at)
    /* FPU: neg.s $f5, $f5 */                                   // 0x0019a0b4: neg.s $f5, $f5
    *(float*)((sp) + 0x44) = FPU_F5;  // Store float            // 0x0019a0b8: swc1 $f5, 0x44($sp)
    at = 0x28 << 16;                                            // 0x0019a0bc: lui $at, 0x28
    FPU_F3 = *(float*)((at) + 0x48bc);  // Load float           // 0x0019a0c0: lwc1 $f3, 0x48bc($at)
    /* FPU: neg.s $f4, $f4 */                                   // 0x0019a0c4: neg.s $f4, $f4
    *(float*)((sp) + 0x48) = FPU_F4;  // Store float            // 0x0019a0c8: swc1 $f4, 0x48($sp)
    at = 0x28 << 16;                                            // 0x0019a0cc: lui $at, 0x28
    FPU_F2 = *(float*)((at) + 0x48c0);  // Load float           // 0x0019a0d0: lwc1 $f2, 0x48c0($at)
    /* FPU: neg.s $f3, $f3 */                                   // 0x0019a0d4: neg.s $f3, $f3
    *(float*)((sp) + 0x50) = FPU_F3;  // Store float            // 0x0019a0d8: swc1 $f3, 0x50($sp)
    at = 0x28 << 16;                                            // 0x0019a0dc: lui $at, 0x28
    FPU_F1 = *(float*)((at) + 0x48c4);  // Load float           // 0x0019a0e0: lwc1 $f1, 0x48c4($at)
    /* FPU: neg.s $f2, $f2 */                                   // 0x0019a0e4: neg.s $f2, $f2
    *(float*)((sp) + 0x54) = FPU_F2;  // Store float            // 0x0019a0e8: swc1 $f2, 0x54($sp)
    at = 0x28 << 16;                                            // 0x0019a0ec: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x4924);  // Load float           // 0x0019a0f0: lwc1 $f0, 0x4924($at)
    /* FPU: neg.s $f1, $f1 */                                   // 0x0019a0f4: neg.s $f1, $f1
    *(float*)((sp) + 0x58) = FPU_F1;  // Store float            // 0x0019a0f8: swc1 $f1, 0x58($sp)
    at = 0x28 << 16;                                            // 0x0019a0fc: lui $at, 0x28
    FPU_F1 = *(float*)((at) + 0x4928);  // Load float           // 0x0019a100: lwc1 $f1, 0x4928($at)
    /* FPU: neg.s $f0, $f0 */                                   // 0x0019a104: neg.s $f0, $f0
    *(float*)((sp) + 0x60) = FPU_F0;  // Store float            // 0x0019a108: swc1 $f0, 0x60($sp)
    at = 0x28 << 16;                                            // 0x0019a10c: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x492c);  // Load float           // 0x0019a110: lwc1 $f0, 0x492c($at)
    /* FPU: neg.s $f1, $f1 */                                   // 0x0019a114: neg.s $f1, $f1
    *(float*)((sp) + 0x64) = FPU_F1;  // Store float            // 0x0019a118: swc1 $f1, 0x64($sp)
    /* FPU: neg.s $f0, $f0 */                                   // 0x0019a11c: neg.s $f0, $f0
    func_00199400();  // 199400                                // 0x0019a120: jal 0x199400
    *(float*)((sp) + 0x68) = FPU_F0;  // Store float            // 0x0019a124: swc1 $f0, 0x68($sp)
    v1 = *(int32_t*)((s2) + 0x4c);                              // 0x0019a128: lw $v1, 0x4c($s2)
    FPU_F12 = *(float*)((v1) + 0x24);  // Load float            // 0x0019a12c: lwc1 $f12, 0x24($v1)
    func_00199760();  // 199760                                // 0x0019a130: jal 0x199760
    a0 = v0 + 0xe0;                                             // 0x0019a134: addiu $a0, $v0, 0xe0
    func_00199b10();  // 199b10                                // 0x0019a138: jal 0x199b10
    a0 = v0 + 0x120;                                            // 0x0019a13c: addiu $a0, $v0, 0x120
    FPU_F1 = *(float*)((gp) + -0x6464);  // Load float          // 0x0019a140: lwc1 $f1, -0x6464($gp)
    v1 = 0x3f80 << 16;                                          // 0x0019a144: lui $v1, 0x3f80
    /* move to FPU: $v1, $f0 */                                 // 0x0019a148: mtc1 $v1, $f0
    v1 = 0x1500 << 16;                                          // 0x0019a14c: lui $v1, 0x1500
    v1 = s1 | v1;                                               // 0x0019a150: or $v1, $s1, $v1
    *(float*)((v0) + 0x150) = FPU_F1;  // Store float           // 0x0019a154: swc1 $f1, 0x150($v0)
    FPU_F2 = *(float*)((gp) + -0x6464);  // Load float          // 0x0019a158: lwc1 $f2, -0x6464($gp)
    FPU_F1 = *(float*)((gp) + -0x6460);  // Load float          // 0x0019a15c: lwc1 $f1, -0x6460($gp)
    /* FPU: sub.s $f1, $f2, $f1 */                              // 0x0019a160: sub.s $f1, $f2, $f1
    /* FPU: div.s $f0, $f0, $f1 */                              // 0x0019a164: div.s $f0, $f0, $f1
    *(float*)((v0) + 0x154) = FPU_F0;  // Store float           // 0x0019a168: swc1 $f0, 0x154($v0)
    *(uint32_t*)((v0) + 0x158) = 0;                             // 0x0019a16c: sw $zero, 0x158($v0)
    *(uint32_t*)((v0) + 0x15c) = 0;                             // 0x0019a170: sw $zero, 0x15c($v0)
    *(uint32_t*)((v0) + 0x160) = v1;                            // 0x0019a174: sw $v1, 0x160($v0)
    *(uint32_t*)((v0) + 0x164) = 0;                             // 0x0019a178: sw $zero, 0x164($v0)
    *(uint32_t*)((v0) + 0x168) = 0;                             // 0x0019a17c: sw $zero, 0x168($v0)
    *(uint32_t*)((v0) + 0x16c) = 0;                             // 0x0019a180: sw $zero, 0x16c($v0)
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x0019a188: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x0019a18c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0019a190: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0019a194: jr $ra
    sp = sp + 0xb0;                                             // 0x0019a198: addiu $sp, $sp, 0xb0
}