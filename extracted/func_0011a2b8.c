void func_0011a2b8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_14, local_18, local_24, local_30;
    
    sp = sp + -0xd0;                                            // 0x0011a2b8: addiu $sp, $sp, -0xd0
    a0 = 0xc;                                                   // 0x0011a2d4: addiu $a0, $zero, 0xc
    s7 = 0x25 << 16;                                            // 0x0011a2dc: lui $s7, 0x25
    s2 = s7 + -0x1e40;                                          // 0x0011a2e4: addiu $s2, $s7, -0x1e40
    func_00118360();  // 0x118330                                // 0x0011a2f0: jal 0x118330
    v0 = 0x1f << 16;                                            // 0x0011a2f8: lui $v0, 0x1f
    v1 = g_001f03dc;  // Global at 0x001f03dc                   // 0x0011a2fc: lw $v1, 0x3dc($v0)
    /* bnezl $v1, 0x11a314 */                                   // 0x0011a300: bnezl $v1, 0x11a314
    v0 = *(uint8_t*)(s1);                                       // 0x0011a304: lbu $v0, 0($s1)
    func_00118668();  // 0x118460                                // 0x0011a308: jal 0x118460
    /* nop */                                                   // 0x0011a30c: nop 
    v0 = *(uint8_t*)(s1);                                       // 0x0011a310: lbu $v0, 0($s1)
    if (v1 == 0) goto label_0x11a358;                           // 0x0011a31c: beqz $v1, 0x11a358
    g_0024e1d0 = v0;  // Global at 0x0024e1d0                   // 0x0011a320: sb $v0, 0x10($s2)
    s3 = sp + 0x30;                                             // 0x0011a324: addiu $s3, $sp, 0x30
    s5 = 0x25 << 16;                                            // 0x0011a328: lui $s5, 0x25
    s4 = 0x25 << 16;                                            // 0x0011a32c: lui $s4, 0x25
label_0x11a330:
    s0 = s0 + 1;                                                // 0x0011a330: addiu $s0, $s0, 1
    v0 = (s0 < 0x400) ? 1 : 0;                                  // 0x0011a334: slti $v0, $s0, 0x400
    if (v0 == 0) goto label_0x11a364;                           // 0x0011a338: beqz $v0, 0x11a364
    v0 = s1 + s0;                                               // 0x0011a33c: addu $v0, $s1, $s0
    a0 = s2 + s0;                                               // 0x0011a340: addu $a0, $s2, $s0
    v1 = g_001f0000;  // Global at 0x001f0000                   // 0x0011a344: lbu $v1, 0($v0)
    if (v1 != 0) goto label_0x11a330;                           // 0x0011a348: bnez $v1, 0x11a330
    g_0024f8d0 = v1;  // Global at 0x0024f8d0                   // 0x0011a34c: sb $v1, 0x10($a0)
    goto label_0x11a368;                                        // 0x0011a350: b 0x11a368
    v0 = 0x400;                                                 // 0x0011a354: addiu $v0, $zero, 0x400
label_0x11a358:
    s3 = sp + 0x30;                                             // 0x0011a358: addiu $s3, $sp, 0x30
    s5 = 0x25 << 16;                                            // 0x0011a35c: lui $s5, 0x25
    s4 = 0x25 << 16;                                            // 0x0011a360: lui $s4, 0x25
label_0x11a364:
    v0 = 0x400;                                                 // 0x0011a364: addiu $v0, $zero, 0x400
label_0x11a368:
    if (s0 != v0) goto label_0x11a37c;                          // 0x0011a368: bnel $s0, $v0, 0x11a37c
    g_0024e1cc = s6;  // Global at 0x0024e1cc                   // 0x0011a36c: sw $s6, 0xc($s2)
    g_0024e5cf = 0;  // Global at 0x0024e5cf                    // 0x0011a370: sb $zero, 0x40f($s2)
    s0 = 0x3ff;                                                 // 0x0011a374: addiu $s0, $zero, 0x3ff
    g_0024e1cc = s6;  // Global at 0x0024e1cc                   // 0x0011a378: sw $s6, 0xc($s2)
