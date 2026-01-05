void func_001907c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x001907c0: addiu $sp, $sp, -0x40
    func_0018f3a0();  // 18f3a0                                // 0x001907cc: jal 0x18f3a0
    a0 = sp + 0x30;                                             // 0x001907d0: addiu $a0, $sp, 0x30
    FPU_F1 = *(float*)((sp) + 0x30);  // Load float             // 0x001907d4: lwc1 $f1, 0x30($sp)
    FPU_F0 = *(float*)((sp) + 0x34);  // Load float             // 0x001907d8: lwc1 $f0, 0x34($sp)
    /* move from FPU: $a2, $f1 */                               // 0x001907dc: mfc1 $a2, $f1
    /* move from FPU: $a3, $f0 */                               // 0x001907e0: mfc1 $a3, $f0
    VPU_VF4 = *(vec128_t*)((t1) + 0);  // Load 128-bit vector   // 0x001907e4: ldc2 $4, 0($t1)
    VPU_VF5 = *(vec128_t*)((t1) + 0x10);  // Load 128-bit vector // 0x001907e8: ldc2 $5, 0x10($t1)
    VPU_VF6 = *(vec128_t*)((t1) + 0x20);  // Load 128-bit vector // 0x00190814: ldc2 $6, 0x20($t1)
    *(vec128_t*)((t1) + 0) = VPU_VF4;  // Store 128-bit vector  // 0x0019083c: sdc2 $4, 0($t1)
    *(vec128_t*)((t1) + 0x10) = VPU_VF5;  // Store 128-bit vector // 0x00190840: sdc2 $5, 0x10($t1)
    *(vec128_t*)((t1) + 0x20) = VPU_VF6;  // Store 128-bit vector // 0x00190844: sdc2 $6, 0x20($t1)
    /* FPU: mov.s $f12, $f13 */                                 // 0x00190848: mov.s $f12, $f13
    func_0018f3a0();  // 18f3a0                                // 0x0019084c: jal 0x18f3a0
    a0 = sp + 0x20;                                             // 0x00190850: addiu $a0, $sp, 0x20
    FPU_F1 = *(float*)((sp) + 0x20);  // Load float             // 0x00190854: lwc1 $f1, 0x20($sp)
    FPU_F0 = *(float*)((sp) + 0x24);  // Load float             // 0x00190858: lwc1 $f0, 0x24($sp)
    /* move from FPU: $a2, $f1 */                               // 0x0019085c: mfc1 $a2, $f1
    /* move from FPU: $a3, $f0 */                               // 0x00190860: mfc1 $a3, $f0
    VPU_VF4 = *(vec128_t*)((t1) + 0);  // Load 128-bit vector   // 0x00190864: ldc2 $4, 0($t1)
    VPU_VF5 = *(vec128_t*)((t1) + 0x10);  // Load 128-bit vector // 0x00190868: ldc2 $5, 0x10($t1)
    VPU_VF6 = *(vec128_t*)((t1) + 0x20);  // Load 128-bit vector // 0x00190894: ldc2 $6, 0x20($t1)
    *(vec128_t*)((t1) + 0) = VPU_VF4;  // Store 128-bit vector  // 0x001908bc: sdc2 $4, 0($t1)
    *(vec128_t*)((t1) + 0x10) = VPU_VF5;  // Store 128-bit vector // 0x001908c0: sdc2 $5, 0x10($t1)
    *(vec128_t*)((t1) + 0x20) = VPU_VF6;  // Store 128-bit vector // 0x001908c4: sdc2 $6, 0x20($t1)
    /* FPU: mov.s $f12, $f14 */                                 // 0x001908c8: mov.s $f12, $f14
    func_0018f3a0();  // 18f3a0                                // 0x001908cc: jal 0x18f3a0
    a0 = sp + 0x10;                                             // 0x001908d0: addiu $a0, $sp, 0x10
    FPU_F1 = *(float*)((sp) + 0x10);  // Load float             // 0x001908d4: lwc1 $f1, 0x10($sp)
    FPU_F0 = *(float*)((sp) + 0x14);  // Load float             // 0x001908d8: lwc1 $f0, 0x14($sp)
    /* move from FPU: $a2, $f1 */                               // 0x001908dc: mfc1 $a2, $f1
    /* move from FPU: $a3, $f0 */                               // 0x001908e0: mfc1 $a3, $f0
    VPU_VF4 = *(vec128_t*)((t1) + 0);  // Load 128-bit vector   // 0x001908e4: ldc2 $4, 0($t1)
    VPU_VF5 = *(vec128_t*)((t1) + 0x10);  // Load 128-bit vector // 0x001908e8: ldc2 $5, 0x10($t1)
    VPU_VF6 = *(vec128_t*)((t1) + 0x20);  // Load 128-bit vector // 0x00190910: ldc2 $6, 0x20($t1)
    *(vec128_t*)((t1) + 0) = VPU_VF4;  // Store 128-bit vector  // 0x00190938: sdc2 $4, 0($t1)
    *(vec128_t*)((t1) + 0x10) = VPU_VF5;  // Store 128-bit vector // 0x0019093c: sdc2 $5, 0x10($t1)
    *(vec128_t*)((t1) + 0x20) = VPU_VF6;  // Store 128-bit vector // 0x00190940: sdc2 $6, 0x20($t1)
    return;                                                     // 0x00190948: jr $ra
    sp = sp + 0x40;                                             // 0x0019094c: addiu $sp, $sp, 0x40
}