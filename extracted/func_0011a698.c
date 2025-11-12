void func_0011a698() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_14, local_18, local_24, local_30;
    
    sp = sp + -0xc0;                                            // 0x0011a698: addiu $sp, $sp, -0xc0
    a0 = 0x11;                                                  // 0x0011a6b4: addiu $a0, $zero, 0x11
    s6 = 0x25 << 16;                                            // 0x0011a6bc: lui $s6, 0x25
    s2 = s6 + -0x1e40;                                          // 0x0011a6c4: addiu $s2, $s6, -0x1e40
    func_00118360();  // 0x118330                                // 0x0011a6cc: jal 0x118330
    v0 = 0x1f << 16;                                            // 0x0011a6d4: lui $v0, 0x1f
    v1 = g_001f03dc;  // Global at 0x001f03dc                   // 0x0011a6d8: lw $v1, 0x3dc($v0)
    /* bnezl $v1, 0x11a6f0 */                                   // 0x0011a6dc: bnezl $v1, 0x11a6f0
    v0 = *(uint8_t*)(s1);                                       // 0x0011a6e0: lbu $v0, 0($s1)
    func_00118668();  // 0x118460                                // 0x0011a6e4: jal 0x118460
    /* nop */                                                   // 0x0011a6e8: nop 
    v0 = *(uint8_t*)(s1);                                       // 0x0011a6ec: lbu $v0, 0($s1)
    v1 = v0 << 0x18;                                            // 0x0011a6f4: sll $v1, $v0, 0x18
    if (v1 == 0) goto label_0x11a73c;                           // 0x0011a6f8: beqz $v1, 0x11a73c
    g_0024e1cc = v0;  // Global at 0x0024e1cc                   // 0x0011a6fc: sb $v0, 0xc($s2)
    s3 = sp + 0x30;                                             // 0x0011a700: addiu $s3, $sp, 0x30
    s5 = 0x25 << 16;                                            // 0x0011a704: lui $s5, 0x25
    s4 = 0x25 << 16;                                            // 0x0011a708: lui $s4, 0x25
    a1 = a1 + 1;                                                // 0x0011a70c: addiu $a1, $a1, 1
    v0 = (a1 < 0x400) ? 1 : 0;                                  // 0x0011a710: slti $v0, $a1, 0x400
    if (v0 == 0) goto label_0x11a748;                           // 0x0011a714: beqz $v0, 0x11a748
    v0 = s1 + a1;                                               // 0x0011a718: addu $v0, $s1, $a1
    a0 = s2 + a1;                                               // 0x0011a71c: addu $a0, $s2, $a1
    v1 = g_001f0000;  // Global at 0x001f0000                   // 0x0011a720: lbu $v1, 0($v0)
    g_0024f8cc = v1;  // Global at 0x0024f8cc                   // 0x0011a724: sb $v1, 0xc($a0)
    v1 = v1 << 0x18;                                            // 0x0011a728: sll $v1, $v1, 0x18
    /* bnezl $v1, 0x11a710 */                                   // 0x0011a72c: bnezl $v1, 0x11a710
    a1 = a1 + 1;                                                // 0x0011a730: addiu $a1, $a1, 1
    goto label_0x11a74c;                                        // 0x0011a734: b 0x11a74c
    v0 = 0x400;                                                 // 0x0011a738: addiu $v0, $zero, 0x400
label_0x11a73c:
    s3 = sp + 0x30;                                             // 0x0011a73c: addiu $s3, $sp, 0x30
    s5 = 0x25 << 16;                                            // 0x0011a740: lui $s5, 0x25
    s4 = 0x25 << 16;                                            // 0x0011a744: lui $s4, 0x25
label_0x11a748:
    v0 = 0x400;                                                 // 0x0011a748: addiu $v0, $zero, 0x400
label_0x11a74c:
    if (a1 == v0) goto label_0x11a754;                          // 0x0011a74c: beql $a1, $v0, 0x11a754
    g_0024e5cb = 0;  // Global at 0x0024e5cb                    // 0x0011a750: sb $zero, 0x40b($s2)
label_0x11a754:
    v0 = g_0024e1c0;  // Global at 0x0024e1c0                   // 0x0011a754: lbu $v0, 0($s0)
    v1 = v0 << 0x18;                                            // 0x0011a75c: sll $v1, $v0, 0x18
    if (v1 == 0) goto label_0x11a794;                           // 0x0011a760: beqz $v1, 0x11a794
    g_0024e5cc = v0;  // Global at 0x0024e5cc                   // 0x0011a764: sb $v0, 0x40c($s2)
    a2 = s2 + 0x40c;                                            // 0x0011a768: addiu $a2, $s2, 0x40c
    a1 = a1 + 1;                                                // 0x0011a76c: addiu $a1, $a1, 1
    v0 = (a1 < 0x400) ? 1 : 0;                                  // 0x0011a770: slti $v0, $a1, 0x400
    if (v0 == 0) goto label_0x11a794;                           // 0x0011a774: beqz $v0, 0x11a794
    v0 = s0 + a1;                                               // 0x0011a778: addu $v0, $s0, $a1
    a0 = a2 + a1;                                               // 0x0011a77c: addu $a0, $a2, $a1
    v1 = g_001f0000;  // Global at 0x001f0000                   // 0x0011a780: lbu $v1, 0($v0)
    g_0024f8c0 = v1;  // Global at 0x0024f8c0                   // 0x0011a784: sb $v1, 0($a0)
    v1 = v1 << 0x18;                                            // 0x0011a788: sll $v1, $v1, 0x18
    /* bnezl $v1, 0x11a770 */                                   // 0x0011a78c: bnezl $v1, 0x11a770
    a1 = a1 + 1;                                                // 0x0011a790: addiu $a1, $a1, 1
