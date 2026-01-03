void func_0013ee1c() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0013ee1c: addiu $sp, $sp, -0x10
    func_00116508();  // 116508                                // 0x0013ee24: jal 0x116508
    a0 = a0 + 0x6208;                                           // 0x0013ee28: addiu $a0, $a0, 0x6208
    return;                                                     // 0x0013ee34: jr $ra
    sp = sp + 0x10;                                             // 0x0013ee38: addiu $sp, $sp, 0x10
}