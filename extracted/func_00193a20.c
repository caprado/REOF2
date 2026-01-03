void func_00193a20() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00193a20: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x00193a28: addu.qb $zero, $sp, $s1
    func_0018fba0();  // 18fba0                                // 0x00193a34: jal 0x18fba0
    FPU_F12 = *(float*)((s0) + 0xc);  // Load float             // 0x00193a3c: lwc1 $f12, 0xc($s0)
    FPU_F13 = *(float*)((s0) + 0x10);  // Load float            // 0x00193a40: lwc1 $f13, 0x10($s0)
    FPU_F14 = *(float*)((s0) + 0x14);  // Load float            // 0x00193a44: lwc1 $f14, 0x14($s0)
    func_001907c0();  // 1907c0                                // 0x00193a48: jal 0x1907c0
    FPU_F0 = *(float*)((s0) + 0x18);  // Load float             // 0x00193a50: lwc1 $f0, 0x18($s0)
    v0 = 1;                                                     // 0x00193a54: addiu $v0, $zero, 1
    *(float*)((s1) + 0x30) = FPU_F0;  // Store float            // 0x00193a58: swc1 $f0, 0x30($s1)
    FPU_F0 = *(float*)((s0) + 0x1c);  // Load float             // 0x00193a5c: lwc1 $f0, 0x1c($s0)
    *(float*)((s1) + 0x34) = FPU_F0;  // Store float            // 0x00193a60: swc1 $f0, 0x34($s1)
    FPU_F0 = *(float*)((s0) + 0x20);  // Load float             // 0x00193a64: lwc1 $f0, 0x20($s0)
    *(float*)((s1) + 0x38) = FPU_F0;  // Store float            // 0x00193a68: swc1 $f0, 0x38($s1)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x00193a70: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x00193a74: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x00193a78: jr $ra
    sp = sp + 0x30;                                             // 0x00193a7c: addiu $sp, $sp, 0x30
}