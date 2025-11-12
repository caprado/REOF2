void func_0013b8f8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0013b8f8: addiu $sp, $sp, -0x10
    return func_0013b1e8();  // Tail call                        // 0x0013b904: j 0x13aff0
    sp = sp + 0x10;                                             // 0x0013b908: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0013b90c: nop 
    v0 = *(int32_t*)((a0) + 0x28);                              // 0x0013b910: lw $v0, 0x28($a0)
    v1 = ((unsigned)a1 < (unsigned)v0) ? 1 : 0;                 // 0x0013b91c: sltu $v1, $a1, $v0
    if (v1 != 0) v0 = a1;                                       // 0x0013b920: movn $v0, $a1, $v1
    return;                                                     // 0x0013b924: jr $ra
}