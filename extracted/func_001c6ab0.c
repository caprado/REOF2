void func_001c6ab0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001c6ab0: addiu $sp, $sp, -0x20
    a2 = 4;                                                     // 0x001c6abc: addiu $a2, $zero, 4
    func_00107c70();  // 107c70                                // 0x001c6ac4: jal 0x107c70
    a1 = 0x31 << 16;                                            // 0x001c6acc: lui $a1, 0x31
    a1 = a1 + 0x1d30;                                           // 0x001c6ad4: addiu $a1, $a1, 0x1d30
    func_00107ab8();  // 107ab8                                // 0x001c6ad8: jal 0x107ab8
    a2 = 0x1474;                                                // 0x001c6adc: addiu $a2, $zero, 0x1474
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c6ae4: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c6ae8: jr $ra
    sp = sp + 0x20;                                             // 0x001c6aec: addiu $sp, $sp, 0x20
}