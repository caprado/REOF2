void func_00103770() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00103770: addiu $sp, $sp, -0x10
    return func_0010c4a0();  // Tail call                        // 0x00103780: j 0x10c450
    sp = sp + 0x10;                                             // 0x00103784: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x00103788: addiu $sp, $sp, -0x10
    func_0010c7c0();  // 10c7c0                                // 0x00103794: jal 0x10c7c0
    a2 = 0xa;                                                   // 0x00103798: addiu $a2, $zero, 0xa
    return;                                                     // 0x001037a8: jr $ra
    sp = sp + 0x10;                                             // 0x001037ac: addiu $sp, $sp, 0x10
}