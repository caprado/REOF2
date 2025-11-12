void func_001013a8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0xa0;                                            // 0x001013a8: addiu $sp, $sp, -0xa0
    s6 = 0x1f << 16;                                            // 0x001013b0: lui $s6, 0x1f
    v0 = g_001edf10;  // Global at 0x001edf10                   // 0x001013b8: lw $v0, -0x20f0($s6)
    if (v0 <= 0) goto label_0x1013ec;                           // 0x001013d8: blez $v0, 0x1013ec
    a0 = 0x22 << 16;                                            // 0x001013e0: lui $a0, 0x22
    func_00116598();  // 0x116508                                // 0x001013e4: jal 0x116508
    a0 = &str_0021fe68;  // "Libcdvd bind err CdDiskReady\n"    // 0x001013e8: addiu $a0, $a0, -0x198
label_0x1013ec:
    func_00100668();  // 0x1005b0                                // 0x001013ec: jal 0x1005b0
    s3 = 0x1f << 16;                                            // 0x001013f0: lui $s3, 0x1f
    a0 = g_001edf2c;  // Global at 0x001edf2c                   // 0x001013f4: lw $a0, -0x20d4($s3)
    SetOsdConfigParam();  // 0x114330                           // 0x001013f8: jal 0x114330
    /* nop */                                                   // 0x001013fc: nop 
    v1 = g_001edf2c;  // Global at 0x001edf2c                   // 0x00101400: lw $v1, -0x20d4($s3)
    if (v1 != v0) goto label_0x101574;                          // 0x00101404: bne $v1, $v0, 0x101574
    v0 = 6;                                                     // 0x00101408: addiu $v0, $zero, 6
    func_00100ea8();  // 0x100e38                                // 0x0010140c: jal 0x100e38
    a0 = 1;                                                     // 0x00101410: addiu $a0, $zero, 1
    if (v0 != 0) goto label_0x10152c;                           // 0x00101414: bnez $v0, 0x10152c
    func_00116ee0();  // 0x116d40                                // 0x0010141c: jal 0x116d40
    s1 = 0x1f << 16;                                            // 0x00101420: lui $s1, 0x1f
    v0 = g_001edf48;  // Global at 0x001edf48                   // 0x00101424: lw $v0, -0x20b8($s1)
    if (v0 >= 0) goto label_0x1014dc;                           // 0x00101428: bgez $v0, 0x1014dc
    s5 = 0x25 << 16;                                            // 0x0010142c: lui $s5, 0x25
    s4 = 0x25 << 16;                                            // 0x00101430: lui $s4, 0x25
    goto label_0x101464;                                        // 0x00101434: b 0x101464
    s7 = 0x1f << 16;                                            // 0x00101438: lui $s7, 0x1f
    /* nop */                                                   // 0x0010143c: nop 
label_0x101440:
    v1 = -1;                                                    // 0x00101440: addiu $v1, $zero, -1
    /* nop */                                                   // 0x00101444: nop 
label_0x101448:
    v0 = v0 + -1;                                               // 0x00101448: addiu $v0, $v0, -1
    /* nop */                                                   // 0x0010144c: nop 
    /* nop */                                                   // 0x00101450: nop 
    /* nop */                                                   // 0x00101454: nop 
    /* nop */                                                   // 0x00101458: nop 
    if (v0 != v1) goto label_0x101448;                          // 0x0010145c: bne $v0, $v1, 0x101448
    /* nop */                                                   // 0x00101460: nop 
label_0x101464:
    s0 = s5 + -0x46b0;                                          // 0x00101464: addiu $s0, $s5, -0x46b0
label_0x101468:
    a1 = 0x8000 << 16;                                          // 0x00101468: lui $a1, 0x8000
    a1 = a1 | 0x59a;                                            // 0x00101470: ori $a1, $a1, 0x59a
    func_001176a8();  // 0x1174d8                                // 0x00101474: jal 0x1174d8
    if (v0 >= 0) goto label_0x1014cc;                           // 0x0010147c: bgezl $v0, 0x1014cc
    v0 = g_0024b974;  // Global at 0x0024b974                   // 0x00101480: lw $v0, 0x24($s0)
    v0 = g_001edf10;  // Global at 0x001edf10                   // 0x00101484: lw $v0, -0x20f0($s6)
    if (v0 <= 0) goto label_0x1014a0;                           // 0x00101488: blez $v0, 0x1014a0
    v0 = 0x10 << 16;                                            // 0x0010148c: lui $v0, 0x10
    a0 = 0x22 << 16;                                            // 0x00101490: lui $a0, 0x22
    func_00116598();  // 0x116508                                // 0x00101494: jal 0x116508
    a0 = &str_0021fe80;  // "DiskReady ended\n"                 // 0x00101498: addiu $a0, $a0, -0x180
    v0 = 0x10 << 16;                                            // 0x0010149c: lui $v0, 0x10
