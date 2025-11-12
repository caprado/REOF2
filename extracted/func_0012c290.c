void func_0012c290() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0012c290: addiu $sp, $sp, -0x10
    return func_0013e258();  // Tail call                        // 0x0012c29c: j 0x13e228
    sp = sp + 0x10;                                             // 0x0012c2a0: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0012c2a4: nop 
    sp = sp + -0x10;                                            // 0x0012c2a8: addiu $sp, $sp, -0x10
    return func_0013e300();  // Tail call                        // 0x0012c2b4: j 0x13e2a8
    sp = sp + 0x10;                                             // 0x0012c2b8: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0012c2bc: nop 
    sp = sp + -0x10;                                            // 0x0012c2c0: addiu $sp, $sp, -0x10
    return func_0013e380();  // Tail call                        // 0x0012c2cc: j 0x13e300
    sp = sp + 0x10;                                             // 0x0012c2d0: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0012c2d4: nop 
    sp = sp + -0x10;                                            // 0x0012c2d8: addiu $sp, $sp, -0x10
    a0 = *(int32_t*)((a0) + 0xc);                               // 0x0012c2e0: lw $a0, 0xc($a0)
    return func_0013e348();  // Tail call                       // 0x0012c2e8: j 0x13e348
    sp = sp + 0x10;                                             // 0x0012c2ec: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x0012c2f0: addiu $sp, $sp, -0x10
    return func_0013df78();  // Tail call                       // 0x0012c2fc: j 0x13df78
    sp = sp + 0x10;                                             // 0x0012c300: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0012c304: nop 
    sp = sp + -0x10;                                            // 0x0012c308: addiu $sp, $sp, -0x10
    return func_0013e848();  // Tail call                        // 0x0012c314: j 0x13e380
    sp = sp + 0x10;                                             // 0x0012c318: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0012c31c: nop 
    return;                                                     // 0x0012c320: jr $ra
    /* nop */                                                   // 0x0012c324: nop 
}