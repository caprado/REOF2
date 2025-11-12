void func_00169b88() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00169b88: addiu $sp, $sp, -0x10
    return func_0012ba50();  // Tail call                        // 0x00169b94: j 0x12ba38
    sp = sp + 0x10;                                             // 0x00169b98: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00169b9c: nop 
    sp = sp + -0x10;                                            // 0x00169ba0: addiu $sp, $sp, -0x10
    return func_0012ba78();  // Tail call                        // 0x00169bac: j 0x12ba50
    sp = sp + 0x10;                                             // 0x00169bb0: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00169bb4: nop 
    return;                                                     // 0x00169bb8: jr $ra
}