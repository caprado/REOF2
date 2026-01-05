void func_001a8600() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x130;                                           // 0x001a8600: addiu $sp, $sp, -0x130
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001a8608: addu.qb $zero, $sp, $s1
    v0 = *(int32_t*)((gp) + -0x63f0);                           // 0x001a8610: lw $v0, -0x63f0($gp)
    if (v0 != 0) goto label_0x1a8628;                           // 0x001a8614: bnez $v0, 0x1a8628
    s0 = 0x2a << 16;                                            // 0x001a861c: lui $s0, 0x2a
    goto label_0x1a8630;                                        // 0x001a8620: b 0x1a8630
    s0 = s0 + 0x14e0;                                           // 0x001a8624: addiu $s0, $s0, 0x14e0
label_0x1a8628:
    s0 = 0x2a << 16;                                            // 0x001a8628: lui $s0, 0x2a
    s0 = s0 + 0x1500;                                           // 0x001a862c: addiu $s0, $s0, 0x1500
label_0x1a8630:
    v0 = -2;                                                    // 0x001a8630: addiu $v0, $zero, -2
    if (s1 != v0) goto label_0x1a8654;                          // 0x001a8634: bne $s1, $v0, 0x1a8654
    v0 = -1;                                                    // 0x001a8638: addiu $v0, $zero, -1
    a1 = 0x23 << 16;                                            // 0x001a863c: lui $a1, 0x23
    a0 = sp + 0x30;                                             // 0x001a8640: addiu $a0, $sp, 0x30
    func_0010ac68();  // 10ac68                                // 0x001a8644: jal 0x10ac68
    a1 = &str_0022a740;  // "0flist.dir"                        // 0x001a8648: addiu $a1, $a1, -0x58c0
    goto label_0x1a86c4;                                        // 0x001a864c: b 0x1a86c4
    v1 = *(int32_t*)((gp) + -0x63f0);                           // 0x001a8650: lw $v1, -0x63f0($gp)
label_0x1a8654:
    if (s1 != v0) goto label_0x1a8670;                          // 0x001a8654: bne $s1, $v0, 0x1a8670
    a1 = 0x23 << 16;                                            // 0x001a8658: lui $a1, 0x23
    a0 = sp + 0x30;                                             // 0x001a865c: addiu $a0, $sp, 0x30
    func_0010ac68();  // 10ac68                                // 0x001a8660: jal 0x10ac68
    a1 = &str_0022a758;  // "%s\\r%03d.dir"                     // 0x001a8664: addiu $a1, $a1, -0x58a8
    goto label_0x1a86c0;                                        // 0x001a8668: b 0x1a86c0
    /* nop */                                                   // 0x001a866c: nop 
label_0x1a8670:
    v1 = *(int32_t*)((gp) + -0x63f0);                           // 0x001a8670: lw $v1, -0x63f0($gp)
    v0 = 0x2a << 16;                                            // 0x001a8674: lui $v0, 0x2a
    a1 = 0x23 << 16;                                            // 0x001a8678: lui $a1, 0x23
    v0 = v0 + 0x1550;                                           // 0x001a867c: addiu $v0, $v0, 0x1550
    a0 = sp + 0x30;                                             // 0x001a8680: addiu $a0, $sp, 0x30
    a1 = &str_0022a768;  // "r%03d.dir"                         // 0x001a8684: addiu $a1, $a1, -0x5898
    v1 = v1 << 8;                                               // 0x001a868c: sll $v1, $v1, 8
    func_0010a4d8();  // 10a4d8                                // 0x001a8690: jal 0x10a4d8
    a2 = v0 + v1;                                               // 0x001a8694: addu $a2, $v0, $v1
    func_001a87c0();  // 1a87c0                                // 0x001a8698: jal 0x1a87c0
    a0 = sp + 0x30;                                             // 0x001a869c: addiu $a0, $sp, 0x30
    if (v0 != 0) goto label_0x1a86b0;                           // 0x001a86a0: bnez $v0, 0x1a86b0
    a1 = 0x23 << 16;                                            // 0x001a86a4: lui $a1, 0x23
    goto label_0x1a8630;                                        // 0x001a86a8: b 0x1a8630
    s1 = -1;                                                    // 0x001a86ac: addiu $s1, $zero, -1
label_0x1a86b0:
    a0 = sp + 0x30;                                             // 0x001a86b4: addiu $a0, $sp, 0x30
    func_0010a4d8();  // 10a4d8                                // 0x001a86b8: jal 0x10a4d8
    a1 = &str_0022a778;  // "cdrom0:"                           // 0x001a86bc: addiu $a1, $a1, -0x5888
label_0x1a86c0:
    v1 = *(int32_t*)((gp) + -0x63f0);                           // 0x001a86c0: lw $v1, -0x63f0($gp)
