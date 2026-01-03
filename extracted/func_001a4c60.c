void func_001a4c60() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0xb0;                                            // 0x001a4c60: addiu $sp, $sp, -0xb0
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001a4c6c: dpa.w.ph $ac0, $sp, $s3
    s3 = sp + 0x74;                                             // 0x001a4c78: addiu $s3, $sp, 0x74
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001a4c7c: addu.qb $zero, $sp, $s1
    s2 = sp + 0x78;                                             // 0x001a4c80: addiu $s2, $sp, 0x78
    a0 = sp + 0x70;                                             // 0x001a4c88: addiu $a0, $sp, 0x70
    FPU_F0 = *(float*)(a1);  // Load float                      // 0x001a4c8c: lwc1 $f0, 0($a1)
    *(float*)((sp) + 0x70) = FPU_F0;  // Store float            // 0x001a4c90: swc1 $f0, 0x70($sp)
    FPU_F0 = *(float*)((a1) + 4);  // Load float                // 0x001a4c94: lwc1 $f0, 4($a1)
    *(float*)(s3) = FPU_F0;  // Store float                     // 0x001a4c98: swc1 $f0, 0($s3)
    FPU_F0 = *(float*)((a1) + 8);  // Load float                // 0x001a4c9c: lwc1 $f0, 8($a1)
    *(float*)(s2) = FPU_F0;  // Store float                     // 0x001a4ca0: swc1 $f0, 0($s2)
    FPU_F0 = *(float*)(a2);  // Load float                      // 0x001a4ca4: lwc1 $f0, 0($a2)
    *(float*)((sp) + 0x60) = FPU_F0;  // Store float            // 0x001a4ca8: swc1 $f0, 0x60($sp)
    FPU_F0 = *(float*)((a2) + 4);  // Load float                // 0x001a4cac: lwc1 $f0, 4($a2)
    *(float*)((sp) + 0x64) = FPU_F0;  // Store float            // 0x001a4cb0: swc1 $f0, 0x64($sp)
    FPU_F0 = *(float*)((a2) + 8);  // Load float                // 0x001a4cb4: lwc1 $f0, 8($a2)
    func_001a4dc0();  // 1a4dc0                                // 0x001a4cb8: jal 0x1a4dc0
    *(float*)((sp) + 0x68) = FPU_F0;  // Store float            // 0x001a4cbc: swc1 $f0, 0x68($sp)
    func_001a4dc0();  // 1a4dc0                                // 0x001a4cc0: jal 0x1a4dc0
    a0 = sp + 0x60;                                             // 0x001a4cc4: addiu $a0, $sp, 0x60
    FPU_F0 = *(float*)((sp) + 0x70);  // Load float             // 0x001a4cc8: lwc1 $f0, 0x70($sp)
    s1 = sp + 0xa4;                                             // 0x001a4ccc: addiu $s1, $sp, 0xa4
    s0 = sp + 0xa8;                                             // 0x001a4cd0: addiu $s0, $sp, 0xa8
    a0 = sp + 0x80;                                             // 0x001a4cd4: addiu $a0, $sp, 0x80
    a1 = sp + 0xa0;                                             // 0x001a4cd8: addiu $a1, $sp, 0xa0
    a2 = sp + 0x60;                                             // 0x001a4cdc: addiu $a2, $sp, 0x60
    *(float*)((sp) + 0xa0) = FPU_F0;  // Store float            // 0x001a4ce0: swc1 $f0, 0xa0($sp)
    FPU_F0 = *(float*)(s3);  // Load float                      // 0x001a4ce4: lwc1 $f0, 0($s3)
    *(float*)(s1) = FPU_F0;  // Store float                     // 0x001a4ce8: swc1 $f0, 0($s1)
    FPU_F0 = *(float*)(s2);  // Load float                      // 0x001a4cec: lwc1 $f0, 0($s2)
    func_001a4e30();  // 1a4e30                                // 0x001a4cf0: jal 0x1a4e30
    *(float*)(s0) = FPU_F0;  // Store float                     // 0x001a4cf4: swc1 $f0, 0($s0)
    func_001a4dc0();  // 1a4dc0                                // 0x001a4cf8: jal 0x1a4dc0
    a0 = sp + 0x80;                                             // 0x001a4cfc: addiu $a0, $sp, 0x80
    a0 = sp + 0x90;                                             // 0x001a4d00: addiu $a0, $sp, 0x90
    a1 = sp + 0x80;                                             // 0x001a4d04: addiu $a1, $sp, 0x80
    func_001a4e30();  // 1a4e30                                // 0x001a4d08: jal 0x1a4e30
    a2 = sp + 0xa0;                                             // 0x001a4d0c: addiu $a2, $sp, 0xa0
    *(uint32_t*)((s4) + 0xc) = 0;                               // 0x001a4d10: sw $zero, 0xc($s4)
    v1 = 0x3f80 << 16;                                          // 0x001a4d14: lui $v1, 0x3f80
    *(uint32_t*)((s4) + 0x1c) = 0;                              // 0x001a4d18: sw $zero, 0x1c($s4)
    *(uint32_t*)((s4) + 0x2c) = 0;                              // 0x001a4d1c: sw $zero, 0x2c($s4)
    *(uint32_t*)((s4) + 0x3c) = v1;                             // 0x001a4d20: sw $v1, 0x3c($s4)
    FPU_F0 = *(float*)((sp) + 0xa0);  // Load float             // 0x001a4d24: lwc1 $f0, 0xa0($sp)
    *(float*)(s4) = FPU_F0;  // Store float                     // 0x001a4d28: swc1 $f0, 0($s4)
    FPU_F0 = *(float*)(s1);  // Load float                      // 0x001a4d2c: lwc1 $f0, 0($s1)
    *(float*)((s4) + 4) = FPU_F0;  // Store float               // 0x001a4d30: swc1 $f0, 4($s4)
    FPU_F0 = *(float*)(s0);  // Load float                      // 0x001a4d34: lwc1 $f0, 0($s0)
    *(float*)((s4) + 8) = FPU_F0;  // Store float               // 0x001a4d38: swc1 $f0, 8($s4)
    FPU_F0 = *(float*)((sp) + 0x90);  // Load float             // 0x001a4d3c: lwc1 $f0, 0x90($sp)
    *(float*)((s4) + 0x10) = FPU_F0;  // Store float            // 0x001a4d40: swc1 $f0, 0x10($s4)
    FPU_F0 = *(float*)((sp) + 0x94);  // Load float             // 0x001a4d44: lwc1 $f0, 0x94($sp)
    *(float*)((s4) + 0x14) = FPU_F0;  // Store float            // 0x001a4d48: swc1 $f0, 0x14($s4)
    FPU_F0 = *(float*)((sp) + 0x98);  // Load float             // 0x001a4d4c: lwc1 $f0, 0x98($sp)
    *(float*)((s4) + 0x18) = FPU_F0;  // Store float            // 0x001a4d50: swc1 $f0, 0x18($s4)
    FPU_F0 = *(float*)((sp) + 0x80);  // Load float             // 0x001a4d54: lwc1 $f0, 0x80($sp)
    *(float*)((s4) + 0x20) = FPU_F0;  // Store float            // 0x001a4d58: swc1 $f0, 0x20($s4)
    FPU_F0 = *(float*)((sp) + 0x84);  // Load float             // 0x001a4d5c: lwc1 $f0, 0x84($sp)
    *(float*)((s4) + 0x24) = FPU_F0;  // Store float            // 0x001a4d60: swc1 $f0, 0x24($s4)
    FPU_F0 = *(float*)((sp) + 0x88);  // Load float             // 0x001a4d64: lwc1 $f0, 0x88($sp)
    *(float*)((s4) + 0x28) = FPU_F0;  // Store float            // 0x001a4d68: swc1 $f0, 0x28($s4)
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001a4d70: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001a4d78: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001a4d7c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001a4d80: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001a4d84: jr $ra
    sp = sp + 0xb0;                                             // 0x001a4d88: addiu $sp, $sp, 0xb0
}