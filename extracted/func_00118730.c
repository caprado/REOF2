void func_00118730() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_120, local_14, local_18, local_24, local_30;
    
    sp = sp + -0x150;                                           // 0x00118730: addiu $sp, $sp, -0x150
    fp = 0x25 << 16;                                            // 0x00118754: lui $fp, 0x25
    s1 = fp + -0x1e40;                                          // 0x0011875c: addiu $s1, $fp, -0x1e40
    func_00118360();  // 0x118330                                // 0x00118784: jal 0x118330
    v1 = 0x1f << 16;                                            // 0x0011878c: lui $v1, 0x1f
    v0 = g_001f03dc;  // Global at 0x001f03dc                   // 0x00118790: lw $v0, 0x3dc($v1)
    if (v0 != 0) goto label_0x1187a4;                           // 0x00118794: bnez $v0, 0x1187a4
    /* nop */                                                   // 0x00118798: nop 
    func_00118668();  // 0x118460                                // 0x0011879c: jal 0x118460
    /* nop */                                                   // 0x001187a0: nop 
label_0x1187a4:
    func_001186f8();  // 0x118668                                // 0x001187a4: jal 0x118668
    /* nop */                                                   // 0x001187a8: nop 
    if (v0 == 0) goto label_0x1187c8;                           // 0x001187ac: beqz $v0, 0x1187c8
    /* nop */                                                   // 0x001187b0: nop 
    func_00118418();  // 0x118360                                // 0x001187b4: jal 0x118360
    /* nop */                                                   // 0x001187b8: nop 
    v0 = 0xfffe << 16;                                          // 0x001187bc: lui $v0, 0xfffe
    goto label_0x118984;                                        // 0x001187c0: b 0x118984
    v0 = v0 | 0xfffc;                                           // 0x001187c4: ori $v0, $v0, 0xfffc
label_0x1187c8:
    func_00117eb8();  // 0x117e30                                // 0x001187c8: jal 0x117e30
    /* nop */                                                   // 0x001187cc: nop 
    /* bnezl $s3, 0x1187ec */                                   // 0x001187d4: bnezl $s3, 0x1187ec
    v1 = g_001f0000;  // Global at 0x001f0000                   // 0x001187d8: lbu $v1, 0($s0)
    func_00118418();  // 0x118360                                // 0x001187dc: jal 0x118360
    /* nop */                                                   // 0x001187e0: nop 
    goto label_0x118984;                                        // 0x001187e4: b 0x118984
    v0 = -0x13;                                                 // 0x001187e8: addiu $v0, $zero, -0x13
    a3 = local_120;                                             // 0x001187f0: lw $a3, 0x120($sp)
    v0 = v1 << 0x18;                                            // 0x001187f4: sll $v0, $v1, 0x18
    if (v0 == 0) goto label_0x118844;                           // 0x001187f8: beqz $v0, 0x118844
    g_0024e1d4 = v1;  // Global at 0x0024e1d4                   // 0x001187fc: sb $v1, 0x14($s1)
    a2 = 0x25 << 16;                                            // 0x00118800: lui $a2, 0x25
    s2 = sp + 0x30;                                             // 0x00118804: addiu $s2, $sp, 0x30
    s6 = 0x25 << 16;                                            // 0x00118808: lui $s6, 0x25
    s4 = 0x25 << 16;                                            // 0x0011880c: lui $s4, 0x25
    a1 = a1 + 1;                                                // 0x00118810: addiu $a1, $a1, 1
    /* nop */                                                   // 0x00118814: nop 
    v0 = (a1 < 0x400) ? 1 : 0;                                  // 0x00118818: slti $v0, $a1, 0x400
    if (v0 == 0) goto label_0x118854;                           // 0x0011881c: beqz $v0, 0x118854
    v0 = s0 + a1;                                               // 0x00118820: addu $v0, $s0, $a1
    a0 = s1 + a1;                                               // 0x00118824: addu $a0, $s1, $a1
    v1 = g_fffe0000;  // Global at 0xfffe0000                   // 0x00118828: lbu $v1, 0($v0)
    g_0024f8d4 = v1;  // Global at 0x0024f8d4                   // 0x0011882c: sb $v1, 0x14($a0)
    v1 = v1 << 0x18;                                            // 0x00118830: sll $v1, $v1, 0x18
    /* bnezl $v1, 0x118818 */                                   // 0x00118834: bnezl $v1, 0x118818
    a1 = a1 + 1;                                                // 0x00118838: addiu $a1, $a1, 1
    goto label_0x118858;                                        // 0x0011883c: b 0x118858
    v0 = 0x400;                                                 // 0x00118840: addiu $v0, $zero, 0x400
