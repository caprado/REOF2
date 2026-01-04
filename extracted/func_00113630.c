/** @category: graphics/dma @status: complete @author: caprado */
void func_00113630() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00113630: addiu $sp, $sp, -0x10
    v1 = 0x1000 << 16;                                          // 0x00113634: lui $v1, 0x1000
    v1 = v1 | 0xa000;                                           // 0x0011363c: ori $v1, $v1, 0xa000
    v0 = g_10000000;  // Global at 0x10000000                   // 0x00113648: lw $v0, 0($v1)
    v0 = v0 & 0x100;                                            // 0x0011364c: andi $v0, $v0, 0x100
    if (v0 == 0) goto label_0x113684;                           // 0x00113650: beqz $v0, 0x113684
    v1 = 0x1000 << 16;                                          // 0x00113658: lui $v1, 0x1000
    a0 = 0x100 << 16;                                           // 0x0011365c: lui $a0, 0x100
    v1 = v1 | 0xa000;                                           // 0x00113660: ori $v1, $v1, 0xa000
label_0x113668:
    v0 = ((unsigned)a0 < (unsigned)v0) ? 1 : 0;                 // 0x00113668: sltu $v0, $a0, $v0
    if (v0 != 0) goto label_0x113764;                           // 0x0011366c: bnez $v0, 0x113764
    a2 = a2 + 1;                                                // 0x00113670: addiu $a2, $a2, 1
    v0 = g_10000000;  // Global at 0x10000000                   // 0x00113674: lw $v0, 0($v1)
    v0 = v0 & 0x100;                                            // 0x00113678: andi $v0, $v0, 0x100
    if (v0 != 0) goto label_0x113668;                           // 0x0011367c: bnez $v0, 0x113668
label_0x113684:
    v0 = 0x1000 << 16;                                          // 0x00113684: lui $v0, 0x1000
    a1 = 6;                                                     // 0x00113688: addiu $a1, $zero, 6
    v0 = v0 | 0xa020;                                           // 0x0011368c: ori $v0, $v0, 0xa020
    a0 = 0x7000 << 16;                                          // 0x00113690: lui $a0, 0x7000
    g_10000000 = a1;  // Global at 0x10000000                   // 0x00113694: sw $a1, 0($v0)
    v1 = a3 & a0;                                               // 0x00113698: and $v1, $a3, $a0
    if (v1 != a0) goto label_0x1136c0;                          // 0x0011369c: bne $v1, $a0, 0x1136c0
    v0 = 0xfff << 16;                                           // 0x001136a0: lui $v0, 0xfff
    v1 = 0x1000 << 16;                                          // 0x001136a4: lui $v1, 0x1000
    v0 = v0 | 0xffff;                                           // 0x001136a8: ori $v0, $v0, 0xffff
    a0 = 0x8000 << 16;                                          // 0x001136ac: lui $a0, 0x8000
    v0 = a3 & v0;                                               // 0x001136b0: and $v0, $a3, $v0
    v1 = v1 | 0xa010;                                           // 0x001136b4: ori $v1, $v1, 0xa010
    goto label_0x1136d0;                                        // 0x001136b8: b 0x1136d0
    v0 = v0 | a0;                                               // 0x001136bc: or $v0, $v0, $a0
label_0x1136c0:
    v1 = 0x1000 << 16;                                          // 0x001136c0: lui $v1, 0x1000
    v0 = v0 | 0xffff;                                           // 0x001136c4: ori $v0, $v0, 0xffff
    v1 = v1 | 0xa010;                                           // 0x001136c8: ori $v1, $v1, 0xa010
    v0 = a3 & v0;                                               // 0x001136cc: and $v0, $a3, $v0
label_0x1136d0:
    g_10000000 = v0;  // Global at 0x10000000                   // 0x001136d0: sw $v0, 0($v1)
    v0 = 0x1000 << 16;                                          // 0x001136d4: lui $v0, 0x1000
    a0 = 0x101;                                                 // 0x001136d8: addiu $a0, $zero, 0x101
    v0 = v0 | 0xa000;                                           // 0x001136dc: ori $v0, $v0, 0xa000
    g_10000000 = a0;  // Global at 0x10000000                   // 0x001136e0: sw $a0, 0($v0)
    v1 = g_10000000;  // Global at 0x10000000                   // 0x001136e4: lw $v1, 0($v0)
    v1 = v1 & 0x100;                                            // 0x001136e8: andi $v1, $v1, 0x100
    if (v1 == 0) goto label_0x11371c;                           // 0x001136ec: beqz $v1, 0x11371c
    v1 = 0x1000 << 16;                                          // 0x001136f0: lui $v1, 0x1000
    a0 = 0x100 << 16;                                           // 0x001136f4: lui $a0, 0x100
    v1 = v1 | 0xa000;                                           // 0x001136f8: ori $v1, $v1, 0xa000
