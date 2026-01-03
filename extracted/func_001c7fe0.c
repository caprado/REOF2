void func_001c7fe0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001c7fe0: addiu $sp, $sp, -0x20
    func_001c7770();  // 1c7770                                // 0x001c7fe8: jal 0x1c7770
    a1 = 0x20;                                                  // 0x001c7ff0: addiu $a1, $zero, 0x20
    a0 = 0x22;                                                  // 0x001c7ff4: addiu $a0, $zero, 0x22
    func_001c75b0();  // 1c75b0                                // 0x001c7ff8: jal 0x1c75b0
    func_001c7780();  // 1c7780                                // 0x001c8004: jal 0x1c7780
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c8014: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c8018: jr $ra
    sp = sp + 0x20;                                             // 0x001c801c: addiu $sp, $sp, 0x20
}