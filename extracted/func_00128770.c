void func_00128770() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00128770: addiu $sp, $sp, -0x10
    v0 = 0x1f << 16;                                            // 0x00128774: lui $v0, 0x1f
    s0 = v0 + 0x3830;                                           // 0x0012877c: addiu $s0, $v0, 0x3830
    a0 = g_001f3830;  // Global at 0x001f3830                   // 0x00128784: lw $a0, 0($s0)
    if (a0 == 0) goto label_0x1287c8;                           // 0x00128788: beqz $a0, 0x1287c8
    v0 = 0x1f << 16;                                            // 0x0012878c: lui $v0, 0x1f
    v1 = g_001f3834;  // Global at 0x001f3834                   // 0x00128790: lw $v1, 0x3834($v0)
    if (v1 < 0) goto label_0x1287cc;                            // 0x00128794: bltzl $v1, 0x1287cc
    func_00129a38();  // 0x129a08                                // 0x0012879c: jal 0x129a08
    /* nop */                                                   // 0x001287a0: nop 
    v1 = 1;                                                     // 0x001287a4: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x1287bc;                          // 0x001287a8: beql $v0, $v1, 0x1287bc
    func_00129590();  // 0x1294a0                                // 0x001287b0: jal 0x1294a0
    a0 = g_001f3830;  // Global at 0x001f3830                   // 0x001287b4: lw $a0, 0($s0)
label_0x1287bc:
    return func_00128770();  // Tail call                        // 0x001287c0: j 0x128720
    sp = sp + 0x10;                                             // 0x001287c4: addiu $sp, $sp, 0x10
label_0x1287c8:
label_0x1287cc:
    return;                                                     // 0x001287d0: jr $ra
    sp = sp + 0x10;                                             // 0x001287d4: addiu $sp, $sp, 0x10
}