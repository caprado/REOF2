void func_00199e80() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x80;                                            // 0x00199e80: addiu $sp, $sp, -0x80
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x00199e8c: addu.qb $zero, $sp, $s1
    a0 = 0xf0;                                                  // 0x00199ea0: addiu $a0, $zero, 0xf0
    func_0018dca0();  // 0x18dc30                                // 0x00199ea4: jal 0x18dc30
    a1 = 0x10;                                                  // 0x00199ea8: addiu $a1, $zero, 0x10
    v1 = 0x2000 << 16;                                          // 0x00199eac: lui $v1, 0x2000
    t0 = 0x28 << 16;                                            // 0x00199eb0: lui $t0, 0x28
    a0 = v1 | 0xe;                                              // 0x00199eb4: ori $a0, $v1, 0xe
    a1 = 0x1300 << 16;                                          // 0x00199eb8: lui $a1, 0x1300
    *(uint32_t*)(v0) = a0;                                      // 0x00199ebc: sw $a0, 0($v0)
    v1 = 0x100 << 16;                                           // 0x00199ec0: lui $v1, 0x100
    *(uint32_t*)((v0) + 4) = s0;                                // 0x00199ec4: sw $s0, 4($v0)
    a2 = v1 | 0x404;                                            // 0x00199ec8: ori $a2, $v1, 0x404
    a3 = 0x6c0c << 16;                                          // 0x00199ed0: lui $a3, 0x6c0c
    *(uint32_t*)((v0) + 0x10) = a1;                             // 0x00199ed4: sw $a1, 0x10($v0)
    v1 = 0x7000 << 16;                                          // 0x00199ed8: lui $v1, 0x7000
    *(uint32_t*)((v0) + 0x14) = 0;                              // 0x00199edc: sw $zero, 0x14($v0)
    at = 0x28 << 16;                                            // 0x00199ee0: lui $at, 0x28
    *(uint32_t*)((v0) + 0x18) = a2;                             // 0x00199ee4: sw $a2, 0x18($v0)
    a0 = v0 + 0x30;                                             // 0x00199ee8: addiu $a0, $v0, 0x30
    *(uint32_t*)((v0) + 0x1c) = a3;                             // 0x00199eec: sw $a3, 0x1c($v0)
    a2 = v1 | 0x3700;                                           // 0x00199ef0: ori $a2, $v1, 0x3700
    a3 = v1 | 0x3f40;                                           // 0x00199ef4: ori $a3, $v1, 0x3f40
    a1 = sp + 0x40;                                             // 0x00199ef8: addiu $a1, $sp, 0x40
    v1 = *(int32_t*)((s2) + 0x4c);                              // 0x00199efc: lw $v1, 0x4c($s2)
    FPU_F1 = *(float*)((at) + 0x5470);  // Load float           // 0x00199f00: lwc1 $f1, 0x5470($at)
    t0 = t0 + 0x5360;                                           // 0x00199f04: addiu $t0, $t0, 0x5360
    FPU_F0 = *(float*)((v1) + 0x24);  // Load float             // 0x00199f08: lwc1 $f0, 0x24($v1)
    at = 0x28 << 16;                                            // 0x00199f0c: lui $at, 0x28
    /* FPU: mul.s $f0, $f1, $f0 */                              // 0x00199f10: mul.s $f0, $f1, $f0
    *(float*)((v0) + 0x20) = FPU_F0;  // Store float            // 0x00199f14: swc1 $f0, 0x20($v0)
    v1 = *(int32_t*)((s2) + 0x4c);                              // 0x00199f18: lw $v1, 0x4c($s2)
    FPU_F1 = *(float*)((at) + 0x5474);  // Load float           // 0x00199f1c: lwc1 $f1, 0x5474($at)
    FPU_F0 = *(float*)((v1) + 0x24);  // Load float             // 0x00199f20: lwc1 $f0, 0x24($v1)
    at = 0x28 << 16;                                            // 0x00199f24: lui $at, 0x28
    /* FPU: mul.s $f0, $f1, $f0 */                              // 0x00199f28: mul.s $f0, $f1, $f0
    *(float*)((v0) + 0x24) = FPU_F0;  // Store float            // 0x00199f2c: swc1 $f0, 0x24($v0)
    v1 = *(int32_t*)((s2) + 0x4c);                              // 0x00199f30: lw $v1, 0x4c($s2)
    FPU_F1 = *(float*)((at) + 0x5478);  // Load float           // 0x00199f34: lwc1 $f1, 0x5478($at)
    FPU_F0 = *(float*)((v1) + 0x24);  // Load float             // 0x00199f38: lwc1 $f0, 0x24($v1)
    at = 0x28 << 16;                                            // 0x00199f3c: lui $at, 0x28
    /* FPU: mul.s $f0, $f1, $f0 */                              // 0x00199f40: mul.s $f0, $f1, $f0
    *(float*)((v0) + 0x28) = FPU_F0;  // Store float            // 0x00199f44: swc1 $f0, 0x28($v0)
    FPU_F0 = *(float*)((at) + 0x547c);  // Load float           // 0x00199f48: lwc1 $f0, 0x547c($at)
    func_00199320();  // 0x199240                                // 0x00199f4c: jal 0x199240
    *(float*)((v0) + 0x2c) = FPU_F0;  // Store float            // 0x00199f50: swc1 $f0, 0x2c($v0)
    a2 = 0x28 << 16;                                            // 0x00199f54: lui $a2, 0x28
    a0 = v0 + 0x70;                                             // 0x00199f58: addiu $a0, $v0, 0x70
    func_00199240();  // 0x1991c0                                // 0x00199f5c: jal 0x1991c0
    a2 = a2 + 0x5320;                                           // 0x00199f60: addiu $a2, $a2, 0x5320
    func_00199b40();  // 0x199b10                                // 0x00199f64: jal 0x199b10
    a0 = v0 + 0xb0;                                             // 0x00199f68: addiu $a0, $v0, 0xb0
    v1 = 0x1500 << 16;                                          // 0x00199f6c: lui $v1, 0x1500
    v1 = s1 | v1;                                               // 0x00199f70: or $v1, $s1, $v1
    *(uint32_t*)((v0) + 0xe0) = v1;                             // 0x00199f74: sw $v1, 0xe0($v0)
    *(uint32_t*)((v0) + 0xe4) = 0;                              // 0x00199f78: sw $zero, 0xe4($v0)
    *(uint32_t*)((v0) + 0xe8) = 0;                              // 0x00199f7c: sw $zero, 0xe8($v0)
    *(uint32_t*)((v0) + 0xec) = 0;                              // 0x00199f80: sw $zero, 0xec($v0)
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x00199f88: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x00199f8c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x00199f90: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x00199f94: jr $ra
    sp = sp + 0x80;                                             // 0x00199f98: addiu $sp, $sp, 0x80
}