void func_00106860() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00106860: addiu $sp, $sp, -0x10
    v0 = 0x1f << 16;                                            // 0x00106864: lui $v0, 0x1f
    a0 = g_001efdf0;  // Global at 0x001efdf0                   // 0x00106874: lw $a0, -0x210($v0)
    return func_001069f8();  // Tail call                        // 0x0010687c: j 0x1068b0
    sp = sp + 0x10;                                             // 0x00106880: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00106884: nop 
    v0 = 0x1f << 16;                                            // 0x00106888: lui $v0, 0x1f
    sp = sp + -0x20;                                            // 0x0010688c: addiu $sp, $sp, -0x20
    a0 = g_001efdf0;  // Global at 0x001efdf0                   // 0x00106894: lw $a0, -0x210($v0)
    func_001069f8();  // 0x1068b0                                // 0x0010689c: jal 0x1068b0
    return;                                                     // 0x001068a8: jr $ra
    sp = sp + 0x20;                                             // 0x001068ac: addiu $sp, $sp, 0x20
}