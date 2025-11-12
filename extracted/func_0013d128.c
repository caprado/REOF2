void func_0013d128() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0013d128: addiu $sp, $sp, -0x10
    if (a0 != 0) goto label_0x13d148;                           // 0x0013d12c: bnez $a0, 0x13d148
    a0 = 0x22 << 16;                                            // 0x0013d134: lui $a0, 0x22
    a0 = &str_00225be8;  // "E0011: Illigal parameter fname=%s\n" // 0x0013d13c: addiu $a0, $a0, 0x5be8
    return func_0013d248();  // Tail call                        // 0x0013d140: j 0x13d1b8
    sp = sp + 0x10;                                             // 0x0013d144: addiu $sp, $sp, 0x10
label_0x13d148:
    g_00225beb = a1;  // Global at 0x00225beb                   // 0x0013d14c: sb $a1, 3($a0)
    return;                                                     // 0x0013d150: jr $ra
    sp = sp + 0x10;                                             // 0x0013d154: addiu $sp, $sp, 0x10
}