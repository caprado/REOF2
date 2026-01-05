void func_001038d8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001038d8: addiu $sp, $sp, -0x20
    s0 = 0x1f << 16;                                            // 0x001038e0: lui $s0, 0x1f
    s0 = s0 + -0x210;                                           // 0x001038f8: addiu $s0, $s0, -0x210
    func_00107d30();  // 107d30                                // 0x001038fc: jal 0x107d30
    a0 = g_001efdf0;  // Global at 0x001efdf0                   // 0x00103900: lw $a0, 0($s0)
    a0 = g_001efdf0;  // Global at 0x001efdf0                   // 0x00103904: lw $a0, 0($s0)
    func_00103940();  // 103940                                // 0x0010390c: jal 0x103940
    a0 = g_001efdf0;  // Global at 0x001efdf0                   // 0x00103914: lw $a0, 0($s0)
    func_00107db0();  // 107db0                                // 0x00103918: jal 0x107db0
    return;                                                     // 0x00103934: jr $ra
    sp = sp + 0x20;                                             // 0x00103938: addiu $sp, $sp, 0x20
}