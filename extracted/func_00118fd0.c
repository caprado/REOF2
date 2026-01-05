void func_00118fd0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_14, local_18, local_24, local_30;
    
    sp = sp + -0xe0;                                            // 0x00118fd0: addiu $sp, $sp, -0xe0
    s7 = 0x25 << 16;                                            // 0x00118fec: lui $s7, 0x25
    s2 = s7 + -0x1e40;                                          // 0x00118ff4: addiu $s2, $s7, -0x1e40
    func_00117eb8();  // 117eb8                                // 0x00119008: jal 0x117eb8
    func_00118330();  // 118330                                // 0x00119014: jal 0x118330
    a0 = 3;                                                     // 0x00119018: addiu $a0, $zero, 3
    v1 = 0x1f << 16;                                            // 0x0011901c: lui $v1, 0x1f
    v0 = g_001f03dc;  // Global at 0x001f03dc                   // 0x00119020: lw $v0, 0x3dc($v1)
    if (v0 != 0) goto label_0x11903c;                           // 0x00119024: bnez $v0, 0x11903c
    /* nop */                                                   // 0x00119028: nop 
    func_00118360();  // 118360                                // 0x0011902c: jal 0x118360
    /* nop */                                                   // 0x00119030: nop 
    goto label_0x119260;                                        // 0x00119034: b 0x119260
    v0 = -1;                                                    // 0x00119038: addiu $v0, $zero, -1
label_0x11903c:
    if (s0 == 0) goto label_0x119050;                           // 0x0011903c: beqz $s0, 0x119050
    /* nop */                                                   // 0x00119040: nop 
    s6 = g_0024ee04;  // Global at 0x0024ee04                   // 0x00119044: lw $s6, 4($s0)
    /* bnezl $s6, 0x119060 */                                   // 0x00119048: bnezl $s6, 0x119060
    v1 = g_0024ee00;  // Global at 0x0024ee00                   // 0x0011904c: lw $v1, 0($s0)
label_0x119050:
    func_00118360();  // 118360                                // 0x00119050: jal 0x118360
    /* nop */                                                   // 0x00119054: nop 
    goto label_0x119260;                                        // 0x00119058: b 0x119260
    v0 = -9;                                                    // 0x0011905c: addiu $v0, $zero, -9
    v0 = 0x25 << 16;                                            // 0x00119060: lui $v0, 0x25
    v0 = v0 + -0x940;                                           // 0x00119064: addiu $v0, $v0, -0x940
    a0 = 1;                                                     // 0x00119068: addiu $a0, $zero, 1
    g_0024e1cc = v1;  // Global at 0x0024e1cc                   // 0x0011906c: sw $v1, 0xc($s2)
    v0 = s0 - v0;                                               // 0x00119070: subu $v0, $s0, $v0
    local_14 = a0;                                              // 0x00119074: sw $a0, 0x14($sp)
    v0 = v0 >> 4;                                               // 0x00119078: sra $v0, $v0, 4
    g_0024e1ec = v0;  // Global at 0x0024e1ec                   // 0x0011907c: sw $v0, 0x2c($s2)
    a0 = sp + 0x10;                                             // 0x00119080: addiu $a0, $sp, 0x10
    g_0024e1d4 = s5;  // Global at 0x0024e1d4                   // 0x00119084: sw $s5, 0x14($s2)
    g_0024e1d0 = s1;  // Global at 0x0024e1d0                   // 0x00119088: sw $s1, 0x10($s2)
    local_18 = 0;                                               // 0x0011908c: sw $zero, 0x18($sp)
    DeleteSema();  // 0x1142e0                                  // 0x00119090: jal 0x1142e0
    local_24 = 0;                                               // 0x00119094: sw $zero, 0x24($sp)
    v1 = 4;                                                     // 0x0011909c: addiu $v1, $zero, 4
    v0 = sp + 0x30;                                             // 0x001190a0: addiu $v0, $sp, 0x30
    g_0024e1c8 = v1;  // Global at 0x0024e1c8                   // 0x001190a4: sw $v1, 8($s2)
    g_0024e1c4 = v0;  // Global at 0x0024e1c4                   // 0x001190a8: sw $v0, 4($s2)
    v0 = s6 & 0x8000;                                           // 0x001190ac: andi $v0, $s6, 0x8000
    if (v0 == 0) goto label_0x119144;                           // 0x001190b0: beqz $v0, 0x119144
    g_0024e1c0 = s4;  // Global at 0x0024e1c0                   // 0x001190b4: sw $s4, -0x1e40($s7)
    s3 = 0x1f << 16;                                            // 0x001190b8: lui $s3, 0x1f
    PollSema();  // 0x114320                                    // 0x001190bc: jal 0x114320
    a0 = g_001f03ec;  // Global at 0x001f03ec                   // 0x001190c0: lw $a0, 0x3ec($s3)
    a3 = 0x1f << 16;                                            // 0x001190c4: lui $a3, 0x1f
    v1 = g_001f0358;  // Global at 0x001f0358                   // 0x001190cc: lw $v1, 0x358($a3)
    v0 = -1;                                                    // 0x001190d0: addiu $v0, $zero, -1
    if (v1 != v0) goto label_0x1190f8;                          // 0x001190d4: bne $v1, $v0, 0x1190f8
    s0 = s1 & 0xf;                                              // 0x001190d8: andi $s0, $s1, 0xf
    v1 = g_0024e1c0;  // Global at 0x0024e1c0                   // 0x001190dc: lw $v1, -0x1e40($s7)
    fp = 0x25 << 16;                                            // 0x001190e0: lui $fp, 0x25
    v0 = -v1;                                                   // 0x001190e4: negu $v0, $v1
    g_001f0358 = v1;  // Global at 0x001f0358                   // 0x001190e8: sw $v1, 0x358($a3)
    goto label_0x119134;                                        // 0x001190ec: b 0x119134
    g_0024e1c0 = v0;  // Global at 0x0024e1c0                   // 0x001190f0: sw $v0, -0x1e40($s7)
    /* nop */                                                   // 0x001190f4: nop 
