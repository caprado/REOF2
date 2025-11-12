void func_001486a8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_18, local_20, local_28, local_30, local_34, local_38;
    uint32_t local_3c, local_40, local_44, local_8;
    
    sp = sp + -0x20;                                            // 0x001486a8: addiu $sp, $sp, -0x20
    a1 = 0x20;                                                  // 0x001486ac: addiu $a1, $zero, 0x20
    func_00145818();  // 0x1456a8                                // 0x001486bc: jal 0x1456a8
    *(uint32_t*)((s0) + 0xec) = 0;                              // 0x001486c0: sw $zero, 0xec($s0)
    v0 = (unsigned)v1 >> 8;                                     // 0x001486c8: srl $v0, $v1, 8
    v0 = v0 & 0xfff;                                            // 0x001486cc: andi $v0, $v0, 0xfff
    v1 = (unsigned)v1 >> 0x14;                                  // 0x001486d0: srl $v1, $v1, 0x14
    *(uint32_t*)((s0) + 0x13c) = v1;                            // 0x001486d4: sw $v1, 0x13c($s0)
    a0 = (v0 < 0xaf1) ? 1 : 0;                                  // 0x001486d8: slti $a0, $v0, 0xaf1
    if (a0 != 0) goto label_0x1486f4;                           // 0x001486dc: bnez $a0, 0x1486f4
    *(uint32_t*)((s0) + 0x140) = v0;                            // 0x001486e0: sw $v0, 0x140($s0)
    a1 = 0x22 << 16;                                            // 0x001486e4: lui $a1, 0x22
    func_00148588();  // 0x148530                                // 0x001486ec: jal 0x148530
    a1 = &str_002269c8;  // "_chroma_format needs to be 1: 420" // 0x001486f0: addiu $a1, $a1, 0x69c8
label_0x1486f4:
    func_00145818();  // 0x1456a8                                // 0x001486f8: jal 0x1456a8
    a1 = 0x1e;                                                  // 0x001486fc: addiu $a1, $zero, 0x1e
    v0 = (unsigned)v1 >> 1;                                     // 0x00148708: srl $v0, $v1, 1
    a1 = 1;                                                     // 0x0014870c: addiu $a1, $zero, 1
    v1 = (unsigned)v1 >> 0xc;                                   // 0x00148710: srl $v1, $v1, 0xc
    v0 = v0 & 0x3ff;                                            // 0x00148714: andi $v0, $v0, 0x3ff
    *(uint32_t*)((s0) + 0x14c) = v1;                            // 0x00148718: sw $v1, 0x14c($s0)
    func_00145818();  // 0x1456a8                                // 0x0014871c: jal 0x1456a8
    *(uint32_t*)((s0) + 0x150) = v0;                            // 0x00148720: sw $v0, 0x150($s0)
    if (v0 == 0) goto label_0x148750;                           // 0x00148724: beqz $v0, 0x148750
    *(uint32_t*)((s0) + 0x858) = v0;                            // 0x00148728: sw $v0, 0x858($s0)
    func_00145080();  // 0x144f18                                // 0x0014872c: jal 0x144f18
    func_00144f18();  // 0x144ee8                                // 0x00148738: jal 0x144ee8
    a1 = 0x5000 << 16;                                          // 0x0014873c: lui $a1, 0x5000
    func_00145080();  // 0x144f18                                // 0x00148740: jal 0x144f18
    goto label_0x148768;                                        // 0x00148748: b 0x148768
label_0x148750:
    a2 = 0x21 << 16;                                            // 0x00148750: lui $a2, 0x21
    a2 = a2 + 0xd80;                                            // 0x00148758: addiu $a2, $a2, 0xd80
    func_00148c38();  // 0x148b58                                // 0x0014875c: jal 0x148b58
    a1 = 0x5000 << 16;                                          // 0x00148760: lui $a1, 0x5000
