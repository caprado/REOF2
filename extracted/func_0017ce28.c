void func_0017ce28() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = (a0 < 0x181f) ? 1 : 0;                                 // 0x0017ce28: slti $v0, $a0, 0x181f
    return;                                                     // 0x0017ce2c: jr $ra
    v0 = v0 ^ 1;                                                // 0x0017ce30: xori $v0, $v0, 1
}