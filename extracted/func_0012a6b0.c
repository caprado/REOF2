void func_0012a6b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0012a6b0: addiu $sp, $sp, -0x20
    v1 = 0x1f << 16;                                            // 0x0012a6b4: lui $v1, 0x1f
    s1 = v1 + 0x6a80;                                           // 0x0012a6bc: addiu $s1, $v1, 0x6a80
    v0 = g_001f6a80;  // Global at 0x001f6a80                   // 0x0012a6c0: lw $v0, 0($s1)
    v0 = v0 + -1;                                               // 0x0012a6c8: addiu $v0, $v0, -1
    if (v0 != 0) goto label_0x12a700;                           // 0x0012a6d0: bnez $v0, 0x12a700
    g_001f6a80 = v0;  // Global at 0x001f6a80                   // 0x0012a6d4: sw $v0, 0($s1)
    s0 = 0x1f << 16;                                            // 0x0012a6d8: lui $s0, 0x1f
    s0 = s0 + 0x6ad8;                                           // 0x0012a6dc: addiu $s0, $s0, 0x6ad8
    func_0012ae18();  // 12ae18                                // 0x0012a6e0: jal 0x12ae18
    a0 = g_001f6ad8;  // Global at 0x001f6ad8                   // 0x0012a6e4: lw $a0, 0($s0)
    ReferThreadStatus();  // 0x1141d0                           // 0x0012a6e8: jal 0x1141d0
    v1 = g_001f6ad8;  // Global at 0x001f6ad8                   // 0x0012a6ec: lw $v1, 0($s0)
    v1 = 0x20 << 16;                                            // 0x0012a6f0: lui $v1, 0x20
    a1 = g_001fe370;  // Global at 0x001fe370                   // 0x0012a6f4: lw $a1, -0x1c90($v1)
    iChangeThreadPriority();  // 0x114170                       // 0x0012a6f8: jal 0x114170
label_0x12a700:
    v0 = g_001f6a80;  // Global at 0x001f6a80                   // 0x0012a700: lw $v0, 0($s1)
    if (v0 < 0) goto label_0x12a70c;                            // 0x0012a704: bltzl $v0, 0x12a70c
    g_001f6a80 = 0;  // Global at 0x001f6a80                    // 0x0012a708: sw $zero, 0($s1)
label_0x12a70c:
    return;                                                     // 0x0012a718: jr $ra
    sp = sp + 0x20;                                             // 0x0012a71c: addiu $sp, $sp, 0x20
}