void func_001c7460() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    return func_001b7f90();  // Tail call                       // 0x001c7464: j 0x1b7f90
    /* nop */                                                   // 0x001c746c: nop 
    a0 = 2;                                                     // 0x001c7470: addiu $a0, $zero, 2
    return func_001b7f90();  // Tail call                       // 0x001c7474: j 0x1b7f90
    /* nop */                                                   // 0x001c747c: nop 
    sp = sp + -0x10;                                            // 0x001c7480: addiu $sp, $sp, -0x10
    at = 0 | 0x8390;                                            // 0x001c7484: ori $at, $zero, 0x8390
    func_0010ae00();  // 10ae00                                // 0x001c748c: jal 0x10ae00
    a0 = a0 + at;                                               // 0x001c7490: addu $a0, $a0, $at
    v0 = ((unsigned)0 < (unsigned)v0) ? 1 : 0;                  // 0x001c7498: sltu $v0, $zero, $v0
    return;                                                     // 0x001c749c: jr $ra
    sp = sp + 0x10;                                             // 0x001c74a0: addiu $sp, $sp, 0x10
}