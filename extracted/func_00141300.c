void func_00141300() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00141300: addiu $sp, $sp, -0x20
    s1 = 0x25 << 16;                                            // 0x0014130c: lui $s1, 0x25
    v0 = g_00256168;  // Global at 0x00256168                   // 0x00141310: lw $v0, 0x6168($s1)
    if (v0 == 0) goto label_0x141378;                           // 0x00141318: beqz $v0, 0x141378
    v0 = 0x21 << 16;                                            // 0x00141320: lui $v0, 0x21
    v0 = v0 + 0xbf0;                                            // 0x00141324: addiu $v0, $v0, 0xbf0
    v1 = g_00210bf0;  // Global at 0x00210bf0                   // 0x00141328: lw $v1, 0($v0)
    v1 = v1 + -1;                                               // 0x0014132c: addiu $v1, $v1, -1
    g_00210bf0 = v1;  // Global at 0x00210bf0                   // 0x00141330: sw $v1, 0($v0)
    a0 = g_00210bf0;  // Global at 0x00210bf0                   // 0x00141334: lw $a0, 0($v0)
    if (a0 != 0) goto label_0x14136c;                           // 0x00141338: bnez $a0, 0x14136c
    v1 = s1 + 0x6168;                                           // 0x0014133c: addiu $v1, $s1, 0x6168
    v0 = 0x21 << 16;                                            // 0x00141340: lui $v0, 0x21
    s0 = v0 + 0xbf4;                                            // 0x00141344: addiu $s0, $v0, 0xbf4
    v1 = g_00210bf4;  // Global at 0x00210bf4                   // 0x00141348: lw $v1, 0($s0)
    if (v1 == a2) goto label_0x141364;                          // 0x0014134c: beq $v1, $a2, 0x141364
    /* nop */                                                   // 0x00141350: nop 
    a0 = 0x22 << 16;                                            // 0x00141354: lui $a0, 0x22
    a1 = g_00210bf4;  // Global at 0x00210bf4                   // 0x00141358: lw $a1, 0($s0)
    func_00141568();  // 0x1414c0                                // 0x0014135c: jal 0x1414c0
    a0 = &str_00226428;  // "1051001:SVM_SetCbSvr:too many server function" // 0x00141360: addiu $a0, $a0, 0x6428
label_0x141364:
    g_00210bf4 = 0;  // Global at 0x00210bf4                    // 0x00141364: sw $zero, 0($s0)
    v1 = s1 + 0x6168;                                           // 0x00141368: addiu $v1, $s1, 0x6168
label_0x14136c:
    v0 = g_00256168;  // Global at 0x00256168                   // 0x0014136c: lw $v0, 0($v1)
    /* call function at address in v0 */                        // 0x00141370: jalr $v0
    a0 = g_0025616c;  // Global at 0x0025616c                   // 0x00141374: lw $a0, 4($v1)
label_0x141378:
    return;                                                     // 0x00141384: jr $ra
    sp = sp + 0x20;                                             // 0x00141388: addiu $sp, $sp, 0x20
}