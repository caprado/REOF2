void func_0011b320() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_14, local_18, local_24, local_30;
    
    sp = sp + -0xd0;                                            // 0x0011b320: addiu $sp, $sp, -0xd0
    a0 = 0x11;                                                  // 0x0011b344: addiu $a0, $zero, 0x11
    s7 = 0x25 << 16;                                            // 0x0011b34c: lui $s7, 0x25
    s2 = s7 + -0x1e40;                                          // 0x0011b354: addiu $s2, $s7, -0x1e40
    func_00118330();  // 118330                                // 0x0011b35c: jal 0x118330
    v1 = 0x1f << 16;                                            // 0x0011b364: lui $v1, 0x1f
    v0 = g_001f03dc;  // Global at 0x001f03dc                   // 0x0011b368: lw $v0, 0x3dc($v1)
    /* bnezl $v0, 0x11b380 */                                   // 0x0011b36c: bnezl $v0, 0x11b380
    v0 = *(uint8_t*)(s1);                                       // 0x0011b370: lbu $v0, 0($s1)
    func_00118460();  // 118460                                // 0x0011b374: jal 0x118460
    /* nop */                                                   // 0x0011b378: nop 
    v0 = *(uint8_t*)(s1);                                       // 0x0011b37c: lbu $v0, 0($s1)
    v1 = v0 << 0x18;                                            // 0x0011b384: sll $v1, $v0, 0x18
    if (v1 == 0) goto label_0x11b3d4;                           // 0x0011b388: beqz $v1, 0x11b3d4
    g_0024e1d4 = v0;  // Global at 0x0024e1d4                   // 0x0011b38c: sb $v0, 0x14($s2)
    a2 = ((unsigned)s0 < (unsigned)0x400) ? 1 : 0;              // 0x0011b390: sltiu $a2, $s0, 0x400
    s3 = sp + 0x30;                                             // 0x0011b394: addiu $s3, $sp, 0x30
    s6 = 0x25 << 16;                                            // 0x0011b398: lui $s6, 0x25
    s4 = 0x25 << 16;                                            // 0x0011b39c: lui $s4, 0x25
    a1 = a1 + 1;                                                // 0x0011b3a0: addiu $a1, $a1, 1
    /* nop */                                                   // 0x0011b3a4: nop 
    v0 = (a1 < 0x400) ? 1 : 0;                                  // 0x0011b3a8: slti $v0, $a1, 0x400
    if (v0 == 0) goto label_0x11b3e4;                           // 0x0011b3ac: beqz $v0, 0x11b3e4
    v0 = s1 + a1;                                               // 0x0011b3b0: addu $v0, $s1, $a1
    a0 = s2 + a1;                                               // 0x0011b3b4: addu $a0, $s2, $a1
    v1 = g_20000000;  // Global at 0x20000000                   // 0x0011b3b8: lbu $v1, 0($v0)
    g_0024f8d4 = v1;  // Global at 0x0024f8d4                   // 0x0011b3bc: sb $v1, 0x14($a0)
    v1 = v1 << 0x18;                                            // 0x0011b3c0: sll $v1, $v1, 0x18
    /* bnezl $v1, 0x11b3a8 */                                   // 0x0011b3c4: bnezl $v1, 0x11b3a8
    a1 = a1 + 1;                                                // 0x0011b3c8: addiu $a1, $a1, 1
    goto label_0x11b3e8;                                        // 0x0011b3cc: b 0x11b3e8
    v0 = 0x400;                                                 // 0x0011b3d0: addiu $v0, $zero, 0x400
label_0x11b3d4:
    a2 = ((unsigned)s0 < (unsigned)0x400) ? 1 : 0;              // 0x0011b3d4: sltiu $a2, $s0, 0x400
    s3 = sp + 0x30;                                             // 0x0011b3d8: addiu $s3, $sp, 0x30
    s6 = 0x25 << 16;                                            // 0x0011b3dc: lui $s6, 0x25
    s4 = 0x25 << 16;                                            // 0x0011b3e0: lui $s4, 0x25
label_0x11b3e4:
    v0 = 0x400;                                                 // 0x0011b3e4: addiu $v0, $zero, 0x400
label_0x11b3e8:
    if (a1 == v0) goto label_0x11b3f0;                          // 0x0011b3e8: beql $a1, $v0, 0x11b3f0
    g_0024e5d3 = 0;  // Global at 0x0024e5d3                    // 0x0011b3ec: sb $zero, 0x413($s2)
