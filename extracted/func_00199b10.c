void func_00199b10() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = 0x7000 << 16;                                          // 0x00199b10: lui $v1, 0x7000
    v1 = v1 | 0x3fc0;                                           // 0x00199b14: ori $v1, $v1, 0x3fc0
    VPU_VF4 = *(vec128_t*)((v1) + 0);  // Load 128-bit vector   // 0x00199b18: ldc2 $4, 0($v1)
    VPU_VF5 = *(vec128_t*)((v1) + 0x10);  // Load 128-bit vector // 0x00199b1c: ldc2 $5, 0x10($v1)
    VPU_VF6 = *(vec128_t*)((v1) + 0x30);  // Load 128-bit vector // 0x00199b20: ldc2 $6, 0x30($v1)
    *(vec128_t*)((a0) + 0) = VPU_VF4;  // Store 128-bit vector  // 0x00199b24: sdc2 $4, 0($a0)
    *(vec128_t*)((a0) + 0x10) = VPU_VF5;  // Store 128-bit vector // 0x00199b28: sdc2 $5, 0x10($a0)
    *(vec128_t*)((a0) + 0x20) = VPU_VF6;  // Store 128-bit vector // 0x00199b2c: sdc2 $6, 0x20($a0)
    return;                                                     // 0x00199b30: jr $ra
    /* nop */                                                   // 0x00199b34: nop 
}