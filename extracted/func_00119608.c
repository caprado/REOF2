void func_00119608() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_14, local_18, local_24, local_30;
    
    sp = sp + -0xd0;                                            // 0x00119608: addiu $sp, $sp, -0xd0
    s6 = 0x25 << 16;                                            // 0x0011963c: lui $s6, 0x25
    func_00117f28();  // 0x117eb8                                // 0x00119648: jal 0x117eb8
    s1 = s6 + -0x1e40;                                          // 0x0011964c: addiu $s1, $s6, -0x1e40
    func_00118360();  // 0x118330                                // 0x00119654: jal 0x118330
    a0 = 0x1a;                                                  // 0x00119658: addiu $a0, $zero, 0x1a
    v0 = 0x1f << 16;                                            // 0x0011965c: lui $v0, 0x1f
    v1 = g_001f03dc;  // Global at 0x001f03dc                   // 0x00119660: lw $v1, 0x3dc($v0)
    if (v1 != 0) goto label_0x119674;                           // 0x00119664: bnez $v1, 0x119674
    /* nop */                                                   // 0x00119668: nop 
    func_00118668();  // 0x118460                                // 0x0011966c: jal 0x118460
    /* nop */                                                   // 0x00119670: nop 
label_0x119674:
    if (s2 == 0) goto label_0x119688;                           // 0x00119674: beqz $s2, 0x119688
    /* nop */                                                   // 0x00119678: nop 
    v0 = *(int32_t*)((s2) + 4);                                 // 0x0011967c: lw $v0, 4($s2)
    if (v0 != 0) goto label_0x119698;                           // 0x00119680: bnez $v0, 0x119698
    v0 = ((unsigned)s3 < (unsigned)0x401) ? 1 : 0;              // 0x00119684: sltiu $v0, $s3, 0x401
label_0x119688:
    func_00118418();  // 0x118360                                // 0x00119688: jal 0x118360
    /* nop */                                                   // 0x0011968c: nop 
    goto label_0x1197b8;                                        // 0x00119690: b 0x1197b8
    v0 = -9;                                                    // 0x00119694: addiu $v0, $zero, -9
label_0x119698:
    if (v0 == 0) goto label_0x1196a8;                           // 0x00119698: beqz $v0, 0x1196a8
    v0 = ((unsigned)s4 < (unsigned)0x401) ? 1 : 0;              // 0x0011969c: sltiu $v0, $s4, 0x401
    if (v0 != 0) goto label_0x1196b8;                           // 0x001196a0: bnez $v0, 0x1196b8
    /* nop */                                                   // 0x001196a4: nop 
label_0x1196a8:
    func_00118418();  // 0x118360                                // 0x001196a8: jal 0x118360
    /* nop */                                                   // 0x001196ac: nop 
    goto label_0x1197b8;                                        // 0x001196b0: b 0x1197b8
    v0 = -0x16;                                                 // 0x001196b4: addiu $v0, $zero, -0x16
label_0x1196b8:
    if (s0 != 0) goto label_0x1196c8;                           // 0x001196b8: bnez $s0, 0x1196c8
    goto label_0x1196d4;                                        // 0x001196c0: b 0x1196d4
    g_0024e5dc = 0;  // Global at 0x0024e5dc                    // 0x001196c4: sw $zero, 0x41c($s1)
label_0x1196c8:
    a0 = s1 + 0x14;                                             // 0x001196c8: addiu $a0, $s1, 0x14
    func_00107b68();  // 0x107ab8                                // 0x001196cc: jal 0x107ab8