label_0x1a86c4:
    v0 = 0x2a << 16;                                            // 0x001a86c4: lui $v0, 0x2a
    v0 = v0 + 0x1530;                                           // 0x001a86c8: addiu $v0, $v0, 0x1530
    a1 = sp + 0x30;                                             // 0x001a86cc: addiu $a1, $sp, 0x30
    v1 = v1 << 4;                                               // 0x001a86d0: sll $v1, $v1, 4
    func_0010ab20();  // 10ab20                                // 0x001a86d4: jal 0x10ab20
    a0 = v0 + v1;                                               // 0x001a86d8: addu $a0, $v0, $v1
    if (v0 != 0) goto label_0x1a86ec;                           // 0x001a86dc: bnez $v0, 0x1a86ec
    /* nop */                                                   // 0x001a86e0: nop 
    goto label_0x1a87a4;                                        // 0x001a86e4: b 0x1a87a4
label_0x1a86ec:
    v0 = *(int32_t*)((gp) + -0x63f0);                           // 0x001a86ec: lw $v0, -0x63f0($gp)
    if (v0 != 0) goto label_0x1a8708;                           // 0x001a86f0: bnez $v0, 0x1a8708
    /* nop */                                                   // 0x001a86f4: nop 
    func_001a8580();  // 1a8580                                // 0x001a86f8: jal 0x1a8580
    /* nop */                                                   // 0x001a86fc: nop 
    goto label_0x1a8714;                                        // 0x001a8700: b 0x1a8714
label_0x1a8708:
    func_001a85c0();  // 1a85c0                                // 0x001a8708: jal 0x1a85c0
    /* nop */                                                   // 0x001a870c: nop 
label_0x1a8714:
    func_00107c70();  // 107c70                                // 0x001a8718: jal 0x107c70
    a2 = 0x10;                                                  // 0x001a871c: addiu $a2, $zero, 0x10
    v1 = sp + 0x30;                                             // 0x001a8720: addiu $v1, $sp, 0x30
    v0 = 0x20;                                                  // 0x001a8724: addiu $v0, $zero, 0x20
    g_002a1500 = v1;  // Global at 0x002a1500                   // 0x001a8728: sw $v1, 0($s0)
    g_002a1504 = v0;  // Global at 0x002a1504                   // 0x001a872c: sw $v0, 4($s0)
    v1 = gp + -0x7d48;                                          // 0x001a8730: addiu $v1, $gp, -0x7d48
    a0 = *(int32_t*)((gp) + -0x63f0);                           // 0x001a8734: lw $a0, -0x63f0($gp)
    v0 = gp + -0x7d50;                                          // 0x001a8738: addiu $v0, $gp, -0x7d50
    a0 = a0 << 2;                                               // 0x001a873c: sll $a0, $a0, 2
    v1 = v1 + a0;                                               // 0x001a8740: addu $v1, $v1, $a0
    v1 = *(int32_t*)(v1);                                       // 0x001a8744: lw $v1, 0($v1)
    g_002a150c = v1;  // Global at 0x002a150c                   // 0x001a8748: sw $v1, 0xc($s0)
    v1 = *(int32_t*)((gp) + -0x63f0);                           // 0x001a874c: lw $v1, -0x63f0($gp)
    v1 = v1 << 2;                                               // 0x001a8750: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001a8754: addu $v0, $v0, $v1
    v0 = g_002a1530;  // Global at 0x002a1530                   // 0x001a8758: lw $v0, 0($v0)
    g_002a1508 = v0;  // Global at 0x002a1508                   // 0x001a875c: sw $v0, 8($s0)
    v0 = *(int32_t*)((gp) + -0x63f0);                           // 0x001a8760: lw $v0, -0x63f0($gp)
    if (v0 != 0) goto label_0x1a877c;                           // 0x001a8764: bnez $v0, 0x1a877c
    func_001310e8();  // 1310e8                                // 0x001a876c: jal 0x1310e8
    goto label_0x1a8788;                                        // 0x001a8774: b 0x1a8788
    v1 = *(int32_t*)((gp) + -0x63f0);                           // 0x001a8778: lw $v1, -0x63f0($gp)
label_0x1a877c:
    func_00130e50();  // 130e50                                // 0x001a877c: jal 0x130e50
    /* nop */                                                   // 0x001a8780: nop 
    v1 = *(int32_t*)((gp) + -0x63f0);                           // 0x001a8784: lw $v1, -0x63f0($gp)
label_0x1a8788:
    v0 = 0x2a << 16;                                            // 0x001a8788: lui $v0, 0x2a
    v0 = v0 + 0x1530;                                           // 0x001a878c: addiu $v0, $v0, 0x1530
    a1 = sp + 0x30;                                             // 0x001a8790: addiu $a1, $sp, 0x30
    v1 = v1 << 4;                                               // 0x001a8794: sll $v1, $v1, 4
    func_0010ac68();  // 10ac68                                // 0x001a8798: jal 0x10ac68
    a0 = v0 + v1;                                               // 0x001a879c: addu $a0, $v0, $v1
    v0 = 1;                                                     // 0x001a87a0: addiu $v0, $zero, 1
label_0x1a87a4:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001a87a8: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001a87ac: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001a87b0: jr $ra
    sp = sp + 0x130;                                            // 0x001a87b4: addiu $sp, $sp, 0x130
}