label_0x1190f8:
    fp = 0x25 << 16;                                            // 0x001190f8: lui $fp, 0x25
    a2 = a2 + 1;                                                // 0x001190fc: addiu $a2, $a2, 1
label_0x119100:
    v0 = (a2 < 0x20) ? 1 : 0;                                   // 0x00119100: slti $v0, $a2, 0x20
    if (v0 == 0) goto label_0x119134;                           // 0x00119104: beqz $v0, 0x119134
    v0 = a2 << 2;                                               // 0x00119108: sll $v0, $a2, 2
    v1 = a3 + 0x358;                                            // 0x0011910c: addiu $v1, $a3, 0x358
    a1 = v0 + v1;                                               // 0x00119110: addu $a1, $v0, $v1
    a0 = -1;                                                    // 0x00119114: addiu $a0, $zero, -1
    v0 = *(int32_t*)(a1);                                       // 0x00119118: lw $v0, 0($a1)
    if (v0 != a0) goto label_0x119100;                          // 0x0011911c: bne $v0, $a0, 0x119100
    a2 = a2 + 1;                                                // 0x00119120: addiu $a2, $a2, 1
    v0 = g_0024e1c0;  // Global at 0x0024e1c0                   // 0x00119124: lw $v0, 0($s2)
    v1 = -v0;                                                   // 0x00119128: negu $v1, $v0
    *(uint32_t*)(a1) = v0;                                      // 0x0011912c: sw $v0, 0($a1)
    g_0024e1c0 = v1;  // Global at 0x0024e1c0                   // 0x00119130: sw $v1, 0($s2)
label_0x119134:
    iSignalSema();  // 0x114300                                 // 0x00119134: jal 0x114300
    a0 = g_001f03ec;  // Global at 0x001f03ec                   // 0x00119138: lw $a0, 0x3ec($s3)
    goto label_0x11914c;                                        // 0x0011913c: b 0x11914c
    /* nop */                                                   // 0x00119140: nop 
label_0x119144:
    s0 = s1 & 0xf;                                              // 0x00119144: andi $s0, $s1, 0xf
    fp = 0x25 << 16;                                            // 0x00119148: lui $fp, 0x25
label_0x11914c:
    if (s0 != 0) goto label_0x11915c;                           // 0x0011914c: bnez $s0, 0x11915c
    v0 = (unsigned)s1 >> 4;                                     // 0x00119150: srl $v0, $s1, 4
    goto label_0x119168;                                        // 0x00119154: b 0x119168
label_0x11915c:
    v1 = s1 + -0x10;                                            // 0x0011915c: addiu $v1, $s1, -0x10
    v0 = v0 << 4;                                               // 0x00119160: sll $v0, $v0, 4
    s0 = v0 - v1;                                               // 0x00119164: subu $s0, $v0, $v1
label_0x119168:
    v1 = (s5 < s0) ? 1 : 0;                                     // 0x00119168: slt $v1, $s5, $s0
    s3 = 0x2000 << 16;                                          // 0x0011916c: lui $s3, 0x2000
    v0 = s6 & s3;                                               // 0x00119170: and $v0, $s6, $s3
    if (v0 != 0) goto label_0x119188;                           // 0x00119174: bnez $v0, 0x119188
    if (v1 != 0) s0 = s5;                                       // 0x00119178: movn $s0, $s5, $v1
    func_00116c90();  // 116c90                                // 0x00119180: jal 0x116c90
