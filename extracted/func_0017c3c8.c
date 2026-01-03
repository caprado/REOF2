void func_0017c3c8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0017c3c8: addiu $sp, $sp, -0x10
    v1 = 0x64;                                                  // 0x0017c3cc: addiu $v1, $zero, 0x64
    s0 = 1;                                                     // 0x0017c3d4: addiu $s0, $zero, 1
    a2 = *(int32_t*)((a0) + 0x38);                              // 0x0017c3dc: lw $a2, 0x38($a0)
    if (a2 == v1) goto label_0x17c470;                          // 0x0017c3e0: beq $a2, $v1, 0x17c470
    if (a2 != a1) goto label_0x17c470;                          // 0x0017c3e8: bne $a2, $a1, 0x17c470
    v0 = ((unsigned)a1 < (unsigned)0xe) ? 1 : 0;                // 0x0017c3f0: sltiu $v0, $a1, 0xe
    if (v0 == 0) goto label_0x17c438;                           // 0x0017c3f4: beqz $v0, 0x17c438
    v0 = ((unsigned)a1 < (unsigned)0x15) ? 1 : 0;               // 0x0017c3f8: sltiu $v0, $a1, 0x15
    v0 = ((unsigned)a1 < (unsigned)0xb) ? 1 : 0;                // 0x0017c3fc: sltiu $v0, $a1, 0xb
    /* beqzl $v0, 0x17c470 */                                   // 0x0017c400: beqzl $v0, 0x17c470
    if (a1 == s0) goto label_0x17c46c;                          // 0x0017c408: beql $a1, $s0, 0x17c46c
    if (a1 == 0) goto label_0x17c470;                           // 0x0017c410: beqz $a1, 0x17c470
    v0 = 2;                                                     // 0x0017c418: addiu $v0, $zero, 2
    if (a1 == v0) goto label_0x17c458;                          // 0x0017c41c: beq $a1, $v0, 0x17c458
    v0 = 3;                                                     // 0x0017c420: addiu $v0, $zero, 3
    if (a1 == v0) goto label_0x17c468;                          // 0x0017c424: beq $a1, $v0, 0x17c468
    goto label_0x17c474;                                        // 0x0017c42c: b 0x17c474
    /* nop */                                                   // 0x0017c434: nop 
label_0x17c438:
    if (v0 != 0) goto label_0x17c470;                           // 0x0017c438: bnez $v0, 0x17c470
    v0 = ((unsigned)a1 < (unsigned)0x17) ? 1 : 0;               // 0x0017c440: sltiu $v0, $a1, 0x17
    /* bnezl $v0, 0x17c46c */                                   // 0x0017c444: bnezl $v0, 0x17c46c
    goto label_0x17c470;                                        // 0x0017c44c: b 0x17c470
    /* nop */                                                   // 0x0017c454: nop 
label_0x17c458:
    func_0017a490();  // 17a490                                // 0x0017c458: jal 0x17a490
    a0 = *(int32_t*)((a0) + 0x30);                              // 0x0017c45c: lw $a0, 0x30($a0)
    if (v0 == s0) goto label_0x17c470;                          // 0x0017c460: beq $v0, $s0, 0x17c470
label_0x17c468:
label_0x17c46c:
label_0x17c470:
label_0x17c474:
    return;                                                     // 0x0017c478: jr $ra
    sp = sp + 0x10;                                             // 0x0017c47c: addiu $sp, $sp, 0x10
}