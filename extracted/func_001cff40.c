void func_001cff40() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_1e;
    
    sp = sp + -0x20;                                            // 0x001cff40: addiu $sp, $sp, -0x20
    a2 = 2;                                                     // 0x001cff44: addiu $a2, $zero, 2
    func_001cfe70();  // 0x1cfdf0                                // 0x001cff4c: jal 0x1cfdf0
    a1 = sp + 0x1e;                                             // 0x001cff50: addiu $a1, $sp, 0x1e
    v0 = local_1e;                                              // 0x001cff54: lhu $v0, 0x1e($sp)
    return;                                                     // 0x001cff5c: jr $ra
    sp = sp + 0x20;                                             // 0x001cff60: addiu $sp, $sp, 0x20
}