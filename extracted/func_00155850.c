void func_00155850() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00155850: addiu $sp, $sp, -0x10
    func_00155888();  // 155888                                // 0x00155858: jal 0x155888
    /* nop */                                                   // 0x0015585c: nop 
    if (v1 == 0) goto label_0x155878;                           // 0x00155864: beqz $v1, 0x155878
    return func_00155998();  // Tail call                        // 0x00155870: j 0x1558d8
    sp = sp + 0x10;                                             // 0x00155874: addiu $sp, $sp, 0x10
label_0x155878:
    return;                                                     // 0x0015587c: jr $ra
    sp = sp + 0x10;                                             // 0x00155880: addiu $sp, $sp, 0x10
}