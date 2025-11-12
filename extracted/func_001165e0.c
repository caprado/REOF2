void func_001165e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x60;                                            // 0x001165e0: addiu $sp, $sp, -0x60
    func_0011d378();  // 0x11d320                                // 0x001165f8: jal 0x11d320
    t2 = 0x1f << 16;                                            // 0x00116600: lui $t2, 0x1f
    v0 = g_001f0348;  // Global at 0x001f0348                   // 0x00116604: lw $v0, 0x348($t2)
    if (v0 == 0) goto label_0x116630;                           // 0x00116608: beqz $v0, 0x116630
    s3 = 0x25 << 16;                                            // 0x0011660c: lui $s3, 0x25
    return func_0011d390();  // Tail call                        // 0x00116628: j 0x11d378
    sp = sp + 0x60;                                             // 0x0011662c: addiu $sp, $sp, 0x60
label_0x116630:
    a1 = 0x25 << 16;                                            // 0x00116630: lui $a1, 0x25
    v0 = 0x2000 << 16;                                          // 0x00116634: lui $v0, 0x2000
    a1 = a1 + -0x3940;                                          // 0x00116638: addiu $a1, $a1, -0x3940
    a2 = s3 + -0x39c0;                                          // 0x0011663c: addiu $a2, $s3, -0x39c0
    s2 = 0x25 << 16;                                            // 0x00116640: lui $s2, 0x25
    a1 = a1 | v0;                                               // 0x00116644: or $a1, $a1, $v0
    a2 = a2 | v0;                                               // 0x00116648: or $a2, $a2, $v0
    v1 = 1;                                                     // 0x0011664c: addiu $v1, $zero, 1
    t1 = 0x25 << 16;                                            // 0x00116650: lui $t1, 0x25
    a0 = 0x25 << 16;                                            // 0x00116654: lui $a0, 0x25
    v0 = s2 + -0x38e8;                                          // 0x00116658: addiu $v0, $s2, -0x38e8
    g_001f0348 = v1;  // Global at 0x001f0348                   // 0x0011665c: sw $v1, 0x348($t2)
    a0 = a0 + -0x3740;                                          // 0x00116660: addiu $a0, $a0, -0x3740
    t0 = t1 + -0x38c0;                                          // 0x00116664: addiu $t0, $t1, -0x38c0
    g_0024c718 = a2;  // Global at 0x0024c718                   // 0x00116668: sw $a2, -0x38e8($s2)
    a3 = 0x20;                                                  // 0x0011666c: addiu $a3, $zero, 0x20
    g_0024c734 = a0;  // Global at 0x0024c734                   // 0x00116670: sw $a0, 0x1c($v0)
    g_0024c71c = a1;  // Global at 0x0024c71c                   // 0x00116678: sw $a1, 4($v0)
    g_0024c728 = a3;  // Global at 0x0024c728                   // 0x0011667c: sw $a3, 0x10($v0)
    a0 = v1 + 0x180;                                            // 0x00116680: addiu $a0, $v1, 0x180
    g_0024c720 = 0;  // Global at 0x0024c720                    // 0x00116684: sw $zero, 8($v0)
    s4 = 0x25 << 16;                                            // 0x00116688: lui $s4, 0x25
    g_0024c724 = t0;  // Global at 0x0024c724                   // 0x0011668c: sw $t0, 0xc($v0)
    g_0024c72c = 0;  // Global at 0x0024c72c                    // 0x00116690: sw $zero, 0x14($v0)
    g_0024c730 = 0;  // Global at 0x0024c730                    // 0x00116694: sw $zero, 0x18($v0)
label_0x116698:
    g_001f0000 = 0;  // Global at 0x001f0000                    // 0x00116698: sw $zero, 0($v1)
    g_001f0004 = 0;  // Global at 0x001f0004                    // 0x0011669c: sw $zero, 4($v1)
    v1 = v1 + 0xc;                                              // 0x001166a0: addiu $v1, $v1, 0xc
    v0 = (v1 < a0) ? 1 : 0;                                     // 0x001166a4: slt $v0, $v1, $a0
    /* nop */                                                   // 0x001166a8: nop 
    if (v0 != 0) goto label_0x116698;                           // 0x001166ac: bnez $v0, 0x116698
    /* nop */                                                   // 0x001166b0: nop 
    v0 = 0x25 << 16;                                            // 0x001166b4: lui $v0, 0x25
    s0 = 0x1f;                                                  // 0x001166b8: addiu $s0, $zero, 0x1f
    v0 = v0 + -0x3740;                                          // 0x001166bc: addiu $v0, $v0, -0x3740
    v0 = v0 + 0x7c;                                             // 0x001166c0: addiu $v0, $v0, 0x7c
    /* nop */                                                   // 0x001166c4: nop 
