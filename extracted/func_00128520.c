void func_00128520() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4, local_50;
    
    sp = sp + -0x50;                                            // 0x00128520: addiu $sp, $sp, -0x50
    if (s4 != 0) goto label_0x128578;                           // 0x00128560: bnez $s4, 0x128578
    local_0 = t0;                                               // 0x00128564: sw $t0, 0($sp)
    a0 = 0x22 << 16;                                            // 0x00128568: lui $a0, 0x22
    goto label_0x128588;                                        // 0x0012856c: b 0x128588
    a0 = &str_00222550;  // "E1110702:'tbsize' <= 0.(load partition)" // 0x00128570: addiu $a0, $a0, 0x2550
    /* nop */                                                   // 0x00128574: nop 
label_0x128578:
    if (s2 > 0) goto label_0x128598;                            // 0x00128578: bgtz $s2, 0x128598
    /* nop */                                                   // 0x0012857c: nop 
    a0 = 0x22 << 16;                                            // 0x00128580: lui $a0, 0x22
    a0 = &str_00222580;  // "E0042401:multi-load partition.(load partition)" // 0x00128584: addiu $a0, $a0, 0x2580
label_0x128588:
    func_00127de8();  // 0x127d90                                // 0x00128588: jal 0x127d90
    /* nop */                                                   // 0x0012858c: nop 
    goto label_0x1286f4;                                        // 0x00128590: b 0x1286f4
    v0 = -3;                                                    // 0x00128594: addiu $v0, $zero, -3
label_0x128598:
    func_001282e0();  // 0x128298                                // 0x00128598: jal 0x128298
    if (v0 < 0) goto label_0x1286f8;                            // 0x001285a0: bltzl $v0, 0x1286f8
    v0 = 0x1f << 16;                                            // 0x001285a8: lui $v0, 0x1f
    a3 = v0 + 0x3834;                                           // 0x001285ac: addiu $a3, $v0, 0x3834
    v1 = g_001f3834;  // Global at 0x001f3834                   // 0x001285b0: lw $v1, 0($a3)
    if (v1 < 0) goto label_0x1285c8;                            // 0x001285b4: bltz $v1, 0x1285c8
    a0 = 0x22 << 16;                                            // 0x001285b8: lui $a0, 0x22
    goto label_0x128668;                                        // 0x001285bc: b 0x128668
    a0 = &str_002225a8;  // "E9040804:can't open file.(load partition)" // 0x001285c0: addiu $a0, $a0, 0x25a8
    /* nop */                                                   // 0x001285c4: nop 
label_0x1285c8:
    g_001f3834 = s3;  // Global at 0x001f3834                   // 0x001285c8: sw $s3, 0($a3)
    v0 = 0x1f << 16;                                            // 0x001285cc: lui $v0, 0x1f
    a2 = 0x11c;                                                 // 0x001285d8: addiu $a2, $zero, 0x11c
    func_00107d30();  // 0x107c70                                // 0x001285dc: jal 0x107c70
    g_001f382c = 0;  // Global at 0x001f382c                    // 0x001285e0: sw $zero, 0x382c($v0)
    v1 = s3 << 2;                                               // 0x001285e4: sll $v1, $s3, 2
    at = 0x1f << 16;                                            // 0x001285e8: lui $at, 0x1f
    at = at + v1;                                               // 0x001285ec: addu $at, $at, $v1
    g_001f3300 = s1;  // Global at 0x001f3300                   // 0x001285f0: sw $s1, 0x3300($at)
    if (s0 != 0) goto label_0x128648;                           // 0x001285f4: bnez $s0, 0x128648
    *(uint32_t*)(s1) = 0;                                       // 0x001285f8: sw $zero, 0($s1)
    func_00128fa0();  // 0x128f00                                // 0x00128600: jal 0x128f00
    s3 = 0x1f << 16;                                            // 0x00128608: lui $s3, 0x1f
    if (v0 == 0) goto label_0x128660;                           // 0x0012860c: beqz $v0, 0x128660
    g_001f3830 = v0;  // Global at 0x001f3830                   // 0x00128610: sw $v0, 0x3830($s3)
    a2 = s1 + 0x10;                                             // 0x0012861c: addiu $a2, $s1, 0x10
    t0 = sp + 4;                                                // 0x00128624: addiu $t0, $sp, 4
    func_00129c30();  // 0x129ad8                                // 0x00128628: jal 0x129ad8
    t1 = sp + 8;                                                // 0x0012862c: addiu $t1, $sp, 8
    if (v0 < 0) goto label_0x1286f8;                            // 0x00128630: bltzl $v0, 0x1286f8
    v0 = local_4;                                               // 0x00128638: lw $v0, 4($sp)
    goto label_0x128688;                                        // 0x0012863c: b 0x128688
    *(uint32_t*)((s1) + 0x114) = v0;                            // 0x00128640: sw $v0, 0x114($s1)
    /* nop */                                                   // 0x00128644: nop 
