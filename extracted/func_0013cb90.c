void func_0013cb90() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0013cb90: addiu $sp, $sp, -0x10
    if (a0 != 0) goto label_0x13cbb0;                           // 0x0013cb94: bnez $a0, 0x13cbb0
    a0 = 0x22 << 16;                                            // 0x0013cb9c: lui $a0, 0x22
    a0 = &str_00225be8;  // "E0011: Illigal parameter fname=%s\n" // 0x0013cba4: addiu $a0, $a0, 0x5be8
    return func_0013d248();  // Tail call                        // 0x0013cba8: j 0x13d1b8
    sp = sp + 0x10;                                             // 0x0013cbac: addiu $sp, $sp, 0x10
label_0x13cbb0:
    v0 = g_00225be9;  // Global at 0x00225be9                   // 0x0013cbb0: lb $v0, 1($a0)
    if (v0 != 0) goto label_0x13cbc8;                           // 0x0013cbb4: bnez $v0, 0x13cbc8
    g_00225c0c = 0;  // Global at 0x00225c0c                    // 0x0013cbbc: sw $zero, 0x24($a0)
    g_00225c04 = 0;  // Global at 0x00225c04                    // 0x0013cbc0: sw $zero, 0x1c($a0)
    g_00225c08 = 0;  // Global at 0x00225c08                    // 0x0013cbc4: sw $zero, 0x20($a0)
label_0x13cbc8:
    return;                                                     // 0x0013cbc8: jr $ra
    sp = sp + 0x10;                                             // 0x0013cbcc: addiu $sp, $sp, 0x10
}