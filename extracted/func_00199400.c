void func_00199400() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    VPU_VF7 = *(vec128_t*)((a1) + 0);  // Load 128-bit vector   // 0x00199400: ldc2 $7, 0($a1)
    VPU_VF8 = *(vec128_t*)((a1) + 0x10);  // Load 128-bit vector // 0x00199404: ldc2 $8, 0x10($a1)
    VPU_VF9 = *(vec128_t*)((a1) + 0x20);  // Load 128-bit vector // 0x00199408: ldc2 $9, 0x20($a1)
    VPU_VF7 = *(vec128_t*)((a2) + 0);  // Load 128-bit vector   // 0x00199430: ldc2 $7, 0($a2)
    VPU_VF8 = *(vec128_t*)((a2) + 0x10);  // Load 128-bit vector // 0x00199434: ldc2 $8, 0x10($a2)
    VPU_VF9 = *(vec128_t*)((a2) + 0x20);  // Load 128-bit vector // 0x00199438: ldc2 $9, 0x20($a2)
    *(vec128_t*)((a0) + 0) = VPU_VF10;  // Store 128-bit vector // 0x001994cc: sdc2 $10, 0($a0)
    *(vec128_t*)((a0) + 0x10) = VPU_VF11;  // Store 128-bit vector // 0x001994d0: sdc2 $11, 0x10($a0)
    *(vec128_t*)((a0) + 0x20) = VPU_VF12;  // Store 128-bit vector // 0x001994d4: sdc2 $12, 0x20($a0)
    return;                                                     // 0x001994d8: jr $ra
    /* nop */                                                   // 0x001994dc: nop 
}