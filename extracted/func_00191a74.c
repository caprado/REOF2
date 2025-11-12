void func_00191a74() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00191a74: addiu $sp, $sp, -0x10
    FPU_F1 = *(float*)((a0) + 4);  // Load float                // 0x00191a78: lwc1 $f1, 4($a0)
    v0 = sp;                                                    // 0x00191a7c: addiu $v0, $sp, 0
    FPU_F0 = *(float*)((a0) + 8);  // Load float                // 0x00191a80: lwc1 $f0, 8($a0)
    *(float*)(v0) = FPU_F2;  // Store float                     // 0x00191a84: swc1 $f2, 0($v0)
    *(float*)((v0) + 4) = FPU_F1;  // Store float               // 0x00191a88: swc1 $f1, 4($v0)
    *(float*)((v0) + 8) = FPU_F0;  // Store float               // 0x00191a8c: swc1 $f0, 8($v0)
    VPU_VF4 = *(vec128_t*)((v0) + 0);  // Load 128-bit vector   // 0x00191a90: ldc2 $4, 0($v0)
    /* move to FPU: $v0, $f0 */                                 // 0x00191ab0: mtc1 $v0, $f0
    return;                                                     // 0x00191ab4: jr $ra
    sp = sp + 0x10;                                             // 0x00191ab8: addiu $sp, $sp, 0x10
}