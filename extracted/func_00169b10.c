void func_00169b10() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00169b10: addiu $sp, $sp, -0x10
    return func_0013f518();  // Tail call                        // 0x00169b1c: j 0x13f4b8
    sp = sp + 0x10;                                             // 0x00169b20: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00169b24: nop 
    sp = sp + -0x10;                                            // 0x00169b28: addiu $sp, $sp, -0x10
    return func_0013f568();  // Tail call                        // 0x00169b34: j 0x13f518
    sp = sp + 0x10;                                             // 0x00169b38: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00169b3c: nop 
    sp = sp + -0x10;                                            // 0x00169b40: addiu $sp, $sp, -0x10
    func_001720e0();  // 1720e0                                // 0x00169b48: jal 0x1720e0
    /* nop */                                                   // 0x00169b4c: nop 
    return func_00168be8();  // Tail call                       // 0x00169b54: j 0x168be8
    sp = sp + 0x10;                                             // 0x00169b58: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00169b5c: nop 
    sp = sp + -0x10;                                            // 0x00169b60: addiu $sp, $sp, -0x10
    return func_00168c20();  // Tail call                        // 0x00169b6c: j 0x168c08
    sp = sp + 0x10;                                             // 0x00169b70: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00169b74: nop 
    return;                                                     // 0x00169b78: jr $ra
    /* nop */                                                   // 0x00169b7c: nop 
}