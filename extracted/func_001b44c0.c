void func_001b44c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001b44c0: addiu $sp, $sp, -0x10
    a0 = 0x30 << 16;                                            // 0x001b44c4: lui $a0, 0x30
    a0 = a0 + 0x6c00;                                           // 0x001b44cc: addiu $a0, $a0, 0x6c00
    func_00107d30();  // 0x107c70                                // 0x001b44d4: jal 0x107c70
    a2 = 0x1190;                                                // 0x001b44d8: addiu $a2, $zero, 0x1190
    a0 = 0x1b << 16;                                            // 0x001b44dc: lui $a0, 0x1b
    func_001af2f0();  // 0x1af280                                // 0x001b44e0: jal 0x1af280
    a0 = a0 + 0x3fa0;                                           // 0x001b44e4: addiu $a0, $a0, 0x3fa0
    return;                                                     // 0x001b44ec: jr $ra
    sp = sp + 0x10;                                             // 0x001b44f0: addiu $sp, $sp, 0x10
}