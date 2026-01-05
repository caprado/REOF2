void func_00187460() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0xc0;                                            // 0x00187460: addiu $sp, $sp, -0xc0
    v1 = 0x28 << 16;                                            // 0x00187464: lui $v1, 0x28
    s6 = v1 + -0x37c0;                                          // 0x0018747c: addiu $s6, $v1, -0x37c0
    s2 = 1;                                                     // 0x00187494: addiu $s2, $zero, 1
    v0 = *(int32_t*)((s4) + 4);                                 // 0x001874a4: lw $v0, 4($s4)
    a1 = *(int32_t*)((s4) + 8);                                 // 0x001874a8: lw $a1, 8($s4)
    /* beqzl $v0, 0x1874b4 */                                   // 0x001874ac: beqzl $v0, 0x1874b4
    /* break (trap) */                                          // 0x001874b0: break 0, 7
    /* divide: a1 / v0 -> hi:lo */                              // 0x001874b4: div $zero, $a1, $v0
    /* mflo $s7 */                                              // 0x001874b8
    v0 = (s2 < s7) ? 1 : 0;                                     // 0x001874bc: slt $v0, $s2, $s7
    if (v0 == 0) goto label_0x1875a0;                           // 0x001874c0: beqz $v0, 0x1875a0
    local_0 = a0;                                               // 0x001874c4: sw $a0, 0($sp)
    s3 = 0xffff << 16;                                          // 0x001874c8: lui $s3, 0xffff
    t1 = 0x800;                                                 // 0x001874cc: addiu $t1, $zero, 0x800
    s3 = s3 | 0xffff;                                           // 0x001874d0: ori $s3, $s3, 0xffff
    v0 = (fp < 0x10) ? 1 : 0;                                   // 0x001874d4: slti $v0, $fp, 0x10
label_0x1874d8:
    if (v0 == 0) goto label_0x1875a0;                           // 0x001874d8: beqz $v0, 0x1875a0
    v0 = *(int32_t*)(s4);                                       // 0x001874e0: lw $v0, 0($s4)
    a2 = *(int32_t*)((s4) + 4);                                 // 0x001874e4: lw $a2, 4($s4)
    /* divide: t1 / v0 -> hi:lo */                              // 0x001874ec: divu $zero, $t1, $v0
    /* beqzl $v0, 0x1874f8 */                                   // 0x001874f0: beqzl $v0, 0x1874f8
    /* break (trap) */                                          // 0x001874f4: break 0, 7
    a0 = local_0;                                               // 0x001874f8: lw $a0, 0($sp)
    /* FPU: addu.qb $zero, $sp, $t1 */                          // 0x00187500: addu.qb $zero, $sp, $t1
    /* mflo $v1 */                                              // 0x00187504
    /* multiply: a2 *  -> hi:lo */                              // 0x00187508: mult $s2, $a2
    /* mflo $a2 */                                              // 0x00187510
    func_00187f80();  // 187f80                                // 0x00187514: jal 0x187f80
    a2 = *(int32_t*)(s4);                                       // 0x0018751c: lw $a2, 0($s4)
    /* multiply: a2 * s0 -> hi:lo */                            // 0x00187524: mult $ac2, $a2, $s0
    v0 = (unsigned)v0 >> 2;                                     // 0x00187528: srl $v0, $v0, 2
    if (v0 == 0) goto label_0x187578;                           // 0x0018752c: beqz $v0, 0x187578
    /* FPU: aver_u.h $w0, $w0, $w9 */                           // 0x00187530: aver_u.h $w0, $w0, $w9
    v0 = g_0027c840;  // Global at 0x0027c840                   // 0x00187534: lw $v0, 0($s6)
    if (v0 == s3) goto label_0x187548;                          // 0x00187538: beq $v0, $s3, 0x187548
    a0 = s2 + 1;                                                // 0x0018753c: addiu $a0, $s2, 1
    goto label_0x18757c;                                        // 0x00187540: b 0x18757c
    s1 = 1;                                                     // 0x00187544: addiu $s1, $zero, 1
label_0x187548:
    /* multiply: a2 * s0 -> hi:lo */                            // 0x00187548: mult $ac2, $a2, $s0
label_0x18754c:
    a1 = a1 + 1;                                                // 0x0018754c: addiu $a1, $a1, 1
    v0 = (unsigned)v0 >> 2;                                     // 0x00187550: srl $v0, $v0, 2
    v0 = ((unsigned)a1 < (unsigned)v0) ? 1 : 0;                 // 0x00187554: sltu $v0, $a1, $v0
    if (v0 == 0) goto label_0x18757c;                           // 0x00187558: beqz $v0, 0x18757c
    v0 = a1 << 2;                                               // 0x0018755c: sll $v0, $a1, 2
    v0 = v0 + s6;                                               // 0x00187560: addu $v0, $v0, $s6
    v1 = *(int32_t*)(v0);                                       // 0x00187564: lw $v1, 0($v0)
    if (v1 == s3) goto label_0x18754c;                          // 0x00187568: beq $v1, $s3, 0x18754c
    /* multiply: a2 * s0 -> hi:lo */                            // 0x0018756c: mult $ac2, $a2, $s0
    goto label_0x18757c;                                        // 0x00187570: b 0x18757c
    s1 = 1;                                                     // 0x00187574: addiu $s1, $zero, 1
label_0x187578:
    a0 = s2 + 1;                                                // 0x00187578: addiu $a0, $s2, 1
label_0x18757c:
    if (s1 <= 0) goto label_0x187594;                           // 0x0018757c: blezl $s1, 0x187594
    *(uint32_t*)(s5) = s2;                                      // 0x00187584: sw $s2, 0($s5)
    fp = fp + 1;                                                // 0x00187588: addiu $fp, $fp, 1
    s5 = s5 + 4;                                                // 0x0018758c: addiu $s5, $s5, 4
label_0x187594:
    v0 = (s2 < s7) ? 1 : 0;                                     // 0x00187594: slt $v0, $s2, $s7
    if (v0 != 0) goto label_0x1874d8;                           // 0x00187598: bnez $v0, 0x1874d8
    v0 = (fp < 0x10) ? 1 : 0;                                   // 0x0018759c: slti $v0, $fp, 0x10
label_0x1875a0:
    v0 = 1;                                                     // 0x001875a0: addiu $v0, $zero, 1
    return;                                                     // 0x001875cc: jr $ra
    sp = sp + 0xc0;                                             // 0x001875d0: addiu $sp, $sp, 0xc0
}