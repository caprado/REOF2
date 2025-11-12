void func_001827f8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x27 << 16;                                            // 0x001827f8: lui $v0, 0x27
    a0 = -1;                                                    // 0x001827fc: addiu $a0, $zero, -1
    v0 = v0 + 0x72c8;                                           // 0x00182800: addiu $v0, $v0, 0x72c8
    a2 = 1;                                                     // 0x00182804: addiu $a2, $zero, 1
    v0 = v0 + 0x808;                                            // 0x00182808: addiu $v0, $v0, 0x808
    a1 = 0x23 << 16;                                            // 0x0018280c: lui $a1, 0x23
    v1 = 1;                                                     // 0x00182810: addiu $v1, $zero, 1
    /* nop */                                                   // 0x00182814: nop 
label_0x182818:
    g_00277ac8 = a0;  // Global at 0x00277ac8                   // 0x00182818: sw $a0, -8($v0)
    v1 = v1 + -1;                                               // 0x0018281c: addiu $v1, $v1, -1
    g_00277acc = a0;  // Global at 0x00277acc                   // 0x00182820: sw $a0, -4($v0)
    g_00277b5c = 0;  // Global at 0x00277b5c                    // 0x00182824: sw $zero, 0x8c($v0)
    g_00277b50 = a2;  // Global at 0x00277b50                   // 0x00182828: sw $a2, 0x80($v0)
    g_00277b54 = 0;  // Global at 0x00277b54                    // 0x0018282c: sw $zero, 0x84($v0)
    g_00277b58 = 0;  // Global at 0x00277b58                    // 0x00182830: sw $zero, 0x88($v0)
    t2 = a1 + -0x6088;                                          // 0x00182834: addiu $t2, $a1, -0x6088
    a3 = g_00229f78;  // Global at 0x00229f78                   // 0x00182838: lb $a3, 0($t2)
    t0 = g_00229f79;  // Global at 0x00229f79                   // 0x0018283c: lb $t0, 1($t2)
    g_00277ad0 = a3;  // Global at 0x00277ad0                   // 0x00182840: sb $a3, 0($v0)
    g_00277ad1 = t0;  // Global at 0x00277ad1                   // 0x00182844: sb $t0, 1($v0)
    if (v1 >= 0) goto label_0x182818;                           // 0x00182848: bgez $v1, 0x182818
    v0 = v0 + 0x898;                                            // 0x0018284c: addiu $v0, $v0, 0x898
    return;                                                     // 0x00182850: jr $ra
    v0 = 1;                                                     // 0x00182854: addiu $v0, $zero, 1
}