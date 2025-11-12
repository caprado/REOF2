void func_001b7910() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001b7910: addiu $sp, $sp, -0x10
    a0 = 0x54 << 16;                                            // 0x001b7914: lui $a0, 0x54
    a0 = a0 + 0x3080;                                           // 0x001b791c: addiu $a0, $a0, 0x3080
    func_001b7790();  // 0x1b7720                                // 0x001b7920: jal 0x1b7720
    a1 = 4;                                                     // 0x001b7924: addiu $a1, $zero, 4
    a0 = 1;                                                     // 0x001b7928: addiu $a0, $zero, 1
    func_001b7910();  // 0x1b78b0                                // 0x001b792c: jal 0x1b78b0
    a1 = -1;                                                    // 0x001b7930: addiu $a1, $zero, -1
    return;                                                     // 0x001b7938: jr $ra
    sp = sp + 0x10;                                             // 0x001b793c: addiu $sp, $sp, 0x10
}