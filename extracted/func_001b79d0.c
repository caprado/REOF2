void func_001b79d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001b79d0: addiu $sp, $sp, -0x10
    func_001afb40();  // 1afb40                                // 0x001b79d8: jal 0x1afb40
    /* nop */                                                   // 0x001b79dc: nop 
    a0 = 0x59 << 16;                                            // 0x001b79e0: lui $a0, 0x59
    a1 = 4;                                                     // 0x001b79e4: addiu $a1, $zero, 4
    func_001b7720();  // 1b7720                                // 0x001b79e8: jal 0x1b7720
    a0 = a0 + 0x4050;                                           // 0x001b79ec: addiu $a0, $a0, 0x4050
    a0 = 3;                                                     // 0x001b79f0: addiu $a0, $zero, 3
    func_001b78b0();  // 1b78b0                                // 0x001b79f4: jal 0x1b78b0
    a1 = 9;                                                     // 0x001b79f8: addiu $a1, $zero, 9
    return;                                                     // 0x001b7a00: jr $ra
    sp = sp + 0x10;                                             // 0x001b7a04: addiu $sp, $sp, 0x10
}