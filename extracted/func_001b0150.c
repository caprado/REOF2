void func_001b0150() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001b0154: addiu $sp, $sp, -0x10
    a0 = 0x22 << 16;                                            // 0x001b0158: lui $a0, 0x22
    t3 = 0x31 << 16;                                            // 0x001b015c: lui $t3, 0x31
    a0 = a0 + -0x4020;                                          // 0x001b0164: addiu $a0, $a0, -0x4020
    a1 = t4 + 0x4094;                                           // 0x001b0168: addiu $a1, $t4, 0x4094
    a2 = 0x1f;                                                  // 0x001b016c: addiu $a2, $zero, 0x1f
    func_001afe50();  // 1afe50                                // 0x001b0170: jal 0x1afe50
    t3 = t3 + 0x1d30;                                           // 0x001b0174: addiu $t3, $t3, 0x1d30
    a0 = 0x22 << 16;                                            // 0x001b0178: lui $a0, 0x22
    a2 = 0x3e;                                                  // 0x001b017c: addiu $a2, $zero, 0x3e
    func_001afe50();  // 1afe50                                // 0x001b0180: jal 0x1afe50
    a0 = a0 + -0x3fe0;                                          // 0x001b0184: addiu $a0, $a0, -0x3fe0
    a0 = 0x22 << 16;                                            // 0x001b0188: lui $a0, 0x22
    a2 = 0x3b;                                                  // 0x001b018c: addiu $a2, $zero, 0x3b
    func_001afe50();  // 1afe50                                // 0x001b0190: jal 0x1afe50
    a0 = a0 + -0x3fa0;                                          // 0x001b0194: addiu $a0, $a0, -0x3fa0
    a0 = 0x22 << 16;                                            // 0x001b0198: lui $a0, 0x22
    a2 = 0x10;                                                  // 0x001b019c: addiu $a2, $zero, 0x10
    func_001afe50();  // 1afe50                                // 0x001b01a0: jal 0x1afe50
    a0 = a0 + -0x3f60;                                          // 0x001b01a4: addiu $a0, $a0, -0x3f60
    a0 = gp + -0x7d10;                                          // 0x001b01a8: addiu $a0, $gp, -0x7d10
    func_001afe50();  // 1afe50                                // 0x001b01ac: jal 0x1afe50
    a2 = 4;                                                     // 0x001b01b0: addiu $a2, $zero, 4
    a3 = gp + -0x7d08;                                          // 0x001b01b8: addiu $a3, $gp, -0x7d08
label_0x1b01bc:
    a0 = t3 + t1;                                               // 0x001b01bc: addu $a0, $t3, $t1
    v1 = a3 + t1;                                               // 0x001b01c0: addu $v1, $a3, $t1
    t0 = g_0021c0a8;  // Global at 0x0021c0a8                   // 0x001b01c4: lbu $t0, 8($a0)
    a1 = t4 + t1;                                               // 0x001b01c8: addu $a1, $t4, $t1
    a2 = g_0021bfe0;  // Global at 0x0021bfe0                   // 0x001b01cc: lbu $a2, 0($v1)
    t1 = t1 + 1;                                                // 0x001b01d0: addiu $t1, $t1, 1
    a0 = *(uint8_t*)((a1) + 4);                                 // 0x001b01d4: lbu $a0, 4($a1)
    a2 = t0 & a2;                                               // 0x001b01d8: and $a2, $t0, $a2
    v1 = (t1 < 8) ? 1 : 0;                                      // 0x001b01dc: slti $v1, $t1, 8
    a2 = a2 & 0xff;                                             // 0x001b01e0: andi $a2, $a2, 0xff
    a0 = a0 | a2;                                               // 0x001b01e4: or $a0, $a0, $a2
    if (v1 != 0) goto label_0x1b01bc;                           // 0x001b01e8: bnez $v1, 0x1b01bc
    *(uint8_t*)((a1) + 4) = a0;                                 // 0x001b01ec: sb $a0, 4($a1)
    t0 = 0x22 << 16;                                            // 0x001b01f4: lui $t0, 0x22
    t0 = t0 + -0x3f00;                                          // 0x001b01f8: addiu $t0, $t0, -0x3f00
