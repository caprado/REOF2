void func_001f14e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001f14e0: addiu $sp, $sp, -0x30
    t4 = 0x8007 << 16;                                          // 0x001f14e4: lui $t4, 0x8007
    v0 = g_80076700;  // Global at 0x80076700                   // 0x001f14f0: lw $v0, 0x6700($t4)
    a2 = -1;                                                    // 0x001f14fc: addiu $a2, $zero, -1
    if (v0 <= 0) goto label_0x1f1664;                           // 0x001f1500: blez $v0, 0x1f1664
    if (v0 <= 0) goto label_0x1f1664;                           // 0x001f1508: blez $v0, 0x1f1664
    t3 = 0x8007 << 16;                                          // 0x001f1510: lui $t3, 0x8007
    v1 = 0x14;                                                  // 0x001f1514: addiu $v1, $zero, 0x14
label_0x1f1518:
    a1 = t3 + 0x6740;                                           // 0x001f1518: addiu $a1, $t3, 0x6740
    v0 = a1 + a0;                                               // 0x001f1520: addu $v0, $a1, $a0
    v1 = g_b0000004;  // Global at 0xb0000004                   // 0x001f1524: lw $v1, 4($v0)
    if (t5 != v1) goto label_0x1f1654;                          // 0x001f1528: bne $t5, $v1, 0x1f1654
    v0 = g_80076700;  // Global at 0x80076700                   // 0x001f152c: lw $v0, 0x6700($t4)
    v1 = 0xb000 << 16;                                          // 0x001f1530: lui $v1, 0xb000
    a0 = a0 + a1;                                               // 0x001f1534: addu $a0, $a0, $a1
    v1 = v1 | 0x1820;                                           // 0x001f1538: ori $v1, $v1, 0x1820
    a1 = g_8007673f;  // Global at 0x8007673f                   // 0x001f153c: lhu $a1, 0($a0)
    v0 = g_b0000000;  // Global at 0xb0000000                   // 0x001f1540: lw $v0, 0($v1)
    if (a1 != v0) goto label_0x1f1568;                          // 0x001f1544: bne $a1, $v0, 0x1f1568
    v1 = 0x14;                                                  // 0x001f1548: addiu $v1, $zero, 0x14
    v0 = 0x1000 << 16;                                          // 0x001f154c: lui $v0, 0x1000
    v0 = v0 | 0xf000;                                           // 0x001f1550: ori $v0, $v0, 0xf000
    v1 = g_10000000;  // Global at 0x10000000                   // 0x001f1554: lw $v1, 0($v0)
    v1 = v1 & 0x1000;                                           // 0x001f1558: andi $v1, $v1, 0x1000
    if (v1 != 0) goto label_0x1f166c;                           // 0x001f155c: bnez $v1, 0x1f166c
    v0 = -1;                                                    // 0x001f1560: addiu $v0, $zero, -1
    v1 = 0x14;                                                  // 0x001f1564: addiu $v1, $zero, 0x14
label_0x1f1568:
    t1 = g_80076700;  // Global at 0x80076700                   // 0x001f1568: lw $t1, 0x6700($t4)
    /* multiply: t0 * v1 -> hi:lo */                            // 0x001f156c: mult $ac3, $t0, $v1
    a0 = t3 + 0x6740;                                           // 0x001f1570: addiu $a0, $t3, 0x6740
    v0 = t1 + -1;                                               // 0x001f1574: addiu $v0, $t1, -1
    v0 = (t0 < v0) ? 1 : 0;                                     // 0x001f157c: slt $v0, $t0, $v0
    v1 = v1 + a0;                                               // 0x001f1580: addu $v1, $v1, $a0
    if (v0 == 0) goto label_0x1f15ec;                           // 0x001f1584: beqz $v0, 0x1f15ec
    s0 = g_b0000002;  // Global at 0xb0000002                   // 0x001f1588: lhu $s0, 2($v1)
    t2 = 0x8007 << 16;                                          // 0x001f158c: lui $t2, 0x8007
