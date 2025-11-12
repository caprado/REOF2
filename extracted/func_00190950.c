void func_00190950() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x00190950: addiu $sp, $sp, -0x40
    func_0018f4c0();  // 0x18f3a0                                // 0x0019095c: jal 0x18f3a0
    a0 = sp + 0x30;                                             // 0x00190960: addiu $a0, $sp, 0x30
    FPU_F1 = *(float*)((sp) + 0x30);  // Load float             // 0x00190964: lwc1 $f1, 0x30($sp)
    FPU_F0 = *(float*)((sp) + 0x34);  // Load float             // 0x00190968: lwc1 $f0, 0x34($sp)
    /* move from FPU: $a2, $f1 */                               // 0x0019096c: mfc1 $a2, $f1
    /* move from FPU: $a3, $f0 */                               // 0x00190970: mfc1 $a3, $f0
    VPU_VF4 = *(vec128_t*)((t1) + 0);  // Load 128-bit vector   // 0x00190974: ldc2 $4, 0($t1)
    VPU_VF5 = *(vec128_t*)((t1) + 0x10);  // Load 128-bit vector // 0x00190978: ldc2 $5, 0x10($t1)
    VPU_VF6 = *(vec128_t*)((t1) + 0x20);  // Load 128-bit vector // 0x001909a4: ldc2 $6, 0x20($t1)
    *(vec128_t*)((t1) + 0) = VPU_VF4;  // Store 128-bit vector  // 0x001909cc: sdc2 $4, 0($t1)
    *(vec128_t*)((t1) + 0x10) = VPU_VF5;  // Store 128-bit vector // 0x001909d0: sdc2 $5, 0x10($t1)
    *(vec128_t*)((t1) + 0x20) = VPU_VF6;  // Store 128-bit vector // 0x001909d4: sdc2 $6, 0x20($t1)
    /* FPU: mov.s $f12, $f14 */                                 // 0x001909d8: mov.s $f12, $f14
    func_0018f4c0();  // 0x18f3a0                                // 0x001909dc: jal 0x18f3a0
    a0 = sp + 0x20;                                             // 0x001909e0: addiu $a0, $sp, 0x20
    FPU_F1 = *(float*)((sp) + 0x20);  // Load float             // 0x001909e4: lwc1 $f1, 0x20($sp)
    FPU_F0 = *(float*)((sp) + 0x24);  // Load float             // 0x001909e8: lwc1 $f0, 0x24($sp)
    /* move from FPU: $a2, $f1 */                               // 0x001909ec: mfc1 $a2, $f1
    /* move from FPU: $a3, $f0 */                               // 0x001909f0: mfc1 $a3, $f0
    VPU_VF4 = *(vec128_t*)((t1) + 0);  // Load 128-bit vector   // 0x001909f4: ldc2 $4, 0($t1)
    VPU_VF5 = *(vec128_t*)((t1) + 0x10);  // Load 128-bit vector // 0x001909f8: ldc2 $5, 0x10($t1)
    VPU_VF6 = *(vec128_t*)((t1) + 0x20);  // Load 128-bit vector // 0x00190a20: ldc2 $6, 0x20($t1)
    *(vec128_t*)((t1) + 0) = VPU_VF4;  // Store 128-bit vector  // 0x00190a48: sdc2 $4, 0($t1)
    *(vec128_t*)((t1) + 0x10) = VPU_VF5;  // Store 128-bit vector // 0x00190a4c: sdc2 $5, 0x10($t1)
    *(vec128_t*)((t1) + 0x20) = VPU_VF6;  // Store 128-bit vector // 0x00190a50: sdc2 $6, 0x20($t1)
    /* FPU: mov.s $f12, $f13 */                                 // 0x00190a54: mov.s $f12, $f13
    func_0018f4c0();  // 0x18f3a0                                // 0x00190a58: jal 0x18f3a0
    a0 = sp + 0x10;                                             // 0x00190a5c: addiu $a0, $sp, 0x10
    FPU_F1 = *(float*)((sp) + 0x10);  // Load float             // 0x00190a60: lwc1 $f1, 0x10($sp)
    FPU_F0 = *(float*)((sp) + 0x14);  // Load float             // 0x00190a64: lwc1 $f0, 0x14($sp)
    /* move from FPU: $a2, $f1 */                               // 0x00190a68: mfc1 $a2, $f1
    /* move from FPU: $a3, $f0 */                               // 0x00190a6c: mfc1 $a3, $f0
    VPU_VF4 = *(vec128_t*)((t1) + 0);  // Load 128-bit vector   // 0x00190a70: ldc2 $4, 0($t1)
    VPU_VF5 = *(vec128_t*)((t1) + 0x10);  // Load 128-bit vector // 0x00190a74: ldc2 $5, 0x10($t1)
    VPU_VF6 = *(vec128_t*)((t1) + 0x20);  // Load 128-bit vector // 0x00190aa0: ldc2 $6, 0x20($t1)
    *(vec128_t*)((t1) + 0) = VPU_VF4;  // Store 128-bit vector  // 0x00190ac8: sdc2 $4, 0($t1)
    *(vec128_t*)((t1) + 0x10) = VPU_VF5;  // Store 128-bit vector // 0x00190acc: sdc2 $5, 0x10($t1)
    *(vec128_t*)((t1) + 0x20) = VPU_VF6;  // Store 128-bit vector // 0x00190ad0: sdc2 $6, 0x20($t1)
    return;                                                     // 0x00190ad8: jr $ra
    sp = sp + 0x40;                                             // 0x00190adc: addiu $sp, $sp, 0x40
}