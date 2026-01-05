void func_001a73d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001a73d0: addiu $sp, $sp, -0x10
    at = ((unsigned)a0 < (unsigned)0x1000) ? 1 : 0;             // 0x001a73d4: sltiu $at, $a0, 0x1000
    if (at != 0) goto label_0x1a73e8;                           // 0x001a73d8: bnez $at, 0x1a73e8
    goto label_0x1a7514;                                        // 0x001a73e0: b 0x1a7514
    v0 = -2;                                                    // 0x001a73e4: addiu $v0, $zero, -2
label_0x1a73e8:
    v0 = a1 | a3;                                               // 0x001a73e8: or $v0, $a1, $a3
    v0 = t1 | v0;                                               // 0x001a73ec: or $v0, $t1, $v0
    v0 = v0 & 0xf;                                              // 0x001a73f0: andi $v0, $v0, 0xf
    if (v0 == 0) goto label_0x1a7404;                           // 0x001a73f4: beqz $v0, 0x1a7404
    at = 0x1f << 16;                                            // 0x001a73f8: lui $at, 0x1f
    goto label_0x1a7514;                                        // 0x001a73fc: b 0x1a7514
    v0 = -3;                                                    // 0x001a7400: addiu $v0, $zero, -3
label_0x1a7404:
    at = at | 0xfff1;                                           // 0x001a7404: ori $at, $at, 0xfff1
    at = (a2 < at) ? 1 : 0;                                     // 0x001a7408: slt $at, $a2, $at
    if (at == 0) goto label_0x1a743c;                           // 0x001a740c: beqz $at, 0x1a743c
    v0 = -4;                                                    // 0x001a7410: addiu $v0, $zero, -4
    at = 0x1f << 16;                                            // 0x001a7414: lui $at, 0x1f
    at = at | 0xfff1;                                           // 0x001a7418: ori $at, $at, 0xfff1
    at = (t0 < at) ? 1 : 0;                                     // 0x001a741c: slt $at, $t0, $at
    if (at == 0) goto label_0x1a7438;                           // 0x001a7420: beqz $at, 0x1a7438
    at = 0x1f << 16;                                            // 0x001a7424: lui $at, 0x1f
    at = at | 0xfff1;                                           // 0x001a7428: ori $at, $at, 0xfff1
    at = (t2 < at) ? 1 : 0;                                     // 0x001a742c: slt $at, $t2, $at
    if (at != 0) goto label_0x1a7444;                           // 0x001a7430: bnez $at, 0x1a7444
    /* nop */                                                   // 0x001a7434: nop 
label_0x1a7438:
    v0 = -4;                                                    // 0x001a7438: addiu $v0, $zero, -4
label_0x1a743c:
    goto label_0x1a7518;                                        // 0x001a743c: b 0x1a7518
label_0x1a7444:
    at = 0x2a << 16;                                            // 0x001a7444: lui $at, 0x2a
    v1 = 0x2a << 16;                                            // 0x001a7448: lui $v1, 0x2a
    t3 = g_002a0f70;  // Global at 0x002a0f70                   // 0x001a744c: lw $t3, 0xf70($at)
    t4 = 4;                                                     // 0x001a7450: addiu $t4, $zero, 4
    goto label_0x1a7494;                                        // 0x001a7454: b 0x1a7494
    v1 = v1 + 0xf80;                                            // 0x001a7458: addiu $v1, $v1, 0xf80
label_0x1a745c:
    v0 = v0 + t3;                                               // 0x001a745c: addu $v0, $v0, $t3
    v0 = v0 << 2;                                               // 0x001a7460: sll $v0, $v0, 2
    v0 = v1 + v0;                                               // 0x001a7464: addu $v0, $v1, $v0
    v0 = g_4cffffe0;  // Global at 0x4cffffe0                   // 0x001a7468: lw $v0, 0($v0)
    if (v0 < 0) goto label_0x1a747c;                            // 0x001a746c: bltz $v0, 0x1a747c
    v0 = t3 + 1;                                                // 0x001a7470: addiu $v0, $t3, 1
    goto label_0x1a7514;                                        // 0x001a7474: b 0x1a7514
    v0 = -1;                                                    // 0x001a7478: addiu $v0, $zero, -1
label_0x1a747c:
    if (v0 >= 0) goto label_0x1a7490;                           // 0x001a747c: bgez $v0, 0x1a7490
    t3 = v0 & 0x1f;                                             // 0x001a7480: andi $t3, $v0, 0x1f
    if (t3 == 0) goto label_0x1a7490;                           // 0x001a7484: beqz $t3, 0x1a7490
    /* nop */                                                   // 0x001a7488: nop 
    t3 = t3 + -0x20;                                            // 0x001a748c: addiu $t3, $t3, -0x20
label_0x1a7490:
    t4 = t4 + -1;                                               // 0x001a7490: addiu $t4, $t4, -1
label_0x1a7494:
    if (t4 > 0) goto label_0x1a745c;                            // 0x001a7494: bgtz $t4, 0x1a745c
    v0 = t3 << 1;                                               // 0x001a7498: sll $v0, $t3, 1
    at = 0x2a << 16;                                            // 0x001a749c: lui $at, 0x2a
    v0 = a0 << 8;                                               // 0x001a74a0: sll $v0, $a0, 8
    t3 = g_002a0f70;  // Global at 0x002a0f70                   // 0x001a74a4: lw $t3, 0xf70($at)
    a0 = 0x2a << 16;                                            // 0x001a74ac: lui $a0, 0x2a
    v0 = 0x4d00 << 16;                                          // 0x001a74b4: lui $v0, 0x4d00
    a0 = a0 + 0xf80;                                            // 0x001a74b8: addiu $a0, $a0, 0xf80
    t4 = v1 | v0;                                               // 0x001a74bc: or $t4, $v1, $v0
    v0 = t3 << 1;                                               // 0x001a74c0: sll $v0, $t3, 1
    v1 = t3 + 1;                                                // 0x001a74c4: addiu $v1, $t3, 1
    t3 = v0 + t3;                                               // 0x001a74c8: addu $t3, $v0, $t3
    t3 = t3 << 2;                                               // 0x001a74cc: sll $t3, $t3, 2
    v0 = v1 & 0x1f;                                             // 0x001a74d0: andi $v0, $v1, 0x1f
    a0 = a0 + t3;                                               // 0x001a74d4: addu $a0, $a0, $t3
    if (v1 >= 0) goto label_0x1a74ec;                           // 0x001a74d8: bgez $v1, 0x1a74ec
    g_002a0f80 = t4;  // Global at 0x002a0f80                   // 0x001a74dc: sw $t4, 0($a0)
    if (v0 == 0) goto label_0x1a74f0;                           // 0x001a74e0: beqz $v0, 0x1a74f0
    v0 = v0 + -0x20;                                            // 0x001a74e8: addiu $v0, $v0, -0x20
label_0x1a74ec:
label_0x1a74f0:
    at = 0x2a << 16;                                            // 0x001a74f0: lui $at, 0x2a
    g_002a0f70 = v0;  // Global at 0x002a0f70                   // 0x001a74f8: sw $v0, 0xf70($at)
    func_001a72a0();  // 1a72a0                                // 0x001a7508: jal 0x1a72a0
label_0x1a7514:
label_0x1a7518:
    return;                                                     // 0x001a7518: jr $ra
    sp = sp + 0x10;                                             // 0x001a751c: addiu $sp, $sp, 0x10
}