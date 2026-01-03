void func_0011a458() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_14, local_18, local_24, local_30;
    
    sp = sp + -0xe0;                                            // 0x0011a458: addiu $sp, $sp, -0xe0
    a0 = 0xd;                                                   // 0x0011a47c: addiu $a0, $zero, 0xd
    fp = 0x25 << 16;                                            // 0x0011a484: lui $fp, 0x25
    s3 = fp + -0x1e40;                                          // 0x0011a48c: addiu $s3, $fp, -0x1e40
    func_00118330();  // 118330                                // 0x0011a498: jal 0x118330
    v1 = 0x1f << 16;                                            // 0x0011a4a0: lui $v1, 0x1f
    v0 = g_001f03dc;  // Global at 0x001f03dc                   // 0x0011a4a4: lw $v0, 0x3dc($v1)
    /* bnezl $v0, 0x11a4bc */                                   // 0x0011a4a8: bnezl $v0, 0x11a4bc
    v0 = *(uint8_t*)(s2);                                       // 0x0011a4ac: lbu $v0, 0($s2)
    func_00118460();  // 118460                                // 0x0011a4b0: jal 0x118460
    /* nop */                                                   // 0x0011a4b4: nop 
    v0 = *(uint8_t*)(s2);                                       // 0x0011a4b8: lbu $v0, 0($s2)
    if (v1 == 0) goto label_0x11a500;                           // 0x0011a4c4: beqz $v1, 0x11a500
    g_0024e210 = v0;  // Global at 0x0024e210                   // 0x0011a4c8: sb $v0, 0x50($s3)
    s4 = sp + 0x30;                                             // 0x0011a4cc: addiu $s4, $sp, 0x30
    s6 = 0x25 << 16;                                            // 0x0011a4d0: lui $s6, 0x25
    s5 = 0x25 << 16;                                            // 0x0011a4d4: lui $s5, 0x25
label_0x11a4d8:
    s1 = s1 + 1;                                                // 0x0011a4d8: addiu $s1, $s1, 1
    v0 = (s1 < 0x400) ? 1 : 0;                                  // 0x0011a4dc: slti $v0, $s1, 0x400
    if (v0 == 0) goto label_0x11a50c;                           // 0x0011a4e0: beqz $v0, 0x11a50c
    v0 = s2 + s1;                                               // 0x0011a4e4: addu $v0, $s2, $s1
    a0 = s3 + s1;                                               // 0x0011a4e8: addu $a0, $s3, $s1
    v1 = g_20000000;  // Global at 0x20000000                   // 0x0011a4ec: lbu $v1, 0($v0)
    if (v1 != 0) goto label_0x11a4d8;                           // 0x0011a4f0: bnez $v1, 0x11a4d8
    g_0024f910 = v1;  // Global at 0x0024f910                   // 0x0011a4f4: sb $v1, 0x50($a0)
    goto label_0x11a510;                                        // 0x0011a4f8: b 0x11a510
    v0 = 0x400;                                                 // 0x0011a4fc: addiu $v0, $zero, 0x400
label_0x11a500:
    s4 = sp + 0x30;                                             // 0x0011a500: addiu $s4, $sp, 0x30
    s6 = 0x25 << 16;                                            // 0x0011a504: lui $s6, 0x25
    s5 = 0x25 << 16;                                            // 0x0011a508: lui $s5, 0x25
label_0x11a50c:
    v0 = 0x400;                                                 // 0x0011a50c: addiu $v0, $zero, 0x400
label_0x11a510:
    if (s1 != v0) goto label_0x11a520;                          // 0x0011a510: bne $s1, $v0, 0x11a520
    /* nop */                                                   // 0x0011a514: nop 
    g_0024e60f = 0;  // Global at 0x0024e60f                    // 0x0011a518: sb $zero, 0x44f($s3)
    s1 = 0x3ff;                                                 // 0x0011a51c: addiu $s1, $zero, 0x3ff
