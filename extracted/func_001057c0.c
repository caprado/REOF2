void func_001057c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x001057c0: addiu $sp, $sp, -0x40
    if (s3 != 0) goto label_0x105818;                           // 0x001057f0: bnez $s3, 0x105818
    goto label_0x1058b4;                                        // 0x001057f8: b 0x1058b4
label_0x105800:
    /* beqzl $s4, 0x105808 */                                   // 0x00105800: beqzl $s4, 0x105808
    /* break (trap) */                                          // 0x00105804: break 0, 7
    /* divide: v0 / s4 -> hi:lo */                              // 0x00105808: divu $zero, $v0, $s4
    /* mflo $v0 */                                              // 0x0010580c
    goto label_0x1058b8;                                        // 0x00105810: b 0x1058b8
label_0x105818:
    a2 = *(int32_t*)((s1) + 4);                                 // 0x00105818: lw $a2, 4($s1)
    if (a2 >= 0) goto label_0x105830;                           // 0x0010581c: bgez $a2, 0x105830
    *(uint32_t*)((s1) + 4) = 0;                                 // 0x00105824: sw $zero, 4($s1)
label_0x105830:
    v0 = ((unsigned)s0 < (unsigned)s3) ? 1 : 0;                 // 0x00105834: sltu $v0, $s0, $s3
    if (v0 == 0) goto label_0x105888;                           // 0x00105838: beqz $v0, 0x105888
    a1 = *(int32_t*)(s1);                                       // 0x00105840: lw $a1, 0($s1)
    /* nop */                                                   // 0x00105844: nop 
    func_00107ab8();  // 107ab8                                // 0x00105850: jal 0x107ab8
    s3 = s3 - s0;                                               // 0x00105854: subu $s3, $s3, $s0
    v1 = *(int32_t*)(s1);                                       // 0x00105858: lw $v1, 0($s1)
    s2 = s2 + s0;                                               // 0x00105860: addu $s2, $s2, $s0
    v1 = v1 + s0;                                               // 0x00105864: addu $v1, $v1, $s0
    func_0010a058();  // 10a058                                // 0x00105868: jal 0x10a058
    *(uint32_t*)(s1) = v1;                                      // 0x0010586c: sw $v1, 0($s1)
    if (v0 != 0) goto label_0x105800;                           // 0x00105870: bnez $v0, 0x105800
    v0 = s5 - s3;                                               // 0x00105874: subu $v0, $s5, $s3
    s0 = *(int32_t*)((s1) + 4);                                 // 0x00105878: lw $s0, 4($s1)
    v0 = ((unsigned)s0 < (unsigned)s3) ? 1 : 0;                 // 0x0010587c: sltu $v0, $s0, $s3
    /* bnezl $v0, 0x105848 */                                   // 0x00105880: bnezl $v0, 0x105848
    a1 = *(int32_t*)(s1);                                       // 0x00105884: lw $a1, 0($s1)
label_0x105888:
    a1 = *(int32_t*)(s1);                                       // 0x00105888: lw $a1, 0($s1)
    func_00107ab8();  // 107ab8                                // 0x00105890: jal 0x107ab8
    v1 = *(int32_t*)((s1) + 4);                                 // 0x00105898: lw $v1, 4($s1)
    a0 = *(int32_t*)(s1);                                       // 0x0010589c: lw $a0, 0($s1)
    v1 = v1 - s3;                                               // 0x001058a4: subu $v1, $v1, $s3
    a0 = a0 + s3;                                               // 0x001058a8: addu $a0, $a0, $s3
    *(uint32_t*)((s1) + 4) = v1;                                // 0x001058ac: sw $v1, 4($s1)
    *(uint32_t*)(s1) = a0;                                      // 0x001058b0: sw $a0, 0($s1)
label_0x1058b4:
label_0x1058b8:
    return;                                                     // 0x001058d4: jr $ra
    sp = sp + 0x40;                                             // 0x001058d8: addiu $sp, $sp, 0x40
}