void func_001f16c8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_4, local_8, local_c;
    
    sp = sp + -0xb0;                                            // 0x001f16c8: addiu $sp, $sp, -0xb0
    s1 = 0x8007 << 16;                                          // 0x001f16f4: lui $s1, 0x8007
    s2 = 0x8007 << 16;                                          // 0x001f16f8: lui $s2, 0x8007
    /* nop */                                                   // 0x001f16fc: nop 
label_0x1f1700:
    v0 = g_80076700;  // Global at 0x80076700                   // 0x001f1700: lw $v0, 0x6700($s1)
    v0 = (t0 < v0) ? 1 : 0;                                     // 0x001f1704: slt $v0, $t0, $v0
    if (v0 == 0) goto label_0x1f1734;                           // 0x001f1708: beqz $v0, 0x1f1734
    v1 = 0x14;                                                  // 0x001f170c: addiu $v1, $zero, 0x14
    a0 = s2 + 0x6740;                                           // 0x001f1710: addiu $a0, $s2, 0x6740
    /* multiply: t0 * v1 -> hi:lo */                            // 0x001f1714: mult $ac3, $t0, $v1
    a1 = g_80076740;  // Global at 0x80076740                   // 0x001f1718: lhu $a1, 0x6740($s2)
    v1 = v1 + a0;                                               // 0x001f171c: addu $v1, $v1, $a0
    v0 = *(uint16_t*)(v1);                                      // 0x001f1720: lhu $v0, 0($v1)
    if (a1 == v0) goto label_0x1f1700;                          // 0x001f1724: beq $a1, $v0, 0x1f1700
    t0 = t0 + 1;                                                // 0x001f1728: addiu $t0, $t0, 1
    func_00076460();  // BIOS/System - 0x76460                  // 0x001f172c: jal 0x76460
label_0x1f1734:
    v0 = 0x8007 << 16;                                          // 0x001f1734: lui $v0, 0x8007
    s4 = v0 + 0x6740;                                           // 0x001f173c: addiu $s4, $v0, 0x6740
    s3 = 0x14;                                                  // 0x001f1740: addiu $s3, $zero, 0x14
    s5 = 0x8007 << 16;                                          // 0x001f1744: lui $s5, 0x8007
    goto label_0x1f175c;                                        // 0x001f1748: b 0x1f175c
    s7 = 1;                                                     // 0x001f174c: addiu $s7, $zero, 1
label_0x1f1750:
    v0 = g_80076740;  // Global at 0x80076740                   // 0x001f1750: lhu $v0, 0x6740($s2)
    if (v1 != v0) goto label_0x1f1850;                          // 0x001f1754: bne $v1, $v0, 0x1f1850
    v0 = g_80076700;  // Global at 0x80076700                   // 0x001f1758: lw $v0, 0x6700($s1)
label_0x1f175c:
    v0 = *(int32_t*)((s6) + 0x6700);                            // 0x001f175c: lw $v0, 0x6700($s6)
    a2 = s2 + 0x6740;                                           // 0x001f1764: addiu $a2, $s2, 0x6740
    a1 = g_80076750;  // Global at 0x80076750                   // 0x001f1778: lw $a1, 0x10($a2)
    local_10 = a1;                                              // 0x001f178c: sw $a1, 0x10($sp)
    v0 = v0 + -1;                                               // 0x001f1790: addiu $v0, $v0, -1
    if (v0 <= 0) goto label_0x1f1800;                           // 0x001f1794: blez $v0, 0x1f1800
    *(uint32_t*)((s6) + 0x6700) = v0;                           // 0x001f1798: sw $v0, 0x6700($s6)
    t1 = g_80076700;  // Global at 0x80076700                   // 0x001f179c: lw $t1, 0x6700($s1)
    t2 = local_10;                                              // 0x001f17a0: lw $t2, 0x10($sp)
    a2 = local_4;                                               // 0x001f17a4: lw $a2, 4($sp)
    a3 = local_0;                                               // 0x001f17a8: lhu $a3, 0($sp)
    /* nop */                                                   // 0x001f17ac: nop 
