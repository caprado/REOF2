void func_0011b5e4() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x30;                                            // 0x0011b5e4: addiu $sp, $sp, -0x30
    v1 = g_002503f8;  // Global at 0x002503f8                   // 0x0011b5e8: lw $v1, 0x3f8($v0)
    if (v1 < 0) goto label_0x11b650;                            // 0x0011b5f8: bltz $v1, 0x11b650
    v0 = 0x25 << 16;                                            // 0x0011b600: lui $v0, 0x25
    a0 = 0x25 << 16;                                            // 0x0011b604: lui $a0, 0x25
    v1 = v0 + -0x5c0;                                           // 0x0011b608: addiu $v1, $v0, -0x5c0
    g_0024fa40 = a1;  // Global at 0x0024fa40                   // 0x0011b60c: sw $a1, -0x5c0($v0)
    g_0024fa44 = a3;  // Global at 0x0024fa44                   // 0x0011b610: sw $a3, 4($v1)
    s0 = 0x25 << 16;                                            // 0x0011b614: lui $s0, 0x25
    g_0024fa48 = a2;  // Global at 0x0024fa48                   // 0x0011b618: sw $a2, 8($v1)
    a0 = a0 + -0x640;                                           // 0x0011b61c: addiu $a0, $a0, -0x640
    a1 = 4;                                                     // 0x0011b624: addiu $a1, $zero, 4
    local_0 = 0;                                                // 0x0011b628: sw $zero, 0($sp)
    t0 = 0xc;                                                   // 0x0011b630: addiu $t0, $zero, 0xc
    t1 = s0 + -0x600;                                           // 0x0011b634: addiu $t1, $s0, -0x600
    t2 = 4;                                                     // 0x0011b638: addiu $t2, $zero, 4
    func_001176a8();  // 1176a8                                // 0x0011b63c: jal 0x1176a8
    if (v0 >= 0) goto label_0x11b650;                           // 0x0011b644: bgez $v0, 0x11b650
    v0 = g_0024fa00;  // Global at 0x0024fa00                   // 0x0011b648: lw $v0, -0x600($s0)
label_0x11b650:
    return;                                                     // 0x0011b658: jr $ra
    sp = sp + 0x30;                                             // 0x0011b65c: addiu $sp, $sp, 0x30
}