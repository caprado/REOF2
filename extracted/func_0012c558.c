void func_0012c558() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0012c558: addiu $sp, $sp, -0x10
    return func_0013edc0();  // Tail call                       // 0x0012c564: j 0x13edc0
    sp = sp + 0x10;                                             // 0x0012c568: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0012c56c: nop 
    sp = sp + -0x10;                                            // 0x0012c570: addiu $sp, $sp, -0x10
    return func_0013ee40();  // Tail call                        // 0x0012c57c: j 0x13ee18
    sp = sp + 0x10;                                             // 0x0012c580: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0012c584: nop 
    return;                                                     // 0x0012c588: jr $ra
    /* nop */                                                   // 0x0012c58c: nop 
}