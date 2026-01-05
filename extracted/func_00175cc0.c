void func_00175cc0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00175cc0: addiu $sp, $sp, -0x10
    func_00175d00();  // 175d00                                // 0x00175ccc: jal 0x175d00
    a1 = 0xff00 << 16;                                          // 0x00175cd4: lui $a1, 0xff00
    if (v0 == 0) goto label_0x175cec;                           // 0x00175cd8: beqz $v0, 0x175cec
    func_001698d0();  // 1698d0                                // 0x00175ce0: jal 0x1698d0
    a1 = a1 | 0x222;                                            // 0x00175ce4: ori $a1, $a1, 0x222
    v0 = 1;                                                     // 0x00175ce8: addiu $v0, $zero, 1
label_0x175cec:
    return;                                                     // 0x00175cf4: jr $ra
    sp = sp + 0x10;                                             // 0x00175cf8: addiu $sp, $sp, 0x10
}