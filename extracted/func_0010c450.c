void func_0010c450() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0010c450: addiu $sp, $sp, -0x10
    v0 = 0x1f << 16;                                            // 0x0010c454: lui $v0, 0x1f
    a0 = g_001efdf0;  // Global at 0x001efdf0                   // 0x0010c464: lw $a0, -0x210($v0)
    return func_0010c450();  // Tail call                        // 0x0010c46c: j 0x10b538
    sp = sp + 0x10;                                             // 0x0010c470: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0010c474: nop 
    sp = sp + -0x10;                                            // 0x0010c478: addiu $sp, $sp, -0x10
    func_0010c450();  // 10c450                                // 0x0010c480: jal 0x10c450
    /* nop */                                                   // 0x0010c484: nop 
    func_00112118();  // 112118                                // 0x0010c48c: jal 0x112118
    /* nop */                                                   // 0x0010c490: nop 
    return;                                                     // 0x0010c498: jr $ra
    sp = sp + 0x10;                                             // 0x0010c49c: addiu $sp, $sp, 0x10
}