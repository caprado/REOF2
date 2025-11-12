void func_00190f80() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    VPU_VF8 = *(vec128_t*)((a0) + 0);  // Load 128-bit vector   // 0x00190f80: ldc2 $8, 0($a0)
    VPU_VF9 = *(vec128_t*)((a0) + 0x10);  // Load 128-bit vector // 0x00190f84: ldc2 $9, 0x10($a0)
    VPU_VF10 = *(vec128_t*)((a0) + 0x20);  // Load 128-bit vector // 0x00190f88: ldc2 $10, 0x20($a0)
    *(vec128_t*)((a0) + 0) = VPU_VF4;  // Store 128-bit vector  // 0x00190fbc: sdc2 $4, 0($a0)
    *(vec128_t*)((a0) + 0x10) = VPU_VF5;  // Store 128-bit vector // 0x00190fc0: sdc2 $5, 0x10($a0)
    return;                                                     // 0x00190fc4: jr $ra
    *(vec128_t*)((a0) + 0x20) = VPU_VF6;  // Store 128-bit vector // 0x00190fc8: sdc2 $6, 0x20($a0)
}