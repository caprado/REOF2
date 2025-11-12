void func_00191b30() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    FPU_F2 = *(float*)(a0);  // Load float                      // 0x00191b30: lwc1 $f2, 0($a0)
    sp = sp + -0x10;                                            // 0x00191b34: addiu $sp, $sp, -0x10
    FPU_F1 = *(float*)((a0) + 4);  // Load float                // 0x00191b38: lwc1 $f1, 4($a0)
    v1 = sp;                                                    // 0x00191b3c: addiu $v1, $sp, 0
    FPU_F0 = *(float*)((a0) + 8);  // Load float                // 0x00191b40: lwc1 $f0, 8($a0)
    *(float*)(v1) = FPU_F2;  // Store float                     // 0x00191b44: swc1 $f2, 0($v1)
    *(float*)((v1) + 4) = FPU_F1;  // Store float               // 0x00191b48: swc1 $f1, 4($v1)
    *(float*)((v1) + 8) = FPU_F0;  // Store float               // 0x00191b4c: swc1 $f0, 8($v1)
    VPU_VF4 = *(vec128_t*)((v1) + 0);  // Load 128-bit vector   // 0x00191b50: ldc2 $4, 0($v1)
    *(vec128_t*)((v1) + 0) = VPU_VF4;  // Store 128-bit vector  // 0x00191b6c: sdc2 $4, 0($v1)
    v1 = sp;                                                    // 0x00191b70: addiu $v1, $sp, 0
    FPU_F2 = *(float*)(v1);  // Load float                      // 0x00191b74: lwc1 $f2, 0($v1)
    FPU_F1 = *(float*)((v1) + 4);  // Load float                // 0x00191b78: lwc1 $f1, 4($v1)
    FPU_F0 = *(float*)((v1) + 8);  // Load float                // 0x00191b7c: lwc1 $f0, 8($v1)
    *(float*)(a0) = FPU_F2;  // Store float                     // 0x00191b80: swc1 $f2, 0($a0)
    *(float*)((a0) + 4) = FPU_F1;  // Store float               // 0x00191b84: swc1 $f1, 4($a0)
    *(float*)((a0) + 8) = FPU_F0;  // Store float               // 0x00191b88: swc1 $f0, 8($a0)
    return;                                                     // 0x00191b8c: jr $ra
    sp = sp + 0x10;                                             // 0x00191b90: addiu $sp, $sp, 0x10
}