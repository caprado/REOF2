void func_00132258() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00132258: addiu $sp, $sp, -0x10
    if (a0 != 0) goto label_0x132278;                           // 0x0013225c: bnez $a0, 0x132278
    a0 = 0x22 << 16;                                            // 0x00132264: lui $a0, 0x22
    func_00127d90();  // 127d90                                // 0x00132268: jal 0x127d90
    a0 = &str_002238a8;  // "E02080821 ADXT_GetFmtBps: parameter error" // 0x0013226c: addiu $a0, $a0, 0x38a8
    goto label_0x132298;                                        // 0x00132270: b 0x132298
    v0 = -1;                                                    // 0x00132274: addiu $v0, $zero, -1
label_0x132278:
    v0 = g_002238a9;  // Global at 0x002238a9                   // 0x00132278: lb $v0, 1($a0)
    v0 = (v0 < 2) ? 1 : 0;                                      // 0x0013227c: slti $v0, $v0, 2
    /* bnezl $v0, 0x132298 */                                   // 0x00132280: bnezl $v0, 0x132298
    a0 = g_002238ac;  // Global at 0x002238ac                   // 0x00132288: lw $a0, 4($a0)
    return func_0012d6d0();  // Tail call                       // 0x00132290: j 0x12d6d0
    sp = sp + 0x10;                                             // 0x00132294: addiu $sp, $sp, 0x10
label_0x132298:
    return;                                                     // 0x0013229c: jr $ra
    sp = sp + 0x10;                                             // 0x001322a0: addiu $sp, $sp, 0x10
}