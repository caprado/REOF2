void func_00114f60() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00114f60: addiu $sp, $sp, -0x10
    _iDisableIntc();  // 0x114080                               // 0x00114f68: jal 0x114080
    /* nop */                                                   // 0x00114f6c: nop 
    /* memory sync */                                           // 0x00114f70: sync 
    return;                                                     // 0x00114f78: jr $ra
    sp = sp + 0x10;                                             // 0x00114f7c: addiu $sp, $sp, 0x10
}