label_0x1f1590:
    v1 = a3 + 1;                                                // 0x001f1590: addiu $v1, $a3, 1
    a1 = 0x14;                                                  // 0x001f1594: addiu $a1, $zero, 0x14
    /* multiply: v1 * a1 -> hi:lo */                            // 0x001f1598: mult $ac2, $v1, $a1
    a2 = t3 + 0x6740;                                           // 0x001f15a0: addiu $a2, $t3, 0x6740
    a1 = v0 + a2;                                               // 0x001f15a8: addu $a1, $v0, $a2
    a0 = a0 + a2;                                               // 0x001f15ac: addu $a0, $a0, $a2
    v0 = t1 + -1;                                               // 0x001f15b0: addiu $v0, $t1, -1
    t6 = g_80076750;  // Global at 0x80076750                   // 0x001f15c4: lw $t6, 0x10($a1)
    v0 = (a3 < v0) ? 1 : 0;                                     // 0x001f15d8: slt $v0, $a3, $v0
    if (v0 != 0) goto label_0x1f1590;                           // 0x001f15dc: bnez $v0, 0x1f1590
    g_80076750 = t6;  // Global at 0x80076750                   // 0x001f15e0: sw $t6, 0x10($a0)
    goto label_0x1f15f4;                                        // 0x001f15e4: b 0x1f15f4
    v0 = 1;                                                     // 0x001f15e8: addiu $v0, $zero, 1
label_0x1f15ec:
    t2 = 0x8007 << 16;                                          // 0x001f15ec: lui $t2, 0x8007
    v0 = 1;                                                     // 0x001f15f0: addiu $v0, $zero, 1
label_0x1f15f4:
    a0 = g_80076700;  // Global at 0x80076700                   // 0x001f15f4: lw $a0, 0x6700($t4)
    v0 = ~(0 | v0);                                             // 0x001f1600: nor $v0, $zero, $v0
    a0 = a0 + -1;                                               // 0x001f1604: addiu $a0, $a0, -1
    v1 = v1 & v0;                                               // 0x001f1608: and $v1, $v1, $v0
    g_80076700 = a0;  // Global at 0x80076700                   // 0x001f160c: sw $a0, 0x6700($t4)
    if (t0 != 0) goto label_0x1f1620;                           // 0x001f1610: bnez $t0, 0x1f1620
    func_00076460();  // BIOS/System - 0x76460                  // 0x001f1618: jal 0x76460
    a0 = g_80076740;  // Global at 0x80076740                   // 0x001f161c: lhu $a0, 0x6740($t3)
label_0x1f1620:
    v0 = *(int32_t*)((s1) + 0x6700);                            // 0x001f1620: lw $v0, 0x6700($s1)
    if (v0 != 0) goto label_0x1f1638;                           // 0x001f1624: bnez $v0, 0x1f1638
    v1 = 0x83;                                                  // 0x001f1628: addiu $v1, $zero, 0x83
    v0 = 0xb000 << 16;                                          // 0x001f162c: lui $v0, 0xb000
    v0 = v0 | 0x1810;                                           // 0x001f1630: ori $v0, $v0, 0x1810
    g_b0000000 = v1;  // Global at 0xb0000000                   // 0x001f1634: sw $v1, 0($v0)
label_0x1f1638:
    v0 = 0xb000 << 16;                                          // 0x001f1638: lui $v0, 0xb000
    v0 = v0 | 0x1800;                                           // 0x001f1640: ori $v0, $v0, 0x1800
    func_00076038();  // BIOS/System - 0x76038                  // 0x001f1644: jal 0x76038
    a1 = g_b0000000;  // Global at 0xb0000000                   // 0x001f1648: lw $a1, 0($v0)
    goto label_0x1f1664;                                        // 0x001f164c: b 0x1f1664
    a2 = v0 - s0;                                               // 0x001f1650: subu $a2, $v0, $s0
label_0x1f1654:
    t0 = t0 + 1;                                                // 0x001f1654: addiu $t0, $t0, 1
    v0 = (t0 < v0) ? 1 : 0;                                     // 0x001f1658: slt $v0, $t0, $v0
    if (v0 != 0) goto label_0x1f1518;                           // 0x001f165c: bnez $v0, 0x1f1518
    v1 = 0x14;                                                  // 0x001f1660: addiu $v1, $zero, 0x14
label_0x1f1664:
    /* memory sync */                                           // 0x001f1664: sync 
label_0x1f166c:
    return;                                                     // 0x001f1678: jr $ra
    sp = sp + 0x30;                                             // 0x001f167c: addiu $sp, $sp, 0x30
}