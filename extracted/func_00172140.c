void func_00172140() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00172140: addiu $sp, $sp, -0x10
    return func_00175ac0();  // Tail call                        // 0x0017214c: j 0x175a58
    sp = sp + 0x10;                                             // 0x00172150: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00172154: nop 
    return;                                                     // 0x00172158: jr $ra
    /* nop */                                                   // 0x0017215c: nop 
}