label_0x1f17b0:
    /* multiply: t0 * s3 -> hi:lo */                            // 0x001f17b0: mult $ac3, $t0, $s3
    v0 = t0 + 1;                                                // 0x001f17b4: addiu $v0, $t0, 1
    a1 = v1 + s4;                                               // 0x001f17bc: addu $a1, $v1, $s4
    /* multiply: v0 * s3 -> hi:lo */                            // 0x001f17c0: mult $ac3, $v0, $s3
    a0 = v1 + s4;                                               // 0x001f17c4: addu $a0, $v1, $s4
    t5 = g_80076750;  // Global at 0x80076750                   // 0x001f17d8: lw $t5, 0x10($a0)
    v1 = (t0 < t1) ? 1 : 0;                                     // 0x001f17ec: slt $v1, $t0, $t1
    if (v1 != 0) goto label_0x1f17b0;                           // 0x001f17f0: bnez $v1, 0x1f17b0
    *(uint32_t*)((a1) + 0x10) = t5;                             // 0x001f17f4: sw $t5, 0x10($a1)
    goto label_0x1f180c;                                        // 0x001f17f8: b 0x1f180c
    /* nop */                                                   // 0x001f17fc: nop 
label_0x1f1800:
    t2 = local_10;                                              // 0x001f1800: lw $t2, 0x10($sp)
    a2 = local_4;                                               // 0x001f1804: lw $a2, 4($sp)
    a3 = local_0;                                               // 0x001f1808: lhu $a3, 0($sp)
label_0x1f180c:
    v0 = ~(0 | v0);                                             // 0x001f181c: nor $v0, $zero, $v0
    a0 = 8 << 16;                                               // 0x001f1820: lui $a0, 8
    v1 = v1 & v0;                                               // 0x001f1824: and $v1, $v1, $v0
    a1 = local_8;                                               // 0x001f1828: lw $a1, 8($sp)
    t0 = local_c;                                               // 0x001f182c: lw $t0, 0xc($sp)
    a0 = a0 | 0x2000;                                           // 0x001f1830: ori $a0, $a0, 0x2000
    func_00076680();  // BIOS/System - 0x76680                  // 0x001f1834: jal 0x76680
    v0 = g_80076700;  // Global at 0x80076700                   // 0x001f1840: lw $v0, 0x6700($s1)
    if (v0 > 0) goto label_0x1f1750;                            // 0x001f1844: bgtz $v0, 0x1f1750
    v1 = local_0;                                               // 0x001f1848: lhu $v1, 0($sp)
    v0 = g_80076700;  // Global at 0x80076700                   // 0x001f184c: lw $v0, 0x6700($s1)
label_0x1f1850:
    if (v0 <= 0) goto label_0x1f1868;                           // 0x001f1850: blez $v0, 0x1f1868
    v1 = 0x483;                                                 // 0x001f1854: addiu $v1, $zero, 0x483
    func_00076460();  // BIOS/System - 0x76460                  // 0x001f1858: jal 0x76460
    a0 = g_80076740;  // Global at 0x80076740                   // 0x001f185c: lhu $a0, 0x6740($s2)
    goto label_0x1f1874;                                        // 0x001f1860: b 0x1f1874
    /* nop */                                                   // 0x001f1864: nop 
label_0x1f1868:
    v0 = 0xb000 << 16;                                          // 0x001f1868: lui $v0, 0xb000
    v0 = v0 | 0x1810;                                           // 0x001f186c: ori $v0, $v0, 0x1810
    g_b0000000 = v1;  // Global at 0xb0000000                   // 0x001f1870: sw $v1, 0($v0)
label_0x1f1874:
    /* memory sync */                                           // 0x001f1874: sync 
    return;                                                     // 0x001f18a0: jr $ra
    sp = sp + 0xb0;                                             // 0x001f18a4: addiu $sp, $sp, 0xb0
}