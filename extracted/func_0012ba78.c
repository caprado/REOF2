void func_0012ba78() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0012ba78: addiu $sp, $sp, -0x20
    v0 = 0x1f << 16;                                            // 0x0012ba7c: lui $v0, 0x1f
    s2 = 0x1f << 16;                                            // 0x0012ba8c: lui $s2, 0x1f
    v0 = v0 + 0x59c4;                                           // 0x0012ba94: addiu $v0, $v0, 0x59c4
    a1 = s2 + 0x6b5c;                                           // 0x0012ba9c: addiu $a1, $s2, 0x6b5c
    v1 = g_001f59c4;  // Global at 0x001f59c4                   // 0x0012baa0: lw $v1, 0($v0)
    v1 = v1 + 1;                                                // 0x0012baa4: addiu $v1, $v1, 1
    g_001f59c4 = v1;  // Global at 0x001f59c4                   // 0x0012baa8: sw $v1, 0($v0)
    a0 = g_001f6b5c;  // Global at 0x001f6b5c                   // 0x0012baac: lw $a0, 0($a1)
    if (a0 != 0) goto label_0x12bb68;                           // 0x0012bab0: bnez $a0, 0x12bb68
    v0 = 0x1f << 16;                                            // 0x0012bab4: lui $v0, 0x1f
    v0 = 0x1f << 16;                                            // 0x0012bab8: lui $v0, 0x1f
    s0 = 1;                                                     // 0x0012babc: addiu $s0, $zero, 1
    v1 = g_001f6a54;  // Global at 0x001f6a54                   // 0x0012bac0: lw $v1, 0x6a54($v0)
    g_001f6b5c = s0;  // Global at 0x001f6b5c                   // 0x0012bac4: sw $s0, 0($a1)
    if (v1 <= 0) goto label_0x12bb54;                           // 0x0012bac8: blez $v1, 0x12bb54
    v0 = 0x1f << 16;                                            // 0x0012bacc: lui $v0, 0x1f
    v0 = v0 + 0x6a88;                                           // 0x0012bad0: addiu $v0, $v0, 0x6a88
    v1 = g_001f6a88;  // Global at 0x001f6a88                   // 0x0012bad4: lw $v1, 0($v0)
    if (v1 == s0) goto label_0x12baec;                          // 0x0012bad8: beq $v1, $s0, 0x12baec
    v0 = 0x1f << 16;                                            // 0x0012badc: lui $v0, 0x1f
    v0 = v0 + 0x6ae0;                                           // 0x0012bae0: addiu $v0, $v0, 0x6ae0
    func_0012ad48();  // 0x12acf8                                // 0x0012bae4: jal 0x12acf8
    a0 = g_001f6ae0;  // Global at 0x001f6ae0                   // 0x0012bae8: lw $a0, 0($v0)
label_0x12baec:
    v0 = 0x1f << 16;                                            // 0x0012baec: lui $v0, 0x1f
    v0 = v0 + 0x6a90;                                           // 0x0012baf0: addiu $v0, $v0, 0x6a90
    v1 = g_001f6a90;  // Global at 0x001f6a90                   // 0x0012baf4: lw $v1, 0($v0)
    if (v1 == s0) goto label_0x12bb0c;                          // 0x0012baf8: beq $v1, $s0, 0x12bb0c
    v0 = 0x1f << 16;                                            // 0x0012bafc: lui $v0, 0x1f
    v0 = v0 + 0x6ae4;                                           // 0x0012bb00: addiu $v0, $v0, 0x6ae4
    func_0012ad48();  // 0x12acf8                                // 0x0012bb04: jal 0x12acf8
    a0 = g_001f6ae4;  // Global at 0x001f6ae4                   // 0x0012bb08: lw $a0, 0($v0)
label_0x12bb0c:
    func_0012b200();  // 0x12b1f0                                // 0x0012bb0c: jal 0x12b1f0
    /* nop */                                                   // 0x0012bb10: nop 
    if (a0 != s0) goto label_0x12bb44;                          // 0x0012bb18: bne $a0, $s0, 0x12bb44
    v1 = 0x1f << 16;                                            // 0x0012bb1c: lui $v1, 0x1f
    v0 = 0x1f << 16;                                            // 0x0012bb20: lui $v0, 0x1f
    v0 = v0 + 0x6a8c;                                           // 0x0012bb24: addiu $v0, $v0, 0x6a8c
    v1 = g_001f6a8c;  // Global at 0x001f6a8c                   // 0x0012bb28: lw $v1, 0($v0)
    if (v1 == a0) goto label_0x12bb40;                          // 0x0012bb2c: beq $v1, $a0, 0x12bb40
    v0 = 0x1f << 16;                                            // 0x0012bb30: lui $v0, 0x1f
    v0 = v0 + 0x6adc;                                           // 0x0012bb34: addiu $v0, $v0, 0x6adc
    func_0012ad48();  // 0x12acf8                                // 0x0012bb38: jal 0x12acf8
    a0 = g_001f6adc;  // Global at 0x001f6adc                   // 0x0012bb3c: lw $a0, 0($v0)
label_0x12bb40:
    v1 = 0x1f << 16;                                            // 0x0012bb40: lui $v1, 0x1f
label_0x12bb44:
    v1 = v1 + 0x6ad0;                                           // 0x0012bb44: addiu $v1, $v1, 0x6ad0
label_0x12bb54:
    func_00141c68();  // 0x141c50                                // 0x0012bb54: jal 0x141c50
    /* nop */                                                   // 0x0012bb58: nop 
    v1 = s2 + 0x6b5c;                                           // 0x0012bb5c: addiu $v1, $s2, 0x6b5c
    g_001f6b5c = 0;  // Global at 0x001f6b5c                    // 0x0012bb60: sw $zero, 0($v1)
    v0 = 0x1f << 16;                                            // 0x0012bb64: lui $v0, 0x1f
label_0x12bb68:
    v0 = g_001f6b60;  // Global at 0x001f6b60                   // 0x0012bb68: lw $v0, 0x6b60($v0)
    /* beqzl $v0, 0x12bb88 */                                   // 0x0012bb6c: beqzl $v0, 0x12bb88
    /* call function at address in v0 */                        // 0x0012bb74: jalr $v0
    goto label_0x12bb8c;                                        // 0x0012bb7c: b 0x12bb8c
    /* nop */                                                   // 0x0012bb84: nop 
label_0x12bb8c:
    return;                                                     // 0x0012bb98: jr $ra
    sp = sp + 0x20;                                             // 0x0012bb9c: addiu $sp, $sp, 0x20
}