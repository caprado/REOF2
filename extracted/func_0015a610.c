void func_0015a610() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x0015a610: addiu $sp, $sp, -0x50
    a2 = 0x7fff << 16;                                          // 0x0015a614: lui $a2, 0x7fff
    a2 = a2 | 0xffff;                                           // 0x0015a61c: ori $a2, $a2, 0xffff
    a1 = 1;                                                     // 0x0015a630: addiu $a1, $zero, 1
    s4 = s5 + 0x348;                                            // 0x0015a640: addiu $s4, $s5, 0x348
    v0 = *(int32_t*)(s3);                                       // 0x0015a64c: lw $v0, 0($s3)
    v1 = *(int32_t*)((v0) + 0x18);                              // 0x0015a650: lw $v1, 0x18($v0)
    /* call function at address in v1 */                        // 0x0015a654: jalr $v1
    v0 = *(int32_t*)(s4);                                       // 0x0015a660: lw $v0, 0($s4)
    v1 = -4;                                                    // 0x0015a664: addiu $v1, $zero, -4
    s2 = v0 & v1;                                               // 0x0015a668: and $s2, $v0, $v1
    v0 = v0 - s2;                                               // 0x0015a670: subu $v0, $v0, $s2
    s1 = v0 << 3;                                               // 0x0015a674: sll $s1, $v0, 3
    v1 = (s1 < 0x20) ? 1 : 0;                                   // 0x0015a678: slti $v1, $s1, 0x20
    if (v1 != 0) goto label_0x15a68c;                           // 0x0015a67c: bnez $v1, 0x15a68c
    s2 = s2 + 8;                                                // 0x0015a680: addiu $s2, $s2, 8
    s1 = s1 + -0x20;                                            // 0x0015a684: addiu $s1, $s1, -0x20
    s2 = s2 + 4;                                                // 0x0015a688: addiu $s2, $s2, 4
label_0x15a68c:
    func_0015a730();  // 15a730                                // 0x0015a68c: jal 0x15a730
    a2 = *(int32_t*)((s5) + 0x34c);                             // 0x0015a690: lw $a2, 0x34c($s5)
    v1 = *(int32_t*)(s4);                                       // 0x0015a694: lw $v1, 0($s4)
    v0 = s1 & 7;                                                // 0x0015a69c: andi $v0, $s1, 7
    a1 = s1 - v0;                                               // 0x0015a6a0: subu $a1, $s1, $v0
    *(uint32_t*)((s5) + 0x350) = v0;                            // 0x0015a6a4: sw $v0, 0x350($s5)
    a1 = a1 + 7;                                                // 0x0015a6a8: addiu $a1, $a1, 7
    a1 = a1 >> 3;                                               // 0x0015a6b0: sra $a1, $a1, 3
    a1 = s2 + a1;                                               // 0x0015a6b8: addu $a1, $s2, $a1
    a1 = a1 + -4;                                               // 0x0015a6c0: addiu $a1, $a1, -4
    func_001404a0();  // 1404a0                                // 0x0015a6c4: jal 0x1404a0
    a1 = a1 - v1;                                               // 0x0015a6c8: subu $a1, $a1, $v1
    v1 = *(int32_t*)(s3);                                       // 0x0015a6cc: lw $v1, 0($s3)
    v0 = *(int32_t*)((v1) + 0x20);                              // 0x0015a6d8: lw $v0, 0x20($v1)
    /* call function at address in v0 */                        // 0x0015a6dc: jalr $v0
    v1 = *(int32_t*)(s3);                                       // 0x0015a6e4: lw $v1, 0($s3)
    a1 = 1;                                                     // 0x0015a6e8: addiu $a1, $zero, 1
    v0 = *(int32_t*)((v1) + 0x1c);                              // 0x0015a6f0: lw $v0, 0x1c($v1)
    /* call function at address in v0 */                        // 0x0015a6f4: jalr $v0
    func_0015aaa8();  // 15aaa8                                // 0x0015a6fc: jal 0x15aaa8
    return;                                                     // 0x0015a724: jr $ra
    sp = sp + 0x50;                                             // 0x0015a728: addiu $sp, $sp, 0x50
}