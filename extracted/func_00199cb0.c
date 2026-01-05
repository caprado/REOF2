void func_00199cb0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0xb0;                                            // 0x00199cb0: addiu $sp, $sp, -0xb0
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x00199cbc: addu.qb $zero, $sp, $s1
    a0 = 0x160;                                                 // 0x00199cd0: addiu $a0, $zero, 0x160
    func_0018dc30();  // 18dc30                                // 0x00199cd4: jal 0x18dc30
    a1 = 0x10;                                                  // 0x00199cd8: addiu $a1, $zero, 0x10
    v1 = 0x2000 << 16;                                          // 0x00199cdc: lui $v1, 0x2000
    t0 = 0x28 << 16;                                            // 0x00199ce0: lui $t0, 0x28
    a0 = v1 | 0x15;                                             // 0x00199ce4: ori $a0, $v1, 0x15
    a1 = 0x1300 << 16;                                          // 0x00199ce8: lui $a1, 0x1300
    *(uint32_t*)(v0) = a0;                                      // 0x00199cec: sw $a0, 0($v0)
    v1 = 0x100 << 16;                                           // 0x00199cf0: lui $v1, 0x100
    *(uint32_t*)((v0) + 4) = s0;                                // 0x00199cf4: sw $s0, 4($v0)
    a2 = v1 | 0x404;                                            // 0x00199cf8: ori $a2, $v1, 0x404
    a3 = 0x6c13 << 16;                                          // 0x00199d00: lui $a3, 0x6c13
    *(uint32_t*)((v0) + 0x10) = a1;                             // 0x00199d04: sw $a1, 0x10($v0)
    v1 = 0x7000 << 16;                                          // 0x00199d08: lui $v1, 0x7000
    *(uint32_t*)((v0) + 0x14) = 0;                              // 0x00199d0c: sw $zero, 0x14($v0)
    at = 0x28 << 16;                                            // 0x00199d10: lui $at, 0x28
    *(uint32_t*)((v0) + 0x18) = a2;                             // 0x00199d14: sw $a2, 0x18($v0)
    a0 = v0 + 0x30;                                             // 0x00199d18: addiu $a0, $v0, 0x30
    *(uint32_t*)((v0) + 0x1c) = a3;                             // 0x00199d1c: sw $a3, 0x1c($v0)
    a2 = v1 | 0x3700;                                           // 0x00199d20: ori $a2, $v1, 0x3700
    a3 = v1 | 0x3f40;                                           // 0x00199d24: ori $a3, $v1, 0x3f40
    a1 = sp + 0x70;                                             // 0x00199d28: addiu $a1, $sp, 0x70
    v1 = *(int32_t*)((s2) + 0x4c);                              // 0x00199d2c: lw $v1, 0x4c($s2)
    FPU_F1 = *(float*)((at) + 0x5470);  // Load float           // 0x00199d30: lwc1 $f1, 0x5470($at)
    t0 = t0 + 0x5360;                                           // 0x00199d34: addiu $t0, $t0, 0x5360
    FPU_F0 = *(float*)((v1) + 0x24);  // Load float             // 0x00199d38: lwc1 $f0, 0x24($v1)
    at = 0x28 << 16;                                            // 0x00199d3c: lui $at, 0x28
    /* FPU: mul.s $f0, $f1, $f0 */                              // 0x00199d40: mul.s $f0, $f1, $f0
    *(float*)((v0) + 0x20) = FPU_F0;  // Store float            // 0x00199d44: swc1 $f0, 0x20($v0)
    v1 = *(int32_t*)((s2) + 0x4c);                              // 0x00199d48: lw $v1, 0x4c($s2)
    FPU_F1 = *(float*)((at) + 0x5474);  // Load float           // 0x00199d4c: lwc1 $f1, 0x5474($at)
    FPU_F0 = *(float*)((v1) + 0x24);  // Load float             // 0x00199d50: lwc1 $f0, 0x24($v1)
    at = 0x28 << 16;                                            // 0x00199d54: lui $at, 0x28
    /* FPU: mul.s $f0, $f1, $f0 */                              // 0x00199d58: mul.s $f0, $f1, $f0
    *(float*)((v0) + 0x24) = FPU_F0;  // Store float            // 0x00199d5c: swc1 $f0, 0x24($v0)
    v1 = *(int32_t*)((s2) + 0x4c);                              // 0x00199d60: lw $v1, 0x4c($s2)
    FPU_F1 = *(float*)((at) + 0x5478);  // Load float           // 0x00199d64: lwc1 $f1, 0x5478($at)
    FPU_F0 = *(float*)((v1) + 0x24);  // Load float             // 0x00199d68: lwc1 $f0, 0x24($v1)
    at = 0x28 << 16;                                            // 0x00199d6c: lui $at, 0x28
    /* FPU: mul.s $f0, $f1, $f0 */                              // 0x00199d70: mul.s $f0, $f1, $f0
    *(float*)((v0) + 0x28) = FPU_F0;  // Store float            // 0x00199d74: swc1 $f0, 0x28($v0)
    FPU_F0 = *(float*)((at) + 0x547c);  // Load float           // 0x00199d78: lwc1 $f0, 0x547c($at)
    func_00199240();  // 199240                                // 0x00199d7c: jal 0x199240
    *(float*)((v0) + 0x2c) = FPU_F0;  // Store float            // 0x00199d80: swc1 $f0, 0x2c($v0)
    a2 = 0x28 << 16;                                            // 0x00199d84: lui $a2, 0x28
    a0 = v0 + 0x70;                                             // 0x00199d88: addiu $a0, $v0, 0x70
    func_001991c0();  // 1991c0                                // 0x00199d8c: jal 0x1991c0
    a2 = a2 + 0x5320;                                           // 0x00199d90: addiu $a2, $a2, 0x5320
    at = 0x28 << 16;                                            // 0x00199d94: lui $at, 0x28
    v1 = 0x7000 << 16;                                          // 0x00199d98: lui $v1, 0x7000
    FPU_F0 = *(float*)((at) + 0x4854);  // Load float           // 0x00199d9c: lwc1 $f0, 0x4854($at)
    a0 = v0 + 0xb0;                                             // 0x00199da0: addiu $a0, $v0, 0xb0
    a1 = v1 | 0x3700;                                           // 0x00199da4: ori $a1, $v1, 0x3700
    a2 = sp + 0x40;                                             // 0x00199da8: addiu $a2, $sp, 0x40
    at = 0x28 << 16;                                            // 0x00199dac: lui $at, 0x28
    FPU_F5 = *(float*)((at) + 0x4858);  // Load float           // 0x00199db0: lwc1 $f5, 0x4858($at)
    /* FPU: neg.s $f6, $f0 */                                   // 0x00199db4: neg.s $f6, $f0
    *(float*)((sp) + 0x40) = FPU_F6;  // Store float            // 0x00199db8: swc1 $f6, 0x40($sp)
    at = 0x28 << 16;                                            // 0x00199dbc: lui $at, 0x28
    FPU_F4 = *(float*)((at) + 0x485c);  // Load float           // 0x00199dc0: lwc1 $f4, 0x485c($at)
    /* FPU: neg.s $f5, $f5 */                                   // 0x00199dc4: neg.s $f5, $f5
    *(float*)((sp) + 0x44) = FPU_F5;  // Store float            // 0x00199dc8: swc1 $f5, 0x44($sp)
    at = 0x28 << 16;                                            // 0x00199dcc: lui $at, 0x28
    FPU_F3 = *(float*)((at) + 0x48bc);  // Load float           // 0x00199dd0: lwc1 $f3, 0x48bc($at)
    /* FPU: neg.s $f4, $f4 */                                   // 0x00199dd4: neg.s $f4, $f4
    *(float*)((sp) + 0x48) = FPU_F4;  // Store float            // 0x00199dd8: swc1 $f4, 0x48($sp)
    at = 0x28 << 16;                                            // 0x00199ddc: lui $at, 0x28
    FPU_F2 = *(float*)((at) + 0x48c0);  // Load float           // 0x00199de0: lwc1 $f2, 0x48c0($at)
    /* FPU: neg.s $f3, $f3 */                                   // 0x00199de4: neg.s $f3, $f3
    *(float*)((sp) + 0x50) = FPU_F3;  // Store float            // 0x00199de8: swc1 $f3, 0x50($sp)
    at = 0x28 << 16;                                            // 0x00199dec: lui $at, 0x28
    FPU_F1 = *(float*)((at) + 0x48c4);  // Load float           // 0x00199df0: lwc1 $f1, 0x48c4($at)
    /* FPU: neg.s $f2, $f2 */                                   // 0x00199df4: neg.s $f2, $f2
    *(float*)((sp) + 0x54) = FPU_F2;  // Store float            // 0x00199df8: swc1 $f2, 0x54($sp)
    at = 0x28 << 16;                                            // 0x00199dfc: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x4924);  // Load float           // 0x00199e00: lwc1 $f0, 0x4924($at)
    /* FPU: neg.s $f1, $f1 */                                   // 0x00199e04: neg.s $f1, $f1
    *(float*)((sp) + 0x58) = FPU_F1;  // Store float            // 0x00199e08: swc1 $f1, 0x58($sp)
    at = 0x28 << 16;                                            // 0x00199e0c: lui $at, 0x28
    FPU_F1 = *(float*)((at) + 0x4928);  // Load float           // 0x00199e10: lwc1 $f1, 0x4928($at)
    /* FPU: neg.s $f0, $f0 */                                   // 0x00199e14: neg.s $f0, $f0
    *(float*)((sp) + 0x60) = FPU_F0;  // Store float            // 0x00199e18: swc1 $f0, 0x60($sp)
    at = 0x28 << 16;                                            // 0x00199e1c: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x492c);  // Load float           // 0x00199e20: lwc1 $f0, 0x492c($at)
    /* FPU: neg.s $f1, $f1 */                                   // 0x00199e24: neg.s $f1, $f1
    *(float*)((sp) + 0x64) = FPU_F1;  // Store float            // 0x00199e28: swc1 $f1, 0x64($sp)
    /* FPU: neg.s $f0, $f0 */                                   // 0x00199e2c: neg.s $f0, $f0
    func_00199400();  // 199400                                // 0x00199e30: jal 0x199400
    *(float*)((sp) + 0x68) = FPU_F0;  // Store float            // 0x00199e34: swc1 $f0, 0x68($sp)
    v1 = *(int32_t*)((s2) + 0x4c);                              // 0x00199e38: lw $v1, 0x4c($s2)
    FPU_F12 = *(float*)((v1) + 0x24);  // Load float            // 0x00199e3c: lwc1 $f12, 0x24($v1)
    func_00199760();  // 199760                                // 0x00199e40: jal 0x199760
    a0 = v0 + 0xe0;                                             // 0x00199e44: addiu $a0, $v0, 0xe0
    func_00199b10();  // 199b10                                // 0x00199e48: jal 0x199b10
    a0 = v0 + 0x120;                                            // 0x00199e4c: addiu $a0, $v0, 0x120
    v1 = 0x1500 << 16;                                          // 0x00199e50: lui $v1, 0x1500
    v1 = s1 | v1;                                               // 0x00199e54: or $v1, $s1, $v1
    *(uint32_t*)((v0) + 0x150) = v1;                            // 0x00199e58: sw $v1, 0x150($v0)
    *(uint32_t*)((v0) + 0x154) = 0;                             // 0x00199e5c: sw $zero, 0x154($v0)
    *(uint32_t*)((v0) + 0x158) = 0;                             // 0x00199e60: sw $zero, 0x158($v0)
    *(uint32_t*)((v0) + 0x15c) = 0;                             // 0x00199e64: sw $zero, 0x15c($v0)
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x00199e6c: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x00199e70: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x00199e74: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x00199e78: jr $ra
    sp = sp + 0xb0;                                             // 0x00199e7c: addiu $sp, $sp, 0xb0
}