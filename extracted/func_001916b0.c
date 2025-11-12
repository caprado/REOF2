void func_001916b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    /* move from FPU: $t0, $f12 */                              // 0x001916c0: mfc1 $t0, $f12
    /* nop */                                                   // 0x001916c4: nop 
    /* move from FPU: $t0, $f13 */                              // 0x001916cc: mfc1 $t0, $f13
    /* nop */                                                   // 0x001916d0: nop 
    VPU_VF10 = *(vec128_t*)((a1) + 0);  // Load 128-bit vector  // 0x001916d8: ldc2 $10, 0($a1)
    VPU_VF11 = *(vec128_t*)((a2) + 0);  // Load 128-bit vector  // 0x001916dc: ldc2 $11, 0($a2)
    VPU_VF12 = *(vec128_t*)((a1) + 0x10);  // Load 128-bit vector // 0x001916e0: ldc2 $12, 0x10($a1)
    VPU_VF13 = *(vec128_t*)((a2) + 0x10);  // Load 128-bit vector // 0x001916e4: ldc2 $13, 0x10($a2)
    VPU_VF14 = *(vec128_t*)((a1) + 0x30);  // Load 128-bit vector // 0x001916e8: ldc2 $14, 0x30($a1)
    VPU_VF15 = *(vec128_t*)((a2) + 0x30);  // Load 128-bit vector // 0x001916ec: ldc2 $15, 0x30($a2)
    *(vec128_t*)((a0) + 0) = VPU_VF4;  // Store 128-bit vector  // 0x00191760: sdc2 $4, 0($a0)
    *(vec128_t*)((a0) + 0x10) = VPU_VF5;  // Store 128-bit vector // 0x00191764: sdc2 $5, 0x10($a0)
    *(vec128_t*)((a0) + 0x20) = VPU_VF6;  // Store 128-bit vector // 0x00191768: sdc2 $6, 0x20($a0)
    return;                                                     // 0x0019176c: jr $ra
    *(vec128_t*)((a0) + 0x30) = VPU_VF7;  // Store 128-bit vector // 0x00191770: sdc2 $7, 0x30($a0)
}