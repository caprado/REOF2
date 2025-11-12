void func_001a4d90() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    FPU_F0 = *(float*)((a0) + 4);  // Load float                // 0x001a4d90: lwc1 $f0, 4($a0)
    FPU_F1 = *(float*)(a0);  // Load float                      // 0x001a4d94: lwc1 $f1, 0($a0)
    FPU_F2 = *(float*)((a0) + 8);  // Load float                // 0x001a4d98: lwc1 $f2, 8($a0)
    /* FPU: mul.s $f0, $f0, $f0 */                              // 0x001a4d9c: mul.s $f0, $f0, $f0
    /* FPU: mul.s $f1, $f1, $f1 */                              // 0x001a4da0: mul.s $f1, $f1, $f1
    /* FPU: sqrt.s $f0, $f0 */                                  // 0x001a4dac: sqrt.s $f0, $f0
    /* nop */                                                   // 0x001a4db0: nop 
    /* nop */                                                   // 0x001a4db4: nop 
    return;                                                     // 0x001a4db8: jr $ra
    /* nop */                                                   // 0x001a4dbc: nop 
}