label_0x113700:
    v0 = ((unsigned)a0 < (unsigned)v0) ? 1 : 0;                 // 0x00113700: sltu $v0, $a0, $v0
    if (v0 != 0) goto label_0x113764;                           // 0x00113704: bnez $v0, 0x113764
    a2 = a2 + 1;                                                // 0x00113708: addiu $a2, $a2, 1
    v0 = g_10000000;  // Global at 0x10000000                   // 0x0011370c: lw $v0, 0($v1)
    v0 = v0 & 0x100;                                            // 0x00113710: andi $v0, $v0, 0x100
    if (v0 != 0) goto label_0x113700;                           // 0x00113714: bnez $v0, 0x113700
label_0x11371c:
    v1 = 0x1000 << 16;                                          // 0x00113720: lui $v1, 0x1000
    v1 = v1 | 0xa020;                                           // 0x00113724: ori $v1, $v1, 0xa020
    a1 = 0x7000 << 16;                                          // 0x00113728: lui $a1, 0x7000
    v0 = v0 & 0x7fff;                                           // 0x0011372c: andi $v0, $v0, 0x7fff
    a0 = t0 & a1;                                               // 0x00113730: and $a0, $t0, $a1
    g_10000000 = v0;  // Global at 0x10000000                   // 0x0011373c: sw $v0, 0($v1)
    if (a0 != a1) goto label_0x113778;                          // 0x00113740: bne $a0, $a1, 0x113778
    v0 = 0xfff << 16;                                           // 0x00113744: lui $v0, 0xfff
    v1 = 0x1000 << 16;                                          // 0x00113748: lui $v1, 0x1000
    v0 = v0 | 0xffff;                                           // 0x0011374c: ori $v0, $v0, 0xffff
    a0 = 0x8000 << 16;                                          // 0x00113750: lui $a0, 0x8000
    v0 = t0 & v0;                                               // 0x00113754: and $v0, $t0, $v0
    v1 = v1 | 0xa010;                                           // 0x00113758: ori $v1, $v1, 0xa010
    goto label_0x113788;                                        // 0x0011375c: b 0x113788
    v0 = v0 | a0;                                               // 0x00113760: or $v0, $v0, $a0
label_0x113764:
    a0 = 0x22 << 16;                                            // 0x00113764: lui $a0, 0x22
    func_00116508();  // 116508                                // 0x00113768: jal 0x116508
    a0 = &str_00221160;  // "## internel error in libkernl.a!\n" // 0x0011376c: addiu $a0, $a0, 0x1160
    goto label_0x1137a0;                                        // 0x00113770: b 0x1137a0
    v0 = -1;                                                    // 0x00113774: addiu $v0, $zero, -1
label_0x113778:
    v1 = 0x1000 << 16;                                          // 0x00113778: lui $v1, 0x1000
    v0 = v0 | 0xffff;                                           // 0x0011377c: ori $v0, $v0, 0xffff
    v1 = v1 | 0xa010;                                           // 0x00113780: ori $v1, $v1, 0xa010
    v0 = t0 & v0;                                               // 0x00113784: and $v0, $t0, $v0
label_0x113788:
    g_10000000 = v0;  // Global at 0x10000000                   // 0x00113788: sw $v0, 0($v1)
    v1 = 0x1000 << 16;                                          // 0x0011378c: lui $v1, 0x1000
    a0 = 0x101;                                                 // 0x00113790: addiu $a0, $zero, 0x101
    v1 = v1 | 0xa000;                                           // 0x00113794: ori $v1, $v1, 0xa000
    g_10000000 = a0;  // Global at 0x10000000                   // 0x0011379c: sw $a0, 0($v1)
label_0x1137a0:
    return;                                                     // 0x001137a4: jr $ra
    sp = sp + 0x10;                                             // 0x001137a8: addiu $sp, $sp, 0x10
}