void func_0012a628() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0012a628: addiu $sp, $sp, -0x20
    v0 = 0x1f << 16;                                            // 0x0012a62c: lui $v0, 0x1f
    s2 = v0 + 0x6a80;                                           // 0x0012a634: addiu $s2, $v0, 0x6a80
    v0 = g_001f6a80;  // Global at 0x001f6a80                   // 0x0012a638: lw $v0, 0($s2)
    if (v0 != 0) goto label_0x12a68c;                           // 0x0012a644: bnez $v0, 0x12a68c
    ReferThreadStatus();  // 0x1141d0                           // 0x0012a64c: jal 0x1141d0
    s0 = 0x1f << 16;                                            // 0x0012a650: lui $s0, 0x1f
    v0 = 0x1f << 16;                                            // 0x0012a658: lui $v0, 0x1f
    a1 = g_001f6a60;  // Global at 0x001f6a60                   // 0x0012a65c: lw $a1, 0x6a60($v0)
    iChangeThreadPriority();  // 0x114170                       // 0x0012a664: jal 0x114170
    s0 = s0 + 0x6ad8;                                           // 0x0012a668: addiu $s0, $s0, 0x6ad8
    v1 = 0x20 << 16;                                            // 0x0012a66c: lui $v1, 0x20
    g_001fe370 = v0;  // Global at 0x001fe370                   // 0x0012a670: sw $v0, -0x1c90($v1)
    a1 = 0x20 << 16;                                            // 0x0012a674: lui $a1, 0x20
    a0 = g_001f6ad8;  // Global at 0x001f6ad8                   // 0x0012a678: lw $a0, 0($s0)
    func_0012adb0();  // 12adb0                                // 0x0012a67c: jal 0x12adb0
    g_001fe374 = s1;  // Global at 0x001fe374                   // 0x0012a680: sw $s1, -0x1c8c($a1)
    v1 = g_001f6ad8;  // Global at 0x001f6ad8                   // 0x0012a684: lw $v1, 0($s0)
    v0 = g_001f6a80;  // Global at 0x001f6a80                   // 0x0012a688: lw $v0, 0($s2)
label_0x12a68c:
    v0 = v0 + 1;                                                // 0x0012a68c: addiu $v0, $v0, 1
    g_001f6a80 = v0;  // Global at 0x001f6a80                   // 0x0012a694: sw $v0, 0($s2)
    return;                                                     // 0x0012a6a4: jr $ra
    sp = sp + 0x20;                                             // 0x0012a6a8: addiu $sp, $sp, 0x20
}