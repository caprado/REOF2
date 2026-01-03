void func_00167a90() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00167a90: addiu $sp, $sp, -0x10
    func_001752e8();  // 1752e8                                // 0x00167a98: jal 0x1752e8
    a1 = 0x31;                                                  // 0x00167a9c: addiu $a1, $zero, 0x31
    v0 = ((unsigned)0 < (unsigned)v0) ? 1 : 0;                  // 0x00167aa4: sltu $v0, $zero, $v0
    return;                                                     // 0x00167aa8: jr $ra
    sp = sp + 0x10;                                             // 0x00167aac: addiu $sp, $sp, 0x10
}