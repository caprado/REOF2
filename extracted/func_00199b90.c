void func_00199b90() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x80;                                            // 0x00199b90: addiu $sp, $sp, -0x80
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x00199b9c: addu.qb $zero, $sp, $s1
    a0 = 0xc0;                                                  // 0x00199bb0: addiu $a0, $zero, 0xc0
    func_0018dc30();  // 18dc30                                // 0x00199bb4: jal 0x18dc30
    a1 = 0x10;                                                  // 0x00199bb8: addiu $a1, $zero, 0x10
    v1 = 0x2000 << 16;                                          // 0x00199bbc: lui $v1, 0x2000
    t0 = 0x28 << 16;                                            // 0x00199bc0: lui $t0, 0x28
    a0 = v1 | 0xb;                                              // 0x00199bc4: ori $a0, $v1, 0xb
    a1 = 0x1300 << 16;                                          // 0x00199bc8: lui $a1, 0x1300
    *(uint32_t*)(v0) = a0;                                      // 0x00199bcc: sw $a0, 0($v0)
    v1 = 0x100 << 16;                                           // 0x00199bd0: lui $v1, 0x100
    *(uint32_t*)((v0) + 4) = s0;                                // 0x00199bd4: sw $s0, 4($v0)
    a2 = v1 | 0x404;                                            // 0x00199bd8: ori $a2, $v1, 0x404
    a3 = 0x6c09 << 16;                                          // 0x00199be0: lui $a3, 0x6c09
    *(uint32_t*)((v0) + 0x10) = a1;                             // 0x00199be4: sw $a1, 0x10($v0)
    v1 = 0x7000 << 16;                                          // 0x00199be8: lui $v1, 0x7000
    *(uint32_t*)((v0) + 0x14) = 0;                              // 0x00199bec: sw $zero, 0x14($v0)
    at = 0x28 << 16;                                            // 0x00199bf0: lui $at, 0x28
    *(uint32_t*)((v0) + 0x18) = a2;                             // 0x00199bf4: sw $a2, 0x18($v0)
    a0 = v0 + 0x30;                                             // 0x00199bf8: addiu $a0, $v0, 0x30
    *(uint32_t*)((v0) + 0x1c) = a3;                             // 0x00199bfc: sw $a3, 0x1c($v0)
    a2 = v1 | 0x3700;                                           // 0x00199c00: ori $a2, $v1, 0x3700
    a3 = v1 | 0x3f40;                                           // 0x00199c04: ori $a3, $v1, 0x3f40
    a1 = sp + 0x40;                                             // 0x00199c08: addiu $a1, $sp, 0x40
    v1 = *(int32_t*)((s2) + 0x4c);                              // 0x00199c0c: lw $v1, 0x4c($s2)
    FPU_F1 = *(float*)((at) + 0x5470);  // Load float           // 0x00199c10: lwc1 $f1, 0x5470($at)
    t0 = t0 + 0x5360;                                           // 0x00199c14: addiu $t0, $t0, 0x5360
    FPU_F0 = *(float*)((v1) + 0x24);  // Load float             // 0x00199c18: lwc1 $f0, 0x24($v1)
    at = 0x28 << 16;                                            // 0x00199c1c: lui $at, 0x28
    /* FPU: mul.s $f0, $f1, $f0 */                              // 0x00199c20: mul.s $f0, $f1, $f0
    *(float*)((v0) + 0x20) = FPU_F0;  // Store float            // 0x00199c24: swc1 $f0, 0x20($v0)
    v1 = *(int32_t*)((s2) + 0x4c);                              // 0x00199c28: lw $v1, 0x4c($s2)
    FPU_F1 = *(float*)((at) + 0x5474);  // Load float           // 0x00199c2c: lwc1 $f1, 0x5474($at)
    FPU_F0 = *(float*)((v1) + 0x24);  // Load float             // 0x00199c30: lwc1 $f0, 0x24($v1)
    at = 0x28 << 16;                                            // 0x00199c34: lui $at, 0x28
    /* FPU: mul.s $f0, $f1, $f0 */                              // 0x00199c38: mul.s $f0, $f1, $f0
    *(float*)((v0) + 0x24) = FPU_F0;  // Store float            // 0x00199c3c: swc1 $f0, 0x24($v0)
    v1 = *(int32_t*)((s2) + 0x4c);                              // 0x00199c40: lw $v1, 0x4c($s2)
    FPU_F1 = *(float*)((at) + 0x5478);  // Load float           // 0x00199c44: lwc1 $f1, 0x5478($at)
    FPU_F0 = *(float*)((v1) + 0x24);  // Load float             // 0x00199c48: lwc1 $f0, 0x24($v1)
    at = 0x28 << 16;                                            // 0x00199c4c: lui $at, 0x28
    /* FPU: mul.s $f0, $f1, $f0 */                              // 0x00199c50: mul.s $f0, $f1, $f0
    *(float*)((v0) + 0x28) = FPU_F0;  // Store float            // 0x00199c54: swc1 $f0, 0x28($v0)
    FPU_F0 = *(float*)((at) + 0x547c);  // Load float           // 0x00199c58: lwc1 $f0, 0x547c($at)
    func_00199240();  // 199240                                // 0x00199c5c: jal 0x199240
    *(float*)((v0) + 0x2c) = FPU_F0;  // Store float            // 0x00199c60: swc1 $f0, 0x2c($v0)
    a2 = 0x28 << 16;                                            // 0x00199c64: lui $a2, 0x28
    a0 = v0 + 0x70;                                             // 0x00199c68: addiu $a0, $v0, 0x70
    func_001991c0();  // 1991c0                                // 0x00199c6c: jal 0x1991c0
    a2 = a2 + 0x5320;                                           // 0x00199c70: addiu $a2, $a2, 0x5320
    v1 = 0x1500 << 16;                                          // 0x00199c74: lui $v1, 0x1500
    v1 = s1 | v1;                                               // 0x00199c78: or $v1, $s1, $v1
    *(uint32_t*)((v0) + 0xb0) = v1;                             // 0x00199c7c: sw $v1, 0xb0($v0)
    *(uint32_t*)((v0) + 0xb4) = 0;                              // 0x00199c80: sw $zero, 0xb4($v0)
    *(uint32_t*)((v0) + 0xb8) = 0;                              // 0x00199c84: sw $zero, 0xb8($v0)
    *(uint32_t*)((v0) + 0xbc) = 0;                              // 0x00199c88: sw $zero, 0xbc($v0)
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x00199c90: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x00199c94: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x00199c98: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x00199c9c: jr $ra
    sp = sp + 0x80;                                             // 0x00199ca0: addiu $sp, $sp, 0x80
}