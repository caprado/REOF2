void func_001330e8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001330e8: addiu $sp, $sp, -0x10
    return func_00126c98();  // Tail call                       // 0x001330f4: j 0x126c98
    sp = sp + 0x10;                                             // 0x001330f8: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x001330fc: nop 
    sp = sp + -0x10;                                            // 0x00133100: addiu $sp, $sp, -0x10
    if (a0 != 0) goto label_0x133120;                           // 0x00133104: bnez $a0, 0x133120
    a0 = 0x22 << 16;                                            // 0x0013310c: lui $a0, 0x22
    a0 = &str_00223dc8;  // "E02080811 ADXT_StartAfs: parameter error" // 0x00133114: addiu $a0, $a0, 0x3dc8
    return func_00127de8();  // Tail call                        // 0x00133118: j 0x127d90
    sp = sp + 0x10;                                             // 0x0013311c: addiu $sp, $sp, 0x10
label_0x133120:
    a0 = g_00223dcc;  // Global at 0x00223dcc                   // 0x00133120: lw $a0, 4($a0)
    return func_0012d3d0();  // Tail call                        // 0x00133128: j 0x12d3b8
    sp = sp + 0x10;                                             // 0x0013312c: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x00133130: addiu $sp, $sp, -0x10
    return func_0012d3f8();  // Tail call                        // 0x0013313c: j 0x12d3d0
    sp = sp + 0x10;                                             // 0x00133140: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00133144: nop 
    return;                                                     // 0x00133148: jr $ra
    v0 = g_00223dd4;  // Global at 0x00223dd4                   // 0x0013314c: lw $v0, 0xc($a0)
}