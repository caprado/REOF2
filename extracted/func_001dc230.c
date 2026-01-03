void func_001dc230() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_94, local_98, local_b0;
    
    sp = sp + -0x100;                                           // 0x001dc230: addiu $sp, $sp, -0x100
    func_00116d40();  // 116d40                                // 0x001dc248: jal 0x116d40
    goto label_0x1dc284;                                        // 0x001dc250: b 0x1dc284
    s1 = 0x33 << 16;                                            // 0x001dc254: lui $s1, 0x33
label_0x1dc258:
    v0 = 0xffff << 16;                                          // 0x001dc258: lui $v0, 0xffff
    a2 = 1 << 16;                                               // 0x001dc25c: lui $a2, 1
    v0 = v0 | 0xffff;                                           // 0x001dc260: ori $v0, $v0, 0xffff
    /* nop */                                                   // 0x001dc264: nop 
label_0x1dc268:
    a2 = a2 + -1;                                               // 0x001dc268: addiu $a2, $a2, -1
    /* nop */                                                   // 0x001dc26c: nop 
    /* nop */                                                   // 0x001dc270: nop 
    /* nop */                                                   // 0x001dc274: nop 
    /* nop */                                                   // 0x001dc278: nop 
    if (a2 != v0) goto label_0x1dc268;                          // 0x001dc27c: bne $a2, $v0, 0x1dc268
    /* nop */                                                   // 0x001dc280: nop 
label_0x1dc284:
    s0 = s1 + -0xa0;                                            // 0x001dc284: addiu $s0, $s1, -0xa0
    a1 = 0x8000 << 16;                                          // 0x001dc288: lui $a1, 0x8000
    a1 = a1 | 0x211;                                            // 0x001dc290: ori $a1, $a1, 0x211
    func_001174d8();  // 1174d8                                // 0x001dc294: jal 0x1174d8
    if (v0 < 0) goto label_0x1dc3f4;                            // 0x001dc29c: bltz $v0, 0x1dc3f4
    a0 = 0x25 << 16;                                            // 0x001dc2a0: lui $a0, 0x25
    v0 = g_0032ff84;  // Global at 0x0032ff84                   // 0x001dc2a4: lw $v0, 0x24($s0)
    if (v0 == 0) goto label_0x1dc258;                           // 0x001dc2a8: beqz $v0, 0x1dc258
    v0 = 1;                                                     // 0x001dc2ac: addiu $v0, $zero, 1
    a0 = sp + 0x90;                                             // 0x001dc2b0: addiu $a0, $sp, 0x90
    local_94 = v0;                                              // 0x001dc2b4: sw $v0, 0x94($sp)
    s1 = 0x22 << 16;                                            // 0x001dc2b8: lui $s1, 0x22
    local_98 = v0;                                              // 0x001dc2bc: sw $v0, 0x98($sp)
    DeleteSema();  // 0x1142e0                                  // 0x001dc2c0: jal 0x1142e0
    s0 = -1;                                                    // 0x001dc2c4: addiu $s0, $zero, -1
    if (v0 != s0) goto label_0x1dc2e4;                          // 0x001dc2c8: bne $v0, $s0, 0x1dc2e4
    g_0021fcf8 = v0;  // Global at 0x0021fcf8                   // 0x001dc2cc: sw $v0, -0x308($s1)
    a0 = 0x25 << 16;                                            // 0x001dc2d0: lui $a0, 0x25
    func_00116508();  // 116508                                // 0x001dc2d4: jal 0x116508
    a0 = &str_002481f8;  // "libusbkb.a : RemoveIntcHandler() --> error\n" // 0x001dc2d8: addiu $a0, $a0, -0x7e08
    goto label_0x1dc410;                                        // 0x001dc2dc: b 0x1dc410
    v0 = -1;                                                    // 0x001dc2e0: addiu $v0, $zero, -1
