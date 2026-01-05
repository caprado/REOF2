void func_00162880() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00162880: addiu $sp, $sp, -0x20
    a1 = sp + 4;                                                // 0x00162888: addiu $a1, $sp, 4
    func_001628d0();  // 1628d0                                // 0x00162890: jal 0x1628d0
    a2 = sp + 8;                                                // 0x00162894: addiu $a2, $sp, 8
    return;                                                     // 0x0016289c: jr $ra
    sp = sp + 0x20;                                             // 0x001628a0: addiu $sp, $sp, 0x20
}