void func_00100358() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0xa0;                                            // 0x00100358: addiu $sp, $sp, -0xa0
    fp = 0x25 << 16;                                            // 0x00100364: lui $fp, 0x25
    s7 = 0x1f << 16;                                            // 0x0010036c: lui $s7, 0x1f
    s6 = 0x22 << 16;                                            // 0x00100374: lui $s6, 0x22
    s5 = 0x25 << 16;                                            // 0x0010037c: lui $s5, 0x25
    s4 = 0x1f << 16;                                            // 0x00100384: lui $s4, 0x1f
    s3 = 0x1f << 16;                                            // 0x0010038c: lui $s3, 0x1f
    s2 = 0x25 << 16;                                            // 0x00100394: lui $s2, 0x25
    s1 = 0x1f << 16;                                            // 0x0010039c: lui $s1, 0x1f
    v0 = 0x1f << 16;                                            // 0x001003a4: lui $v0, 0x1f
label_0x1003a8:
    PollSema();  // 0x114320                                    // 0x001003a8: jal 0x114320
    a0 = g_001edf20;  // Global at 0x001edf20                   // 0x001003ac: lw $a0, -0x20e0($v0)
    v1 = g_001edf58;  // Global at 0x001edf58                   // 0x001003b0: lw $v1, -0x20a8($s4)
    v0 = -1;                                                    // 0x001003b4: addiu $v0, $zero, -1
    if (v1 != v0) goto label_0x1003dc;                          // 0x001003b8: bne $v1, $v0, 0x1003dc
    v0 = g_001edf10;  // Global at 0x001edf10                   // 0x001003bc: lw $v0, -0x20f0($s7)
    g_001edf34 = 0;  // Global at 0x001edf34                    // 0x001003c0: sw $zero, -0x20cc($s3)
    v0 = 0x1f << 16;                                            // 0x001003c4: lui $v0, 0x1f
    g_001edf58 = 0;  // Global at 0x001edf58                    // 0x001003c8: sw $zero, -0x20a8($s4)
    g_001edf14 = 0;  // Global at 0x001edf14                    // 0x001003cc: sw $zero, -0x20ec($v0)
    TerminateThread();  // 0x114120                             // 0x001003d0: jal 0x114120
    g_0024b714 = 0;  // Global at 0x0024b714                    // 0x001003d4: sw $zero, -0x48ec($fp)
    v0 = g_001edf10;  // Global at 0x001edf10                   // 0x001003d8: lw $v0, -0x20f0($s7)
label_0x1003dc:
    if (v0 <= 0) goto label_0x1003f0;                           // 0x001003dc: blez $v0, 0x1003f0
    a0 = &str_0021fd00;  // "Libcdvd bind err CdSearchFile\n"   // 0x001003e0: addiu $a0, $s6, -0x300
    a1 = g_0024b700;  // Global at 0x0024b700                   // 0x001003e4: lw $a1, -0x4900($s2)
    func_00116508();  // 116508                                // 0x001003e8: jal 0x116508
    a2 = g_001edf5c;  // Global at 0x001edf5c                   // 0x001003ec: lw $a2, -0x20a4($s1)
label_0x1003f0:
    v1 = g_0024b700;  // Global at 0x0024b700                   // 0x001003f0: lw $v1, -0x4900($s2)
    if (v1 == 0) goto label_0x10041c;                           // 0x001003f4: beqz $v1, 0x10041c
    /* nop */                                                   // 0x001003f8: nop 
    v0 = g_001edf5c;  // Global at 0x001edf5c                   // 0x001003fc: lw $v0, -0x20a4($s1)
    if (v0 == 0) goto label_0x10041c;                           // 0x00100400: beqz $v0, 0x10041c
    /* nop */                                                   // 0x00100404: nop 
    gp = g_0024b704;  // Global at 0x0024b704                   // 0x0010040c: lw $gp, -0x48fc($s5)
    /* call function at address in v1 */                        // 0x00100410: jalr $v1
    a0 = g_001edf5c;  // Global at 0x001edf5c                   // 0x00100414: lw $a0, -0x20a4($s1)
label_0x10041c:
    g_001edf34 = 0;  // Global at 0x001edf34                    // 0x0010041c: sw $zero, -0x20cc($s3)
    goto label_0x1003a8;                                        // 0x00100420: b 0x1003a8
    v0 = 0x1f << 16;                                            // 0x00100424: lui $v0, 0x1f
    sp = sp + -0x60;                                            // 0x00100428: addiu $sp, $sp, -0x60
    s4 = 0x1f << 16;                                            // 0x00100434: lui $s4, 0x1f
    s3 = 1;                                                     // 0x00100444: addiu $s3, $zero, 1
    a0 = g_001edf14;  // Global at 0x001edf14                   // 0x00100450: lw $a0, -0x20ec($s4)
    if (a0 != 0) goto label_0x1004c4;                           // 0x00100458: bnez $a0, 0x1004c4
    ReferThreadStatus();  // 0x1141d0                           // 0x00100460: jal 0x1141d0
    /* nop */                                                   // 0x00100464: nop 
    v1 = 0x25 << 16;                                            // 0x00100468: lui $v1, 0x25
    a1 = 0x25 << 16;                                            // 0x0010046c: lui $a1, 0x25
    g_0024b718 = v0;  // Global at 0x0024b718                   // 0x00100470: sw $v0, -0x48e8($v1)
    iReferThreadStatus();  // 0x1141e0                          // 0x00100478: jal 0x1141e0
    a1 = a1 + -0x48e0;                                          // 0x0010047c: addiu $a1, $a1, -0x48e0
    v1 = 0x25 << 16;                                            // 0x00100480: lui $v1, 0x25
    v0 = 0x10 << 16;                                            // 0x00100484: lui $v0, 0x10
    v1 = v1 + -0x48b0;                                          // 0x00100488: addiu $v1, $v1, -0x48b0
    v0 = v0 + 0x358;                                            // 0x0010048c: addiu $v0, $v0, 0x358
    g_0024b75c = s0;  // Global at 0x0024b75c                   // 0x00100490: sw $s0, 0xc($v1)
    g_0024b754 = v0;  // Global at 0x0024b754                   // 0x00100498: sw $v0, 4($v1)
    g_0024b758 = s2;  // Global at 0x0024b758                   // 0x0010049c: sw $s2, 8($v1)
    g_0024b764 = s1;  // Global at 0x0024b764                   // 0x001004a0: sw $s1, 0x14($v1)
    DeleteThread();  // 0x1140e0                                // 0x001004a4: jal 0x1140e0
    g_0024b760 = 0;  // Global at 0x0024b760                    // 0x001004a8: sw $zero, 0x10($v1)
    g_001edf14 = v0;  // Global at 0x001edf14                   // 0x001004b0: sw $v0, -0x20ec($s4)
    ExitDeleteThread();  // 0x114100                            // 0x001004b4: jal 0x114100
    goto label_0x1004d4;                                        // 0x001004bc: b 0x1004d4
label_0x1004c4:
    iChangeThreadPriority();  // 0x114170                       // 0x001004c8: jal 0x114170
label_0x1004d4:
    return;                                                     // 0x001004ec: jr $ra
    sp = sp + 0x60;                                             // 0x001004f0: addiu $sp, $sp, 0x60
}