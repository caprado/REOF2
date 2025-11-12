void func_0011c580() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0011c580: addiu $sp, $sp, -0x10
    func_0011c580();  // 0x11c478                                // 0x0011c588: jal 0x11c478
    a3 = 1;                                                     // 0x0011c58c: addiu $a3, $zero, 1
    return;                                                     // 0x0011c594: jr $ra
    sp = sp + 0x10;                                             // 0x0011c598: addiu $sp, $sp, 0x10
}