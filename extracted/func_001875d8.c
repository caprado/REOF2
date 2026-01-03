void func_001875d8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x60;                                            // 0x001875d8: addiu $sp, $sp, -0x60
    v0 = 0x28 << 16;                                            // 0x001875dc: lui $v0, 0x28
    s2 = 0x21 << 16;                                            // 0x001875e4: lui $s2, 0x21
    a0 = g_0027d040;  // Global at 0x0027d040                   // 0x001875ec: lw $a0, -0x2fc0($v0)
    s0 = 0x28 << 16;                                            // 0x001875f0: lui $s0, 0x28
    s1 = s0 + -0xec0;                                           // 0x00187608: addiu $s1, $s0, -0xec0
    g_00216320 = 0;  // Global at 0x00216320                    // 0x0018760c: sw $zero, 0x6320($s2)
    PollSema();  // 0x114320                                    // 0x00187610: jal 0x114320
    s3 = s1 + 0x80;                                             // 0x00187614: addiu $s3, $s1, 0x80
    func_00114bd8();  // 114bd8                                // 0x0018761c: jal 0x114bd8
    a1 = s1 + 0xff;                                             // 0x00187620: addiu $a1, $s1, 0xff
    v1 = g_0027f140;  // Global at 0x0027f140                   // 0x00187624: lw $v1, -0xec0($s0)
    v0 = g_00216320;  // Global at 0x00216320                   // 0x00187628: lw $v0, 0x6320($s2)
    v0 = (v0 < v1) ? 1 : 0;                                     // 0x0018762c: slt $v0, $v0, $v1
    /* beqzl $v0, 0x187650 */                                   // 0x00187630: beqzl $v0, 0x187650
    v1 = g_0027f1c0;  // Global at 0x0027f1c0                   // 0x00187634: lw $v1, 0($s3)
    v0 = g_0027f1c0;  // Global at 0x0027f1c0                   // 0x00187638: lw $v0, 0x80($s1)
    v0 = (v0 < v1) ? 1 : 0;                                     // 0x0018763c: slt $v0, $v0, $v1
    /* beqzl $v0, 0x187650 */                                   // 0x00187640: beqzl $v0, 0x187650
    v1 = g_0027f1c0;  // Global at 0x0027f1c0                   // 0x00187644: lw $v1, 0($s3)
    goto label_0x187680;                                        // 0x00187648: b 0x187680
    g_00216320 = v1;  // Global at 0x00216320                   // 0x0018764c: sw $v1, 0x6320($s2)
    v0 = *(int32_t*)((s4) + 0x6320);                            // 0x00187650: lw $v0, 0x6320($s4)
    v0 = (v0 < v1) ? 1 : 0;                                     // 0x00187654: slt $v0, $v0, $v1
    /* beqzl $v0, 0x187680 */                                   // 0x00187658: beqzl $v0, 0x187680
    g_0027f148 = 0;  // Global at 0x0027f148                    // 0x0018765c: sw $zero, 8($s1)
    v0 = g_0027f140;  // Global at 0x0027f140                   // 0x00187660: lw $v0, 0($s1)
    v0 = (v0 < v1) ? 1 : 0;                                     // 0x00187664: slt $v0, $v0, $v1
    if (v0 == 0) goto label_0x18767c;                           // 0x00187668: beqz $v0, 0x18767c
    v0 = 0x28 << 16;                                            // 0x0018766c: lui $v0, 0x28
    g_00216320 = v1;  // Global at 0x00216320                   // 0x00187670: sw $v1, 0x6320($s2)
    goto label_0x187684;                                        // 0x00187674: b 0x187684
    v0 = v0 + -0xe40;                                           // 0x00187678: addiu $v0, $v0, -0xe40
label_0x18767c:
    g_0027f148 = 0;  // Global at 0x0027f148                    // 0x0018767c: sw $zero, 8($s1)
label_0x187680:
label_0x187684:
    return;                                                     // 0x0018769c: jr $ra
    sp = sp + 0x60;                                             // 0x001876a0: addiu $sp, $sp, 0x60
}