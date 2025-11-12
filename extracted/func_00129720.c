void func_00129720() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00129720: addiu $sp, $sp, -0x20
    s1 = 0xf;                                                   // 0x0012972c: addiu $s1, $zero, 0xf
    func_001261b8();  // 0x1261a0                                // 0x00129738: jal 0x1261a0
    s2 = 1;                                                     // 0x0012973c: addiu $s2, $zero, 1
    v0 = 0x1f << 16;                                            // 0x00129740: lui $v0, 0x1f
    s0 = v0 + 0x2ec0;                                           // 0x00129744: addiu $s0, $v0, 0x2ec0
label_0x129748:
    v0 = g_001f2ec0;  // Global at 0x001f2ec0                   // 0x00129748: lb $v0, 0($s0)
    if (v0 != s2) goto label_0x129760;                          // 0x0012974c: bnel $v0, $s2, 0x129760
    s1 = s1 + -1;                                               // 0x00129750: addiu $s1, $s1, -1
    func_00129720();  // 0x129658                                // 0x00129754: jal 0x129658
    s1 = s1 + -1;                                               // 0x0012975c: addiu $s1, $s1, -1
label_0x129760:
    if (s1 >= 0) goto label_0x129748;                           // 0x00129760: bgez $s1, 0x129748
    s0 = s0 + 0x44;                                             // 0x00129764: addiu $s0, $s0, 0x44
    return func_001261d0();  // Tail call                        // 0x00129778: j 0x1261b8
    sp = sp + 0x20;                                             // 0x0012977c: addiu $sp, $sp, 0x20
    sp = sp + -0x30;                                            // 0x00129780: addiu $sp, $sp, -0x30
    a0 = 6;                                                     // 0x0012979c: addiu $a0, $zero, 6
    func_00128268();  // 0x1281b8                                // 0x001297b4: jal 0x1281b8
    /* bnezl $s0, 0x1297d0 */                                   // 0x001297bc: bnezl $s0, 0x1297d0
    v0 = g_001f2f05;  // Global at 0x001f2f05                   // 0x001297c0: lb $v0, 1($s0)
    a0 = 0x22 << 16;                                            // 0x001297c4: lui $a0, 0x22
    goto label_0x129824;                                        // 0x001297c8: b 0x129824
    a0 = &str_00222988;  // "E9040826:'type' is illigal.(ADXF_Seek)" // 0x001297cc: addiu $a0, $a0, 0x2988
    s3 = 2;                                                     // 0x001297d0: addiu $s3, $zero, 2
    if (v0 != s3) goto label_0x1297e4;                          // 0x001297d4: bne $v0, $s3, 0x1297e4
    /* nop */                                                   // 0x001297d8: nop 
    func_00129590();  // 0x1294a0                                // 0x001297dc: jal 0x1294a0
label_0x1297e4:
    if (s1 != 0) goto label_0x1297f8;                           // 0x001297e4: bnez $s1, 0x1297f8
    v0 = 1;                                                     // 0x001297e8: addiu $v0, $zero, 1
    goto label_0x129838;                                        // 0x001297ec: b 0x129838
    g_001f2f18 = s2;  // Global at 0x001f2f18                   // 0x001297f0: sw $s2, 0x14($s0)
    /* nop */                                                   // 0x001297f4: nop 
label_0x1297f8:
    if (s1 != v0) goto label_0x129808;                          // 0x001297f8: bne $s1, $v0, 0x129808
    /* nop */                                                   // 0x001297fc: nop 
    goto label_0x129814;                                        // 0x00129800: b 0x129814
    v0 = g_001f2f18;  // Global at 0x001f2f18                   // 0x00129804: lw $v0, 0x14($s0)
label_0x129808:
    if (s1 != s3) goto label_0x129820;                          // 0x00129808: bne $s1, $s3, 0x129820
    a0 = 0x22 << 16;                                            // 0x0012980c: lui $a0, 0x22
    v0 = g_001f2f10;  // Global at 0x001f2f10                   // 0x00129810: lw $v0, 0xc($s0)
label_0x129814:
    v0 = v0 + s2;                                               // 0x00129814: addu $v0, $v0, $s2
    goto label_0x129838;                                        // 0x00129818: b 0x129838
    g_001f2f18 = v0;  // Global at 0x001f2f18                   // 0x0012981c: sw $v0, 0x14($s0)
label_0x129820:
    a0 = &str_002229b0;  // "E9040827:'adxf' is NULL.(ADXF_Tell)" // 0x00129820: addiu $a0, $a0, 0x29b0
label_0x129824:
    func_00127de8();  // 0x127d90                                // 0x00129824: jal 0x127d90
    /* nop */                                                   // 0x00129828: nop 
    goto label_0x129878;                                        // 0x0012982c: b 0x129878
    v0 = -3;                                                    // 0x00129830: addiu $v0, $zero, -3
    /* nop */                                                   // 0x00129834: nop 
label_0x129838:
    v0 = g_001f2f18;  // Global at 0x001f2f18                   // 0x00129838: lw $v0, 0x14($s0)
    if (v0 >= 0) goto label_0x129850;                           // 0x0012983c: bgezl $v0, 0x129850
    v1 = g_001f2f10;  // Global at 0x001f2f10                   // 0x00129840: lw $v1, 0xc($s0)
    goto label_0x12985c;                                        // 0x00129844: b 0x12985c
    g_001f2f18 = 0;  // Global at 0x001f2f18                    // 0x00129848: sw $zero, 0x14($s0)
    /* nop */                                                   // 0x0012984c: nop 
label_0x129850:
    v0 = (v1 < v0) ? 1 : 0;                                     // 0x00129850: slt $v0, $v1, $v0
    /* bnezl $v0, 0x12985c */                                   // 0x00129854: bnezl $v0, 0x12985c
    g_001f2f18 = v1;  // Global at 0x001f2f18                   // 0x00129858: sw $v1, 0x14($s0)
label_0x12985c:
    a0 = 6;                                                     // 0x00129864: addiu $a0, $zero, 6
    a1 = 1;                                                     // 0x00129868: addiu $a1, $zero, 1
    func_00128268();  // 0x1281b8                                // 0x0012986c: jal 0x1281b8
    v0 = g_001f2f18;  // Global at 0x001f2f18                   // 0x00129874: lw $v0, 0x14($s0)
label_0x129878:
    return;                                                     // 0x0012988c: jr $ra
    sp = sp + 0x30;                                             // 0x00129890: addiu $sp, $sp, 0x30
}