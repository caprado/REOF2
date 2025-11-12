void func_00191ac0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    FPU_F2 = *(float*)(a0);  // Load float                      // 0x00191ac0: lwc1 $f2, 0($a0)
    sp = sp + -0x20;                                            // 0x00191ac4: addiu $sp, $sp, -0x20
    FPU_F1 = *(float*)((a0) + 4);  // Load float                // 0x00191ac8: lwc1 $f1, 4($a0)
    v1 = sp + 0x10;                                             // 0x00191acc: addiu $v1, $sp, 0x10
    FPU_F0 = *(float*)((a0) + 8);  // Load float                // 0x00191ad0: lwc1 $f0, 8($a0)
    v0 = sp;                                                    // 0x00191ad4: addiu $v0, $sp, 0
    *(float*)(v1) = FPU_F2;  // Store float                     // 0x00191ad8: swc1 $f2, 0($v1)
    *(float*)((v1) + 4) = FPU_F1;  // Store float               // 0x00191adc: swc1 $f1, 4($v1)
    *(float*)((v1) + 8) = FPU_F0;  // Store float               // 0x00191ae0: swc1 $f0, 8($v1)
    FPU_F2 = *(float*)(a1);  // Load float                      // 0x00191ae4: lwc1 $f2, 0($a1)
    FPU_F1 = *(float*)((a1) + 4);  // Load float                // 0x00191ae8: lwc1 $f1, 4($a1)
    FPU_F0 = *(float*)((a1) + 8);  // Load float                // 0x00191aec: lwc1 $f0, 8($a1)
    *(float*)(v0) = FPU_F2;  // Store float                     // 0x00191af0: swc1 $f2, 0($v0)
    *(float*)((v0) + 4) = FPU_F1;  // Store float               // 0x00191af4: swc1 $f1, 4($v0)
    *(float*)((v0) + 8) = FPU_F0;  // Store float               // 0x00191af8: swc1 $f0, 8($v0)
    VPU_VF4 = *(vec128_t*)((v1) + 0);  // Load 128-bit vector   // 0x00191afc: ldc2 $4, 0($v1)
    VPU_VF5 = *(vec128_t*)((v0) + 0);  // Load 128-bit vector   // 0x00191b00: ldc2 $5, 0($v0)
    /* move to FPU: $v1, $f0 */                                 // 0x00191b24: mtc1 $v1, $f0
    return;                                                     // 0x00191b28: jr $ra
    sp = sp + 0x20;                                             // 0x00191b2c: addiu $sp, $sp, 0x20
}