label_0x128648:
    a1 = local_0;                                               // 0x00128648: lw $a1, 0($sp)
    func_00128e28();  // 0x128d88                                // 0x00128650: jal 0x128d88
    s3 = 0x1f << 16;                                            // 0x00128654: lui $s3, 0x1f
    if (v0 != 0) goto label_0x128678;                           // 0x00128658: bnez $v0, 0x128678
    g_001f3830 = v0;  // Global at 0x001f3830                   // 0x0012865c: sw $v0, 0x3830($s3)
label_0x128660:
    a0 = 0x22 << 16;                                            // 0x00128660: lui $a0, 0x22
    a0 = &str_002225d8;  // "E0041303:illigal parameter 'ptid'.(ADXF_GetPtStat)" // 0x00128664: addiu $a0, $a0, 0x25d8
label_0x128668:
    func_00127de8();  // 0x127d90                                // 0x00128668: jal 0x127d90
    /* nop */                                                   // 0x0012866c: nop 
    goto label_0x1286f4;                                        // 0x00128670: b 0x1286f4
    v0 = -1;                                                    // 0x00128674: addiu $v0, $zero, -1
label_0x128678:
    a0 = s1 + 0x10;                                             // 0x0012867c: addiu $a0, $s1, 0x10
    func_0010b460();  // 0x10b2a0                                // 0x00128680: jal 0x10b2a0
    a2 = 0x100;                                                 // 0x00128684: addiu $a2, $zero, 0x100
label_0x128688:
    v0 = local_50;                                              // 0x00128688: lw $v0, 0x50($sp)
    v1 = s2 + 0x7ff;                                            // 0x0012868c: addiu $v1, $s2, 0x7ff
    *(uint8_t*)((s1) + 0xe) = 0;                                // 0x00128690: sb $zero, 0xe($s1)
    s3 = s3 + 0x3830;                                           // 0x00128694: addiu $s3, $s3, 0x3830
    *(uint8_t*)((s1) + 0xf) = v0;                               // 0x00128698: sb $v0, 0xf($s1)
    v0 = (s2 < 0) ? 1 : 0;                                      // 0x0012869c: slti $v0, $s2, 0
    if (v0 != 0) s2 = v1;                                       // 0x001286a0: movn $s2, $v1, $v0
    v0 = 0x1f << 16;                                            // 0x001286a4: lui $v0, 0x1f
    a0 = local_0;                                               // 0x001286a8: lw $a0, 0($sp)
    a3 = s2 >> 0xb;                                             // 0x001286ac: sra $a3, $s2, 0xb
    v1 = 0x1f << 16;                                            // 0x001286b0: lui $v1, 0x1f
    *(uint32_t*)((s1) + 0x110) = a0;                            // 0x001286b8: sw $a0, 0x110($s1)
    a0 = g_001f3830;  // Global at 0x001f3830                   // 0x001286c0: lw $a0, 0($s3)
    g_001f3838 = s4;  // Global at 0x001f3838                   // 0x001286c4: sw $s4, 0x3838($v0)
    func_001294a0();  // 0x129460                                // 0x001286c8: jal 0x129460
    g_001f383c = a3;  // Global at 0x001f383c                   // 0x001286cc: sw $a3, 0x383c($v1)
    if (s0 >= 0) goto label_0x1286f0;                           // 0x001286d4: bgezl $s0, 0x1286f0
    *(uint32_t*)((s1) + 8) = 0;                                 // 0x001286d8: sw $zero, 8($s1)
    func_001290c8();  // 0x129010                                // 0x001286dc: jal 0x129010
    a0 = g_001f3830;  // Global at 0x001f3830                   // 0x001286e0: lw $a0, 0($s3)
    goto label_0x1286f4;                                        // 0x001286e4: b 0x1286f4
    /* nop */                                                   // 0x001286ec: nop 
label_0x1286f0:
label_0x1286f4:
label_0x1286f8:
    return;                                                     // 0x00128714: jr $ra
    sp = sp + 0x50;                                             // 0x00128718: addiu $sp, $sp, 0x50
}