label_0x1dc2e4:
    func_001dc4f0();  // 1dc4f0                                // 0x001dc2e4: jal 0x1dc4f0
    if (v0 != 0) goto label_0x1dc334;                           // 0x001dc2ec: bnez $v0, 0x1dc334
    func_001dca18();  // 1dca18                                // 0x001dc2f4: jal 0x1dca18
    a1 = sp + 0xb0;                                             // 0x001dc2f8: addiu $a1, $sp, 0xb0
    v1 = local_b0;                                              // 0x001dc2fc: lw $v1, 0xb0($sp)
    if (v1 != 0) goto label_0x1dc334;                           // 0x001dc300: bnez $v1, 0x1dc334
    a0 = local_0;                                               // 0x001dc304: lw $a0, 0($sp)
    if (a0 <= 0) goto label_0x1dc334;                           // 0x001dc308: blez $a0, 0x1dc334
    v0 = (a0 < 0x80) ? 1 : 0;                                   // 0x001dc30c: slti $v0, $a0, 0x80
    if (v0 == 0) goto label_0x1dc334;                           // 0x001dc310: beqz $v0, 0x1dc334
    a3 = 0x33 << 16;                                            // 0x001dc314: lui $a3, 0x33
    v0 = 0x33 << 16;                                            // 0x001dc318: lui $v0, 0x33
    v0 = v0 + 0x90;                                             // 0x001dc31c: addiu $v0, $v0, 0x90
    v1 = a3 + -0x140;                                           // 0x001dc320: addiu $v1, $a3, -0x140
    g_0032fec0 = a0;  // Global at 0x0032fec0                   // 0x001dc324: sw $a0, -0x140($a3)
    *(uint32_t*)(s2) = a0;                                      // 0x001dc328: sw $a0, 0($s2)
    if (v0 != 0) goto label_0x1dc348;                           // 0x001dc32c: bnez $v0, 0x1dc348
    g_0032fec4 = v0;  // Global at 0x0032fec4                   // 0x001dc330: sw $v0, 4($v1)
label_0x1dc334:
    SignalSema();  // 0x1142f0                                  // 0x001dc334: jal 0x1142f0
    a0 = g_0021fcf8;  // Global at 0x0021fcf8                   // 0x001dc338: lw $a0, -0x308($s1)
    g_0021fcf8 = s0;  // Global at 0x0021fcf8                   // 0x001dc33c: sw $s0, -0x308($s1)
    goto label_0x1dc410;                                        // 0x001dc340: b 0x1dc410
    v0 = -1;                                                    // 0x001dc344: addiu $v0, $zero, -1
label_0x1dc348:
    if (a0 == 0) goto label_0x1dc3b8;                           // 0x001dc348: beqz $a0, 0x1dc3b8
    t0 = 0x1e << 16;                                            // 0x001dc350: lui $t0, 0x1e
    v1 = 0x38;                                                  // 0x001dc354: addiu $v1, $zero, 0x38
