void func_00193a80() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0xc0;                                            // 0x00193a80: addiu $sp, $sp, -0xc0
    /* FPU: addu.qb $zero, $sp, $s0 */                          // 0x00193a8c: addu.qb $zero, $sp, $s0
    *(float*)((sp) + 8) = FPU_F22;  // Store float              // 0x00193a94: swc1 $f22, 8($sp)
    *(float*)((sp) + 4) = FPU_F21;  // Store float              // 0x00193a9c: swc1 $f21, 4($sp)
    *(float*)(sp) = FPU_F20;  // Store float                    // 0x00193aa0: swc1 $f20, 0($sp)
    FPU_F2 = *(float*)(a1);  // Load float                      // 0x00193aa4: lwc1 $f2, 0($a1)
    FPU_F1 = *(float*)((a1) + 4);  // Load float                // 0x00193aa8: lwc1 $f1, 4($a1)
    FPU_F0 = *(float*)((a1) + 8);  // Load float                // 0x00193aac: lwc1 $f0, 8($a1)
    /* FPU: mov.s $f22, $f12 */                                 // 0x00193ab0: mov.s $f22, $f12
    /* FPU: mov.s $f21, $f13 */                                 // 0x00193ab4: mov.s $f21, $f13
    /* FPU: mov.s $f20, $f14 */                                 // 0x00193ab8: mov.s $f20, $f14
    /* FPU: mul.s $f12, $f2, $f22 */                            // 0x00193abc: mul.s $f12, $f2, $f22
    /* FPU: mul.s $f13, $f1, $f21 */                            // 0x00193ac0: mul.s $f13, $f1, $f21
    func_0018fc10();  // 18fc10                                // 0x00193ac4: jal 0x18fc10
    /* FPU: mul.s $f14, $f0, $f20 */                            // 0x00193ac8: mul.s $f14, $f0, $f20
    func_0018fba0();  // 18fba0                                // 0x00193acc: jal 0x18fba0
    a0 = sp + 0x80;                                             // 0x00193ad0: addiu $a0, $sp, 0x80
    FPU_F12 = *(float*)((s0) + 0xc);  // Load float             // 0x00193ad4: lwc1 $f12, 0xc($s0)
    FPU_F13 = *(float*)((s0) + 0x10);  // Load float            // 0x00193ad8: lwc1 $f13, 0x10($s0)
    FPU_F14 = *(float*)((s0) + 0x14);  // Load float            // 0x00193adc: lwc1 $f14, 0x14($s0)
    func_001907c0();  // 1907c0                                // 0x00193ae0: jal 0x1907c0
    a0 = sp + 0x80;                                             // 0x00193ae4: addiu $a0, $sp, 0x80
    func_0018fba0();  // 18fba0                                // 0x00193ae8: jal 0x18fba0
    a0 = sp + 0x40;                                             // 0x00193aec: addiu $a0, $sp, 0x40
    v0 = 0x3f80 << 16;                                          // 0x00193af0: lui $v0, 0x3f80
    /* move to FPU: $v0, $f2 */                                 // 0x00193af8: mtc1 $v0, $f2
    a1 = sp + 0x80;                                             // 0x00193afc: addiu $a1, $sp, 0x80
    /* FPU: div.s $f0, $f2, $f22 */                             // 0x00193b00: div.s $f0, $f2, $f22
    *(float*)((sp) + 0x40) = FPU_F0;  // Store float            // 0x00193b04: swc1 $f0, 0x40($sp)
    /* FPU: div.s $f1, $f2, $f21 */                             // 0x00193b08: div.s $f1, $f2, $f21
    /* FPU: div.s $f0, $f2, $f20 */                             // 0x00193b0c: div.s $f0, $f2, $f20
    *(float*)((sp) + 0x54) = FPU_F1;  // Store float            // 0x00193b10: swc1 $f1, 0x54($sp)
    *(float*)((sp) + 0x68) = FPU_F0;  // Store float            // 0x00193b14: swc1 $f0, 0x68($sp)
    FPU_F0 = *(float*)((s0) + 0x18);  // Load float             // 0x00193b18: lwc1 $f0, 0x18($s0)
    *(float*)((sp) + 0x70) = FPU_F0;  // Store float            // 0x00193b1c: swc1 $f0, 0x70($sp)
    FPU_F0 = *(float*)((s0) + 0x1c);  // Load float             // 0x00193b20: lwc1 $f0, 0x1c($s0)
    *(float*)((sp) + 0x74) = FPU_F0;  // Store float            // 0x00193b24: swc1 $f0, 0x74($sp)
    FPU_F0 = *(float*)((s0) + 0x20);  // Load float             // 0x00193b28: lwc1 $f0, 0x20($s0)
    func_001910b0();  // 1910b0                                // 0x00193b2c: jal 0x1910b0
    *(float*)((sp) + 0x78) = FPU_F0;  // Store float            // 0x00193b30: swc1 $f0, 0x78($sp)
    func_001910b0();  // 1910b0                                // 0x00193b38: jal 0x1910b0
    a1 = sp + 0x40;                                             // 0x00193b3c: addiu $a1, $sp, 0x40
    FPU_F22 = *(float*)((sp) + 8);  // Load float               // 0x00193b44: lwc1 $f22, 8($sp)
    /* FPU: ld.b $w0, -0x4f($zero) */                           // 0x00193b48: ld.b $w0, -0x4f($zero)
    FPU_F21 = *(float*)((sp) + 4);  // Load float               // 0x00193b4c: lwc1 $f21, 4($sp)
    /* FPU: aver_u.h $w0, $w0, $w16 */                          // 0x00193b50: aver_u.h $w0, $w0, $w16
    FPU_F20 = *(float*)(sp);  // Load float                     // 0x00193b54: lwc1 $f20, 0($sp)
    v0 = 1;                                                     // 0x00193b58: addiu $v0, $zero, 1
    return;                                                     // 0x00193b5c: jr $ra
    sp = sp + 0xc0;                                             // 0x00193b60: addiu $sp, $sp, 0xc0
}