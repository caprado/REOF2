void func_00191780() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    FPU_F2 = *(float*)(a1);  // Load float                      // 0x00191780: lwc1 $f2, 0($a1)
    sp = sp + -0x10;                                            // 0x00191784: addiu $sp, $sp, -0x10
    FPU_F1 = *(float*)((a1) + 4);  // Load float                // 0x00191788: lwc1 $f1, 4($a1)
    v1 = sp;                                                    // 0x0019178c: addiu $v1, $sp, 0
    FPU_F0 = *(float*)((a1) + 8);  // Load float                // 0x00191790: lwc1 $f0, 8($a1)
    *(float*)(v1) = FPU_F2;  // Store float                     // 0x00191794: swc1 $f2, 0($v1)
    *(float*)((v1) + 4) = FPU_F1;  // Store float               // 0x00191798: swc1 $f1, 4($v1)
    *(float*)((v1) + 8) = FPU_F0;  // Store float               // 0x0019179c: swc1 $f0, 8($v1)
    VPU_VF4 = *(vec128_t*)((v1) + 0);  // Load 128-bit vector   // 0x001917a0: ldc2 $4, 0($v1)
    VPU_VF5 = *(vec128_t*)((a2) + 0);  // Load 128-bit vector   // 0x001917a4: ldc2 $5, 0($a2)
    VPU_VF6 = *(vec128_t*)((a2) + 0x10);  // Load 128-bit vector // 0x001917a8: ldc2 $6, 0x10($a2)
    VPU_VF7 = *(vec128_t*)((a2) + 0x20);  // Load 128-bit vector // 0x001917ac: ldc2 $7, 0x20($a2)
    *(vec128_t*)((v1) + 0) = VPU_VF4;  // Store 128-bit vector  // 0x001917bc: sdc2 $4, 0($v1)
    v1 = sp;                                                    // 0x001917c0: addiu $v1, $sp, 0
    FPU_F2 = *(float*)(v1);  // Load float                      // 0x001917c4: lwc1 $f2, 0($v1)
    FPU_F1 = *(float*)((v1) + 4);  // Load float                // 0x001917c8: lwc1 $f1, 4($v1)
    FPU_F0 = *(float*)((v1) + 8);  // Load float                // 0x001917cc: lwc1 $f0, 8($v1)
    *(float*)(a0) = FPU_F2;  // Store float                     // 0x001917d0: swc1 $f2, 0($a0)
    *(float*)((a0) + 4) = FPU_F1;  // Store float               // 0x001917d4: swc1 $f1, 4($a0)
    *(float*)((a0) + 8) = FPU_F0;  // Store float               // 0x001917d8: swc1 $f0, 8($a0)
    return;                                                     // 0x001917dc: jr $ra
    sp = sp + 0x10;                                             // 0x001917e0: addiu $sp, $sp, 0x10
}