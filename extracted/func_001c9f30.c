void func_001c9f30() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001c9f30: addiu $sp, $sp, -0x10
    func_001c83c0();  // 0x1c8380                                // 0x001c9f38: jal 0x1c8380
    /* nop */                                                   // 0x001c9f3c: nop 
    at = 0x31 << 16;                                            // 0x001c9f40: lui $at, 0x31
    g_00316aaa = 0;  // Global at 0x00316aaa                    // 0x001c9f48: sb $zero, 0x6aaa($at)
    return;                                                     // 0x001c9f54: jr $ra
    sp = sp + 0x10;                                             // 0x001c9f58: addiu $sp, $sp, 0x10
}