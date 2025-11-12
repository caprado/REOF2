void func_001412a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001412a0: addiu $sp, $sp, -0x10
    v0 = 0x25 << 16;                                            // 0x001412a4: lui $v0, 0x25
    v0 = v0 + 0x6160;                                           // 0x001412b0: addiu $v0, $v0, 0x6160
    v1 = g_00256160;  // Global at 0x00256160                   // 0x001412b4: lw $v1, 0($v0)
    if (v1 == 0) goto label_0x1412f0;                           // 0x001412b8: beqz $v1, 0x1412f0
    /* call function at address in v1 */                        // 0x001412c0: jalr $v1
    a0 = g_00256164;  // Global at 0x00256164                   // 0x001412c4: lw $a0, 4($v0)
    v0 = 0x21 << 16;                                            // 0x001412c8: lui $v0, 0x21
    v1 = 0x21 << 16;                                            // 0x001412cc: lui $v1, 0x21
    a0 = v0 + 0xbf4;                                            // 0x001412d0: addiu $a0, $v0, 0xbf4
    v1 = v1 + 0xbf0;                                            // 0x001412d4: addiu $v1, $v1, 0xbf0
    v0 = g_00210bf0;  // Global at 0x00210bf0                   // 0x001412d8: lw $v0, 0($v1)
    /* beqzl $v0, 0x1412e4 */                                   // 0x001412dc: beqzl $v0, 0x1412e4
    g_00210bf4 = s0;  // Global at 0x00210bf4                   // 0x001412e0: sw $s0, 0($a0)
    v0 = g_00210bf0;  // Global at 0x00210bf0                   // 0x001412e4: lw $v0, 0($v1)
    v0 = v0 + 1;                                                // 0x001412e8: addiu $v0, $v0, 1
    g_00210bf0 = v0;  // Global at 0x00210bf0                   // 0x001412ec: sw $v0, 0($v1)
label_0x1412f0:
    return;                                                     // 0x001412f8: jr $ra
    sp = sp + 0x10;                                             // 0x001412fc: addiu $sp, $sp, 0x10
}