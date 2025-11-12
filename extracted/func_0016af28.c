void func_0016af28() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0016af28: addiu $sp, $sp, -0x20
    func_0016b2a8();  // 0x16b1f8                                // 0x0016af3c: jal 0x16b1f8
    a2 = sp + 4;                                                // 0x0016af40: addiu $a2, $sp, 4
    func_0016b000();  // 0x16af78                                // 0x0016af44: jal 0x16af78
    func_0016b340();  // 0x16b2a8                                // 0x0016af4c: jal 0x16b2a8
    func_0016b1f8();  // 0x16b130                                // 0x0016af54: jal 0x16b130
    func_0016b3f8();  // 0x16b340                                // 0x0016af5c: jal 0x16b340
    return;                                                     // 0x0016af6c: jr $ra
    sp = sp + 0x20;                                             // 0x0016af70: addiu $sp, $sp, 0x20
}