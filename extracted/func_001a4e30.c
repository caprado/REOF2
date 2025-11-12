void func_001a4e30() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    FPU_F3 = *(float*)((a1) + 4);  // Load float                // 0x001a4e30: lwc1 $f3, 4($a1)
    FPU_F2 = *(float*)((a2) + 8);  // Load float                // 0x001a4e34: lwc1 $f2, 8($a2)
    FPU_F1 = *(float*)((a2) + 4);  // Load float                // 0x001a4e38: lwc1 $f1, 4($a2)
    FPU_F0 = *(float*)((a1) + 8);  // Load float                // 0x001a4e3c: lwc1 $f0, 8($a1)
    *(float*)(a0) = FPU_F0;  // Store float                     // 0x001a4e48: swc1 $f0, 0($a0)
    FPU_F3 = *(float*)((a1) + 8);  // Load float                // 0x001a4e4c: lwc1 $f3, 8($a1)
    FPU_F2 = *(float*)(a2);  // Load float                      // 0x001a4e50: lwc1 $f2, 0($a2)
    FPU_F1 = *(float*)((a2) + 8);  // Load float                // 0x001a4e54: lwc1 $f1, 8($a2)
    FPU_F0 = *(float*)(a1);  // Load float                      // 0x001a4e58: lwc1 $f0, 0($a1)
    *(float*)((a0) + 4) = FPU_F0;  // Store float               // 0x001a4e64: swc1 $f0, 4($a0)
    FPU_F3 = *(float*)(a1);  // Load float                      // 0x001a4e68: lwc1 $f3, 0($a1)
    FPU_F2 = *(float*)((a2) + 4);  // Load float                // 0x001a4e6c: lwc1 $f2, 4($a2)
    FPU_F0 = *(float*)((a1) + 4);  // Load float                // 0x001a4e70: lwc1 $f0, 4($a1)
    FPU_F1 = *(float*)(a2);  // Load float                      // 0x001a4e74: lwc1 $f1, 0($a2)
    return;                                                     // 0x001a4e80: jr $ra
    *(float*)((a0) + 8) = FPU_F0;  // Store float               // 0x001a4e84: swc1 $f0, 8($a0)
}