label_0x119188:
    s1 = s1 | s3;                                               // 0x00119188: or $s1, $s1, $s3
    g_0024e1d8 = s0;  // Global at 0x0024e1d8                   // 0x0011918c: sw $s0, 0x18($s2)
    if (s0 <= 0) goto label_0x1191c0;                           // 0x00119190: blez $s0, 0x1191c0
    a2 = s2 + 0x1c;                                             // 0x00119198: addiu $a2, $s2, 0x1c
    /* nop */                                                   // 0x0011919c: nop 
label_0x1191a0:
    v0 = s1 + a1;                                               // 0x001191a0: addu $v0, $s1, $a1
    a0 = a2 + a1;                                               // 0x001191a4: addu $a0, $a2, $a1
    v1 = g_0024f6c0;  // Global at 0x0024f6c0                   // 0x001191a8: lbu $v1, 0($v0)
    a1 = a1 + 1;                                                // 0x001191ac: addiu $a1, $a1, 1
    v0 = (a1 < s0) ? 1 : 0;                                     // 0x001191b0: slt $v0, $a1, $s0
    g_0024f8c0 = v1;  // Global at 0x0024f8c0                   // 0x001191b4: sb $v1, 0($a0)
    if (v0 != 0) goto label_0x1191a0;                           // 0x001191b8: bnez $v0, 0x1191a0
    /* nop */                                                   // 0x001191bc: nop 
label_0x1191c0:
    s0 = fp + -0x1200;                                          // 0x001191c0: addiu $s0, $fp, -0x1200
    v0 = 0x25 << 16;                                            // 0x001191c4: lui $v0, 0x25
    a0 = v0 + -0x740;                                           // 0x001191c8: addiu $a0, $v0, -0x740
    a3 = s7 + -0x1e40;                                          // 0x001191cc: addiu $a3, $s7, -0x1e40
    local_0 = 0;                                                // 0x001191d0: sw $zero, 0($sp)
    a1 = 3;                                                     // 0x001191d4: addiu $a1, $zero, 3
    t0 = 0x30;                                                  // 0x001191dc: addiu $t0, $zero, 0x30
    t2 = 4;                                                     // 0x001191e4: addiu $t2, $zero, 4
    func_001176a8();  // 1176a8                                // 0x001191e8: jal 0x1176a8
    if (v0 >= 0) goto label_0x119210;                           // 0x001191f0: bgez $v0, 0x119210
    v0 = 0x2000 << 16;                                          // 0x001191f4: lui $v0, 0x2000
    SignalSema();  // 0x1142f0                                  // 0x001191f8: jal 0x1142f0
    func_00118360();  // 118360                                // 0x00119200: jal 0x118360
    /* nop */                                                   // 0x00119204: nop 
    goto label_0x119260;                                        // 0x00119208: b 0x119260
    v0 = -0xb;                                                  // 0x0011920c: addiu $v0, $zero, -0xb
label_0x119210:
    v0 = s0 | v0;                                               // 0x00119210: or $v0, $s0, $v0
    func_00118360();  // 118360                                // 0x00119214: jal 0x118360
    s0 = g_20000000;  // Global at 0x20000000                   // 0x00119218: lw $s0, 0($v0)
    if (s0 != 0) goto label_0x119234;                           // 0x0011921c: bnez $s0, 0x119234
    v0 = s6 & 0x8000;                                           // 0x00119220: andi $v0, $s6, 0x8000
    SignalSema();  // 0x1142f0                                  // 0x00119224: jal 0x1142f0
    goto label_0x119260;                                        // 0x0011922c: b 0x119260
    v0 = -0xb;                                                  // 0x00119230: addiu $v0, $zero, -0xb
label_0x119234:
    if (v0 == 0) goto label_0x11924c;                           // 0x00119234: beqz $v0, 0x11924c
    /* nop */                                                   // 0x00119238: nop 
    SignalSema();  // 0x1142f0                                  // 0x0011923c: jal 0x1142f0
    goto label_0x119260;                                        // 0x00119244: b 0x119260
label_0x11924c:
    PollSema();  // 0x114320                                    // 0x0011924c: jal 0x114320
    SignalSema();  // 0x1142f0                                  // 0x00119254: jal 0x1142f0
    v0 = local_30;                                              // 0x0011925c: lw $v0, 0x30($sp)
label_0x119260:
    return;                                                     // 0x00119288: jr $ra
    sp = sp + 0xe0;                                             // 0x0011928c: addiu $sp, $sp, 0xe0
}