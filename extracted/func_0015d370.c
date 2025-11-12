void func_0015d370() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0015d370: addiu $sp, $sp, -0x10
    v0 = *(int32_t*)((s0) + 0x158);                             // 0x0015d380: lw $v0, 0x158($s0)
    if (v0 == 0) goto label_0x15d3a0;                           // 0x0015d384: beqz $v0, 0x15d3a0
    func_0015d3c8();  // 0x15d3c0                                // 0x0015d38c: jal 0x15d3c0
    /* nop */                                                   // 0x0015d390: nop 
    goto label_0x15d3ac;                                        // 0x0015d394: b 0x15d3ac
    /* nop */                                                   // 0x0015d39c: nop 
label_0x15d3a0:
    func_0015d400();  // 0x15d3c8                                // 0x0015d3a0: jal 0x15d3c8
label_0x15d3ac:
    return func_0015d470();  // Tail call                       // 0x0015d3b4: j 0x15d470
    sp = sp + 0x10;                                             // 0x0015d3b8: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0015d3bc: nop 
    return;                                                     // 0x0015d3c0: jr $ra
    /* nop */                                                   // 0x0015d3c4: nop 
}