void func_001b0300() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001b0300: addiu $sp, $sp, -0x20
    s0 = 0x31 << 16;                                            // 0x001b030c: lui $s0, 0x31
    func_001b0290();  // 1b0290                                // 0x001b0310: jal 0x1b0290
    s0 = s0 + 0x1d30;                                           // 0x001b0314: addiu $s0, $s0, 0x1d30
    v1 = t2 << 2;                                               // 0x001b031c: sll $v1, $t2, 2
label_0x1b0320:
    a0 = v1 + t2;                                               // 0x001b0324: addu $a0, $v1, $t2
    v1 = gp + -0x7cf8;                                          // 0x001b0328: addiu $v1, $gp, -0x7cf8
    a0 = a0 << 2;                                               // 0x001b032c: sll $a0, $a0, 2
    a3 = v1 + t2;                                               // 0x001b0330: addu $a3, $v1, $t2
    v1 = s0 + a0;                                               // 0x001b0334: addu $v1, $s0, $a0
    goto label_0x1b034c;                                        // 0x001b0338: b 0x1b034c
    t0 = v1 + 0x140c;                                           // 0x001b033c: addiu $t0, $v1, 0x140c
label_0x1b0340:
    func_001afed0();  // 1afed0                                // 0x001b0340: jal 0x1afed0
    t1 = t1 + 1;                                                // 0x001b0348: addiu $t1, $t1, 1
label_0x1b034c:
    v1 = *(uint8_t*)(a3);                                       // 0x001b034c: lbu $v1, 0($a3)
    v1 = (t1 < v1) ? 1 : 0;                                     // 0x001b0350: slt $v1, $t1, $v1
    if (v1 != 0) goto label_0x1b0340;                           // 0x001b0354: bnez $v1, 0x1b0340
    t2 = t2 + 1;                                                // 0x001b035c: addiu $t2, $t2, 1
    v1 = (t2 < 5) ? 1 : 0;                                      // 0x001b0360: slti $v1, $t2, 5
    if (v1 != 0) goto label_0x1b0320;                           // 0x001b0364: bnez $v1, 0x1b0320
    v1 = t2 << 2;                                               // 0x001b0368: sll $v1, $t2, 2
    a2 = gp + -0x7d00;                                          // 0x001b0370: addiu $a2, $gp, -0x7d00
label_0x1b0374:
    v1 = a2 + a3;                                               // 0x001b0374: addu $v1, $a2, $a3
    a0 = s0 + a3;                                               // 0x001b0378: addu $a0, $s0, $a3
    a1 = *(uint8_t*)(v1);                                       // 0x001b037c: lbu $a1, 0($v1)
    a3 = a3 + 1;                                                // 0x001b0380: addiu $a3, $a3, 1
    v1 = (a3 < 8) ? 1 : 0;                                      // 0x001b0384: slti $v1, $a3, 8
    if (v1 != 0) goto label_0x1b0374;                           // 0x001b0388: bnez $v1, 0x1b0374
    *(uint8_t*)((a0) + 8) = a1;                                 // 0x001b038c: sb $a1, 8($a0)
    t1 = 0x22 << 16;                                            // 0x001b0394: lui $t1, 0x22
    t0 = 0x22 << 16;                                            // 0x001b0398: lui $t0, 0x22
    t1 = t1 + -0x3f20;                                          // 0x001b039c: addiu $t1, $t1, -0x3f20
    t0 = t0 + -0x3f10;                                          // 0x001b03a0: addiu $t0, $t0, -0x3f10
label_0x1b03a4:
    a1 = t2 << 2;                                               // 0x001b03a4: sll $a1, $t2, 2
    a0 = t1 + a1;                                               // 0x001b03a8: addu $a0, $t1, $a1
    v1 = t0 + a1;                                               // 0x001b03ac: addu $v1, $t0, $a1
    a3 = *(int32_t*)(a0);                                       // 0x001b03b0: lw $a3, 0($a0)
    a1 = s0 + a1;                                               // 0x001b03b4: addu $a1, $s0, $a1
    a2 = *(int32_t*)(v1);                                       // 0x001b03b8: lw $a2, 0($v1)
    t2 = t2 + 1;                                                // 0x001b03bc: addiu $t2, $t2, 1
    a0 = *(int32_t*)((a1) + 0x10);                              // 0x001b03c0: lw $a0, 0x10($a1)
    a2 = a3 | a2;                                               // 0x001b03c4: or $a2, $a3, $a2
    v1 = (t2 < 4) ? 1 : 0;                                      // 0x001b03c8: slti $v1, $t2, 4
    a0 = a0 | a2;                                               // 0x001b03cc: or $a0, $a0, $a2
    if (v1 != 0) goto label_0x1b03a4;                           // 0x001b03d0: bnez $v1, 0x1b03a4
    *(uint32_t*)((a1) + 0x10) = a0;                             // 0x001b03d4: sw $a0, 0x10($a1)
    v1 = 0xfff;                                                 // 0x001b03d8: addiu $v1, $zero, 0xfff
    a0 = 0xffe;                                                 // 0x001b03dc: addiu $a0, $zero, 0xffe
    g_003130bc = v1;  // Global at 0x003130bc                   // 0x001b03e0: sw $v1, 0x138c($s0)
    at = 0x31 << 16;                                            // 0x001b03e4: lui $at, 0x31
    v1 = 0xf;                                                   // 0x001b03e8: addiu $v1, $zero, 0xf
    g_00312758 = a0;  // Global at 0x00312758                   // 0x001b03ec: sw $a0, 0xa28($s0)
    g_00311d55 = v1;  // Global at 0x00311d55                   // 0x001b03f0: sb $v1, 0x25($s0)
    v1 = g_00311d53;  // Global at 0x00311d53                   // 0x001b03f4: lbu $v1, 0x1d53($at)
    v1 = v1 | 0xd;                                              // 0x001b03f8: ori $v1, $v1, 0xd
    at = 0x31 << 16;                                            // 0x001b03fc: lui $at, 0x31
    g_00311d53 = v1;  // Global at 0x00311d53                   // 0x001b0400: sb $v1, 0x1d53($at)
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b0408: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b040c: jr $ra
    sp = sp + 0x20;                                             // 0x001b0410: addiu $sp, $sp, 0x20
}