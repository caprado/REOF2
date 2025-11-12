void func_0016c420() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4, local_8;
    
    sp = sp + -0x10;                                            // 0x0016c420: addiu $sp, $sp, -0x10
    a1 = *(int32_t*)((a0) + 0x1b3c);                            // 0x0016c42c: lw $a1, 0x1b3c($a0)
    return func_001679c0();  // Tail call                        // 0x0016c434: j 0x1679a0
    sp = sp + 0x10;                                             // 0x0016c438: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0016c43c: nop 
    sp = sp + -0x20;                                            // 0x0016c440: addiu $sp, $sp, -0x20
    /* nop */                                                   // 0x0016c454: nop 
label_0x16c458:
    func_0016c6c0();  // 0x16c4b0                                // 0x0016c45c: jal 0x16c4b0
    a2 = sp + 4;                                                // 0x0016c460: addiu $a2, $sp, 4
    if (v1 != 0) goto label_0x16c498;                           // 0x0016c46c: bnez $v1, 0x16c498
    a3 = sp + 8;                                                // 0x0016c470: addiu $a3, $sp, 8
    a1 = local_0;                                               // 0x0016c474: lw $a1, 0($sp)
    func_0016ce70();  // 0x16cc18                                // 0x0016c478: jal 0x16cc18
    a2 = local_4;                                               // 0x0016c47c: lw $a2, 4($sp)
    /* bnezl $v1, 0x16c49c */                                   // 0x0016c484: bnezl $v1, 0x16c49c
    v0 = local_8;                                               // 0x0016c48c: lw $v0, 8($sp)
    if (v0 != 0) goto label_0x16c458;                           // 0x0016c490: bnez $v0, 0x16c458
label_0x16c498:
    return;                                                     // 0x0016c4a4: jr $ra
    sp = sp + 0x20;                                             // 0x0016c4a8: addiu $sp, $sp, 0x20
}