label_0x148768:
    func_00145818();  // 0x1456a8                                // 0x00148768: jal 0x1456a8
    a1 = 1;                                                     // 0x0014876c: addiu $a1, $zero, 1
    if (v0 == 0) goto label_0x14879c;                           // 0x00148770: beqz $v0, 0x14879c
    *(uint32_t*)((s0) + 0x85c) = v0;                            // 0x00148774: sw $v0, 0x85c($s0)
    func_00145080();  // 0x144f18                                // 0x00148778: jal 0x144f18
    func_00144f18();  // 0x144ee8                                // 0x00148784: jal 0x144ee8
    a1 = 0x5800 << 16;                                          // 0x00148788: lui $a1, 0x5800
    func_00145080();  // 0x144f18                                // 0x0014878c: jal 0x144f18
    goto label_0x1487b0;                                        // 0x00148794: b 0x1487b0
    /* nop */                                                   // 0x00148798: nop 
label_0x14879c:
    a2 = 0x21 << 16;                                            // 0x0014879c: lui $a2, 0x21
    a2 = a2 + 0xdc0;                                            // 0x001487a4: addiu $a2, $a2, 0xdc0
    func_00148c38();  // 0x148b58                                // 0x001487a8: jal 0x148b58
    a1 = 0x5800 << 16;                                          // 0x001487ac: lui $a1, 0x5800
label_0x1487b0:
    func_00145c10();  // 0x145ae8                                // 0x001487b0: jal 0x145ae8
    a0 = *(int32_t*)((s0) + 0x870);                             // 0x001487b8: lw $a0, 0x870($s0)
    goto label_0x1487d0;                                        // 0x001487c4: j 0x1487d0
    sp = sp + 0x20;                                             // 0x001487c8: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x001487cc: nop 
label_0x1487d0:
    sp = sp + -0xf0;                                            // 0x001487d0: addiu $sp, $sp, -0xf0
    fp = g_58000040;  // Global at 0x58000040                   // 0x00148800: lw $fp, 0x40($a1)
    a2 = *(int32_t*)((fp) + 0x860);                             // 0x00148804: lw $a2, 0x860($fp)
    /* bnezl $a2, 0x148838 */                                   // 0x00148808: bnezl $a2, 0x148838
    v0 = *(int32_t*)((fp) + 0x13c);                             // 0x0014880c: lw $v0, 0x13c($fp)
    v0 = 1;                                                     // 0x00148810: addiu $v0, $zero, 1
    v1 = 3;                                                     // 0x00148814: addiu $v1, $zero, 3
    a0 = 5;                                                     // 0x00148818: addiu $a0, $zero, 5
    *(uint32_t*)((fp) + 0x18c) = v1;                            // 0x0014881c: sw $v1, 0x18c($fp)
    *(uint32_t*)((fp) + 0x194) = v0;                            // 0x00148820: sw $v0, 0x194($fp)
    *(uint32_t*)((fp) + 0x15c) = a0;                            // 0x00148824: sw $a0, 0x15c($fp)
    *(uint32_t*)((fp) + 0x154) = v0;                            // 0x00148828: sw $v0, 0x154($fp)
    *(uint32_t*)((fp) + 0x158) = v0;                            // 0x0014882c: sw $v0, 0x158($fp)
    *(uint32_t*)((fp) + 0x1a0) = v0;                            // 0x00148830: sw $v0, 0x1a0($fp)
    v0 = *(int32_t*)((fp) + 0x13c);                             // 0x00148834: lw $v0, 0x13c($fp)
    v0 = v0 + 0xf;                                              // 0x00148838: addiu $v0, $v0, 0xf
    v0 = v0 >> 4;                                               // 0x0014883c: sra $v0, $v0, 4
    if (a2 == 0) goto label_0x148864;                           // 0x00148840: beqz $a2, 0x148864
    *(uint32_t*)((fp) + 0x144) = v0;                            // 0x00148844: sw $v0, 0x144($fp)
    v0 = *(int32_t*)((fp) + 0x154);                             // 0x00148848: lw $v0, 0x154($fp)
    if (v0 != 0) goto label_0x148868;                           // 0x0014884c: bnez $v0, 0x148868
    v0 = *(int32_t*)((fp) + 0x140);                             // 0x00148850: lw $v0, 0x140($fp)
    v0 = v0 + 0x1f;                                             // 0x00148854: addiu $v0, $v0, 0x1f
    v0 = v0 >> 5;                                               // 0x00148858: sra $v0, $v0, 5
    goto label_0x148870;                                        // 0x0014885c: b 0x148870
    v0 = v0 << 1;                                               // 0x00148860: sll $v0, $v0, 1
