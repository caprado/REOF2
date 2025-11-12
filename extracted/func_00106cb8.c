void func_00106cb8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00106cb8: addiu $sp, $sp, -0x20
    s0 = 0x1f << 16;                                            // 0x00106cc0: lui $s0, 0x1f
    s0 = s0 + -0x210;                                           // 0x00106cd8: addiu $s0, $s0, -0x210
    func_00107db0();  // 0x107d30                                // 0x00106cdc: jal 0x107d30
    a0 = g_001efdf0;  // Global at 0x001efdf0                   // 0x00106ce0: lw $a0, 0($s0)
    a0 = g_001efdf0;  // Global at 0x001efdf0                   // 0x00106ce4: lw $a0, 0($s0)
    func_00106ee8();  // 0x106d20                                // 0x00106cec: jal 0x106d20
    a0 = g_001efdf0;  // Global at 0x001efdf0                   // 0x00106cf4: lw $a0, 0($s0)
    func_00107e00();  // 0x107db0                                // 0x00106cf8: jal 0x107db0
    return;                                                     // 0x00106d14: jr $ra
    sp = sp + 0x20;                                             // 0x00106d18: addiu $sp, $sp, 0x20
}