label_0x1196d4:
    v0 = *(int32_t*)(s2);                                       // 0x001196d4: lw $v0, 0($s2)
    v1 = 1;                                                     // 0x001196d8: addiu $v1, $zero, 1
    g_0024e1d0 = s5;  // Global at 0x0024e1d0                   // 0x001196dc: sw $s5, 0x10($s1)
    a0 = sp + 0x10;                                             // 0x001196e0: addiu $a0, $sp, 0x10
    g_0024e1cc = v0;  // Global at 0x0024e1cc                   // 0x001196e4: sw $v0, 0xc($s1)
    s0 = s6 + -0x1e40;                                          // 0x001196e8: addiu $s0, $s6, -0x1e40
    g_0024e5dc = s3;  // Global at 0x0024e5dc                   // 0x001196ec: sw $s3, 0x41c($s1)
    local_14 = v1;                                              // 0x001196f0: sw $v1, 0x14($sp)
    local_18 = 0;                                               // 0x001196f4: sw $zero, 0x18($sp)
    DeleteSema();  // 0x1142e0                                  // 0x001196f8: jal 0x1142e0
    local_24 = 0;                                               // 0x001196fc: sw $zero, 0x24($sp)
    v1 = 4;                                                     // 0x00119704: addiu $v1, $zero, 4
    v0 = sp + 0x30;                                             // 0x00119708: addiu $v0, $sp, 0x30
    g_0024e5d8 = s4;  // Global at 0x0024e5d8                   // 0x0011970c: sw $s4, 0x418($s1)
    g_0024e1c4 = v0;  // Global at 0x0024e1c4                   // 0x00119710: sw $v0, 4($s1)
    g_0024e1c8 = v1;  // Global at 0x0024e1c8                   // 0x00119718: sw $v1, 8($s1)
    a1 = 0x420;                                                 // 0x0011971c: addiu $a1, $zero, 0x420
    g_0024e5d4 = s7;  // Global at 0x0024e5d4                   // 0x00119720: sw $s7, 0x414($s1)
    func_00116d40();  // 0x116c90                                // 0x00119724: jal 0x116c90
    g_0024e1c0 = s2;  // Global at 0x0024e1c0                   // 0x00119728: sw $s2, 0($s1)
    v0 = 0x25 << 16;                                            // 0x0011972c: lui $v0, 0x25
    a0 = 0x25 << 16;                                            // 0x00119730: lui $a0, 0x25
    s1 = v0 + -0x1200;                                          // 0x00119734: addiu $s1, $v0, -0x1200
    a0 = a0 + -0x740;                                           // 0x00119738: addiu $a0, $a0, -0x740
    local_0 = 0;                                                // 0x00119740: sw $zero, 0($sp)
    a1 = 0x1a;                                                  // 0x00119744: addiu $a1, $zero, 0x1a
    t0 = 0x420;                                                 // 0x0011974c: addiu $t0, $zero, 0x420
    t2 = 4;                                                     // 0x00119754: addiu $t2, $zero, 4
    func_001178a0();  // 0x1176a8                                // 0x00119758: jal 0x1176a8
    if (v0 >= 0) goto label_0x119780;                           // 0x00119760: bgez $v0, 0x119780
    v0 = 0x2000 << 16;                                          // 0x00119764: lui $v0, 0x2000
    SignalSema();  // 0x1142f0                                  // 0x00119768: jal 0x1142f0
    func_00118418();  // 0x118360                                // 0x00119770: jal 0x118360
    /* nop */                                                   // 0x00119774: nop 
    goto label_0x1197b8;                                        // 0x00119778: b 0x1197b8
    v0 = -0xb;                                                  // 0x0011977c: addiu $v0, $zero, -0xb
label_0x119780:
    v0 = s1 | v0;                                               // 0x00119780: or $v0, $s1, $v0
    func_00118418();  // 0x118360                                // 0x00119784: jal 0x118360
    s0 = g_20000000;  // Global at 0x20000000                   // 0x00119788: lw $s0, 0($v0)
    if (s0 != 0) goto label_0x1197a4;                           // 0x0011978c: bnez $s0, 0x1197a4
    /* nop */                                                   // 0x00119790: nop 
    SignalSema();  // 0x1142f0                                  // 0x00119794: jal 0x1142f0
    goto label_0x1197b8;                                        // 0x0011979c: b 0x1197b8
    v0 = -0xb;                                                  // 0x001197a0: addiu $v0, $zero, -0xb
label_0x1197a4:
    PollSema();  // 0x114320                                    // 0x001197a4: jal 0x114320
    SignalSema();  // 0x1142f0                                  // 0x001197ac: jal 0x1142f0
    v0 = local_30;                                              // 0x001197b4: lw $v0, 0x30($sp)
label_0x1197b8:
    return;                                                     // 0x001197dc: jr $ra
    sp = sp + 0xd0;                                             // 0x001197e0: addiu $sp, $sp, 0xd0
}