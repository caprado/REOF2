void func_001dc930() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    if (a1 < 0) return;  // Branch to 0x1dc96c                  // 0x001dc930: bltz $a1, 0x1dc96c
    v0 = -0xb;                                                  // 0x001dc934: addiu $v0, $zero, -0xb
    if (a2 >= 0) return;  // Branch to 0x1dc948                 // 0x001dc938: bgez $a2, 0x1dc948
    v1 = 0x38;                                                  // 0x001dc93c: addiu $v1, $zero, 0x38
    return;                                                     // 0x001dc940: jr $ra
    v0 = -0xc;                                                  // 0x001dc944: addiu $v0, $zero, -0xc
}