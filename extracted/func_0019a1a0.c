void func_0019a1a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x80;                                            // 0x0019a1a0: addiu $sp, $sp, -0x80
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x0019a1ac: addu.qb $zero, $sp, $s1
    a0 = 0xd0;                                                  // 0x0019a1c0: addiu $a0, $zero, 0xd0
    func_0018dca0();  // 0x18dc30                                // 0x0019a1c4: jal 0x18dc30
    a1 = 0x10;                                                  // 0x0019a1c8: addiu $a1, $zero, 0x10
    v1 = 0x2000 << 16;                                          // 0x0019a1cc: lui $v1, 0x2000
    t0 = 0x28 << 16;                                            // 0x0019a1d0: lui $t0, 0x28
    a0 = v1 | 0xc;                                              // 0x0019a1d4: ori $a0, $v1, 0xc
    a1 = 0x1300 << 16;                                          // 0x0019a1d8: lui $a1, 0x1300
    *(uint32_t*)(v0) = a0;                                      // 0x0019a1dc: sw $a0, 0($v0)
    v1 = 0x100 << 16;                                           // 0x0019a1e0: lui $v1, 0x100
    *(uint32_t*)((v0) + 4) = s0;                                // 0x0019a1e4: sw $s0, 4($v0)
    a2 = v1 | 0x404;                                            // 0x0019a1e8: ori $a2, $v1, 0x404
    a3 = 0x6c0a << 16;                                          // 0x0019a1f0: lui $a3, 0x6c0a
    *(uint32_t*)((v0) + 0x10) = a1;                             // 0x0019a1f4: sw $a1, 0x10($v0)
    v1 = 0x7000 << 16;                                          // 0x0019a1f8: lui $v1, 0x7000
    *(uint32_t*)((v0) + 0x14) = 0;                              // 0x0019a1fc: sw $zero, 0x14($v0)
    at = 0x28 << 16;                                            // 0x0019a200: lui $at, 0x28
    *(uint32_t*)((v0) + 0x18) = a2;                             // 0x0019a204: sw $a2, 0x18($v0)
    a0 = v0 + 0x40;                                             // 0x0019a208: addiu $a0, $v0, 0x40
    *(uint32_t*)((v0) + 0x1c) = a3;                             // 0x0019a20c: sw $a3, 0x1c($v0)
    a2 = v1 | 0x3700;                                           // 0x0019a210: ori $a2, $v1, 0x3700
    a3 = v1 | 0x3f40;                                           // 0x0019a214: ori $a3, $v1, 0x3f40
    a1 = sp + 0x40;                                             // 0x0019a218: addiu $a1, $sp, 0x40
    v1 = *(int32_t*)((s2) + 0x4c);                              // 0x0019a21c: lw $v1, 0x4c($s2)
    FPU_F1 = *(float*)((at) + 0x5470);  // Load float           // 0x0019a220: lwc1 $f1, 0x5470($at)
    t0 = t0 + 0x5360;                                           // 0x0019a224: addiu $t0, $t0, 0x5360
    FPU_F0 = *(float*)((v1) + 0x24);  // Load float             // 0x0019a228: lwc1 $f0, 0x24($v1)
    at = 0x28 << 16;                                            // 0x0019a22c: lui $at, 0x28
    /* FPU: mul.s $f0, $f1, $f0 */                              // 0x0019a230: mul.s $f0, $f1, $f0
    *(float*)((v0) + 0x20) = FPU_F0;  // Store float            // 0x0019a234: swc1 $f0, 0x20($v0)
    v1 = *(int32_t*)((s2) + 0x4c);                              // 0x0019a238: lw $v1, 0x4c($s2)
    FPU_F1 = *(float*)((at) + 0x5474);  // Load float           // 0x0019a23c: lwc1 $f1, 0x5474($at)
    FPU_F0 = *(float*)((v1) + 0x24);  // Load float             // 0x0019a240: lwc1 $f0, 0x24($v1)
    at = 0x28 << 16;                                            // 0x0019a244: lui $at, 0x28
    /* FPU: mul.s $f0, $f1, $f0 */                              // 0x0019a248: mul.s $f0, $f1, $f0
    *(float*)((v0) + 0x24) = FPU_F0;  // Store float            // 0x0019a24c: swc1 $f0, 0x24($v0)
    v1 = *(int32_t*)((s2) + 0x4c);                              // 0x0019a250: lw $v1, 0x4c($s2)
    FPU_F1 = *(float*)((at) + 0x5478);  // Load float           // 0x0019a254: lwc1 $f1, 0x5478($at)
    FPU_F0 = *(float*)((v1) + 0x24);  // Load float             // 0x0019a258: lwc1 $f0, 0x24($v1)
    at = 0x28 << 16;                                            // 0x0019a25c: lui $at, 0x28
    /* FPU: mul.s $f0, $f1, $f0 */                              // 0x0019a260: mul.s $f0, $f1, $f0
    *(float*)((v0) + 0x28) = FPU_F0;  // Store float            // 0x0019a264: swc1 $f0, 0x28($v0)
    FPU_F0 = *(float*)((at) + 0x547c);  // Load float           // 0x0019a268: lwc1 $f0, 0x547c($at)
    *(float*)((v0) + 0x2c) = FPU_F0;  // Store float            // 0x0019a26c: swc1 $f0, 0x2c($v0)
    at = 0x28 << 16;                                            // 0x0019a270: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x5460);  // Load float           // 0x0019a274: lwc1 $f0, 0x5460($at)
    *(float*)((v0) + 0x30) = FPU_F0;  // Store float            // 0x0019a278: swc1 $f0, 0x30($v0)
    at = 0x28 << 16;                                            // 0x0019a27c: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x5464);  // Load float           // 0x0019a280: lwc1 $f0, 0x5464($at)
    *(float*)((v0) + 0x34) = FPU_F0;  // Store float            // 0x0019a284: swc1 $f0, 0x34($v0)
    at = 0x28 << 16;                                            // 0x0019a288: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x5468);  // Load float           // 0x0019a28c: lwc1 $f0, 0x5468($at)
    *(float*)((v0) + 0x38) = FPU_F0;  // Store float            // 0x0019a290: swc1 $f0, 0x38($v0)
    at = 0x28 << 16;                                            // 0x0019a294: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x546c);  // Load float           // 0x0019a298: lwc1 $f0, 0x546c($at)
    func_00199320();  // 0x199240                                // 0x0019a29c: jal 0x199240
    *(float*)((v0) + 0x3c) = FPU_F0;  // Store float            // 0x0019a2a0: swc1 $f0, 0x3c($v0)
    a2 = 0x28 << 16;                                            // 0x0019a2a4: lui $a2, 0x28
    a0 = v0 + 0x80;                                             // 0x0019a2a8: addiu $a0, $v0, 0x80
    func_00199240();  // 0x1991c0                                // 0x0019a2ac: jal 0x1991c0
    a2 = a2 + 0x5320;                                           // 0x0019a2b0: addiu $a2, $a2, 0x5320
    v1 = 0x1500 << 16;                                          // 0x0019a2b4: lui $v1, 0x1500
    v1 = s1 | v1;                                               // 0x0019a2b8: or $v1, $s1, $v1
    *(uint32_t*)((v0) + 0xc0) = v1;                             // 0x0019a2bc: sw $v1, 0xc0($v0)
    *(uint32_t*)((v0) + 0xc4) = 0;                              // 0x0019a2c0: sw $zero, 0xc4($v0)
    *(uint32_t*)((v0) + 0xc8) = 0;                              // 0x0019a2c4: sw $zero, 0xc8($v0)
    *(uint32_t*)((v0) + 0xcc) = 0;                              // 0x0019a2c8: sw $zero, 0xcc($v0)
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x0019a2d0: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x0019a2d4: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0019a2d8: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0019a2dc: jr $ra
    sp = sp + 0x80;                                             // 0x0019a2e0: addiu $sp, $sp, 0x80
}