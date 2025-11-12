void func_001911e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = 0x28 << 16;                                            // 0x001911e0: lui $v1, 0x28
    v1 = v1 + 0x5420;                                           // 0x001911e4: addiu $v1, $v1, 0x5420
    VPU_VF8 = *(vec128_t*)((a1) + 0);  // Load 128-bit vector   // 0x001911e8: ldc2 $8, 0($a1)
    VPU_VF9 = *(vec128_t*)((a1) + 0x10);  // Load 128-bit vector // 0x001911ec: ldc2 $9, 0x10($a1)
    VPU_VF10 = *(vec128_t*)((a1) + 0x20);  // Load 128-bit vector // 0x001911f0: ldc2 $10, 0x20($a1)
    VPU_VF11 = *(vec128_t*)((a1) + 0x30);  // Load 128-bit vector // 0x001911f4: ldc2 $11, 0x30($a1)
    VPU_VF4 = *(vec128_t*)((v1) + 0);  // Load 128-bit vector   // 0x00191208: ldc2 $4, 0($v1)
    VPU_VF5 = *(vec128_t*)((v1) + 0x10);  // Load 128-bit vector // 0x0019120c: ldc2 $5, 0x10($v1)
    VPU_VF6 = *(vec128_t*)((v1) + 0x20);  // Load 128-bit vector // 0x00191210: ldc2 $6, 0x20($v1)
    VPU_VF7 = *(vec128_t*)((v1) + 0x30);  // Load 128-bit vector // 0x00191214: ldc2 $7, 0x30($v1)
    *(vec128_t*)((a0) + 0) = VPU_VF4;  // Store 128-bit vector  // 0x00191294: sdc2 $4, 0($a0)
    *(vec128_t*)((a0) + 0x10) = VPU_VF5;  // Store 128-bit vector // 0x00191298: sdc2 $5, 0x10($a0)
    *(vec128_t*)((a0) + 0x20) = VPU_VF6;  // Store 128-bit vector // 0x0019129c: sdc2 $6, 0x20($a0)
    return;                                                     // 0x001912a0: jr $ra
    *(vec128_t*)((a0) + 0x30) = VPU_VF7;  // Store 128-bit vector // 0x001912a4: sdc2 $7, 0x30($a0)
}