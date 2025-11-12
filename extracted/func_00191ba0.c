void func_00191ba0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    FPU_F2 = *(float*)(a0);  // Load float                      // 0x00191ba0: lwc1 $f2, 0($a0)
    sp = sp + -0x20;                                            // 0x00191ba4: addiu $sp, $sp, -0x20
    FPU_F1 = *(float*)((a0) + 4);  // Load float                // 0x00191ba8: lwc1 $f1, 4($a0)
    v1 = sp + 0x10;                                             // 0x00191bac: addiu $v1, $sp, 0x10
    FPU_F0 = *(float*)((a0) + 8);  // Load float                // 0x00191bb0: lwc1 $f0, 8($a0)
    v0 = sp;                                                    // 0x00191bb4: addiu $v0, $sp, 0
    *(float*)(v1) = FPU_F2;  // Store float                     // 0x00191bb8: swc1 $f2, 0($v1)
    *(float*)((v1) + 4) = FPU_F1;  // Store float               // 0x00191bbc: swc1 $f1, 4($v1)
    *(float*)((v1) + 8) = FPU_F0;  // Store float               // 0x00191bc0: swc1 $f0, 8($v1)
    FPU_F2 = *(float*)(a1);  // Load float                      // 0x00191bc4: lwc1 $f2, 0($a1)
    FPU_F1 = *(float*)((a1) + 4);  // Load float                // 0x00191bc8: lwc1 $f1, 4($a1)
    FPU_F0 = *(float*)((a1) + 8);  // Load float                // 0x00191bcc: lwc1 $f0, 8($a1)
    *(float*)(v0) = FPU_F2;  // Store float                     // 0x00191bd0: swc1 $f2, 0($v0)
    *(float*)((v0) + 4) = FPU_F1;  // Store float               // 0x00191bd4: swc1 $f1, 4($v0)
    *(float*)((v0) + 8) = FPU_F0;  // Store float               // 0x00191bd8: swc1 $f0, 8($v0)
    VPU_VF4 = *(vec128_t*)((v1) + 0);  // Load 128-bit vector   // 0x00191bdc: ldc2 $4, 0($v1)
    VPU_VF5 = *(vec128_t*)((v0) + 0);  // Load 128-bit vector   // 0x00191be0: ldc2 $5, 0($v0)
    /* move to FPU: $v1, $f0 */                                 // 0x00191bf4: mtc1 $v1, $f0
    return;                                                     // 0x00191bf8: jr $ra
    sp = sp + 0x20;                                             // 0x00191bfc: addiu $sp, $sp, 0x20
}