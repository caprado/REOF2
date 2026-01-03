void func_00193b70() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0xc0;                                            // 0x00193b70: addiu $sp, $sp, -0xc0
    /* FPU: addu.qb $zero, $sp, $s0 */                          // 0x00193b7c: addu.qb $zero, $sp, $s0
    *(float*)((sp) + 8) = FPU_F22;  // Store float              // 0x00193b84: swc1 $f22, 8($sp)
    *(float*)((sp) + 4) = FPU_F21;  // Store float              // 0x00193b88: swc1 $f21, 4($sp)
    *(float*)(sp) = FPU_F20;  // Store float                    // 0x00193b8c: swc1 $f20, 0($sp)
    /* FPU: mov.s $f22, $f12 */                                 // 0x00193b90: mov.s $f22, $f12
    /* FPU: mov.s $f21, $f13 */                                 // 0x00193b94: mov.s $f21, $f13
    /* FPU: mov.s $f20, $f14 */                                 // 0x00193b98: mov.s $f20, $f14
    FPU_F12 = *(float*)(a1);  // Load float                     // 0x00193b9c: lwc1 $f12, 0($a1)
    FPU_F13 = *(float*)((a1) + 4);  // Load float               // 0x00193ba0: lwc1 $f13, 4($a1)
    FPU_F14 = *(float*)((a1) + 8);  // Load float               // 0x00193ba4: lwc1 $f14, 8($a1)
    func_0018fc10();  // 18fc10                                // 0x00193ba8: jal 0x18fc10
    func_0018fba0();  // 18fba0                                // 0x00193bb0: jal 0x18fba0
    a0 = sp + 0x80;                                             // 0x00193bb4: addiu $a0, $sp, 0x80
    FPU_F12 = *(float*)((s0) + 0xc);  // Load float             // 0x00193bb8: lwc1 $f12, 0xc($s0)
    FPU_F13 = *(float*)((s0) + 0x10);  // Load float            // 0x00193bbc: lwc1 $f13, 0x10($s0)
    FPU_F14 = *(float*)((s0) + 0x14);  // Load float            // 0x00193bc0: lwc1 $f14, 0x14($s0)
    func_001907c0();  // 1907c0                                // 0x00193bc4: jal 0x1907c0
    a0 = sp + 0x80;                                             // 0x00193bc8: addiu $a0, $sp, 0x80
    func_0018fba0();  // 18fba0                                // 0x00193bcc: jal 0x18fba0
    a0 = sp + 0x40;                                             // 0x00193bd0: addiu $a0, $sp, 0x40
    v0 = 0x3f80 << 16;                                          // 0x00193bd4: lui $v0, 0x3f80
    /* move to FPU: $v0, $f2 */                                 // 0x00193bdc: mtc1 $v0, $f2
    a1 = sp + 0x80;                                             // 0x00193be0: addiu $a1, $sp, 0x80
    /* FPU: div.s $f0, $f2, $f22 */                             // 0x00193be4: div.s $f0, $f2, $f22
    *(float*)((sp) + 0x40) = FPU_F0;  // Store float            // 0x00193be8: swc1 $f0, 0x40($sp)
    /* FPU: div.s $f1, $f2, $f21 */                             // 0x00193bec: div.s $f1, $f2, $f21
    /* FPU: div.s $f0, $f2, $f20 */                             // 0x00193bf0: div.s $f0, $f2, $f20
    *(float*)((sp) + 0x54) = FPU_F1;  // Store float            // 0x00193bf4: swc1 $f1, 0x54($sp)
    *(float*)((sp) + 0x68) = FPU_F0;  // Store float            // 0x00193bf8: swc1 $f0, 0x68($sp)
    FPU_F0 = *(float*)((s0) + 0x18);  // Load float             // 0x00193bfc: lwc1 $f0, 0x18($s0)
    *(float*)((sp) + 0x70) = FPU_F0;  // Store float            // 0x00193c00: swc1 $f0, 0x70($sp)
    FPU_F0 = *(float*)((s0) + 0x1c);  // Load float             // 0x00193c04: lwc1 $f0, 0x1c($s0)
    *(float*)((sp) + 0x74) = FPU_F0;  // Store float            // 0x00193c08: swc1 $f0, 0x74($sp)
    FPU_F0 = *(float*)((s0) + 0x20);  // Load float             // 0x00193c0c: lwc1 $f0, 0x20($s0)
    func_001910b0();  // 1910b0                                // 0x00193c10: jal 0x1910b0
    *(float*)((sp) + 0x78) = FPU_F0;  // Store float            // 0x00193c14: swc1 $f0, 0x78($sp)
    func_001910b0();  // 1910b0                                // 0x00193c1c: jal 0x1910b0
    a1 = sp + 0x40;                                             // 0x00193c20: addiu $a1, $sp, 0x40
    FPU_F22 = *(float*)((sp) + 8);  // Load float               // 0x00193c28: lwc1 $f22, 8($sp)
    /* FPU: ld.b $w0, -0x4f($zero) */                           // 0x00193c2c: ld.b $w0, -0x4f($zero)
    FPU_F21 = *(float*)((sp) + 4);  // Load float               // 0x00193c30: lwc1 $f21, 4($sp)
    /* FPU: aver_u.h $w0, $w0, $w16 */                          // 0x00193c34: aver_u.h $w0, $w0, $w16
    FPU_F20 = *(float*)(sp);  // Load float                     // 0x00193c38: lwc1 $f20, 0($sp)
    v0 = 1;                                                     // 0x00193c3c: addiu $v0, $zero, 1
    return;                                                     // 0x00193c40: jr $ra
    sp = sp + 0xc0;                                             // 0x00193c44: addiu $sp, $sp, 0xc0
}