void func_001b1620() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001b1620: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b1628: addu.qb $zero, $sp, $s1
    s1 = 0x54 << 16;                                            // 0x001b1630: lui $s1, 0x54
    s1 = s1 + -0x250;                                           // 0x001b1634: addiu $s1, $s1, -0x250
label_0x1b163c:
    a0 = g_0053fdb0;  // Global at 0x0053fdb0                   // 0x001b163c: lw $a0, 0($s1)
    v0 = -1;                                                    // 0x001b1640: addiu $v0, $zero, -1
    if (a0 == v0) goto label_0x1b1664;                          // 0x001b1644: beq $a0, $v0, 0x1b1664
    /* nop */                                                   // 0x001b1648: nop 
    if (a0 == 0) goto label_0x1b1664;                           // 0x001b164c: beqz $a0, 0x1b1664
    /* nop */                                                   // 0x001b1650: nop 
    func_0018c490();  // 0x18c350                                // 0x001b1654: jal 0x18c350
    /* nop */                                                   // 0x001b1658: nop 
    v0 = -1;                                                    // 0x001b165c: addiu $v0, $zero, -1
    g_0053fdb0 = v0;  // Global at 0x0053fdb0                   // 0x001b1660: sw $v0, 0($s1)
label_0x1b1664:
    s0 = s0 + 1;                                                // 0x001b1664: addiu $s0, $s0, 1
    v0 = (s0 < 0x2bc) ? 1 : 0;                                  // 0x001b1668: slti $v0, $s0, 0x2bc
    if (v0 != 0) goto label_0x1b163c;                           // 0x001b166c: bnez $v0, 0x1b163c
    s1 = s1 + 4;                                                // 0x001b1670: addiu $s1, $s1, 4
    func_001b0fc0();  // 0x1b0f40                                // 0x001b1674: jal 0x1b0f40
    /* nop */                                                   // 0x001b1678: nop 
    func_001b0f40();  // 0x1b0ec0                                // 0x001b167c: jal 0x1b0ec0
    /* nop */                                                   // 0x001b1680: nop 
    func_001b26f0();  // 0x1b26a0                                // 0x001b1684: jal 0x1b26a0
    /* nop */                                                   // 0x001b1688: nop 
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b1690: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b1694: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b1698: jr $ra
    sp = sp + 0x30;                                             // 0x001b169c: addiu $sp, $sp, 0x30
}