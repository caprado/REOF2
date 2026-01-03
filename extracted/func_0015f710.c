void func_0015f710() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0015f710: addiu $sp, $sp, -0x10
    func_0015f738();  // 15f738                                // 0x0015f718: jal 0x15f738
    /* nop */                                                   // 0x0015f71c: nop 
    func_0012bd00();  // 12bd00                                // 0x0015f720: jal 0x12bd00
    /* nop */                                                   // 0x0015f724: nop 
    goto label_0x15f750;                                        // 0x0015f72c: j 0x15f750
    sp = sp + 0x10;                                             // 0x0015f730: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0015f734: nop 
    sp = sp + -0x10;                                            // 0x0015f738: addiu $sp, $sp, -0x10
    return func_0015f4b0();  // Tail call                       // 0x0015f744: j 0x15f4b0
    sp = sp + 0x10;                                             // 0x0015f748: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0015f74c: nop 
label_0x15f750:
    sp = sp + -0x10;                                            // 0x0015f750: addiu $sp, $sp, -0x10
    return func_0015f530();  // Tail call                       // 0x0015f75c: j 0x15f530
    sp = sp + 0x10;                                             // 0x0015f760: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0015f764: nop 
    return;                                                     // 0x0015f768: jr $ra
    /* nop */                                                   // 0x0015f76c: nop 
}