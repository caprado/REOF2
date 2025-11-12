void func_00191030() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    VPU_VF4 = *(vec128_t*)((a2) + 0);  // Load 128-bit vector   // 0x00191030: ldc2 $4, 0($a2)
    VPU_VF5 = *(vec128_t*)((a2) + 0x10);  // Load 128-bit vector // 0x00191034: ldc2 $5, 0x10($a2)
    VPU_VF6 = *(vec128_t*)((a2) + 0x20);  // Load 128-bit vector // 0x00191038: ldc2 $6, 0x20($a2)
    VPU_VF7 = *(vec128_t*)((a2) + 0x30);  // Load 128-bit vector // 0x0019103c: ldc2 $7, 0x30($a2)
    VPU_VF8 = *(vec128_t*)((a1) + 0);  // Load 128-bit vector   // 0x00191040: ldc2 $8, 0($a1)
    VPU_VF9 = *(vec128_t*)((a1) + 0x10);  // Load 128-bit vector // 0x00191044: ldc2 $9, 0x10($a1)
    VPU_VF10 = *(vec128_t*)((a1) + 0x20);  // Load 128-bit vector // 0x00191048: ldc2 $10, 0x20($a1)
    VPU_VF11 = *(vec128_t*)((a1) + 0x30);  // Load 128-bit vector // 0x0019104c: ldc2 $11, 0x30($a1)
    *(vec128_t*)((a0) + 0) = VPU_VF8;  // Store 128-bit vector  // 0x00191090: sdc2 $8, 0($a0)
    *(vec128_t*)((a0) + 0x10) = VPU_VF9;  // Store 128-bit vector // 0x00191094: sdc2 $9, 0x10($a0)
    *(vec128_t*)((a0) + 0x20) = VPU_VF10;  // Store 128-bit vector // 0x00191098: sdc2 $10, 0x20($a0)
    *(vec128_t*)((a0) + 0x30) = VPU_VF11;  // Store 128-bit vector // 0x0019109c: sdc2 $11, 0x30($a0)
    return;                                                     // 0x001910a0: jr $ra
    /* nop */                                                   // 0x001910a4: nop 
}