label_0x1014a0:
    v1 = -1;                                                    // 0x001014a0: addiu $v1, $zero, -1
    /* nop */                                                   // 0x001014a4: nop 
label_0x1014a8:
    v0 = v0 + -1;                                               // 0x001014a8: addiu $v0, $v0, -1
    /* nop */                                                   // 0x001014ac: nop 
    /* nop */                                                   // 0x001014b0: nop 
    /* nop */                                                   // 0x001014b4: nop 
    /* nop */                                                   // 0x001014b8: nop 
    if (v0 != v1) goto label_0x1014a8;                          // 0x001014bc: bne $v0, $v1, 0x1014a8
    /* nop */                                                   // 0x001014c0: nop 
    goto label_0x101468;                                        // 0x001014c4: b 0x101468
    s0 = s5 + -0x46b0;                                          // 0x001014c8: addiu $s0, $s5, -0x46b0
label_0x1014cc:
    if (v0 == 0) goto label_0x101440;                           // 0x001014cc: beqz $v0, 0x101440
    v0 = 0x10 << 16;                                            // 0x001014d0: lui $v0, 0x10
    goto label_0x1014e4;                                        // 0x001014d4: b 0x1014e4
    g_001edf48 = 0;  // Global at 0x001edf48                    // 0x001014d8: sw $zero, -0x20b8($s1)
label_0x1014dc:
    s4 = 0x25 << 16;                                            // 0x001014dc: lui $s4, 0x25
    s7 = 0x1f << 16;                                            // 0x001014e0: lui $s7, 0x1f
label_0x1014e4:
    s0 = s4 + -0x4670;                                          // 0x001014e4: addiu $s0, $s4, -0x4670
    g_0024b990 = s2;  // Global at 0x0024b990                   // 0x001014e8: sw $s2, -0x4670($s4)
    func_00116d40();  // 0x116c90                                // 0x001014f0: jal 0x116c90
    a1 = 4;                                                     // 0x001014f4: addiu $a1, $zero, 4
    s1 = s7 + -0xf00;                                           // 0x001014f8: addiu $s1, $s7, -0xf00
    a0 = s5 + -0x46b0;                                          // 0x001014fc: addiu $a0, $s5, -0x46b0
    local_0 = 0;                                                // 0x00101504: sw $zero, 0($sp)
    t0 = 4;                                                     // 0x00101510: addiu $t0, $zero, 4
    t2 = 4;                                                     // 0x00101518: addiu $t2, $zero, 4
    func_001178a0();  // 0x1176a8                                // 0x0010151c: jal 0x1176a8
    if (v0 >= 0) goto label_0x10154c;                           // 0x00101524: bgezl $v0, 0x10154c
    v0 = g_001edf10;  // Global at 0x001edf10                   // 0x00101528: lw $v0, -0x20f0($s6)
label_0x10152c:
    a0 = g_001edf2c;  // Global at 0x001edf2c                   // 0x0010152c: lw $a0, -0x20d4($s3)
    iSignalSema();  // 0x114300                                 // 0x00101530: jal 0x114300
    /* nop */                                                   // 0x00101534: nop 
    a0 = s2 ^ 8;                                                // 0x00101538: xori $a0, $s2, 8
    v1 = -1;                                                    // 0x0010153c: addiu $v1, $zero, -1
    v0 = 6;                                                     // 0x00101540: addiu $v0, $zero, 6
    goto label_0x101574;                                        // 0x00101544: b 0x101574
    if (a0 == 0) v0 = v1;                                       // 0x00101548: movz $v0, $v1, $a0
label_0x10154c:
    if (v0 <= 0) goto label_0x10155c;                           // 0x0010154c: blez $v0, 0x10155c
    a0 = 0x22 << 16;                                            // 0x00101550: lui $a0, 0x22
    func_00116598();  // 0x116508                                // 0x00101554: jal 0x116508
    a0 = &str_0021fea0;  // "NEW DiskReady Call\n"              // 0x00101558: addiu $a0, $a0, -0x160
label_0x10155c:
    v0 = 0x2000 << 16;                                          // 0x0010155c: lui $v0, 0x2000
    a0 = g_001edf2c;  // Global at 0x001edf2c                   // 0x00101560: lw $a0, -0x20d4($s3)
    v0 = s1 | v0;                                               // 0x00101564: or $v0, $s1, $v0
    iSignalSema();  // 0x114300                                 // 0x00101568: jal 0x114300
    s0 = g_20000000;  // Global at 0x20000000                   // 0x0010156c: lw $s0, 0($v0)
label_0x101574:
    return;                                                     // 0x00101598: jr $ra
    sp = sp + 0xa0;                                             // 0x0010159c: addiu $sp, $sp, 0xa0
}