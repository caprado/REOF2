void func_0012a5e8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0012a5e8: addiu $sp, $sp, -0x10
    if (a0 != 0) goto label_0x12a608;                           // 0x0012a5ec: bnez $a0, 0x12a608
    a0 = 0x22 << 16;                                            // 0x0012a5f4: lui $a0, 0x22
    a0 = &str_00222cd8;  // "\nADXPS2 Ver.2.45 Build:Jul 28 2003 17:50:00\n" // 0x0012a5fc: addiu $a0, $a0, 0x2cd8
    return func_00127de8();  // Tail call                        // 0x0012a600: j 0x127d90
    sp = sp + 0x10;                                             // 0x0012a604: addiu $sp, $sp, 0x10
label_0x12a608:
    v0 = g_00222cd9;  // Global at 0x00222cd9                   // 0x0012a608: lb $v0, 1($a0)
    if (v0 != 0) goto label_0x12a620;                           // 0x0012a60c: bnez $v0, 0x12a620
    a0 = g_00222d6c;  // Global at 0x00222d6c                   // 0x0012a614: lw $a0, 0x94($a0)
    return func_0013cbd0();  // Tail call                        // 0x0012a618: j 0x13cb90
    sp = sp + 0x10;                                             // 0x0012a61c: addiu $sp, $sp, 0x10
label_0x12a620:
    return;                                                     // 0x0012a620: jr $ra
    sp = sp + 0x10;                                             // 0x0012a624: addiu $sp, $sp, 0x10
}