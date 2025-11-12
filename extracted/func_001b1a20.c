void func_001b1a20() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001b1a20: addiu $sp, $sp, -0x20
    a0 = 0x4c << 16;                                            // 0x001b1a30: lui $a0, 0x4c
    func_001b1a20();  // 0x1b1960                                // 0x001b1a38: jal 0x1b1960
    a0 = a0 + -0x1170;                                          // 0x001b1a3c: addiu $a0, $a0, -0x1170
    a0 = 0x4c << 16;                                            // 0x001b1a40: lui $a0, 0x4c
    func_001b1a20();  // 0x1b1960                                // 0x001b1a48: jal 0x1b1960
    a0 = a0 + -0x30c0;                                          // 0x001b1a4c: addiu $a0, $a0, -0x30c0
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b1a54: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b1a58: jr $ra
    sp = sp + 0x20;                                             // 0x001b1a5c: addiu $sp, $sp, 0x20
}