label_0x118844:
    a2 = 0x25 << 16;                                            // 0x00118844: lui $a2, 0x25
    s2 = sp + 0x30;                                             // 0x00118848: addiu $s2, $sp, 0x30
    s6 = 0x25 << 16;                                            // 0x0011884c: lui $s6, 0x25
    s4 = 0x25 << 16;                                            // 0x00118850: lui $s4, 0x25
label_0x118854:
    v0 = 0x400;                                                 // 0x00118854: addiu $v0, $zero, 0x400
label_0x118858:
    if (a1 == v0) goto label_0x118860;                          // 0x00118858: beql $a1, $v0, 0x118860
    g_0024e5d3 = 0;  // Global at 0x0024e5d3                    // 0x0011885c: sb $zero, 0x413($s1)
label_0x118860:
    v0 = a2 + -0x940;                                           // 0x00118860: addiu $v0, $a2, -0x940
    v1 = 0x7fff << 16;                                          // 0x00118864: lui $v1, 0x7fff
    v0 = s3 - v0;                                               // 0x00118868: subu $v0, $s3, $v0
    v1 = v1 | 0xffff;                                           // 0x0011886c: ori $v1, $v1, 0xffff
    s5 = v0 >> 4;                                               // 0x00118870: sra $s5, $v0, 4
    v1 = s7 & v1;                                               // 0x00118874: and $v1, $s7, $v1
    g_0024e1cc = v1;  // Global at 0x0024e1cc                   // 0x00118878: sw $v1, 0xc($s1)
    v0 = 1;                                                     // 0x0011887c: addiu $v0, $zero, 1
    g_0024e1d0 = a3;  // Global at 0x0024e1d0                   // 0x00118880: sw $a3, 0x10($s1)
    a0 = sp + 0x10;                                             // 0x00118884: addiu $a0, $sp, 0x10
    local_14 = v0;                                              // 0x00118888: sw $v0, 0x14($sp)
    s4 = s4 + -0x1200;                                          // 0x0011888c: addiu $s4, $s4, -0x1200
    g_0024e5d4 = s5;  // Global at 0x0024e5d4                   // 0x00118890: sw $s5, 0x414($s1)
    local_18 = 0;                                               // 0x00118894: sw $zero, 0x18($sp)
    DeleteSema();  // 0x1142e0                                  // 0x00118898: jal 0x1142e0
    local_24 = 0;                                               // 0x0011889c: sw $zero, 0x24($sp)
    g_0024e1c4 = s2;  // Global at 0x0024e1c4                   // 0x001188a4: sw $s2, 4($s1)
    v0 = 4;                                                     // 0x001188a8: addiu $v0, $zero, 4
    g_0024e1c0 = s0;  // Global at 0x0024e1c0                   // 0x001188ac: sw $s0, 0($s1)
    g_0024e1c8 = v0;  // Global at 0x0024e1c8                   // 0x001188b0: sw $v0, 8($s1)
    a0 = s6 + -0x740;                                           // 0x001188b4: addiu $a0, $s6, -0x740
    a3 = fp + -0x1e40;                                          // 0x001188b8: addiu $a3, $fp, -0x1e40
    local_0 = 0;                                                // 0x001188c0: sw $zero, 0($sp)
    t0 = 0x418;                                                 // 0x001188c8: addiu $t0, $zero, 0x418
    t2 = 4;                                                     // 0x001188d0: addiu $t2, $zero, 4
    func_001178a0();  // 0x1176a8                                // 0x001188d4: jal 0x1176a8
    if (v0 >= 0) goto label_0x1188fc;                           // 0x001188dc: bgez $v0, 0x1188fc
    v0 = 0x2000 << 16;                                          // 0x001188e0: lui $v0, 0x2000
    SignalSema();  // 0x1142f0                                  // 0x001188e4: jal 0x1142f0
    func_00118418();  // 0x118360                                // 0x001188ec: jal 0x118360
    /* nop */                                                   // 0x001188f0: nop 
    goto label_0x118984;                                        // 0x001188f4: b 0x118984
    v0 = -0xb;                                                  // 0x001188f8: addiu $v0, $zero, -0xb
