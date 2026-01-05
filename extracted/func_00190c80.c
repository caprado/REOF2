void func_00190c80() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x00190c80: addiu $sp, $sp, -0x40
    /* FPU: mov.s $f2, $f12 */                                  // 0x00190c88: mov.s $f2, $f12
    a0 = sp + 0x30;                                             // 0x00190c90: addiu $a0, $sp, 0x30
    func_0018f3a0();  // 18f3a0                                // 0x00190c94: jal 0x18f3a0
    /* FPU: mov.s $f12, $f14 */                                 // 0x00190c98: mov.s $f12, $f14
    FPU_F1 = *(float*)((sp) + 0x30);  // Load float             // 0x00190c9c: lwc1 $f1, 0x30($sp)
    FPU_F0 = *(float*)((sp) + 0x34);  // Load float             // 0x00190ca0: lwc1 $f0, 0x34($sp)
    /* move from FPU: $a2, $f1 */                               // 0x00190ca4: mfc1 $a2, $f1
    /* move from FPU: $a3, $f0 */                               // 0x00190ca8: mfc1 $a3, $f0
    VPU_VF4 = *(vec128_t*)((t1) + 0);  // Load 128-bit vector   // 0x00190cac: ldc2 $4, 0($t1)
    VPU_VF5 = *(vec128_t*)((t1) + 0x10);  // Load 128-bit vector // 0x00190cb0: ldc2 $5, 0x10($t1)
    VPU_VF6 = *(vec128_t*)((t1) + 0x20);  // Load 128-bit vector // 0x00190cd8: ldc2 $6, 0x20($t1)
    *(vec128_t*)((t1) + 0) = VPU_VF4;  // Store 128-bit vector  // 0x00190d00: sdc2 $4, 0($t1)
    *(vec128_t*)((t1) + 0x10) = VPU_VF5;  // Store 128-bit vector // 0x00190d04: sdc2 $5, 0x10($t1)
    *(vec128_t*)((t1) + 0x20) = VPU_VF6;  // Store 128-bit vector // 0x00190d08: sdc2 $6, 0x20($t1)
    /* FPU: mov.s $f12, $f2 */                                  // 0x00190d0c: mov.s $f12, $f2
    func_0018f3a0();  // 18f3a0                                // 0x00190d10: jal 0x18f3a0
    a0 = sp + 0x20;                                             // 0x00190d14: addiu $a0, $sp, 0x20
    FPU_F1 = *(float*)((sp) + 0x20);  // Load float             // 0x00190d18: lwc1 $f1, 0x20($sp)
    FPU_F0 = *(float*)((sp) + 0x24);  // Load float             // 0x00190d1c: lwc1 $f0, 0x24($sp)
    /* move from FPU: $a2, $f1 */                               // 0x00190d20: mfc1 $a2, $f1
    /* move from FPU: $a3, $f0 */                               // 0x00190d24: mfc1 $a3, $f0
    VPU_VF4 = *(vec128_t*)((t1) + 0);  // Load 128-bit vector   // 0x00190d28: ldc2 $4, 0($t1)
    VPU_VF5 = *(vec128_t*)((t1) + 0x10);  // Load 128-bit vector // 0x00190d2c: ldc2 $5, 0x10($t1)
    VPU_VF6 = *(vec128_t*)((t1) + 0x20);  // Load 128-bit vector // 0x00190d58: ldc2 $6, 0x20($t1)
    *(vec128_t*)((t1) + 0) = VPU_VF4;  // Store 128-bit vector  // 0x00190d80: sdc2 $4, 0($t1)
    *(vec128_t*)((t1) + 0x10) = VPU_VF5;  // Store 128-bit vector // 0x00190d84: sdc2 $5, 0x10($t1)
    *(vec128_t*)((t1) + 0x20) = VPU_VF6;  // Store 128-bit vector // 0x00190d88: sdc2 $6, 0x20($t1)
    /* FPU: mov.s $f12, $f13 */                                 // 0x00190d8c: mov.s $f12, $f13
    func_0018f3a0();  // 18f3a0                                // 0x00190d90: jal 0x18f3a0
    a0 = sp + 0x10;                                             // 0x00190d94: addiu $a0, $sp, 0x10
    FPU_F1 = *(float*)((sp) + 0x10);  // Load float             // 0x00190d98: lwc1 $f1, 0x10($sp)
    FPU_F0 = *(float*)((sp) + 0x14);  // Load float             // 0x00190d9c: lwc1 $f0, 0x14($sp)
    /* move from FPU: $a2, $f1 */                               // 0x00190da0: mfc1 $a2, $f1
    /* move from FPU: $a3, $f0 */                               // 0x00190da4: mfc1 $a3, $f0
    VPU_VF4 = *(vec128_t*)((t1) + 0);  // Load 128-bit vector   // 0x00190da8: ldc2 $4, 0($t1)
    VPU_VF5 = *(vec128_t*)((t1) + 0x10);  // Load 128-bit vector // 0x00190dac: ldc2 $5, 0x10($t1)
    VPU_VF6 = *(vec128_t*)((t1) + 0x20);  // Load 128-bit vector // 0x00190dd8: ldc2 $6, 0x20($t1)
    *(vec128_t*)((t1) + 0) = VPU_VF4;  // Store 128-bit vector  // 0x00190e00: sdc2 $4, 0($t1)
    *(vec128_t*)((t1) + 0x10) = VPU_VF5;  // Store 128-bit vector // 0x00190e04: sdc2 $5, 0x10($t1)
    *(vec128_t*)((t1) + 0x20) = VPU_VF6;  // Store 128-bit vector // 0x00190e08: sdc2 $6, 0x20($t1)
    return;                                                     // 0x00190e10: jr $ra
    sp = sp + 0x40;                                             // 0x00190e14: addiu $sp, $sp, 0x40
}