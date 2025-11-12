void func_001b1700() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x001b1700: addiu $sp, $sp, -0x40
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b170c: addu.qb $zero, $sp, $s1
    s2 = *(int32_t*)(a0);                                       // 0x001b1718: lw $s2, 0($a0)
    goto label_0x1b1738;                                        // 0x001b171c: b 0x1b1738
label_0x1b1724:
    func_001b1090();  // 0x1b1040                                // 0x001b1724: jal 0x1b1040
    a0 = *(int32_t*)(s2);                                       // 0x001b1728: lw $a0, 0($s2)
    *(uint32_t*)(s2) = 0;                                       // 0x001b172c: sw $zero, 0($s2)
    s1 = s1 + 1;                                                // 0x001b1730: addiu $s1, $s1, 1
    s2 = s2 + 4;                                                // 0x001b1734: addiu $s2, $s2, 4
label_0x1b1738:
    v1 = *(uint16_t*)((s0) + 0x816);                            // 0x001b1738: lhu $v1, 0x816($s0)
    v1 = (s1 < v1) ? 1 : 0;                                     // 0x001b173c: slt $v1, $s1, $v1
    if (v1 != 0) goto label_0x1b1724;                           // 0x001b1740: bnez $v1, 0x1b1724
    /* nop */                                                   // 0x001b1744: nop 
    *(uint32_t*)(s0) = 0;                                       // 0x001b1748: sw $zero, 0($s0)
    s2 = *(int32_t*)((s0) + 4);                                 // 0x001b174c: lw $s2, 4($s0)
    if (s2 == 0) goto label_0x1b17a0;                           // 0x001b1750: beqz $s2, 0x1b17a0
    /* nop */                                                   // 0x001b1754: nop 
    a0 = *(uint8_t*)((s0) + 0x81c);                             // 0x001b1758: lbu $a0, 0x81c($s0)
    v1 = 1;                                                     // 0x001b175c: addiu $v1, $zero, 1
    if (a0 == v1) goto label_0x1b17a0;                          // 0x001b1760: beq $a0, $v1, 0x1b17a0
    goto label_0x1b1794;                                        // 0x001b1768: b 0x1b1794
    v1 = *(uint16_t*)((s0) + 0x816);                            // 0x001b176c: lhu $v1, 0x816($s0)
label_0x1b1770:
    a0 = *(int32_t*)(s2);                                       // 0x001b1770: lw $a0, 0($s2)
    if (a0 == 0) goto label_0x1b1784;                           // 0x001b1774: beqz $a0, 0x1b1784
    /* nop */                                                   // 0x001b1778: nop 
    func_001b1090();  // 0x1b1040                                // 0x001b177c: jal 0x1b1040
    /* nop */                                                   // 0x001b1780: nop 
label_0x1b1784:
    *(uint32_t*)(s2) = 0;                                       // 0x001b1784: sw $zero, 0($s2)
    s1 = s1 + 1;                                                // 0x001b1788: addiu $s1, $s1, 1
    s2 = s2 + 4;                                                // 0x001b178c: addiu $s2, $s2, 4
    v1 = *(uint16_t*)((s0) + 0x816);                            // 0x001b1790: lhu $v1, 0x816($s0)
label_0x1b1794:
    v1 = (s1 < v1) ? 1 : 0;                                     // 0x001b1794: slt $v1, $s1, $v1
    if (v1 != 0) goto label_0x1b1770;                           // 0x001b1798: bnez $v1, 0x1b1770
    /* nop */                                                   // 0x001b179c: nop 
label_0x1b17a0:
    *(uint32_t*)((s0) + 4) = 0;                                 // 0x001b17a0: sw $zero, 4($s0)
    *(uint16_t*)((s0) + 0x816) = 0;                             // 0x001b17a4: sh $zero, 0x816($s0)
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001b17ac: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b17b0: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b17b4: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b17b8: jr $ra
    sp = sp + 0x40;                                             // 0x001b17bc: addiu $sp, $sp, 0x40
}