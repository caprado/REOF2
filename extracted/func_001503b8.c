void func_001503b8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001503b8: addiu $sp, $sp, -0x30
    func_00155af8();  // 155af8                                // 0x001503d4: jal 0x155af8
    if (v0 == 0) goto label_0x150408;                           // 0x001503dc: beqz $v0, 0x150408
    a1 = 0xff03 << 16;                                          // 0x001503e4: lui $a1, 0xff03
    a1 = a1 | 0x20a;                                            // 0x001503f4: ori $a1, $a1, 0x20a
    return func_00150380();  // Tail call                        // 0x00150400: j 0x150330
    sp = sp + 0x30;                                             // 0x00150404: addiu $sp, $sp, 0x30
label_0x150408:
    s1 = 0xff03 << 16;                                          // 0x00150408: lui $s1, 0xff03
    s2 = 4;                                                     // 0x0015040c: addiu $s2, $zero, 4
    s1 = s1 | 0x305;                                            // 0x00150410: ori $s1, $s1, 0x305
    /* nop */                                                   // 0x00150414: nop 
label_0x150418:
    func_0015aaa8();  // 15aaa8                                // 0x00150418: jal 0x15aaa8
    a1 = 1;                                                     // 0x00150424: addiu $a1, $zero, 1
    a2 = 4;                                                     // 0x00150428: addiu $a2, $zero, 4
    if (v0 == 0) goto label_0x15044c;                           // 0x0015042c: beqz $v0, 0x15044c
    v1 = v0 & 0xcc;                                             // 0x00150430: andi $v1, $v0, 0xcc
    /* bnezl $v1, 0x15044c */                                   // 0x00150434: bnezl $v1, 0x15044c
    func_0015acd0();  // 15acd0                                // 0x0015043c: jal 0x15acd0
    /* nop */                                                   // 0x00150440: nop 
    if (v0 == s2) goto label_0x150418;                          // 0x00150444: beq $v0, $s2, 0x150418
    /* nop */                                                   // 0x00150448: nop 
label_0x15044c:
    return func_00150380();  // Tail call                        // 0x00150468: j 0x150330
    sp = sp + 0x30;                                             // 0x0015046c: addiu $sp, $sp, 0x30
    return;                                                     // 0x00150470: jr $ra
    /* nop */                                                   // 0x00150474: nop 
}