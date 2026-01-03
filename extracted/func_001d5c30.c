void func_001d5c30() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x001d5c30: addiu $sp, $sp, -0x50
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001d5c38: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001d5c44: addu.qb $zero, $sp, $s1
    s2 = 0x33 << 16;                                            // 0x001d5c48: lui $s2, 0x33
    s2 = s2 + -0x1530;                                          // 0x001d5c50: addiu $s2, $s2, -0x1530
    s0 = ~a0;                                                   // 0x001d5c54: not $s0, $a0
label_0x1d5c5c:
    v1 = g_0032ead0;  // Global at 0x0032ead0                   // 0x001d5c5c: lbu $v1, 0($s2)
    if (v1 == 0) goto label_0x1d5ccc;                           // 0x001d5c60: beqz $v1, 0x1d5ccc
    v1 = -1;                                                    // 0x001d5c64: addiu $v1, $zero, -1
    if (s3 == v1) goto label_0x1d5c7c;                          // 0x001d5c68: beq $s3, $v1, 0x1d5c7c
    /* nop */                                                   // 0x001d5c6c: nop 
    v1 = g_0032ead8;  // Global at 0x0032ead8                   // 0x001d5c70: lbu $v1, 8($s2)
    if (v1 != s3) goto label_0x1d5ccc;                          // 0x001d5c74: bne $v1, $s3, 0x1d5ccc
    /* nop */                                                   // 0x001d5c78: nop 
label_0x1d5c7c:
    v1 = g_0032ead3;  // Global at 0x0032ead3                   // 0x001d5c7c: lbu $v1, 3($s2)
    a0 = s0 & 0xff;                                             // 0x001d5c80: andi $a0, $s0, 0xff
    v1 = v1 & a0;                                               // 0x001d5c84: and $v1, $v1, $a0
    g_0032ead3 = v1;  // Global at 0x0032ead3                   // 0x001d5c88: sb $v1, 3($s2)
    v1 = g_0032ead3;  // Global at 0x0032ead3                   // 0x001d5c8c: lbu $v1, 3($s2)
    if (v1 != 0) goto label_0x1d5cb0;                           // 0x001d5c90: bnez $v1, 0x1d5cb0
    /* nop */                                                   // 0x001d5c94: nop 
    v0 = 1;                                                     // 0x001d5c98: addiu $v0, $zero, 1
    func_001d5ab0();  // 1d5ab0                                // 0x001d5ca0: jal 0x1d5ab0
    g_0032ead0 = v0;  // Global at 0x0032ead0                   // 0x001d5ca4: sb $v0, 0($s2)
    goto label_0x1d5cd0;                                        // 0x001d5ca8: b 0x1d5cd0
    s1 = s1 + 1;                                                // 0x001d5cac: addiu $s1, $s1, 1
label_0x1d5cb0:
    v1 = g_0032ead0;  // Global at 0x0032ead0                   // 0x001d5cb0: lbu $v1, 0($s2)
    v1 = v1 + -1;                                               // 0x001d5cb4: addiu $v1, $v1, -1
    g_0032ead0 = v1;  // Global at 0x0032ead0                   // 0x001d5cb8: sb $v1, 0($s2)
    v1 = g_0032ead0;  // Global at 0x0032ead0                   // 0x001d5cbc: lbu $v1, 0($s2)
    if (v1 != 0) goto label_0x1d5ccc;                           // 0x001d5cc0: bnez $v1, 0x1d5ccc
    v1 = 1;                                                     // 0x001d5cc4: addiu $v1, $zero, 1
    g_0032ead0 = v1;  // Global at 0x0032ead0                   // 0x001d5cc8: sb $v1, 0($s2)
label_0x1d5ccc:
    s1 = s1 + 1;                                                // 0x001d5ccc: addiu $s1, $s1, 1
label_0x1d5cd0:
    v1 = (s1 < 0x10) ? 1 : 0;                                   // 0x001d5cd0: slti $v1, $s1, 0x10
    if (v1 != 0) goto label_0x1d5c5c;                           // 0x001d5cd4: bnez $v1, 0x1d5c5c
    s2 = s2 + 0xc;                                              // 0x001d5cd8: addiu $s2, $s2, 0xc
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001d5ce4: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001d5ce8: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d5cec: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d5cf0: jr $ra
    sp = sp + 0x50;                                             // 0x001d5cf4: addiu $sp, $sp, 0x50
}