label_0x1b01fc:
    a1 = t1 << 2;                                               // 0x001b01fc: sll $a1, $t1, 2
    a0 = t3 + a1;                                               // 0x001b0200: addu $a0, $t3, $a1
    v1 = t0 + a1;                                               // 0x001b0204: addu $v1, $t0, $a1
    a3 = g_0021c0b0;  // Global at 0x0021c0b0                   // 0x001b0208: lw $a3, 0x10($a0)
    a1 = t4 + a1;                                               // 0x001b020c: addu $a1, $t4, $a1
    a2 = g_0021bfe0;  // Global at 0x0021bfe0                   // 0x001b0210: lw $a2, 0($v1)
    t1 = t1 + 1;                                                // 0x001b0214: addiu $t1, $t1, 1
    a0 = *(int32_t*)((a1) + 0xc);                               // 0x001b0218: lw $a0, 0xc($a1)
    a2 = a3 & a2;                                               // 0x001b021c: and $a2, $a3, $a2
    v1 = (t1 < 4) ? 1 : 0;                                      // 0x001b0220: slti $v1, $t1, 4
    a0 = a0 | a2;                                               // 0x001b0224: or $a0, $a0, $a2
    if (v1 != 0) goto label_0x1b01fc;                           // 0x001b0228: bnez $v1, 0x1b01fc
    *(uint32_t*)((a1) + 0xc) = a0;                              // 0x001b022c: sw $a0, 0xc($a1)
    goto label_0x1b0270;                                        // 0x001b0230: b 0x1b0270
label_0x1b0238:
    v0 = 0x22 << 16;                                            // 0x001b0238: lui $v0, 0x22
    v0 = v0 + -0x4000;                                          // 0x001b023c: addiu $v0, $v0, -0x4000
    v0 = v0 + a3;                                               // 0x001b0240: addu $v0, $v0, $a3
    a1 = g_0021c000;  // Global at 0x0021c000                   // 0x001b0244: lbu $a1, 0($v0)
    func_001afea0();  // 1afea0                                // 0x001b0248: jal 0x1afea0
    a0 = t3 + 0x1420;                                           // 0x001b024c: addiu $a0, $t3, 0x1420
    if (v0 == 0) goto label_0x1b026c;                           // 0x001b0250: beqz $v0, 0x1b026c
    v1 = 0x22 << 16;                                            // 0x001b0254: lui $v1, 0x22
    v1 = v1 + -0x4020;                                          // 0x001b0258: addiu $v1, $v1, -0x4020
    v1 = v1 + a3;                                               // 0x001b025c: addu $v1, $v1, $a3
    a1 = g_0021bfe0;  // Global at 0x0021bfe0                   // 0x001b0260: lbu $a1, 0($v1)
    func_001afed0();  // 1afed0                                // 0x001b0264: jal 0x1afed0
    a0 = t4 + 0x40f4;                                           // 0x001b0268: addiu $a0, $t4, 0x40f4
label_0x1b026c:
    a3 = a3 + 1;                                                // 0x001b026c: addiu $a3, $a3, 1
label_0x1b0270:
    v1 = ((unsigned)a3 < (unsigned)0x1f) ? 1 : 0;               // 0x001b0270: sltiu $v1, $a3, 0x1f
    if (v1 != 0) goto label_0x1b0238;                           // 0x001b0274: bnez $v1, 0x1b0238
    /* nop */                                                   // 0x001b0278: nop 
    return;                                                     // 0x001b0280: jr $ra
    sp = sp + 0x10;                                             // 0x001b0284: addiu $sp, $sp, 0x10
}