label_0x148864:
    v0 = *(int32_t*)((fp) + 0x140);                             // 0x00148864: lw $v0, 0x140($fp)
label_0x148868:
    v0 = v0 + 0xf;                                              // 0x00148868: addiu $v0, $v0, 0xf
    v0 = v0 >> 4;                                               // 0x0014886c: sra $v0, $v0, 4
label_0x148870:
    *(uint32_t*)((fp) + 0x148) = v0;                            // 0x00148870: sw $v0, 0x148($fp)
    s6 = v0 << 4;                                               // 0x00148874: sll $s6, $v0, 4
    v0 = *(int32_t*)((fp) + 0x144);                             // 0x00148878: lw $v0, 0x144($fp)
    v1 = g_58000000;  // Global at 0x58000000                   // 0x0014887c: lw $v1, 0($a1)
    s7 = v0 << 4;                                               // 0x00148880: sll $s7, $v0, 4
    if (s7 != v1) goto label_0x148898;                          // 0x00148884: bne $s7, $v1, 0x148898
    v0 = fp + 0x540;                                            // 0x00148888: addiu $v0, $fp, 0x540
    v0 = g_58000004;  // Global at 0x58000004                   // 0x0014888c: lw $v0, 4($a1)
    if (s6 == v0) goto label_0x148a48;                          // 0x00148890: beq $s6, $v0, 0x148a48
    v0 = fp + 0x540;                                            // 0x00148894: addiu $v0, $fp, 0x540
