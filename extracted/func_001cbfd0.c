void func_001cbfd0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001cbfd0: addiu $sp, $sp, -0x10
    func_001cfc60();  // 0x1cfc50                                // 0x001cbfd8: jal 0x1cfc50
    a0 = a0 + 0x28;                                             // 0x001cbfdc: addiu $a0, $a0, 0x28
    v0 = v0 & 0xff;                                             // 0x001cbfe4: andi $v0, $v0, 0xff
    return;                                                     // 0x001cbfe8: jr $ra
    sp = sp + 0x10;                                             // 0x001cbfec: addiu $sp, $sp, 0x10
}