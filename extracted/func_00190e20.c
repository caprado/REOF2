void func_00190e20() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x90;                                            // 0x00190e20: addiu $sp, $sp, -0x90
    v0 = sp + 0x50;                                             // 0x00190e28: addiu $v0, $sp, 0x50
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x00190e2c: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x00190e38: addu.qb $zero, $sp, $s1
    s1 = sp + 0x64;                                             // 0x00190e44: addiu $s1, $sp, 0x64
    FPU_F1 = *(float*)(a1);  // Load float                      // 0x00190e48: lwc1 $f1, 0($a1)
    s0 = sp + 0x68;                                             // 0x00190e4c: addiu $s0, $sp, 0x68
    FPU_F0 = *(float*)(a2);  // Load float                      // 0x00190e50: lwc1 $f0, 0($a2)
    a0 = sp + 0x60;                                             // 0x00190e54: addiu $a0, $sp, 0x60
    /* FPU: sub.s $f0, $f1, $f0 */                              // 0x00190e58: sub.s $f0, $f1, $f0
    *(float*)((sp) + 0x60) = FPU_F0;  // Store float            // 0x00190e5c: swc1 $f0, 0x60($sp)
    FPU_F1 = *(float*)((a1) + 4);  // Load float                // 0x00190e60: lwc1 $f1, 4($a1)
    FPU_F0 = *(float*)((a2) + 4);  // Load float                // 0x00190e64: lwc1 $f0, 4($a2)
    /* FPU: sub.s $f0, $f1, $f0 */                              // 0x00190e68: sub.s $f0, $f1, $f0
    *(float*)(s1) = FPU_F0;  // Store float                     // 0x00190e6c: swc1 $f0, 0($s1)
    FPU_F1 = *(float*)((a1) + 8);  // Load float                // 0x00190e70: lwc1 $f1, 8($a1)
    FPU_F0 = *(float*)((a2) + 8);  // Load float                // 0x00190e74: lwc1 $f0, 8($a2)
    /* FPU: sub.s $f0, $f1, $f0 */                              // 0x00190e78: sub.s $f0, $f1, $f0
    *(float*)(s0) = FPU_F0;  // Store float                     // 0x00190e7c: swc1 $f0, 0($s0)
    FPU_F2 = *(float*)(a3);  // Load float                      // 0x00190e80: lwc1 $f2, 0($a3)
    FPU_F1 = *(float*)((a3) + 4);  // Load float                // 0x00190e84: lwc1 $f1, 4($a3)
    FPU_F0 = *(float*)((a3) + 8);  // Load float                // 0x00190e88: lwc1 $f0, 8($a3)
    *(float*)(v0) = FPU_F2;  // Store float                     // 0x00190e8c: swc1 $f2, 0($v0)
    *(float*)((v0) + 4) = FPU_F1;  // Store float               // 0x00190e90: swc1 $f1, 4($v0)
    func_00191ba0();  // 0x191b30                                // 0x00190e94: jal 0x191b30
    *(float*)((v0) + 8) = FPU_F0;  // Store float               // 0x00190e98: swc1 $f0, 8($v0)
    func_00191ba0();  // 0x191b30                                // 0x00190e9c: jal 0x191b30
    a0 = sp + 0x50;                                             // 0x00190ea0: addiu $a0, $sp, 0x50
    a0 = sp + 0x80;                                             // 0x00190ea4: addiu $a0, $sp, 0x80
    a1 = sp + 0x50;                                             // 0x00190ea8: addiu $a1, $sp, 0x50
    func_00191ca0();  // 0x191c00                                // 0x00190eac: jal 0x191c00
    a2 = sp + 0x60;                                             // 0x00190eb0: addiu $a2, $sp, 0x60
    func_00191ba0();  // 0x191b30                                // 0x00190eb4: jal 0x191b30
    a0 = sp + 0x80;                                             // 0x00190eb8: addiu $a0, $sp, 0x80
    a0 = sp + 0x70;                                             // 0x00190ebc: addiu $a0, $sp, 0x70
    a1 = sp + 0x60;                                             // 0x00190ec0: addiu $a1, $sp, 0x60
    func_00191ca0();  // 0x191c00                                // 0x00190ec4: jal 0x191c00
    a2 = sp + 0x80;                                             // 0x00190ec8: addiu $a2, $sp, 0x80
    *(uint32_t*)((s3) + 0xc) = 0;                               // 0x00190ecc: sw $zero, 0xc($s3)
    v0 = 0x3f80 << 16;                                          // 0x00190ed0: lui $v0, 0x3f80
    *(uint32_t*)((s3) + 0x1c) = 0;                              // 0x00190ed4: sw $zero, 0x1c($s3)
    *(uint32_t*)((s3) + 0x2c) = 0;                              // 0x00190edc: sw $zero, 0x2c($s3)
    a1 = sp + 0x80;                                             // 0x00190ee0: addiu $a1, $sp, 0x80
    *(uint32_t*)((s3) + 0x3c) = v0;                             // 0x00190ee4: sw $v0, 0x3c($s3)
    FPU_F0 = *(float*)((sp) + 0x80);  // Load float             // 0x00190ee8: lwc1 $f0, 0x80($sp)
    *(float*)(s3) = FPU_F0;  // Store float                     // 0x00190eec: swc1 $f0, 0($s3)
    FPU_F0 = *(float*)((sp) + 0x84);  // Load float             // 0x00190ef0: lwc1 $f0, 0x84($sp)
    *(float*)((s3) + 0x10) = FPU_F0;  // Store float            // 0x00190ef4: swc1 $f0, 0x10($s3)
    FPU_F0 = *(float*)((sp) + 0x88);  // Load float             // 0x00190ef8: lwc1 $f0, 0x88($sp)
    *(float*)((s3) + 0x20) = FPU_F0;  // Store float            // 0x00190efc: swc1 $f0, 0x20($s3)
    FPU_F0 = *(float*)((sp) + 0x70);  // Load float             // 0x00190f00: lwc1 $f0, 0x70($sp)
    *(float*)((s3) + 4) = FPU_F0;  // Store float               // 0x00190f04: swc1 $f0, 4($s3)
    FPU_F0 = *(float*)((sp) + 0x74);  // Load float             // 0x00190f08: lwc1 $f0, 0x74($sp)
    *(float*)((s3) + 0x14) = FPU_F0;  // Store float            // 0x00190f0c: swc1 $f0, 0x14($s3)
    FPU_F0 = *(float*)((sp) + 0x78);  // Load float             // 0x00190f10: lwc1 $f0, 0x78($sp)
    *(float*)((s3) + 0x24) = FPU_F0;  // Store float            // 0x00190f14: swc1 $f0, 0x24($s3)
    FPU_F0 = *(float*)((sp) + 0x60);  // Load float             // 0x00190f18: lwc1 $f0, 0x60($sp)
    *(float*)((s3) + 8) = FPU_F0;  // Store float               // 0x00190f1c: swc1 $f0, 8($s3)
    FPU_F0 = *(float*)(s1);  // Load float                      // 0x00190f20: lwc1 $f0, 0($s1)
    *(float*)((s3) + 0x18) = FPU_F0;  // Store float            // 0x00190f24: swc1 $f0, 0x18($s3)
    FPU_F0 = *(float*)(s0);  // Load float                      // 0x00190f28: lwc1 $f0, 0($s0)
    func_00191c00();  // 0x191ba0                                // 0x00190f2c: jal 0x191ba0
    *(float*)((s3) + 0x28) = FPU_F0;  // Store float            // 0x00190f30: swc1 $f0, 0x28($s3)
    /* FPU: neg.s $f0, $f0 */                                   // 0x00190f34: neg.s $f0, $f0
    *(float*)((s3) + 0x30) = FPU_F0;  // Store float            // 0x00190f3c: swc1 $f0, 0x30($s3)
    func_00191c00();  // 0x191ba0                                // 0x00190f40: jal 0x191ba0
    a1 = sp + 0x70;                                             // 0x00190f44: addiu $a1, $sp, 0x70
    /* FPU: neg.s $f0, $f0 */                                   // 0x00190f48: neg.s $f0, $f0
    a1 = sp + 0x60;                                             // 0x00190f50: addiu $a1, $sp, 0x60
    func_00191c00();  // 0x191ba0                                // 0x00190f54: jal 0x191ba0
    *(float*)((s3) + 0x34) = FPU_F0;  // Store float            // 0x00190f58: swc1 $f0, 0x34($s3)
    /* FPU: neg.s $f0, $f0 */                                   // 0x00190f5c: neg.s $f0, $f0
    *(float*)((s3) + 0x38) = FPU_F0;  // Store float            // 0x00190f60: swc1 $f0, 0x38($s3)
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x00190f6c: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x00190f70: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x00190f74: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x00190f78: jr $ra
    sp = sp + 0x90;                                             // 0x00190f7c: addiu $sp, $sp, 0x90
}