label_0x148898:
    g_58000004 = s6;  // Global at 0x58000004                   // 0x00148898: sw $s6, 4($a1)
    s0 = 0x180;                                                 // 0x0014889c: addiu $s0, $zero, 0x180
    g_58000000 = s7;  // Global at 0x58000000                   // 0x001488a0: sw $s7, 0($a1)
    local_44 = v0;                                              // 0x001488a8: sw $v0, 0x44($sp)
    s1 = fp + 0x120;                                            // 0x001488ac: addiu $s1, $fp, 0x120
    v0 = fp + 0x338;                                            // 0x001488b0: addiu $v0, $fp, 0x338
    local_30 = v0;                                              // 0x001488b8: sw $v0, 0x30($sp)
    s3 = fp + 0x200;                                            // 0x001488bc: addiu $s3, $fp, 0x200
    v0 = fp + 0x3a0;                                            // 0x001488c0: addiu $v0, $fp, 0x3a0
    local_34 = v0;                                              // 0x001488c8: sw $v0, 0x34($sp)
    s4 = fp + 0x268;                                            // 0x001488cc: addiu $s4, $fp, 0x268
    v0 = fp + 0x408;                                            // 0x001488d0: addiu $v0, $fp, 0x408
    s5 = fp + 0x2d0;                                            // 0x001488d4: addiu $s5, $fp, 0x2d0
    local_38 = v0;                                              // 0x001488d8: sw $v0, 0x38($sp)
    s2 = s6 >> 1;                                               // 0x001488dc: sra $s2, $s6, 1
    v0 = fp + 0x470;                                            // 0x001488e0: addiu $v0, $fp, 0x470
    s0 = (unsigned)s0 >> 8;                                     // 0x001488e4: srl $s0, $s0, 8
    local_3c = v0;                                              // 0x001488e8: sw $v0, 0x3c($sp)
    v0 = fp + 0x4d8;                                            // 0x001488ec: addiu $v0, $fp, 0x4d8
    func_00147da8();  // 0x147d98                                // 0x001488f0: jal 0x147d98
    local_40 = v0;                                              // 0x001488f4: sw $v0, 0x40($sp)
    func_00147e30();  // 0x147da8                                // 0x00148904: jal 0x147da8
    a3 = 0x40;                                                  // 0x00148908: addiu $a3, $zero, 0x40
    *(uint32_t*)((fp) + 0x114) = v0;                            // 0x0014890c: sw $v0, 0x114($fp)
    func_00147e30();  // 0x147da8                                // 0x0014891c: jal 0x147da8
    a3 = 0x40;                                                  // 0x00148920: addiu $a3, $zero, 0x40
    *(uint32_t*)((fp) + 0x118) = v0;                            // 0x00148924: sw $v0, 0x118($fp)
    func_00147e30();  // 0x147da8                                // 0x00148934: jal 0x147da8
    a3 = 0x40;                                                  // 0x00148938: addiu $a3, $zero, 0x40
    t0 = local_34;                                              // 0x0014893c: lw $t0, 0x34($sp)
    t1 = local_38;                                              // 0x00148944: lw $t1, 0x38($sp)
    t2 = local_3c;                                              // 0x0014894c: lw $t2, 0x3c($sp)
    t3 = local_40;                                              // 0x00148954: lw $t3, 0x40($sp)
    *(uint32_t*)((fp) + 0x11c) = v0;                            // 0x00148958: sw $v0, 0x11c($fp)
    v0 = local_44;                                              // 0x0014895c: lw $v0, 0x44($sp)
    a3 = local_30;                                              // 0x00148960: lw $a3, 0x30($sp)
    local_0 = v0;                                               // 0x00148964: sw $v0, 0($sp)
    v0 = *(int32_t*)((fp) + 0x114);                             // 0x00148968: lw $v0, 0x114($fp)
    local_8 = v0;                                               // 0x0014896c: sw $v0, 8($sp)
    v1 = *(int32_t*)((fp) + 0x118);                             // 0x00148970: lw $v1, 0x118($fp)
    local_10 = v1;                                              // 0x00148974: sw $v1, 0x10($sp)
    v0 = *(int32_t*)((fp) + 0x11c);                             // 0x00148978: lw $v0, 0x11c($fp)
    local_20 = s7;                                              // 0x0014897c: sw $s7, 0x20($sp)
    local_28 = s6;                                              // 0x00148980: sw $s6, 0x28($sp)
    func_00148b58();  // 0x148a78                                // 0x00148984: jal 0x148a78
    local_18 = v0;                                              // 0x00148988: sw $v0, 0x18($sp)
    func_001486a8();  // 0x148688                                // 0x00148994: jal 0x148688
    func_001486a8();  // 0x148688                                // 0x001489a4: jal 0x148688
    func_001486a8();  // 0x148688                                // 0x001489b4: jal 0x148688
    a0 = local_30;                                              // 0x001489bc: lw $a0, 0x30($sp)
    func_001486a8();  // 0x148688                                // 0x001489c4: jal 0x148688
    a0 = local_34;                                              // 0x001489cc: lw $a0, 0x34($sp)
    func_001486a8();  // 0x148688                                // 0x001489d4: jal 0x148688
    a0 = local_38;                                              // 0x001489dc: lw $a0, 0x38($sp)
    func_001486a8();  // 0x148688                                // 0x001489e4: jal 0x148688
    a0 = local_3c;                                              // 0x001489ec: lw $a0, 0x3c($sp)
    func_001486a8();  // 0x148688                                // 0x001489f4: jal 0x148688
    a0 = local_40;                                              // 0x001489fc: lw $a0, 0x40($sp)
    func_001486a8();  // 0x148688                                // 0x00148a04: jal 0x148688
    a0 = local_44;                                              // 0x00148a14: lw $a0, 0x44($sp)
    return func_001486a8();  // Tail call                        // 0x00148a40: j 0x148688
    sp = sp + 0xf0;                                             // 0x00148a44: addiu $sp, $sp, 0xf0
label_0x148a48:
    return;                                                     // 0x00148a70: jr $ra
    sp = sp + 0xf0;                                             // 0x00148a74: addiu $sp, $sp, 0xf0
}