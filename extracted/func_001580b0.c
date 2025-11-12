void func_001580b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001580b0: addiu $sp, $sp, -0x10
    func_00158140();  // 0x1580e8                                // 0x001580b8: jal 0x1580e8
    /* nop */                                                   // 0x001580bc: nop 
    if (v1 == 0) goto label_0x1580d8;                           // 0x001580c4: beqz $v1, 0x1580d8
    return func_001581c0();  // Tail call                        // 0x001580d0: j 0x158140
    sp = sp + 0x10;                                             // 0x001580d4: addiu $sp, $sp, 0x10
label_0x1580d8:
    return;                                                     // 0x001580dc: jr $ra
    sp = sp + 0x10;                                             // 0x001580e0: addiu $sp, $sp, 0x10
}