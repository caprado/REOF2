void func_001c7580() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001c7580: addiu $sp, $sp, -0x10
    a0 = 0x31 << 16;                                            // 0x001c7584: lui $a0, 0x31
    a0 = a0 + 0x6630;                                           // 0x001c758c: addiu $a0, $a0, 0x6630
    func_00107d30();  // 0x107c70                                // 0x001c7594: jal 0x107c70
    a2 = 0x28;                                                  // 0x001c7598: addiu $a2, $zero, 0x28
    return;                                                     // 0x001c75a4: jr $ra
    sp = sp + 0x10;                                             // 0x001c75a8: addiu $sp, $sp, 0x10
}