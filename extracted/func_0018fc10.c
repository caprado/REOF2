void func_0018fc10() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = 0x28 << 16;                                            // 0x0018fc10: lui $v1, 0x28
    v1 = v1 + 0x5420;                                           // 0x0018fc14: addiu $v1, $v1, 0x5420
    /* move from FPU: $a2, $f12 */                              // 0x0018fc18: mfc1 $a2, $f12
    /* move from FPU: $a3, $f13 */                              // 0x0018fc1c: mfc1 $a3, $f13
    /* move from FPU: $t0, $f14 */                              // 0x0018fc20: mfc1 $t0, $f14
    VPU_VF4 = *(vec128_t*)((v1) + 0);  // Load 128-bit vector   // 0x0018fc24: ldc2 $4, 0($v1)
    VPU_VF5 = *(vec128_t*)((v1) + 0x10);  // Load 128-bit vector // 0x0018fc34: ldc2 $5, 0x10($v1)
    VPU_VF6 = *(vec128_t*)((v1) + 0x20);  // Load 128-bit vector // 0x0018fc38: ldc2 $6, 0x20($v1)
    VPU_VF7 = *(vec128_t*)((v1) + 0x30);  // Load 128-bit vector // 0x0018fc3c: ldc2 $7, 0x30($v1)
    *(vec128_t*)((a0) + 0x30) = VPU_VF7;  // Store 128-bit vector // 0x0018fc4c: sdc2 $7, 0x30($a0)
    *(vec128_t*)((a0) + 0) = VPU_VF4;  // Store 128-bit vector  // 0x0018fc50: sdc2 $4, 0($a0)
    *(vec128_t*)((a0) + 0x10) = VPU_VF5;  // Store 128-bit vector // 0x0018fc54: sdc2 $5, 0x10($a0)
    return;                                                     // 0x0018fc58: jr $ra
    *(vec128_t*)((a0) + 0x20) = VPU_VF6;  // Store 128-bit vector // 0x0018fc5c: sdc2 $6, 0x20($a0)
}