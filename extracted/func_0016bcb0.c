void func_0016bcb0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0016bcb0: addiu $sp, $sp, -0x10
    func_00169af0();  // 169af0                                // 0x0016bcbc: jal 0x169af0
    a1 = 0xff00 << 16;                                          // 0x0016bcc4: lui $a1, 0xff00
    if (v0 == 0) return;  // Branch to 0x16bcf0                 // 0x0016bccc: beqz $v0, 0x16bcf0
    a1 = a1 | 0x183;                                            // 0x0016bcd0: ori $a1, $a1, 0x183
    func_001698d0();  // 1698d0                                // 0x0016bcd4: jal 0x1698d0
    return;                                                     // 0x0016bce8: jr $ra
    sp = sp + 0x10;                                             // 0x0016bcec: addiu $sp, $sp, 0x10
}