void func_00129dc0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00129dc0: addiu $sp, $sp, -0x10
    return func_00127de8();  // Tail call                        // 0x00129dd0: j 0x127d90
    sp = sp + 0x10;                                             // 0x00129dd4: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x00129dd8: addiu $sp, $sp, -0x10
    return func_00127de8();  // Tail call                        // 0x00129de8: j 0x127d90
    sp = sp + 0x10;                                             // 0x00129dec: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x00129df0: addiu $sp, $sp, -0x10
    v1 = 0x1f << 16;                                            // 0x00129df4: lui $v1, 0x1f
    v1 = v1 + 0x59c4;                                           // 0x00129dfc: addiu $v1, $v1, 0x59c4
    v0 = g_001f59c4;  // Global at 0x001f59c4                   // 0x00129e00: lw $v0, 0($v1)
    v0 = v0 + 1;                                                // 0x00129e08: addiu $v0, $v0, 1
    g_001f59c4 = v0;  // Global at 0x001f59c4                   // 0x00129e0c: sw $v0, 0($v1)
    return func_00132998();  // Tail call                        // 0x00129e10: j 0x1328c8
    sp = sp + 0x10;                                             // 0x00129e14: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x00129e18: addiu $sp, $sp, -0x10
    func_0013cd00();  // 13cd00                                // 0x00129e20: jal 0x13cd00
    /* nop */                                                   // 0x00129e24: nop 
    return;                                                     // 0x00129e30: jr $ra
    sp = sp + 0x10;                                             // 0x00129e34: addiu $sp, $sp, 0x10
}