void func_00114fc0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00114fc0: addiu $sp, $sp, -0x10
    CreateThread();  // 0x1140b0                                // 0x00114fc8: jal 0x1140b0
    /* nop */                                                   // 0x00114fcc: nop 
    /* memory sync */                                           // 0x00114fd0: sync 
    return;                                                     // 0x00114fd8: jr $ra
    sp = sp + 0x10;                                             // 0x00114fdc: addiu $sp, $sp, 0x10
}