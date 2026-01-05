void func_001d5600() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x001d5600: addiu $sp, $sp, -0x50
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001d5608: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001d5614: addu.qb $zero, $sp, $s1
    s2 = 0x33 << 16;                                            // 0x001d5618: lui $s2, 0x33
    s2 = s2 + -0x1470;                                          // 0x001d5620: addiu $s2, $s2, -0x1470
    s0 = ~a0;                                                   // 0x001d5624: not $s0, $a0
label_0x1d562c:
    v1 = g_0032eb90;  // Global at 0x0032eb90                   // 0x001d562c: lbu $v1, 0($s2)
    if (v1 == 0) goto label_0x1d569c;                           // 0x001d5630: beqz $v1, 0x1d569c
    v1 = -1;                                                    // 0x001d5634: addiu $v1, $zero, -1
    if (s3 == v1) goto label_0x1d564c;                          // 0x001d5638: beq $s3, $v1, 0x1d564c
    /* nop */                                                   // 0x001d563c: nop 
    v1 = g_0032eba0;  // Global at 0x0032eba0                   // 0x001d5640: lbu $v1, 0x10($s2)
    if (v1 != s3) goto label_0x1d569c;                          // 0x001d5644: bne $v1, $s3, 0x1d569c
    /* nop */                                                   // 0x001d5648: nop 
label_0x1d564c:
    v1 = g_0032eb9f;  // Global at 0x0032eb9f                   // 0x001d564c: lbu $v1, 0xf($s2)
    a0 = s0 & 0xff;                                             // 0x001d5650: andi $a0, $s0, 0xff
    v1 = v1 & a0;                                               // 0x001d5654: and $v1, $v1, $a0
    g_0032eb9f = v1;  // Global at 0x0032eb9f                   // 0x001d5658: sb $v1, 0xf($s2)
    v1 = g_0032eb9f;  // Global at 0x0032eb9f                   // 0x001d565c: lbu $v1, 0xf($s2)
    if (v1 != 0) goto label_0x1d5680;                           // 0x001d5660: bnez $v1, 0x1d5680
    /* nop */                                                   // 0x001d5664: nop 
    v0 = 1;                                                     // 0x001d5668: addiu $v0, $zero, 1
    func_001d53d0();  // 1d53d0                                // 0x001d5670: jal 0x1d53d0
    g_0032eb90 = v0;  // Global at 0x0032eb90                   // 0x001d5674: sb $v0, 0($s2)
    goto label_0x1d56a0;                                        // 0x001d5678: b 0x1d56a0
    s1 = s1 + 1;                                                // 0x001d567c: addiu $s1, $s1, 1
label_0x1d5680:
    v1 = g_0032eb90;  // Global at 0x0032eb90                   // 0x001d5680: lbu $v1, 0($s2)
    v1 = v1 + -1;                                               // 0x001d5684: addiu $v1, $v1, -1
    g_0032eb90 = v1;  // Global at 0x0032eb90                   // 0x001d5688: sb $v1, 0($s2)
    v1 = g_0032eb90;  // Global at 0x0032eb90                   // 0x001d568c: lbu $v1, 0($s2)
    if (v1 != 0) goto label_0x1d569c;                           // 0x001d5690: bnez $v1, 0x1d569c
    v1 = 1;                                                     // 0x001d5694: addiu $v1, $zero, 1
    g_0032eb90 = v1;  // Global at 0x0032eb90                   // 0x001d5698: sb $v1, 0($s2)
label_0x1d569c:
    s1 = s1 + 1;                                                // 0x001d569c: addiu $s1, $s1, 1
label_0x1d56a0:
    v1 = (s1 < 0x10) ? 1 : 0;                                   // 0x001d56a0: slti $v1, $s1, 0x10
    if (v1 != 0) goto label_0x1d562c;                           // 0x001d56a4: bnez $v1, 0x1d562c
    s2 = s2 + 0x14;                                             // 0x001d56a8: addiu $s2, $s2, 0x14
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001d56b4: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001d56b8: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d56bc: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d56c0: jr $ra
    sp = sp + 0x50;                                             // 0x001d56c4: addiu $sp, $sp, 0x50
}