label_0x1166c8:
    g_0024c93c = 0;  // Global at 0x0024c93c                    // 0x001166c8: sw $zero, 0($v0)
    s0 = s0 + -1;                                               // 0x001166cc: addiu $s0, $s0, -1
    v0 = v0 + -4;                                               // 0x001166d0: addiu $v0, $v0, -4
    /* nop */                                                   // 0x001166d4: nop 
    /* nop */                                                   // 0x001166d8: nop 
    if (s0 >= 0) goto label_0x1166c8;                           // 0x001166dc: bgez $s0, 0x1166c8
    /* nop */                                                   // 0x001166e0: nop 
    v0 = 0x11 << 16;                                            // 0x001166e4: lui $v0, 0x11
    v1 = 0x11 << 16;                                            // 0x001166e8: lui $v1, 0x11
    v0 = v0 + 0x6588;                                           // 0x001166ec: addiu $v0, $v0, 0x6588
    a0 = t1 + -0x38c0;                                          // 0x001166f0: addiu $a0, $t1, -0x38c0
    v1 = v1 + 0x6568;                                           // 0x001166f4: addiu $v1, $v1, 0x6568
    s1 = s2 + -0x38e8;                                          // 0x001166f8: addiu $s1, $s2, -0x38e8
    g_0024c740 = v0;  // Global at 0x0024c740                   // 0x001166fc: sw $v0, -0x38c0($t1)
    s0 = 0x20;                                                  // 0x00116700: addiu $s0, $zero, 0x20
    g_0024c74c = v1;  // Global at 0x0024c74c                   // 0x00116704: sw $v1, 0xc($a0)
    g_0024c750 = s1;  // Global at 0x0024c750                   // 0x00116708: sw $s1, 0x10($a0)
    func_0011d390();  // 0x11d378                                // 0x0011670c: jal 0x11d378
    g_0024c744 = s1;  // Global at 0x0024c744                   // 0x00116710: sw $s1, 4($a0)
    iFlushCache();  // 0x114560                                 // 0x00116714: jal 0x114560
    v0 = 0x1000 << 16;                                          // 0x0011671c: lui $v0, 0x1000
    v0 = v0 | 0xe010;                                           // 0x00116720: ori $v0, $v0, 0xe010
    v1 = g_10000000;  // Global at 0x10000000                   // 0x00116724: lw $v1, 0($v0)
    v1 = v1 & 0x20;                                             // 0x00116728: andi $v1, $v1, 0x20
    if (v1 == 0) goto label_0x116740;                           // 0x0011672c: beqz $v1, 0x116740
    v0 = 0x1000 << 16;                                          // 0x00116730: lui $v0, 0x1000
    at = 0x1001 << 16;                                          // 0x00116734: lui $at, 0x1001
    g_1000e010 = s0;  // Global at 0x1000e010                   // 0x00116738: sw $s0, -0x1ff0($at)
    v0 = 0x1000 << 16;                                          // 0x0011673c: lui $v0, 0x1000
label_0x116740:
    v0 = v0 | 0xc000;                                           // 0x00116740: ori $v0, $v0, 0xc000
    v1 = g_10000000;  // Global at 0x10000000                   // 0x00116744: lw $v1, 0($v0)
    v1 = v1 & 0x100;                                            // 0x00116748: andi $v1, $v1, 0x100
    if (v1 != 0) goto label_0x116760;                           // 0x0011674c: bnez $v1, 0x116760
    a1 = 0x11 << 16;                                            // 0x00116750: lui $a1, 0x11
    isceSifSetDChain();  // 0x1146c0                            // 0x00116754: jal 0x1146c0
    /* nop */                                                   // 0x00116758: nop 
    a1 = 0x11 << 16;                                            // 0x0011675c: lui $a1, 0x11
