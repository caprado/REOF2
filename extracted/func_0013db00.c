void func_0013db00() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0013db00: addiu $sp, $sp, -0x20
    s2 = 0x20 << 16;                                            // 0x0013db08: lui $s2, 0x20
    v0 = g_00207a38;  // Global at 0x00207a38                   // 0x0013db0c: lw $v0, 0x7a38($s2)
    if (v0 <= 0) goto label_0x13db98;                           // 0x0013db1c: blez $v0, 0x13db98
    v0 = 0x20 << 16;                                            // 0x0013db24: lui $v0, 0x20
    s0 = v0 + 0x7a80;                                           // 0x0013db28: addiu $s0, $v0, 0x7a80
    v0 = g_00207a84;  // Global at 0x00207a84                   // 0x0013db2c: lw $v0, 4($s0)
    if (v0 == 0) goto label_0x13db40;                           // 0x0013db30: beqz $v0, 0x13db40
    func_001408e0();  // 0x1408b0                                // 0x0013db38: jal 0x1408b0
    /* nop */                                                   // 0x0013db3c: nop 
label_0x13db40:
    v0 = g_00207a88;  // Global at 0x00207a88                   // 0x0013db40: lw $v0, 8($s0)
    if (v0 == 0) goto label_0x13db5c;                           // 0x0013db44: beqz $v0, 0x13db5c
    v0 = g_00200000;  // Global at 0x00200000                   // 0x0013db4c: lw $v0, 0($v0)
    v1 = g_0020000c;  // Global at 0x0020000c                   // 0x0013db50: lw $v1, 0xc($v0)
    /* call function at address in v1 */                        // 0x0013db54: jalr $v1
    /* nop */                                                   // 0x0013db58: nop 
label_0x13db5c:
    a0 = g_00207a8c;  // Global at 0x00207a8c                   // 0x0013db5c: lw $a0, 0xc($s0)
    /* beqzl $a0, 0x13db74 */                                   // 0x0013db60: beqzl $a0, 0x13db74
    func_00141390();  // 0x141248                                // 0x0013db68: jal 0x141248
    /* nop */                                                   // 0x0013db6c: nop 
    s0 = s0 + 0x18;                                             // 0x0013db74: addiu $s0, $s0, 0x18
    func_00107d30();  // 0x107c70                                // 0x0013db7c: jal 0x107c70
    a2 = 0x18;                                                  // 0x0013db80: addiu $a2, $zero, 0x18
    v1 = g_00207a38;  // Global at 0x00207a38                   // 0x0013db84: lw $v1, 0x7a38($s2)
    s1 = s1 + 1;                                                // 0x0013db88: addiu $s1, $s1, 1
    v1 = (s1 < v1) ? 1 : 0;                                     // 0x0013db8c: slt $v1, $s1, $v1
    /* bnezl $v1, 0x13db30 */                                   // 0x0013db90: bnezl $v1, 0x13db30
    v0 = g_00207a9c;  // Global at 0x00207a9c                   // 0x0013db94: lw $v0, 4($s0)
label_0x13db98:
    v0 = 0x20 << 16;                                            // 0x0013db98: lui $v0, 0x20
    a0 = 1;                                                     // 0x0013db9c: addiu $a0, $zero, 1
    s1 = v0 + 0x7a4c;                                           // 0x0013dba0: addiu $s1, $v0, 0x7a4c
    v1 = g_00207a4c;  // Global at 0x00207a4c                   // 0x0013dba4: lb $v1, 0($s1)
    if (v1 != a0) goto label_0x13dbcc;                          // 0x0013dba8: bne $v1, $a0, 0x13dbcc
    s0 = 0x20 << 16;                                            // 0x0013dbb0: lui $s0, 0x20
    s0 = s0 + 0x7a44;                                           // 0x0013dbb4: addiu $s0, $s0, 0x7a44
    func_0011b6f8();  // 0x11b6d8                                // 0x0013dbb8: jal 0x11b6d8
    a0 = g_00207a44;  // Global at 0x00207a44                   // 0x0013dbbc: lw $a0, 0($s0)
    g_00207a44 = 0;  // Global at 0x00207a44                    // 0x0013dbc0: sw $zero, 0($s0)
    g_00207a4c = 0;  // Global at 0x00207a4c                    // 0x0013dbc4: sb $zero, 0($s1)
label_0x13dbcc:
    return;                                                     // 0x0013dbd8: jr $ra
    sp = sp + 0x20;                                             // 0x0013dbdc: addiu $sp, $sp, 0x20
}