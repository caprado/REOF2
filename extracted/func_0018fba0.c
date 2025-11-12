void func_0018fba0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = 0x28 << 16;                                            // 0x0018fba0: lui $v1, 0x28
    v1 = v1 + 0x5420;                                           // 0x0018fba4: addiu $v1, $v1, 0x5420
    VPU_VF4 = *(vec128_t*)((v1) + 0);  // Load 128-bit vector   // 0x0018fba8: ldc2 $4, 0($v1)
    VPU_VF5 = *(vec128_t*)((v1) + 0x10);  // Load 128-bit vector // 0x0018fbac: ldc2 $5, 0x10($v1)
    VPU_VF6 = *(vec128_t*)((v1) + 0x20);  // Load 128-bit vector // 0x0018fbb0: ldc2 $6, 0x20($v1)
    VPU_VF7 = *(vec128_t*)((v1) + 0x30);  // Load 128-bit vector // 0x0018fbb4: ldc2 $7, 0x30($v1)
    *(vec128_t*)((a0) + 0) = VPU_VF4;  // Store 128-bit vector  // 0x0018fbb8: sdc2 $4, 0($a0)
    *(vec128_t*)((a0) + 0x10) = VPU_VF5;  // Store 128-bit vector // 0x0018fbbc: sdc2 $5, 0x10($a0)
    *(vec128_t*)((a0) + 0x20) = VPU_VF6;  // Store 128-bit vector // 0x0018fbc0: sdc2 $6, 0x20($a0)
    return;                                                     // 0x0018fbc4: jr $ra
    *(vec128_t*)((a0) + 0x30) = VPU_VF7;  // Store 128-bit vector // 0x0018fbc8: sdc2 $7, 0x30($a0)
}