void func_00189470() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x90;                                            // 0x00189470: addiu $sp, $sp, -0x90
    v0 = g_00281298;  // Global at 0x00281298                   // 0x001894a4: lw $v0, 0($s0)
    v0 = (v0 < 0x2081) ? 1 : 0;                                 // 0x001894a8: slti $v0, $v0, 0x2081
    if (v0 != 0) goto label_0x1894c8;                           // 0x001894ac: bnez $v0, 0x1894c8
    a0 = 0x23 << 16;                                            // 0x001894b4: lui $a0, 0x23
    func_001896c8();  // 1896c8                                // 0x001894b8: jal 0x1896c8
    a0 = &str_0022a260;  // "dbcman : SendData3 BUSY\n"         // 0x001894bc: addiu $a0, $a0, -0x5da0
    goto label_0x1895ac;                                        // 0x001894c0: b 0x1895ac
label_0x1894c8:
    s5 = 0x28 << 16;                                            // 0x001894c8: lui $s5, 0x28
    s3 = 0x28 << 16;                                            // 0x001894cc: lui $s3, 0x28
    PollSema();  // 0x114320                                    // 0x001894d0: jal 0x114320
    a0 = g_00284800;  // Global at 0x00284800                   // 0x001894d4: lw $a0, 0x4800($s5)
    g_00282640 = s2;  // Global at 0x00282640                   // 0x001894d8: sw $s2, 0x2640($s3)
    a0 = s3 + 0x2640;                                           // 0x001894dc: addiu $a0, $s3, 0x2640
    g_00282644 = s1;  // Global at 0x00282644                   // 0x001894e0: sw $s1, 4($a0)
    v0 = g_00281298;  // Global at 0x00281298                   // 0x001894e4: lw $v0, 0($s0)
    g_00282648 = v0;  // Global at 0x00282648                   // 0x001894e8: sw $v0, 8($a0)
    v1 = g_00281298;  // Global at 0x00281298                   // 0x001894ec: lw $v1, 0($s0)
    if (v1 <= 0) goto label_0x189530;                           // 0x001894f0: blez $v1, 0x189530
    a2 = a0 + 0xc;                                              // 0x001894f8: addiu $a2, $a0, 0xc
    a3 = 0x28 << 16;                                            // 0x001894fc: lui $a3, 0x28
    v0 = s4 + a1;                                               // 0x00189500: addu $v0, $s4, $a1
    /* nop */                                                   // 0x00189504: nop 
label_0x189508:
    a0 = a2 + a1;                                               // 0x00189508: addu $a0, $a2, $a1
    v1 = *(uint8_t*)(v0);                                       // 0x0018950c: lbu $v1, 0($v0)
    a1 = a1 + 1;                                                // 0x00189510: addiu $a1, $a1, 1
    g_00282640 = v1;  // Global at 0x00282640                   // 0x00189514: sb $v1, 0($a0)
    v0 = g_00281298;  // Global at 0x00281298                   // 0x00189518: lw $v0, 0($s0)
    v0 = (a1 < v0) ? 1 : 0;                                     // 0x0018951c: slt $v0, $a1, $v0
    if (v0 != 0) goto label_0x189508;                           // 0x00189520: bnez $v0, 0x189508
    v0 = s4 + a1;                                               // 0x00189524: addu $v0, $s4, $a1
    goto label_0x189538;                                        // 0x00189528: b 0x189538
    s0 = a3 + 0x1298;                                           // 0x0018952c: addiu $s0, $a3, 0x1298
label_0x189530:
    a3 = 0x28 << 16;                                            // 0x00189530: lui $a3, 0x28
    s0 = a3 + 0x1298;                                           // 0x00189534: addiu $s0, $a3, 0x1298
label_0x189538:
    func_001178a0();  // 1178a0                                // 0x00189538: jal 0x1178a0
    v1 = 1;                                                     // 0x00189540: addiu $v1, $zero, 1
    if (v0 != v1) goto label_0x189560;                          // 0x00189544: bne $v0, $v1, 0x189560
    a3 = s3 + 0x2640;                                           // 0x00189548: addiu $a3, $s3, 0x2640
    a0 = 0x23 << 16;                                            // 0x0018954c: lui $a0, 0x23
    func_001896c8();  // 1896c8                                // 0x00189550: jal 0x1896c8
    a0 = &str_0022a288;  // "sceDbcReceiveData: rpc error\n"    // 0x00189554: addiu $a0, $a0, -0x5d78
    goto label_0x189590;                                        // 0x00189558: b 0x189590
    /* nop */                                                   // 0x0018955c: nop 
label_0x189560:
    a1 = 0x8000 << 16;                                          // 0x00189560: lui $a1, 0x8000
    local_0 = 0;                                                // 0x0018956c: sw $zero, 0($sp)
    a1 = a1 | 0x131c;                                           // 0x00189570: ori $a1, $a1, 0x131c
    a2 = 1;                                                     // 0x00189574: addiu $a2, $zero, 1
    t0 = 0x2090;                                                // 0x00189578: addiu $t0, $zero, 0x2090
    func_001176a8();  // 1176a8                                // 0x00189580: jal 0x1176a8
    t2 = 0x2090;                                                // 0x00189584: addiu $t2, $zero, 0x2090
    if (v0 >= 0) goto label_0x1895a0;                           // 0x00189588: bgez $v0, 0x1895a0
    /* nop */                                                   // 0x0018958c: nop 
label_0x189590:
    iSignalSema();  // 0x114300                                 // 0x00189590: jal 0x114300
    a0 = g_00284800;  // Global at 0x00284800                   // 0x00189594: lw $a0, 0x4800($s5)
    goto label_0x1895ac;                                        // 0x00189598: b 0x1895ac
label_0x1895a0:
    iSignalSema();  // 0x114300                                 // 0x001895a0: jal 0x114300
    a0 = g_00284800;  // Global at 0x00284800                   // 0x001895a4: lw $a0, 0x4800($s5)
    v0 = 1;                                                     // 0x001895a8: addiu $v0, $zero, 1
label_0x1895ac:
    return;                                                     // 0x001895cc: jr $ra
    sp = sp + 0x90;                                             // 0x001895d0: addiu $sp, $sp, 0x90
}