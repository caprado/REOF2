void func_001f13a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x90;                                            // 0x001f13a0: addiu $sp, $sp, -0x90
    v0 = 0xb000 << 16;                                          // 0x001f13a4: lui $v0, 0xb000
    v0 = v0 | 0x1800;                                           // 0x001f13ac: ori $v0, $v0, 0x1800
    s5 = 0x8007 << 16;                                          // 0x001f13c4: lui $s5, 0x8007
    s3 = a0 & 0xffff;                                           // 0x001f13cc: andi $s3, $a0, 0xffff
    v1 = g_80076700;  // Global at 0x80076700                   // 0x001f13e0: lw $v1, 0x6700($s5)
    s4 = g_b0000000;  // Global at 0xb0000000                   // 0x001f13e4: lw $s4, 0($v0)
    v1 = (v1 < 0x40) ? 1 : 0;                                   // 0x001f13e8: slti $v1, $v1, 0x40
    if (v1 != 0) goto label_0x1f1410;                           // 0x001f13ec: bnez $v1, 0x1f1410
    s3 = s3 + s4;                                               // 0x001f13f0: addu $s3, $s3, $s4
    goto label_0x1f14b0;                                        // 0x001f13f4: b 0x1f14b0
    v0 = -1;                                                    // 0x001f13f8: addiu $v0, $zero, -1
label_0x1f13fc:
    v0 = a0 | v0;                                               // 0x001f1404: or $v0, $a0, $v0
    goto label_0x1f1440;                                        // 0x001f1408: b 0x1f1440
label_0x1f1410:
    a1 = 0x8007 << 16;                                          // 0x001f1410: lui $a1, 0x8007
label_0x1f1420:
    v0 = v0 & 1;                                                // 0x001f1420: andi $v0, $v0, 1
    if (v0 == 0) goto label_0x1f13fc;                           // 0x001f1424: beqz $v0, 0x1f13fc
    v0 = 1;                                                     // 0x001f1428: addiu $v0, $zero, 1
    v1 = v1 + 1;                                                // 0x001f142c: addiu $v1, $v1, 1
    v0 = (v1 < 0x40) ? 1 : 0;                                   // 0x001f1430: slti $v0, $v1, 0x40
    if (v0 != 0) goto label_0x1f1420;                           // 0x001f1434: bnez $v0, 0x1f1420
    s2 = -1;                                                    // 0x001f143c: addiu $s2, $zero, -1
label_0x1f1440:
    if (s2 < 0) goto label_0x1f14b0;                            // 0x001f1440: bltz $s2, 0x1f14b0
    func_00076058();  // BIOS/System - 0x76058                  // 0x001f1450: jal 0x76058
    a0 = 0x14;                                                  // 0x001f1458: addiu $a0, $zero, 0x14
    t0 = 0x8007 << 16;                                          // 0x001f145c: lui $t0, 0x8007
    /* multiply: v0 * a0 -> hi:lo */                            // 0x001f1460: mult $ac2, $v0, $a0
    v1 = t0 + 0x6740;                                           // 0x001f1464: addiu $v1, $t0, 0x6740
    a1 = g_80076700;  // Global at 0x80076700                   // 0x001f1468: lw $a1, 0x6700($s5)
    s0 = v1 + 4;                                                // 0x001f146c: addiu $s0, $v1, 4
    a1 = a1 + 1;                                                // 0x001f1470: addiu $a1, $a1, 1
    a0 = v0 + v1;                                               // 0x001f1474: addu $a0, $v0, $v1
    a3 = v1 + v0;                                               // 0x001f1478: addu $a3, $v1, $v0
    s0 = v0 + s0;                                               // 0x001f147c: addu $s0, $v0, $s0
    *(uint16_t*)((a0) + 2) = s4;                                // 0x001f1480: sh $s4, 2($a0)
    *(uint16_t*)(a0) = s3;                                      // 0x001f1484: sh $s3, 0($a0)
    g_80076744 = s2;  // Global at 0x80076744                   // 0x001f148c: sw $s2, 0($s0)
    *(uint32_t*)((a3) + 0x10) = s1;                             // 0x001f1494: sw $s1, 0x10($a3)
    a0 = g_80076740;  // Global at 0x80076740                   // 0x001f1498: lhu $a0, 0x6740($t0)
    *(uint32_t*)((a2) + 8) = s6;                                // 0x001f149c: sw $s6, 8($a2)
    g_8007674c = s7;  // Global at 0x8007674c                   // 0x001f14a0: sw $s7, 0xc($v1)
    func_00076460();  // BIOS/System - 0x76460                  // 0x001f14a4: jal 0x76460
    g_80076700 = a1;  // Global at 0x80076700                   // 0x001f14a8: sw $a1, 0x6700($s5)
    v0 = g_80076744;  // Global at 0x80076744                   // 0x001f14ac: lw $v0, 0($s0)
label_0x1f14b0:
    return;                                                     // 0x001f14d4: jr $ra
    sp = sp + 0x90;                                             // 0x001f14d8: addiu $sp, $sp, 0x90
}