label_0x11b3f0:
    v0 = 0x3ff;                                                 // 0x0011b3f0: addiu $v0, $zero, 0x3ff
    if (a2 == 0) s0 = v0;                                       // 0x0011b3f8: movz $s0, $v0, $a2
    g_0024e1d0 = s5;  // Global at 0x0024e1d0                   // 0x0011b3fc: sw $s5, 0x10($s2)
    func_00116c90();  // 116c90                                // 0x0011b404: jal 0x116c90
    g_0024e1cc = s0;  // Global at 0x0024e1cc                   // 0x0011b408: sw $s0, 0xc($s2)
    s0 = s4 + -0x1200;                                          // 0x0011b40c: addiu $s0, $s4, -0x1200
    v0 = 1;                                                     // 0x0011b410: addiu $v0, $zero, 1
    local_18 = 0;                                               // 0x0011b414: sw $zero, 0x18($sp)
    local_14 = v0;                                              // 0x0011b418: sw $v0, 0x14($sp)
    a0 = sp + 0x10;                                             // 0x0011b41c: addiu $a0, $sp, 0x10
    DeleteSema();  // 0x1142e0                                  // 0x0011b420: jal 0x1142e0
    local_24 = 0;                                               // 0x0011b424: sw $zero, 0x24($sp)
    g_0024e1c4 = s3;  // Global at 0x0024e1c4                   // 0x0011b42c: sw $s3, 4($s2)
    v0 = 4;                                                     // 0x0011b430: addiu $v0, $zero, 4
    g_0024e1c0 = s1;  // Global at 0x0024e1c0                   // 0x0011b434: sw $s1, 0($s2)
    g_0024e1c8 = v0;  // Global at 0x0024e1c8                   // 0x0011b438: sw $v0, 8($s2)
    a0 = s6 + -0x740;                                           // 0x0011b43c: addiu $a0, $s6, -0x740
    a3 = s7 + -0x1e40;                                          // 0x0011b440: addiu $a3, $s7, -0x1e40
    a1 = 0x19;                                                  // 0x0011b444: addiu $a1, $zero, 0x19
    local_0 = 0;                                                // 0x0011b448: sw $zero, 0($sp)
    t0 = 0x80c;                                                 // 0x0011b450: addiu $t0, $zero, 0x80c
    t2 = 4;                                                     // 0x0011b458: addiu $t2, $zero, 4
    func_001176a8();  // 1176a8                                // 0x0011b45c: jal 0x1176a8
    if (v0 >= 0) goto label_0x11b484;                           // 0x0011b464: bgez $v0, 0x11b484
    v0 = 0x2000 << 16;                                          // 0x0011b468: lui $v0, 0x2000
    SignalSema();  // 0x1142f0                                  // 0x0011b46c: jal 0x1142f0
    func_00118360();  // 118360                                // 0x0011b474: jal 0x118360
    /* nop */                                                   // 0x0011b478: nop 
    goto label_0x11b4bc;                                        // 0x0011b47c: b 0x11b4bc
    v0 = -0xb;                                                  // 0x0011b480: addiu $v0, $zero, -0xb
label_0x11b484:
    v0 = s0 | v0;                                               // 0x0011b484: or $v0, $s0, $v0
    func_00118360();  // 118360                                // 0x0011b488: jal 0x118360
    s0 = g_20000000;  // Global at 0x20000000                   // 0x0011b48c: lw $s0, 0($v0)
    if (s0 != 0) goto label_0x11b4a8;                           // 0x0011b490: bnez $s0, 0x11b4a8
    /* nop */                                                   // 0x0011b494: nop 
    SignalSema();  // 0x1142f0                                  // 0x0011b498: jal 0x1142f0
    goto label_0x11b4bc;                                        // 0x0011b4a0: b 0x11b4bc
    v0 = -0xb;                                                  // 0x0011b4a4: addiu $v0, $zero, -0xb
label_0x11b4a8:
    PollSema();  // 0x114320                                    // 0x0011b4a8: jal 0x114320
    SignalSema();  // 0x1142f0                                  // 0x0011b4b0: jal 0x1142f0
    v0 = local_30;                                              // 0x0011b4b8: lw $v0, 0x30($sp)
label_0x11b4bc:
    return;                                                     // 0x0011b4e0: jr $ra
    sp = sp + 0xd0;                                             // 0x0011b4e4: addiu $sp, $sp, 0xd0
}