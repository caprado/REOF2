void func_001cfc70() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    return func_0010ae00();  // Tail call                        // 0x001cfc70: j 0x10ac68
    a0 = a0 + 0x7c;                                             // 0x001cfc74: addiu $a0, $a0, 0x7c
    /* nop */                                                   // 0x001cfc78: nop 
    /* nop */                                                   // 0x001cfc7c: nop 
    return;                                                     // 0x001cfc80: jr $ra
    FPU_F0 = *(float*)((a0) + 0x70);  // Load float             // 0x001cfc84: lwc1 $f0, 0x70($a0)
}