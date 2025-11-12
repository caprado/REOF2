void func_00191c00() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    FPU_F2 = *(float*)(a1);  // Load float                      // 0x00191c00: lwc1 $f2, 0($a1)
    sp = sp + -0x20;                                            // 0x00191c04: addiu $sp, $sp, -0x20
    FPU_F1 = *(float*)((a1) + 4);  // Load float                // 0x00191c08: lwc1 $f1, 4($a1)
    a3 = sp + 0x10;                                             // 0x00191c0c: addiu $a3, $sp, 0x10
    FPU_F0 = *(float*)((a1) + 8);  // Load float                // 0x00191c10: lwc1 $f0, 8($a1)
    v1 = sp;                                                    // 0x00191c14: addiu $v1, $sp, 0
    *(float*)(a3) = FPU_F2;  // Store float                     // 0x00191c18: swc1 $f2, 0($a3)
    *(float*)((a3) + 4) = FPU_F1;  // Store float               // 0x00191c1c: swc1 $f1, 4($a3)
    *(float*)((a3) + 8) = FPU_F0;  // Store float               // 0x00191c20: swc1 $f0, 8($a3)
    FPU_F2 = *(float*)(a2);  // Load float                      // 0x00191c24: lwc1 $f2, 0($a2)
    FPU_F1 = *(float*)((a2) + 4);  // Load float                // 0x00191c28: lwc1 $f1, 4($a2)
    FPU_F0 = *(float*)((a2) + 8);  // Load float                // 0x00191c2c: lwc1 $f0, 8($a2)
    *(float*)(v1) = FPU_F2;  // Store float                     // 0x00191c30: swc1 $f2, 0($v1)
    *(float*)((v1) + 4) = FPU_F1;  // Store float               // 0x00191c34: swc1 $f1, 4($v1)
    *(float*)((v1) + 8) = FPU_F0;  // Store float               // 0x00191c38: swc1 $f0, 8($v1)
    VPU_VF4 = *(vec128_t*)((a3) + 0);  // Load 128-bit vector   // 0x00191c3c: ldc2 $4, 0($a3)
    VPU_VF5 = *(vec128_t*)((v1) + 0);  // Load 128-bit vector   // 0x00191c40: ldc2 $5, 0($v1)
    *(vec128_t*)((a3) + 0) = VPU_VF6;  // Store 128-bit vector  // 0x00191c4c: sdc2 $6, 0($a3)
    v1 = sp + 0x10;                                             // 0x00191c50: addiu $v1, $sp, 0x10
    FPU_F2 = *(float*)(v1);  // Load float                      // 0x00191c54: lwc1 $f2, 0($v1)
    FPU_F1 = *(float*)((v1) + 4);  // Load float                // 0x00191c58: lwc1 $f1, 4($v1)
    FPU_F0 = *(float*)((v1) + 8);  // Load float                // 0x00191c5c: lwc1 $f0, 8($v1)
    *(float*)(a0) = FPU_F2;  // Store float                     // 0x00191c60: swc1 $f2, 0($a0)
    *(float*)((a0) + 4) = FPU_F1;  // Store float               // 0x00191c64: swc1 $f1, 4($a0)
    *(float*)((a0) + 8) = FPU_F0;  // Store float               // 0x00191c68: swc1 $f0, 8($a0)
    return;                                                     // 0x00191c6c: jr $ra
    sp = sp + 0x20;                                             // 0x00191c70: addiu $sp, $sp, 0x20
}