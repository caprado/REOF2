void func_0011e1c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x90;                                            // 0x0011e1c0: addiu $sp, $sp, -0x90
    v1 = 0x1000 << 16;                                          // 0x0011e1c4: lui $v1, 0x1000
    v1 = v1 | 0x1010;                                           // 0x0011e1cc: ori $v1, $v1, 0x1010
    v0 = g_10000000;  // Global at 0x10000000                   // 0x0011e1f4: lw $v0, 0($v1)
    v0 = v0 & 0x400;                                            // 0x0011e1f8: andi $v0, $v0, 0x400
    if (v0 == 0) goto label_0x11e364;                           // 0x0011e1fc: beqz $v0, 0x11e364
    s5 = 0x1f << 16;                                            // 0x0011e200: lui $s5, 0x1f
    v0 = s5 + 0x19e8;                                           // 0x0011e204: addiu $v0, $s5, 0x19e8
    s0 = g_001f1a00;  // Global at 0x001f1a00                   // 0x0011e208: lw $s0, 0x18($v0)
    if (s0 == 0) goto label_0x11e364;                           // 0x0011e20c: beqz $s0, 0x11e364
    s7 = 0x3999;                                                // 0x0011e214: addiu $s7, $zero, 0x3999
    v0 = 0x1000 << 16;                                          // 0x0011e218: lui $v0, 0x1000
    /* nop */                                                   // 0x0011e21c: nop 
label_0x11e220:
    v1 = 0x1000 << 16;                                          // 0x0011e220: lui $v1, 0x1000
    v0 = v0 | 0x1000;                                           // 0x0011e224: ori $v0, $v0, 0x1000
    v1 = v1 | 0x1010;                                           // 0x0011e228: ori $v1, $v1, 0x1010
    a2 = g_10000000;  // Global at 0x10000000                   // 0x0011e22c: lw $a2, 0($v0)
    s1 = g_10000000;  // Global at 0x10000000                   // 0x0011e230: lw $s1, 0($v1)
    a1 = s1 & 0x800;                                            // 0x0011e23c: andi $a1, $s1, 0x800
    if (a1 == 0) goto label_0x11e278;                           // 0x0011e248: beqz $a1, 0x11e278
    a0 = 0xffff << 16;                                          // 0x0011e254: lui $a0, 0xffff
    a0 = a0 | 0xfbff;                                           // 0x0011e258: ori $a0, $a0, 0xfbff
    a0 = s1 & a0;                                               // 0x0011e260: and $a0, $s1, $a0
    func_0011dc00();  // 11dc00                                // 0x0011e268: jal 0x11dc00
    /* nop */                                                   // 0x0011e26c: nop 
    a2 = 0x1000 << 16;                                          // 0x0011e270: lui $a2, 0x1000
    a2 = g_10001000;  // Global at 0x10001000                   // 0x0011e274: lw $a2, 0x1000($a2)
label_0x11e278:
    v1 = s1 & 3;                                                // 0x0011e284: andi $v1, $s1, 3
    v1 = v1 << 2;                                               // 0x0011e28c: sll $v1, $v1, 2
    a0 = a0 | v0;                                               // 0x0011e290: or $a0, $a0, $v0
    v0 = ((unsigned)s1 < (unsigned)s2) ? 1 : 0;                 // 0x0011e298: sltu $v0, $s1, $s2
    if (v0 != 0) goto label_0x11e364;                           // 0x0011e29c: bnez $v0, 0x11e364
    s3 = s4 + 0x19e8;                                           // 0x0011e2a0: addiu $s3, $s4, 0x19e8
    func_0011e188();  // 11e188                                // 0x0011e2a4: jal 0x11e188
    v0 = *(int32_t*)((s0) + 8);                                 // 0x0011e2b4: lw $v0, 8($s0)
    a3 = s0 << 4;                                               // 0x0011e2b8: sll $a3, $s0, 4
    v0 = a3 | v0;                                               // 0x0011e2c4: or $v0, $a3, $v0
    *(uint32_t*)((s3) + 0x1c) = v0;                             // 0x0011e2c8: sw $v0, 0x1c($s3)
    gp = *(int32_t*)((s0) + 0x2c);                              // 0x0011e2d0: lw $gp, 0x2c($s0)
    a0 = *(int32_t*)((s0) + 8);                                 // 0x0011e2d4: lw $a0, 8($s0)
    v0 = *(int32_t*)((s0) + 0x28);                              // 0x0011e2dc: lw $v0, 0x28($s0)
    a0 = a3 | a0;                                               // 0x0011e2e0: or $a0, $a3, $a0
    /* call function at address in v0 */                        // 0x0011e2e8: jalr $v0
    a3 = *(int32_t*)((s0) + 0x30);                              // 0x0011e2ec: lw $a3, 0x30($s0)
    if (a1 != 0) goto label_0x11e314;                           // 0x0011e2f4: bnez $a1, 0x11e314
    v0 = -1;                                                    // 0x0011e2f8: addiu $v0, $zero, -1
    v1 = *(int32_t*)((s0) + 0xc);                               // 0x0011e2fc: lw $v1, 0xc($s0)
    v0 = 0xffff << 16;                                          // 0x0011e300: lui $v0, 0xffff
    v0 = v0 | 0xfffd;                                           // 0x0011e304: ori $v0, $v0, 0xfffd
    v1 = v1 & v0;                                               // 0x0011e308: and $v1, $v1, $v0
    goto label_0x11e350;                                        // 0x0011e30c: b 0x11e350
    *(uint32_t*)((s0) + 0xc) = v1;                              // 0x0011e310: sw $v1, 0xc($s0)