label_0x11a520:
    v0 = 1;                                                     // 0x0011a5a0: addiu $v0, $zero, 1
    g_0024e1cc = s7;  // Global at 0x0024e1cc                   // 0x0011a5a4: sw $s7, 0xc($s3)
    a0 = sp + 0x10;                                             // 0x0011a5a8: addiu $a0, $sp, 0x10
    local_14 = v0;                                              // 0x0011a5ac: sw $v0, 0x14($sp)
    s0 = fp + -0x1e40;                                          // 0x0011a5b0: addiu $s0, $fp, -0x1e40
    local_18 = 0;                                               // 0x0011a5b4: sw $zero, 0x18($sp)
    s5 = s5 + -0x1200;                                          // 0x0011a5b8: addiu $s5, $s5, -0x1200
    DeleteSema();  // 0x1142e0                                  // 0x0011a5bc: jal 0x1142e0
    local_24 = 0;                                               // 0x0011a5c0: sw $zero, 0x24($sp)
    v0 = 4;                                                     // 0x0011a5cc: addiu $v0, $zero, 4
    g_0024e1c4 = s4;  // Global at 0x0024e1c4                   // 0x0011a5d0: sw $s4, 4($s3)
    g_0024e1c8 = v0;  // Global at 0x0024e1c8                   // 0x0011a5d4: sw $v0, 8($s3)
    a1 = 0x450;                                                 // 0x0011a5d8: addiu $a1, $zero, 0x450
    func_00116c90();  // 116c90                                // 0x0011a5dc: jal 0x116c90
    g_0024e1c0 = s2;  // Global at 0x0024e1c0                   // 0x0011a5e0: sw $s2, 0($s3)
    a0 = s6 + -0x740;                                           // 0x0011a5e4: addiu $a0, $s6, -0x740
    t0 = s1 + 0x51;                                             // 0x0011a5ec: addiu $t0, $s1, 0x51
    local_0 = 0;                                                // 0x0011a5f0: sw $zero, 0($sp)
    a1 = 0xd;                                                   // 0x0011a5f4: addiu $a1, $zero, 0xd
    t2 = 4;                                                     // 0x0011a600: addiu $t2, $zero, 4
    func_001176a8();  // 1176a8                                // 0x0011a604: jal 0x1176a8
    if (v0 >= 0) goto label_0x11a62c;                           // 0x0011a60c: bgez $v0, 0x11a62c
    v0 = 0x2000 << 16;                                          // 0x0011a610: lui $v0, 0x2000
    SignalSema();  // 0x1142f0                                  // 0x0011a614: jal 0x1142f0
    func_00118360();  // 118360                                // 0x0011a61c: jal 0x118360
    /* nop */                                                   // 0x0011a620: nop 
    goto label_0x11a664;                                        // 0x0011a624: b 0x11a664
    v0 = -0xb;                                                  // 0x0011a628: addiu $v0, $zero, -0xb
label_0x11a62c:
    v0 = s5 | v0;                                               // 0x0011a62c: or $v0, $s5, $v0
    func_00118360();  // 118360                                // 0x0011a630: jal 0x118360
    s0 = g_20000000;  // Global at 0x20000000                   // 0x0011a634: lw $s0, 0($v0)
    if (s0 != 0) goto label_0x11a650;                           // 0x0011a638: bnez $s0, 0x11a650
    /* nop */                                                   // 0x0011a63c: nop 
    SignalSema();  // 0x1142f0                                  // 0x0011a640: jal 0x1142f0
    goto label_0x11a664;                                        // 0x0011a648: b 0x11a664
    v0 = -0xb;                                                  // 0x0011a64c: addiu $v0, $zero, -0xb
label_0x11a650:
    PollSema();  // 0x114320                                    // 0x0011a650: jal 0x114320
    SignalSema();  // 0x1142f0                                  // 0x0011a658: jal 0x1142f0
    v0 = local_30;                                              // 0x0011a660: lw $v0, 0x30($sp)
label_0x11a664:
    return;                                                     // 0x0011a68c: jr $ra
    sp = sp + 0xe0;                                             // 0x0011a690: addiu $sp, $sp, 0xe0
}