void func_00132c70() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00132c70: addiu $sp, $sp, -0x10
    return func_0012c5a8();  // Tail call                       // 0x00132c7c: j 0x12c5a8
    sp = sp + 0x10;                                             // 0x00132c80: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00132c84: nop 
    sp = sp + -0x10;                                            // 0x00132c88: addiu $sp, $sp, -0x10
    return func_0012c5b0();  // Tail call                       // 0x00132c94: j 0x12c5b0
    sp = sp + 0x10;                                             // 0x00132c98: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00132c9c: nop 
    return;                                                     // 0x00132ca0: jr $ra
    /* nop */                                                   // 0x00132ca4: nop 
}