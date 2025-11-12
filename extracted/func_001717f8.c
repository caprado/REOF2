void func_001717f8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001717f8: addiu $sp, $sp, -0x20
    func_00171200();  // 0x1711f0                                // 0x0017180c: jal 0x1711f0
    if (v0 != 0) return;  // Branch to 0x171838                 // 0x00171814: bnez $v0, 0x171838
    return;                                                     // 0x0017182c: jr $ra
    sp = sp + 0x20;                                             // 0x00171830: addiu $sp, $sp, 0x20
}