void func_001cff10() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_1e;
    
    sp = sp + -0x20;                                            // 0x001cff10: addiu $sp, $sp, -0x20
    a2 = 2;                                                     // 0x001cff14: addiu $a2, $zero, 2
    local_1e = a1;                                              // 0x001cff1c: sh $a1, 0x1e($sp)
    func_001cfdf0();  // 0x1cfd80                                // 0x001cff20: jal 0x1cfd80
    a1 = sp + 0x1e;                                             // 0x001cff24: addiu $a1, $sp, 0x1e
    return;                                                     // 0x001cff2c: jr $ra
    sp = sp + 0x20;                                             // 0x001cff30: addiu $sp, $sp, 0x20
}