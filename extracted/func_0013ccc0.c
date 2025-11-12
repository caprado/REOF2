void func_0013ccc0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0013ccc0: addiu $sp, $sp, -0x10
    if (a0 != 0) goto label_0x13cce0;                           // 0x0013ccc4: bnez $a0, 0x13cce0
    a0 = 0x22 << 16;                                            // 0x0013cccc: lui $a0, 0x22
    a0 = &str_00225be8;  // "E0011: Illigal parameter fname=%s\n" // 0x0013ccd4: addiu $a0, $a0, 0x5be8
    return func_0013d248();  // Tail call                        // 0x0013ccd8: j 0x13d1b8
    sp = sp + 0x10;                                             // 0x0013ccdc: addiu $sp, $sp, 0x10
label_0x13cce0:
    v0 = 1;                                                     // 0x0013cce0: addiu $v0, $zero, 1
    if (a1 != v0) goto label_0x13ccf0;                          // 0x0013cce4: bnel $a1, $v0, 0x13ccf0
    g_00225bec = 0;  // Global at 0x00225bec                    // 0x0013cce8: sb $zero, 4($a0)
    g_00225bec = a1;  // Global at 0x00225bec                   // 0x0013ccec: sb $a1, 4($a0)
label_0x13ccf0:
    return;                                                     // 0x0013ccf4: jr $ra
    sp = sp + 0x10;                                             // 0x0013ccf8: addiu $sp, $sp, 0x10
}