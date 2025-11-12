void func_001b1ae0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001b1ae0: addiu $sp, $sp, -0x10
    func_001b1a60();  // 0x1b1a20                                // 0x001b1ae8: jal 0x1b1a20
    at = 0x49 << 16;                                            // 0x001b1af0: lui $at, 0x49
    g_004912df = 0;  // Global at 0x004912df                    // 0x001b1af4: sb $zero, 0x12df($at)
    return;                                                     // 0x001b1afc: jr $ra
    sp = sp + 0x10;                                             // 0x001b1b00: addiu $sp, $sp, 0x10
}