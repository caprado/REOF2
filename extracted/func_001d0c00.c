void func_001d0c00() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001d0c00: addiu $sp, $sp, -0x10
    a0 = 0x33 << 16;                                            // 0x001d0c04: lui $a0, 0x33
    a0 = a0 + -0x2770;                                          // 0x001d0c0c: addiu $a0, $a0, -0x2770
    func_00107d30();  // 0x107c70                                // 0x001d0c14: jal 0x107c70
    a2 = 0x820;                                                 // 0x001d0c18: addiu $a2, $zero, 0x820
    *(uint32_t*)((gp) + -0x625c) = 0;                           // 0x001d0c1c: sw $zero, -0x625c($gp)
    return;                                                     // 0x001d0c28: jr $ra
    sp = sp + 0x10;                                             // 0x001d0c2c: addiu $sp, $sp, 0x10
}