void func_0013d178() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0013d178: addiu $sp, $sp, -0x10
    return func_0013ef80();  // Tail call                        // 0x0013d184: j 0x13ef30
    sp = sp + 0x10;                                             // 0x0013d188: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0013d18c: nop 
    if (a0 != 0) return;  // Branch to 0x13d1a8                 // 0x0013d190: bnez $a0, 0x13d1a8
    v0 = 0x20 << 16;                                            // 0x0013d194: lui $v0, 0x20
    v1 = 0x20 << 16;                                            // 0x0013d198: lui $v1, 0x20
    g_002045e8 = 0;  // Global at 0x002045e8                    // 0x0013d19c: sw $zero, 0x45e8($v0)
    return;                                                     // 0x0013d1a0: jr $ra
    g_002045ec = 0;  // Global at 0x002045ec                    // 0x0013d1a4: sw $zero, 0x45ec($v1)
}