label_0x11a794:
    v0 = 0x400;                                                 // 0x0011a794: addiu $v0, $zero, 0x400
    if (a1 == v0) goto label_0x11a7a0;                          // 0x0011a798: beql $a1, $v0, 0x11a7a0
    g_0024e9cb = 0;  // Global at 0x0024e9cb                    // 0x0011a79c: sb $zero, 0x80b($s2)
label_0x11a7a0:
    v0 = 1;                                                     // 0x0011a7a0: addiu $v0, $zero, 1
    local_18 = 0;                                               // 0x0011a7a4: sw $zero, 0x18($sp)
    local_14 = v0;                                              // 0x0011a7a8: sw $v0, 0x14($sp)
    a0 = sp + 0x10;                                             // 0x0011a7ac: addiu $a0, $sp, 0x10
    local_24 = 0;                                               // 0x0011a7b0: sw $zero, 0x24($sp)
    DeleteSema();  // 0x1142e0                                  // 0x0011a7b4: jal 0x1142e0
    s0 = s6 + -0x1e40;                                          // 0x0011a7b8: addiu $s0, $s6, -0x1e40
    s4 = s4 + -0x1200;                                          // 0x0011a7bc: addiu $s4, $s4, -0x1200
    v0 = 4;                                                     // 0x0011a7c8: addiu $v0, $zero, 4
    g_0024e1c4 = s3;  // Global at 0x0024e1c4                   // 0x0011a7cc: sw $s3, 4($s2)
    g_0024e1c8 = v0;  // Global at 0x0024e1c8                   // 0x0011a7d0: sw $v0, 8($s2)
    a1 = 0x80c;                                                 // 0x0011a7d4: addiu $a1, $zero, 0x80c
    func_00116d40();  // 0x116c90                                // 0x0011a7d8: jal 0x116c90
    g_0024e1c0 = s1;  // Global at 0x0024e1c0                   // 0x0011a7dc: sw $s1, 0($s2)
    a0 = s5 + -0x740;                                           // 0x0011a7e0: addiu $a0, $s5, -0x740
    local_0 = 0;                                                // 0x0011a7e8: sw $zero, 0($sp)
    a1 = 0x11;                                                  // 0x0011a7ec: addiu $a1, $zero, 0x11
    t0 = 0x80c;                                                 // 0x0011a7f4: addiu $t0, $zero, 0x80c
    t2 = 4;                                                     // 0x0011a7fc: addiu $t2, $zero, 4
    func_001178a0();  // 0x1176a8                                // 0x0011a800: jal 0x1176a8
    if (v0 >= 0) goto label_0x11a828;                           // 0x0011a808: bgez $v0, 0x11a828
    v0 = 0x2000 << 16;                                          // 0x0011a80c: lui $v0, 0x2000
    SignalSema();  // 0x1142f0                                  // 0x0011a810: jal 0x1142f0
    func_00118418();  // 0x118360                                // 0x0011a818: jal 0x118360
    /* nop */                                                   // 0x0011a81c: nop 
    goto label_0x11a860;                                        // 0x0011a820: b 0x11a860
    v0 = -0xb;                                                  // 0x0011a824: addiu $v0, $zero, -0xb
label_0x11a828:
    v0 = s4 | v0;                                               // 0x0011a828: or $v0, $s4, $v0
    func_00118418();  // 0x118360                                // 0x0011a82c: jal 0x118360
    s0 = g_20000000;  // Global at 0x20000000                   // 0x0011a830: lw $s0, 0($v0)
    if (s0 != 0) goto label_0x11a84c;                           // 0x0011a834: bnez $s0, 0x11a84c
    /* nop */                                                   // 0x0011a838: nop 
    SignalSema();  // 0x1142f0                                  // 0x0011a83c: jal 0x1142f0
    goto label_0x11a860;                                        // 0x0011a844: b 0x11a860
    v0 = -0xb;                                                  // 0x0011a848: addiu $v0, $zero, -0xb
label_0x11a84c:
    PollSema();  // 0x114320                                    // 0x0011a84c: jal 0x114320
    SignalSema();  // 0x1142f0                                  // 0x0011a854: jal 0x1142f0
    v0 = local_30;                                              // 0x0011a85c: lw $v0, 0x30($sp)
label_0x11a860:
    return;                                                     // 0x0011a880: jr $ra
    sp = sp + 0xc0;                                             // 0x0011a884: addiu $sp, $sp, 0xc0
}