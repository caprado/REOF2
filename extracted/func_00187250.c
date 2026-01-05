void func_00187250() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x2010;                                                // 0x00187254: addiu $v0, $zero, 0x2010
    a0 = 0x184;                                                 // 0x00187258: addiu $a0, $zero, 0x184
    sp = sp + -0x10;                                            // 0x00187264: addiu $sp, $sp, -0x10
    v1 = 0x21 << 16;                                            // 0x00187268: lui $v1, 0x21
    v0 = 0x28 << 16;                                            // 0x00187270: lui $v0, 0x28
    v1 = v1 + 0x6018;                                           // 0x00187274: addiu $v1, $v1, 0x6018
    t1 = v0 + -0x7800;                                          // 0x00187278: addiu $t1, $v0, -0x7800
    a0 = a0 + v1;                                               // 0x00187280: addu $a0, $a0, $v1
    v0 = t0 + t1;                                               // 0x00187284: addu $v0, $t0, $t1
    a1 = g_00278844;  // Global at 0x00278844                   // 0x00187288: lw $a1, 0x34($a0)
    a0 = g_00280000;  // Global at 0x00280000                   // 0x0018728c: lw $a0, 0($v0)
    a2 = a2 + a1;                                               // 0x00187290: addu $a2, $a2, $a1
    v0 = (a2 < a0) ? 1 : 0;                                     // 0x00187294: slt $v0, $a2, $a0
    /* bnezl $v0, 0x187378 */                                   // 0x00187298: bnezl $v0, 0x187378
    v1 = t1 + t0;                                               // 0x001872a0: addu $v1, $t1, $t0
    v0 = g_00216024;  // Global at 0x00216024                   // 0x001872a4: lw $v0, 0xc($v1)
    v0 = a0 + v0;                                               // 0x001872a8: addu $v0, $a0, $v0
    v0 = (a2 < v0) ? 1 : 0;                                     // 0x001872ac: slt $v0, $a2, $v0
    if (v0 == 0) goto label_0x187374;                           // 0x001872b0: beqz $v0, 0x187374
    v0 = a2 - a0;                                               // 0x001872b4: subu $v0, $a2, $a0
    v0 = v0 << 0xa;                                             // 0x001872bc: sll $v0, $v0, 0xa
    a0 = t1 + 0x10;                                             // 0x001872c0: addiu $a0, $t1, 0x10
    v0 = t0 + v0;                                               // 0x001872c4: addu $v0, $t0, $v0
    v0 = v0 + a0;                                               // 0x001872c8: addu $v0, $v0, $a0
    v1 = v0 | a1;                                               // 0x001872cc: or $v1, $v0, $a1
    v1 = v1 & 7;                                                // 0x001872d0: andi $v1, $v1, 7
    if (v1 == 0) goto label_0x187338;                           // 0x001872d4: beqz $v1, 0x187338
    v1 = v0 + 0x400;                                            // 0x001872d8: addiu $v1, $v0, 0x400
label_0x1872dc:
    v0 = v0 + 0x20;                                             // 0x0018731c: addiu $v0, $v0, 0x20
    a1 = a1 + 0x20;                                             // 0x00187320: addiu $a1, $a1, 0x20
    /* nop */                                                   // 0x00187324: nop 
    if (v0 != v1) goto label_0x1872dc;                          // 0x00187328: bne $v0, $v1, 0x1872dc
    /* nop */                                                   // 0x0018732c: nop 
    goto label_0x187384;                                        // 0x00187330: b 0x187384
    v0 = 1;                                                     // 0x00187334: addiu $v0, $zero, 1
label_0x187338:
    v0 = v0 + 0x20;                                             // 0x00187358: addiu $v0, $v0, 0x20
    a1 = a1 + 0x20;                                             // 0x0018735c: addiu $a1, $a1, 0x20
    /* nop */                                                   // 0x00187360: nop 
    if (v0 != v1) goto label_0x187338;                          // 0x00187364: bne $v0, $v1, 0x187338
    /* nop */                                                   // 0x00187368: nop 
    goto label_0x187384;                                        // 0x0018736c: b 0x187384
    v0 = 1;                                                     // 0x00187370: addiu $v0, $zero, 1
label_0x187374:
    func_00186dc8();  // 186dc8                                // 0x0018737c: jal 0x186dc8
    a3 = 1;                                                     // 0x00187380: addiu $a3, $zero, 1
label_0x187384:
    return;                                                     // 0x00187388: jr $ra
    sp = sp + 0x10;                                             // 0x0018738c: addiu $sp, $sp, 0x10
}