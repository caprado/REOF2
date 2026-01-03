void func_0013e380() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0013e380: addiu $sp, $sp, -0x20
    v1 = 0x20 << 16;                                            // 0x0013e384: lui $v1, 0x20
    v1 = v1 + 0x7a6c;                                           // 0x0013e38c: addiu $v1, $v1, 0x7a6c
    v0 = g_00207a6c;  // Global at 0x00207a6c                   // 0x0013e398: lw $v0, 0($v1)
    v0 = v0 + -1;                                               // 0x0013e39c: addiu $v0, $v0, -1
    if (v0 != 0) goto label_0x13e418;                           // 0x0013e3a0: bnez $v0, 0x13e418
    g_00207a6c = v0;  // Global at 0x00207a6c                   // 0x0013e3a4: sw $v0, 0($v1)
    s0 = 0x20 << 16;                                            // 0x0013e3a8: lui $s0, 0x20
    s1 = 0x21 << 16;                                            // 0x0013e3ac: lui $s1, 0x21
    s0 = s0 + 0x7a54;                                           // 0x0013e3b0: addiu $s0, $s0, 0x7a54
    s1 = s1 + -0x5b80;                                          // 0x0013e3b4: addiu $s1, $s1, -0x5b80
    func_0011b6d8();  // 11b6d8                                // 0x0013e3b8: jal 0x11b6d8
    a0 = g_00207a54;  // Global at 0x00207a54                   // 0x0013e3bc: lw $a0, 0($s0)
    g_00207a54 = 0;  // Global at 0x00207a54                    // 0x0013e3c0: sw $zero, 0($s0)
    s0 = 0x20 << 16;                                            // 0x0013e3c4: lui $s0, 0x20
    a0 = g_0020a480;  // Global at 0x0020a480                   // 0x0013e3c8: lw $a0, 0($s1)
    func_00138dd0();  // 138dd0                                // 0x0013e3cc: jal 0x138dd0
    s0 = s0 + 0x7a74;                                           // 0x0013e3d0: addiu $s0, $s0, 0x7a74
    g_0020a480 = 0;  // Global at 0x0020a480                    // 0x0013e3d4: sw $zero, 0($s1)
    func_0011b6d8();  // 11b6d8                                // 0x0013e3d8: jal 0x11b6d8
    a0 = g_00207a74;  // Global at 0x00207a74                   // 0x0013e3dc: lw $a0, 0($s0)
    func_0013db00();  // 13db00                                // 0x0013e3e0: jal 0x13db00
    g_00207a74 = 0;  // Global at 0x00207a74                    // 0x0013e3e4: sw $zero, 0($s0)
    func_0013e280();  // 13e280                                // 0x0013e3e8: jal 0x13e280
    /* nop */                                                   // 0x0013e3ec: nop 
    func_001390a8();  // 1390a8                                // 0x0013e3f0: jal 0x1390a8
    /* nop */                                                   // 0x0013e3f4: nop 
    func_001410d8();  // 1410d8                                // 0x0013e3f8: jal 0x1410d8
    /* nop */                                                   // 0x0013e3fc: nop 
    return func_00140bd8();  // Tail call                        // 0x0013e40c: j 0x140b98
    sp = sp + 0x20;                                             // 0x0013e410: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x0013e414: nop 
label_0x13e418:
    return;                                                     // 0x0013e424: jr $ra
    sp = sp + 0x20;                                             // 0x0013e428: addiu $sp, $sp, 0x20
}