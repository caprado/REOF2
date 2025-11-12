void func_00160820() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00160820: addiu $sp, $sp, -0x10
    return func_0017cd38();  // Tail call                        // 0x0016082c: j 0x17cc20
    sp = sp + 0x10;                                             // 0x00160830: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00160834: nop 
    sp = sp + -0x10;                                            // 0x00160838: addiu $sp, $sp, -0x10
    return func_0017ce88();  // Tail call                        // 0x00160844: j 0x17ce38
    sp = sp + 0x10;                                             // 0x00160848: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0016084c: nop 
    return;                                                     // 0x00160850: jr $ra
    v0 = *(int32_t*)((a0) + 0xa8);                              // 0x00160854: lw $v0, 0xa8($a0)
}