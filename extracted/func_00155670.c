void func_00155670() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00155670: addiu $sp, $sp, -0x20
    v0 = 0x22 << 16;                                            // 0x0015568c: lui $v0, 0x22
    v1 = g_00226dc4;  // Global at 0x00226dc4                   // 0x00155690: lbu $v1, 0x6dc4($v0)
    a0 = 4;                                                     // 0x00155694: addiu $a0, $zero, 4
    if (v1 == a0) goto label_0x1556b8;                          // 0x00155698: beq $v1, $a0, 0x1556b8
label_0x1556a0:
    at = -1;                                                    // 0x001556a0: addiu $at, $zero, -1
    /* call function at address in at */                        // 0x001556a4: jalr $at
    /* nop */                                                   // 0x001556a8: nop 
    goto label_0x1556a0;                                        // 0x001556ac: b 0x1556a0
    /* nop */                                                   // 0x001556b0: nop 
    /* nop */                                                   // 0x001556b4: nop 
label_0x1556b8:
    v1 = 0x25 << 16;                                            // 0x001556b8: lui $v1, 0x25
    v0 = 0x22 << 16;                                            // 0x001556bc: lui $v0, 0x22
    v1 = v1 + 0x6388;                                           // 0x001556c0: addiu $v1, $v1, 0x6388
    v0 = &str_00226d28;  // "Append: GCC2096 SCE2800\n"         // 0x001556c4: addiu $v0, $v0, 0x6d28
    func_00150240();  // 0x150208                                // 0x001556c8: jal 0x150208
    g_00256388 = v0;  // Global at 0x00256388                   // 0x001556cc: sw $v0, 0($v1)
    func_00150738();  // 0x150708                                // 0x001556d0: jal 0x150708
    /* nop */                                                   // 0x001556d4: nop 
    func_001557e8();  // 0x155748                                // 0x001556e0: jal 0x155748
    goto label_0x155700;                                        // 0x001556f8: j 0x155700
    sp = sp + 0x20;                                             // 0x001556fc: addiu $sp, $sp, 0x20
label_0x155700:
    v0 = 0x25 << 16;                                            // 0x00155700: lui $v0, 0x25
    v0 = v0 + 0x6390;                                           // 0x00155704: addiu $v0, $v0, 0x6390
    a0 = g_002563d0;  // Global at 0x002563d0                   // 0x00155708: lw $a0, 0x40($v0)
    if (a0 <= 0) goto label_0x15573c;                           // 0x0015570c: blez $a0, 0x15573c
    v1 = g_002563d4;  // Global at 0x002563d4                   // 0x00155710: lw $v1, 0x44($v0)
    a0 = 1;                                                     // 0x00155718: addiu $a0, $zero, 1
    /* nop */                                                   // 0x0015571c: nop 
label_0x155720:
    v0 = v0 + -1;                                               // 0x00155720: addiu $v0, $v0, -1
    g_00256388 = a0;  // Global at 0x00256388                   // 0x00155724: sw $a0, 0($v1)
    /* nop */                                                   // 0x00155728: nop 
    /* nop */                                                   // 0x0015572c: nop 
    /* nop */                                                   // 0x00155730: nop 
    if (v0 != 0) goto label_0x155720;                           // 0x00155734: bnez $v0, 0x155720
    v1 = v1 + 0x6a0;                                            // 0x00155738: addiu $v1, $v1, 0x6a0
label_0x15573c:
    return;                                                     // 0x0015573c: jr $ra
    /* nop */                                                   // 0x00155740: nop 
}