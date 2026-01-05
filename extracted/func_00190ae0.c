void func_00190ae0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x00190ae0: addiu $sp, $sp, -0x40
    /* FPU: mov.s $f2, $f12 */                                  // 0x00190ae8: mov.s $f2, $f12
    a0 = sp + 0x30;                                             // 0x00190af0: addiu $a0, $sp, 0x30
    func_0018f3a0();  // 18f3a0                                // 0x00190af4: jal 0x18f3a0
    /* FPU: mov.s $f12, $f14 */                                 // 0x00190af8: mov.s $f12, $f14
    FPU_F1 = *(float*)((sp) + 0x30);  // Load float             // 0x00190afc: lwc1 $f1, 0x30($sp)
    FPU_F0 = *(float*)((sp) + 0x34);  // Load float             // 0x00190b00: lwc1 $f0, 0x34($sp)
    /* move from FPU: $a2, $f1 */                               // 0x00190b04: mfc1 $a2, $f1
    /* move from FPU: $a3, $f0 */                               // 0x00190b08: mfc1 $a3, $f0
    VPU_VF4 = *(vec128_t*)((t1) + 0);  // Load 128-bit vector   // 0x00190b0c: ldc2 $4, 0($t1)
    VPU_VF5 = *(vec128_t*)((t1) + 0x10);  // Load 128-bit vector // 0x00190b10: ldc2 $5, 0x10($t1)
    VPU_VF6 = *(vec128_t*)((t1) + 0x20);  // Load 128-bit vector // 0x00190b38: ldc2 $6, 0x20($t1)
    *(vec128_t*)((t1) + 0) = VPU_VF4;  // Store 128-bit vector  // 0x00190b60: sdc2 $4, 0($t1)
    *(vec128_t*)((t1) + 0x10) = VPU_VF5;  // Store 128-bit vector // 0x00190b64: sdc2 $5, 0x10($t1)
    *(vec128_t*)((t1) + 0x20) = VPU_VF6;  // Store 128-bit vector // 0x00190b68: sdc2 $6, 0x20($t1)
    /* FPU: mov.s $f12, $f13 */                                 // 0x00190b6c: mov.s $f12, $f13
    func_0018f3a0();  // 18f3a0                                // 0x00190b70: jal 0x18f3a0
    a0 = sp + 0x20;                                             // 0x00190b74: addiu $a0, $sp, 0x20
    FPU_F1 = *(float*)((sp) + 0x20);  // Load float             // 0x00190b78: lwc1 $f1, 0x20($sp)
    FPU_F0 = *(float*)((sp) + 0x24);  // Load float             // 0x00190b7c: lwc1 $f0, 0x24($sp)
    /* move from FPU: $a2, $f1 */                               // 0x00190b80: mfc1 $a2, $f1
    /* move from FPU: $a3, $f0 */                               // 0x00190b84: mfc1 $a3, $f0
    VPU_VF4 = *(vec128_t*)((t1) + 0);  // Load 128-bit vector   // 0x00190b88: ldc2 $4, 0($t1)
    VPU_VF5 = *(vec128_t*)((t1) + 0x10);  // Load 128-bit vector // 0x00190b8c: ldc2 $5, 0x10($t1)
    VPU_VF6 = *(vec128_t*)((t1) + 0x20);  // Load 128-bit vector // 0x00190bb8: ldc2 $6, 0x20($t1)
    *(vec128_t*)((t1) + 0) = VPU_VF4;  // Store 128-bit vector  // 0x00190be0: sdc2 $4, 0($t1)
    *(vec128_t*)((t1) + 0x10) = VPU_VF5;  // Store 128-bit vector // 0x00190be4: sdc2 $5, 0x10($t1)
    *(vec128_t*)((t1) + 0x20) = VPU_VF6;  // Store 128-bit vector // 0x00190be8: sdc2 $6, 0x20($t1)
    /* FPU: mov.s $f12, $f2 */                                  // 0x00190bec: mov.s $f12, $f2
    func_0018f3a0();  // 18f3a0                                // 0x00190bf0: jal 0x18f3a0
    a0 = sp + 0x10;                                             // 0x00190bf4: addiu $a0, $sp, 0x10
    FPU_F1 = *(float*)((sp) + 0x10);  // Load float             // 0x00190bf8: lwc1 $f1, 0x10($sp)
    FPU_F0 = *(float*)((sp) + 0x14);  // Load float             // 0x00190bfc: lwc1 $f0, 0x14($sp)
    /* move from FPU: $a2, $f1 */                               // 0x00190c00: mfc1 $a2, $f1
    /* move from FPU: $a3, $f0 */                               // 0x00190c04: mfc1 $a3, $f0
    VPU_VF4 = *(vec128_t*)((t1) + 0);  // Load 128-bit vector   // 0x00190c08: ldc2 $4, 0($t1)
    VPU_VF5 = *(vec128_t*)((t1) + 0x10);  // Load 128-bit vector // 0x00190c0c: ldc2 $5, 0x10($t1)
    VPU_VF6 = *(vec128_t*)((t1) + 0x20);  // Load 128-bit vector // 0x00190c38: ldc2 $6, 0x20($t1)
    *(vec128_t*)((t1) + 0) = VPU_VF4;  // Store 128-bit vector  // 0x00190c60: sdc2 $4, 0($t1)
    *(vec128_t*)((t1) + 0x10) = VPU_VF5;  // Store 128-bit vector // 0x00190c64: sdc2 $5, 0x10($t1)
    *(vec128_t*)((t1) + 0x20) = VPU_VF6;  // Store 128-bit vector // 0x00190c68: sdc2 $6, 0x20($t1)
    return;                                                     // 0x00190c70: jr $ra
    sp = sp + 0x40;                                             // 0x00190c74: addiu $sp, $sp, 0x40
}