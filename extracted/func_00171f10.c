void func_00171f10() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00171f10: addiu $sp, $sp, -0x10
    a2 = 8;                                                     // 0x00171f18: addiu $a2, $zero, 8
    func_00177908();  // 0x1778a0                                // 0x00171f24: jal 0x1778a0
    a1 = 7;                                                     // 0x00171f28: addiu $a1, $zero, 7
    return;                                                     // 0x00171f30: jr $ra
    sp = sp + 0x10;                                             // 0x00171f34: addiu $sp, $sp, 0x10
}