label_0x1188fc:
    v0 = s4 | v0;                                               // 0x001188fc: or $v0, $s4, $v0
    func_00118418();  // 0x118360                                // 0x00118900: jal 0x118360
    s1 = g_20000000;  // Global at 0x20000000                   // 0x00118904: lw $s1, 0($v0)
    if (s1 != 0) goto label_0x118920;                           // 0x00118908: bnez $s1, 0x118920
    /* nop */                                                   // 0x0011890c: nop 
    SignalSema();  // 0x1142f0                                  // 0x00118910: jal 0x1142f0
    goto label_0x118984;                                        // 0x00118918: b 0x118984
    v0 = -0xb;                                                  // 0x0011891c: addiu $v0, $zero, -0xb
label_0x118920:
    PollSema();  // 0x114320                                    // 0x00118920: jal 0x114320
    SignalSema();  // 0x1142f0                                  // 0x00118928: jal 0x1142f0
    v1 = local_30;                                              // 0x00118930: lw $v1, 0x30($sp)
    if (v1 >= 0) goto label_0x118958;                           // 0x00118934: bgez $v1, 0x118958
    s0 = 0x1f << 16;                                            // 0x00118938: lui $s0, 0x1f
    PollSema();  // 0x114320                                    // 0x0011893c: jal 0x114320
    a0 = g_001f03e8;  // Global at 0x001f03e8                   // 0x00118940: lw $a0, 0x3e8($s0)
    *(uint32_t*)((s3) + 4) = 0;                                 // 0x00118944: sw $zero, 4($s3)
    iSignalSema();  // 0x114300                                 // 0x00118948: jal 0x114300
    a0 = g_001f03e8;  // Global at 0x001f03e8                   // 0x0011894c: lw $a0, 0x3e8($s0)
    goto label_0x118984;                                        // 0x00118950: b 0x118984
    v0 = local_30;                                              // 0x00118954: lw $v0, 0x30($sp)
label_0x118958:
    PollSema();  // 0x114320                                    // 0x0011895c: jal 0x114320
    a0 = g_001f03e8;  // Global at 0x001f03e8                   // 0x00118960: lw $a0, 0x3e8($s0)
    v1 = *(int32_t*)((s3) + 4);                                 // 0x00118964: lw $v1, 4($s3)
    v0 = local_30;                                              // 0x00118968: lw $v0, 0x30($sp)
    a0 = g_001f03e8;  // Global at 0x001f03e8                   // 0x0011896c: lw $a0, 0x3e8($s0)
    v1 = v1 | s7;                                               // 0x00118970: or $v1, $v1, $s7
    *(uint32_t*)((s3) + 4) = v1;                                // 0x00118974: sw $v1, 4($s3)
    iSignalSema();  // 0x114300                                 // 0x00118978: jal 0x114300
    *(uint32_t*)(s3) = v0;                                      // 0x0011897c: sw $v0, 0($s3)
label_0x118984:
    return;                                                     // 0x001189ac: jr $ra
    sp = sp + 0x150;                                            // 0x001189b0: addiu $sp, $sp, 0x150
}