label_0x11e314:
    if (a1 != v0) goto label_0x11e334;                          // 0x0011e314: bne $a1, $v0, 0x11e334
    v0 = 0x3998;                                                // 0x0011e318: addiu $v0, $zero, 0x3998
    v0 = *(int32_t*)((s3) + 0x14);                              // 0x0011e31c: lw $v0, 0x14($s3)
    *(uint32_t*)((s3) + 0x14) = s0;                             // 0x0011e320: sw $s0, 0x14($s3)
    *(uint32_t*)(s0) = v0;                                      // 0x0011e324: sw $v0, 0($s0)
    *(uint32_t*)((s0) + 8) = 0;                                 // 0x0011e328: sw $zero, 8($s0)
    goto label_0x11e350;                                        // 0x0011e32c: b 0x11e350
    *(uint32_t*)((s0) + 0xc) = 0;                               // 0x0011e330: sw $zero, 0xc($s0)
label_0x11e334:
    v0 = ((unsigned)v0 < (unsigned)a1) ? 1 : 0;                 // 0x0011e338: sltu $v0, $v0, $a1
    if (v0 == 0) a1 = s7;                                       // 0x0011e340: movz $a1, $s7, $v0
    func_0011e100();  // 11e100                                // 0x0011e348: jal 0x11e100
label_0x11e350:
    if (s0 != 0) goto label_0x11e220;                           // 0x0011e354: bnez $s0, 0x11e220
    v0 = 0x1000 << 16;                                          // 0x0011e358: lui $v0, 0x1000
    goto label_0x11e368;                                        // 0x0011e35c: b 0x11e368
    a0 = s5 + 0x19e8;                                           // 0x0011e360: addiu $a0, $s5, 0x19e8
label_0x11e364:
    a0 = s5 + 0x19e8;                                           // 0x0011e364: addiu $a0, $s5, 0x19e8
label_0x11e368:
    v1 = -1;                                                    // 0x0011e368: addiu $v1, $zero, -1
    g_001f1a04 = v1;  // Global at 0x001f1a04                   // 0x0011e36c: sw $v1, 0x1c($a0)
    v0 = 0x1000 << 16;                                          // 0x0011e370: lui $v0, 0x1000
    v0 = v0 | 0x1000;                                           // 0x0011e374: ori $v0, $v0, 0x1000
    v1 = 0x1000 << 16;                                          // 0x0011e378: lui $v1, 0x1000
    a0 = g_10000000;  // Global at 0x10000000                   // 0x0011e37c: lw $a0, 0($v0)
    v1 = v1 | 0x1010;                                           // 0x0011e380: ori $v1, $v1, 0x1010
    s0 = g_10000000;  // Global at 0x10000000                   // 0x0011e384: lw $s0, 0($v1)
    v0 = s0 & 0x800;                                            // 0x0011e388: andi $v0, $s0, 0x800
    if (v0 == 0) goto label_0x11e3bc;                           // 0x0011e38c: beqz $v0, 0x11e3bc
    /* nop */                                                   // 0x0011e390: nop 
    a0 = 0xffff << 16;                                          // 0x0011e398: lui $a0, 0xffff
    a0 = a0 | 0xfbff;                                           // 0x0011e39c: ori $a0, $a0, 0xfbff
    a0 = s0 & a0;                                               // 0x0011e3a4: and $a0, $s0, $a0
    func_0011dc00();  // 11dc00                                // 0x0011e3ac: jal 0x11dc00
    /* nop */                                                   // 0x0011e3b0: nop 
    a0 = 0x1000 << 16;                                          // 0x0011e3b4: lui $a0, 0x1000
    a0 = g_10001000;  // Global at 0x10001000                   // 0x0011e3b8: lw $a0, 0x1000($a0)
label_0x11e3bc:
    a0 = s0 & 3;                                                // 0x0011e3c8: andi $a0, $s0, 3
    a0 = a0 << 2;                                               // 0x0011e3d0: sll $a0, $a0, 2
    v0 = v0 | v1;                                               // 0x0011e3d4: or $v0, $v0, $v1
    func_0011df70();  // 11df70                                // 0x0011e3d8: jal 0x11df70
    v0 = 0x1000 << 16;                                          // 0x0011e3e0: lui $v0, 0x1000
    v0 = g_10001000;  // Global at 0x10001000                   // 0x0011e3e4: lw $v0, 0x1000($v0)
    v1 = 0x1000 << 16;                                          // 0x0011e3e8: lui $v1, 0x1000
    v1 = g_10001010;  // Global at 0x10001010                   // 0x0011e3ec: lw $v1, 0x1010($v1)
    v0 = v1 & 0x800;                                            // 0x0011e3f0: andi $v0, $v1, 0x800
    if (v0 == 0) goto label_0x11e424;                           // 0x0011e3f4: beqz $v0, 0x11e424
    /* nop */                                                   // 0x0011e3f8: nop 
    a0 = 0xffff << 16;                                          // 0x0011e400: lui $a0, 0xffff
    a0 = a0 | 0xfbff;                                           // 0x0011e404: ori $a0, $a0, 0xfbff
    a0 = v1 & a0;                                               // 0x0011e40c: and $a0, $v1, $a0
    func_0011dc00();  // 11dc00                                // 0x0011e414: jal 0x11dc00
    /* nop */                                                   // 0x0011e418: nop 
    v0 = 0x1000 << 16;                                          // 0x0011e41c: lui $v0, 0x1000
    v0 = g_10001000;  // Global at 0x10001000                   // 0x0011e420: lw $v0, 0x1000($v0)
label_0x11e424:
    /* memory sync */                                           // 0x0011e428: sync 
    return;                                                     // 0x0011e458: jr $ra
    sp = sp + 0x90;                                             // 0x0011e45c: addiu $sp, $sp, 0x90
}