void func_0016c0f8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0016c0f8: addiu $sp, $sp, -0x10
    a1 = *(int32_t*)((a0) + 0x1b3c);                            // 0x0016c100: lw $a1, 0x1b3c($a0)
    return func_001679e0();  // Tail call                        // 0x0016c108: j 0x1679c0
    sp = sp + 0x10;                                             // 0x0016c10c: addiu $sp, $sp, 0x10
    sp = sp + -0x30;                                            // 0x0016c110: addiu $sp, $sp, -0x30
    s3 = 1;                                                     // 0x0016c120: addiu $s3, $zero, 1
    v0 = s1 + 0x1b28;                                           // 0x0016c128: addiu $v0, $s1, 0x1b28
    s2 = *(int32_t*)((v0) + 0x14);                              // 0x0016c134: lw $s2, 0x14($v0)
    s0 = *(int32_t*)((v0) + 0x10);                              // 0x0016c138: lw $s0, 0x10($v0)
    func_001679a0();  // 0x167980                                // 0x0016c13c: jal 0x167980
    if (v0 == s3) goto label_0x16c1a0;                          // 0x0016c148: beq $v0, $s3, 0x16c1a0
    func_001679a0();  // 0x167980                                // 0x0016c150: jal 0x167980
    /* nop */                                                   // 0x0016c154: nop 
    if (v0 != s3) goto label_0x16c1a4;                          // 0x0016c158: bnel $v0, $s3, 0x16c1a4
    func_0016c220();  // 0x16c1c0                                // 0x0016c160: jal 0x16c1c0
    if (v0 == 0) goto label_0x16c1a0;                           // 0x0016c168: beqz $v0, 0x16c1a0
    func_00167980();  // 0x167960                                // 0x0016c174: jal 0x167960
    a2 = 1;                                                     // 0x0016c178: addiu $a2, $zero, 1
    return func_0016c350();  // Tail call                       // 0x0016c194: j 0x16c350
    sp = sp + 0x30;                                             // 0x0016c198: addiu $sp, $sp, 0x30
    /* nop */                                                   // 0x0016c19c: nop 
label_0x16c1a0:
label_0x16c1a4:
    return;                                                     // 0x0016c1b4: jr $ra
    sp = sp + 0x30;                                             // 0x0016c1b8: addiu $sp, $sp, 0x30
}