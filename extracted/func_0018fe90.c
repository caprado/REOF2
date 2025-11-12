void func_0018fe90() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    FPU_F0 = *(float*)((a1) + 0x30);  // Load float             // 0x0018fe90: lwc1 $f0, 0x30($a1)
    *(float*)(a0) = FPU_F0;  // Store float                     // 0x0018fe94: swc1 $f0, 0($a0)
    FPU_F0 = *(float*)((a1) + 0x34);  // Load float             // 0x0018fe98: lwc1 $f0, 0x34($a1)
    *(float*)((a0) + 4) = FPU_F0;  // Store float               // 0x0018fe9c: swc1 $f0, 4($a0)
    FPU_F0 = *(float*)((a1) + 0x38);  // Load float             // 0x0018fea0: lwc1 $f0, 0x38($a1)
    return;                                                     // 0x0018fea4: jr $ra
    *(float*)((a0) + 8) = FPU_F0;  // Store float               // 0x0018fea8: swc1 $f0, 8($a0)
}