label_0x1dc358:
    v0 = a3 + -0x140;                                           // 0x001dc358: addiu $v0, $a3, -0x140
    /* multiply: a2 * v1 -> hi:lo */                            // 0x001dc35c: mult $ac3, $a2, $v1
    a1 = g_0032fec4;  // Global at 0x0032fec4                   // 0x001dc360: lw $a1, 4($v0)
    a0 = 1;                                                     // 0x001dc364: addiu $a0, $zero, 1
    a2 = a2 + 1;                                                // 0x001dc368: addiu $a2, $a2, 1
    v1 = v1 + a1;                                               // 0x001dc36c: addu $v1, $v1, $a1
    g_0032fec8 = a0;  // Global at 0x0032fec8                   // 0x001dc370: sw $a0, 8($v1)
    g_0032fef4 = 0;  // Global at 0x0032fef4                    // 0x001dc374: sw $zero, 0x34($v1)
    g_0032fec0 = a0;  // Global at 0x0032fec0                   // 0x001dc378: sw $a0, 0($v1)
    g_0032fec4 = a0;  // Global at 0x0032fec4                   // 0x001dc37c: sw $a0, 4($v1)
    g_0032fecc = 0;  // Global at 0x0032fecc                    // 0x001dc380: sw $zero, 0xc($v1)
    g_0032fed0 = 0;  // Global at 0x0032fed0                    // 0x001dc384: sw $zero, 0x10($v1)
    g_0032fed4 = 0;  // Global at 0x0032fed4                    // 0x001dc388: sw $zero, 0x14($v1)
    g_0032fed8 = 0;  // Global at 0x0032fed8                    // 0x001dc38c: sw $zero, 0x18($v1)
    g_0032fedc = 0;  // Global at 0x0032fedc                    // 0x001dc390: sw $zero, 0x1c($v1)
    g_0032feec = 0;  // Global at 0x0032feec                    // 0x001dc394: sw $zero, 0x2c($v1)
    g_0032fef0 = 0;  // Global at 0x0032fef0                    // 0x001dc398: sw $zero, 0x30($v1)
    g_0032fee0 = 0;  // Global at 0x0032fee0                    // 0x001dc39c: sh $zero, 0x20($v1)
    v0 = local_0;                                               // 0x001dc3a0: lw $v0, 0($sp)
    v0 = ((unsigned)a2 < (unsigned)v0) ? 1 : 0;                 // 0x001dc3a4: sltu $v0, $a2, $v0
    if (v0 != 0) goto label_0x1dc358;                           // 0x001dc3a8: bnez $v0, 0x1dc358
    v1 = 0x38;                                                  // 0x001dc3ac: addiu $v1, $zero, 0x38
    goto label_0x1dc3c0;                                        // 0x001dc3b0: b 0x1dc3c0
    s0 = a3 + -0x140;                                           // 0x001dc3b4: addiu $s0, $a3, -0x140
label_0x1dc3b8:
    t0 = 0x1e << 16;                                            // 0x001dc3b8: lui $t0, 0x1e
    s0 = a3 + -0x140;                                           // 0x001dc3bc: addiu $s0, $a3, -0x140
label_0x1dc3c0:
    a1 = t0 + -0x2e70;                                          // 0x001dc3c0: addiu $a1, $t0, -0x2e70
    g_0032fed0 = 0;  // Global at 0x0032fed0                    // 0x001dc3c4: sw $zero, 0x10($s0)
    a0 = 3;                                                     // 0x001dc3c8: addiu $a0, $zero, 3
    AddIntcHandler2();  // 0x113fc0                             // 0x001dc3cc: jal 0x113fc0
    a2 = -1;                                                    // 0x001dc3d0: addiu $a2, $zero, -1
    if (v0 >= 0) goto label_0x1dc404;                           // 0x001dc3d4: bgez $v0, 0x1dc404
    g_0032ff5c = v0;  // Global at 0x0032ff5c                   // 0x001dc3d8: sw $v0, 0x9c($s0)
    SignalSema();  // 0x1142f0                                  // 0x001dc3dc: jal 0x1142f0
    a0 = g_0021fcf8;  // Global at 0x0021fcf8                   // 0x001dc3e0: lw $a0, -0x308($s1)
    v1 = -1;                                                    // 0x001dc3e4: addiu $v1, $zero, -1
    v0 = -1;                                                    // 0x001dc3e8: addiu $v0, $zero, -1
    goto label_0x1dc410;                                        // 0x001dc3ec: b 0x1dc410
    g_0021fcf8 = v1;  // Global at 0x0021fcf8                   // 0x001dc3f0: sw $v1, -0x308($s1)
label_0x1dc3f4:
    func_00116508();  // 116508                                // 0x001dc3f4: jal 0x116508
    a0 = a0 + -0x7e20;                                          // 0x001dc3f8: addiu $a0, $a0, -0x7e20
    goto label_0x1dc410;                                        // 0x001dc3fc: b 0x1dc410
    v0 = -1;                                                    // 0x001dc400: addiu $v0, $zero, -1
label_0x1dc404:
    func_00114e28();  // 114e28                                // 0x001dc404: jal 0x114e28
    a0 = 3;                                                     // 0x001dc408: addiu $a0, $zero, 3
label_0x1dc410:
    return;                                                     // 0x001dc420: jr $ra
    sp = sp + 0x100;                                            // 0x001dc424: addiu $sp, $sp, 0x100
}