label_0x11a37c:
    v0 = 1;                                                     // 0x0011a37c: addiu $v0, $zero, 1
    local_14 = v0;                                              // 0x0011a380: sw $v0, 0x14($sp)
    a0 = sp + 0x10;                                             // 0x0011a384: addiu $a0, $sp, 0x10
    local_18 = 0;                                               // 0x0011a388: sw $zero, 0x18($sp)
    s4 = s4 + -0x1200;                                          // 0x0011a38c: addiu $s4, $s4, -0x1200
    DeleteSema();  // 0x1142e0                                  // 0x0011a390: jal 0x1142e0
    local_24 = 0;                                               // 0x0011a394: sw $zero, 0x24($sp)
    g_0024e1c4 = s3;  // Global at 0x0024e1c4                   // 0x0011a39c: sw $s3, 4($s2)
    v0 = 4;                                                     // 0x0011a3a0: addiu $v0, $zero, 4
    g_0024e1c0 = s1;  // Global at 0x0024e1c0                   // 0x0011a3a4: sw $s1, 0($s2)
    g_0024e1c8 = v0;  // Global at 0x0024e1c8                   // 0x0011a3a8: sw $v0, 8($s2)
    a0 = s5 + -0x740;                                           // 0x0011a3ac: addiu $a0, $s5, -0x740
    a3 = s7 + -0x1e40;                                          // 0x0011a3b0: addiu $a3, $s7, -0x1e40
    t0 = s0 + 0x11;                                             // 0x0011a3b4: addiu $t0, $s0, 0x11
    local_0 = 0;                                                // 0x0011a3b8: sw $zero, 0($sp)
    a1 = 0xc;                                                   // 0x0011a3bc: addiu $a1, $zero, 0xc
    t2 = 4;                                                     // 0x0011a3c8: addiu $t2, $zero, 4
    func_001178a0();  // 0x1176a8                                // 0x0011a3cc: jal 0x1176a8
    if (v0 >= 0) goto label_0x11a3f4;                           // 0x0011a3d4: bgez $v0, 0x11a3f4
    v0 = 0x2000 << 16;                                          // 0x0011a3d8: lui $v0, 0x2000
    SignalSema();  // 0x1142f0                                  // 0x0011a3dc: jal 0x1142f0
    func_00118418();  // 0x118360                                // 0x0011a3e4: jal 0x118360
    /* nop */                                                   // 0x0011a3e8: nop 
    goto label_0x11a42c;                                        // 0x0011a3ec: b 0x11a42c
    v0 = -0xb;                                                  // 0x0011a3f0: addiu $v0, $zero, -0xb
label_0x11a3f4:
    v0 = s4 | v0;                                               // 0x0011a3f4: or $v0, $s4, $v0
    func_00118418();  // 0x118360                                // 0x0011a3f8: jal 0x118360
    s0 = g_20000000;  // Global at 0x20000000                   // 0x0011a3fc: lw $s0, 0($v0)
    if (s0 != 0) goto label_0x11a418;                           // 0x0011a400: bnez $s0, 0x11a418
    /* nop */                                                   // 0x0011a404: nop 
    SignalSema();  // 0x1142f0                                  // 0x0011a408: jal 0x1142f0
    goto label_0x11a42c;                                        // 0x0011a410: b 0x11a42c
    v0 = -0xb;                                                  // 0x0011a414: addiu $v0, $zero, -0xb
label_0x11a418:
    PollSema();  // 0x114320                                    // 0x0011a418: jal 0x114320
    SignalSema();  // 0x1142f0                                  // 0x0011a420: jal 0x1142f0
    v0 = local_30;                                              // 0x0011a428: lw $v0, 0x30($sp)
label_0x11a42c:
    return;                                                     // 0x0011a450: jr $ra
    sp = sp + 0xd0;                                             // 0x0011a454: addiu $sp, $sp, 0xd0
}