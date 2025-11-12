void func_00130c70() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00130c70: addiu $sp, $sp, -0x10
    *(uint32_t*)((a0) + 0xc) = a1;                              // 0x00130c78: sw $a1, 0xc($a0)
    return func_001302c8();  // Tail call                        // 0x00130c84: j 0x130280
    sp = sp + 0x10;                                             // 0x00130c88: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00130c8c: nop 
    v0 = 0x20 << 16;                                            // 0x00130c90: lui $v0, 0x20
    return;                                                     // 0x00130c94: jr $ra
    g_00200eb4 = a0;  // Global at 0x00200eb4                   // 0x00130c98: sw $a0, 0xeb4($v0)
}