label_0x116760:
    a0 = 5;                                                     // 0x00116760: addiu $a0, $zero, 5
    a1 = a1 + 0x6b48;                                           // 0x00116764: addiu $a1, $a1, 0x6b48
    AddDmacHandler();  // 0x113ff0                              // 0x00116768: jal 0x113ff0
    v1 = 0x25 << 16;                                            // 0x00116770: lui $v1, 0x25
    a0 = 5;                                                     // 0x00116774: addiu $a0, $zero, 5
    func_00114f60();  // 0x114ef8                                // 0x00116778: jal 0x114ef8
    g_0024c714 = v0;  // Global at 0x0024c714                   // 0x0011677c: sw $v0, -0x38ec($v1)
    a0 = 0x8000 << 16;                                          // 0x00116780: lui $a0, 0x8000
    Deci2Call();  // 0x1146f0                                   // 0x00116784: jal 0x1146f0
    /* nop */                                                   // 0x00116788: nop 
    if (v0 == 0) goto label_0x1167d4;                           // 0x0011678c: beqz $v0, 0x1167d4
    g_0024c720 = v0;  // Global at 0x0024c720                   // 0x00116790: sw $v0, 8($s1)
    a1 = s4 + -0x3900;                                          // 0x00116794: addiu $a1, $s4, -0x3900
    v0 = s3 + -0x39c0;                                          // 0x00116798: addiu $v0, $s3, -0x39c0
    a0 = 0x8000 << 16;                                          // 0x001167a0: lui $a0, 0x8000
    a2 = 0x14;                                                  // 0x001167a8: addiu $a2, $zero, 0x14
    g_0024c710 = v0;  // Global at 0x0024c710                   // 0x001167c8: sw $v0, 0x10($a1)
    return func_00116b08();  // Tail call                        // 0x001167cc: j 0x116ac8
    sp = sp + 0x60;                                             // 0x001167d0: addiu $sp, $sp, 0x60
label_0x1167d4:
    s0 = 2 << 16;                                               // 0x001167d4: lui $s0, 2
label_0x1167d8:
    Deci2Call();  // 0x1146f0                                   // 0x001167d8: jal 0x1146f0
    a0 = 4;                                                     // 0x001167dc: addiu $a0, $zero, 4
    v0 = v0 & s0;                                               // 0x001167e0: and $v0, $v0, $s0
    if (v0 == 0) goto label_0x1167d8;                           // 0x001167e4: beqz $v0, 0x1167d8
    a0 = 2;                                                     // 0x001167e8: addiu $a0, $zero, 2
    Deci2Call();  // 0x1146f0                                   // 0x001167ec: jal 0x1146f0
    s0 = s2 + -0x38e8;                                          // 0x001167f0: addiu $s0, $s2, -0x38e8
    g_0024c720 = v0;  // Global at 0x0024c720                   // 0x001167f4: sw $v0, 8($s0)
    a0 = 0x8000 << 16;                                          // 0x001167f8: lui $a0, 0x8000
    sceSifGetReg();  // 0x1146e0                                // 0x001167fc: jal 0x1146e0
    a0 = 0x8000 << 16;                                          // 0x00116804: lui $a0, 0x8000
    sceSifGetReg();  // 0x1146e0                                // 0x0011680c: jal 0x1146e0
    a0 = a0 | 1;                                                // 0x00116810: ori $a0, $a0, 1
    v1 = s4 + -0x3900;                                          // 0x00116814: addiu $v1, $s4, -0x3900
    v0 = s3 + -0x39c0;                                          // 0x00116818: addiu $v0, $s3, -0x39c0
    a0 = 0x8000 << 16;                                          // 0x0011681c: lui $a0, 0x8000
    a0 = a0 | 2;                                                // 0x00116830: ori $a0, $a0, 2
    a2 = 0x14;                                                  // 0x00116838: addiu $a2, $zero, 0x14
    g_0024c710 = v0;  // Global at 0x0024c710                   // 0x0011684c: sw $v0, 0x10($v1)
    g_0024c70c = 0;  // Global at 0x0024c70c                    // 0x00116854: sw $zero, 0xc($v1)
    return func_00116b08();  // Tail call                        // 0x00116858: j 0x116ac8
    sp = sp + 0x60;                                             // 0x0011685c: addiu $sp, $sp, 0x60
    sp = sp + -0x10;                                            // 0x00116860: addiu $sp, $sp, -0x10
    func_00114ef8();  // 0x114e90                                // 0x00116868: jal 0x114e90
    a0 = 5;                                                     // 0x0011686c: addiu $a0, $zero, 5
    v1 = 0x25 << 16;                                            // 0x00116870: lui $v1, 0x25
    a0 = 5;                                                     // 0x00116874: addiu $a0, $zero, 5
    _EnableIntc();  // 0x114010                                 // 0x00116878: jal 0x114010
    a1 = g_0024c714;  // Global at 0x0024c714                   // 0x0011687c: lw $a1, -0x38ec($v1)
    v1 = 0x1f << 16;                                            // 0x00116880: lui $v1, 0x1f
    g_001f0348 = 0;  // Global at 0x001f0348                    // 0x00116888: sw $zero, 0x348($v1)
    return;                                                     // 0x0011688c: jr $ra
    sp = sp + 0x10;                                             // 0x00116890: addiu $sp, $sp, 0x10
}