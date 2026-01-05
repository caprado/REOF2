void func_001c8b00() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001c8b00: addiu $sp, $sp, -0x20
    func_001c7770();  // 1c7770                                // 0x001c8b0c: jal 0x1c7770
    a1 = 0x20;                                                  // 0x001c8b14: addiu $a1, $zero, 0x20
    at = 0x31 << 16;                                            // 0x001c8b18: lui $at, 0x31
    a0 = 0x48;                                                  // 0x001c8b1c: addiu $a0, $zero, 0x48
    func_001c75b0();  // 1c75b0                                // 0x001c8b24: jal 0x1c75b0
    g_00316680 = s0;  // Global at 0x00316680                   // 0x001c8b28: sw $s0, 0x6680($at)
    func_001c7780();  // 1c7780                                // 0x001c8b30: jal 0x1c7780
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c8b40: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c8b44: jr $ra
    sp = sp + 0x20;                                             // 0x001c8b48: addiu $sp, $sp, 0x20
}