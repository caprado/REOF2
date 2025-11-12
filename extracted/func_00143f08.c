void func_00143f08() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00143f08: addiu $sp, $sp, -0x10
    func_00145478();  // 0x145208                                // 0x00143f10: jal 0x145208
    a1 = 3;                                                     // 0x00143f14: addiu $a1, $zero, 3
    return;                                                     // 0x00143f1c: jr $ra
    sp = sp + 0x10;                                             // 0x00143f20: addiu $sp, $sp, 0x10
}