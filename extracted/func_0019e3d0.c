void func_0019e3d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = a2 << 8;                                               // 0x0019e3d0: sll $v1, $a2, 8
    t0 = 0x21 << 16;                                            // 0x0019e3d4: lui $t0, 0x21
    v1 = v1 + -0x20;                                            // 0x0019e3d8: addiu $v1, $v1, -0x20
    t0 = t0 + 0x7380;                                           // 0x0019e3dc: addiu $t0, $t0, 0x7380
label_0x19e3e4:
    a3 = g_00217380;  // Global at 0x00217380                   // 0x0019e3e4: lw $a3, 0($t0)
    t0 = t0 + 4;                                                // 0x0019e3ec: addiu $t0, $t0, 4
label_0x19e3f0:
label_0x19e3f4:
    t4 = *(int32_t*)(a3);                                       // 0x0019e3f4: lw $t4, 0($a3)
    a2 = t4 & 1;                                                // 0x0019e3f8: andi $a2, $t4, 1
    if (a2 != 0) goto label_0x19e424;                           // 0x0019e3fc: bnez $a2, 0x19e424
    a2 = t4 >> 1;                                               // 0x0019e400: sra $a2, $t4, 1
    if (t4 >= 0) goto label_0x19e414;                           // 0x0019e404: bgez $t4, 0x19e414
    a2 = t4 >> 1;                                               // 0x0019e408: sra $a2, $t4, 1
    a2 = t4 + 1;                                                // 0x0019e40c: addiu $a2, $t4, 1
    a2 = a2 >> 1;                                               // 0x0019e410: sra $a2, $a2, 1
label_0x19e414:
    a2 = a0 + a2;                                               // 0x0019e414: addu $a2, $a0, $a2
    a2 = *(uint8_t*)(a2);                                       // 0x0019e418: lbu $a2, 0($a2)
    goto label_0x19e448;                                        // 0x0019e41c: b 0x19e448
    a2 = a2 & 0xf;                                              // 0x0019e420: andi $a2, $a2, 0xf
label_0x19e424:
    if (t4 >= 0) goto label_0x19e434;                           // 0x0019e424: bgez $t4, 0x19e434
    /* nop */                                                   // 0x0019e428: nop 
    a2 = t4 + 1;                                                // 0x0019e42c: addiu $a2, $t4, 1
    a2 = a2 >> 1;                                               // 0x0019e430: sra $a2, $a2, 1
label_0x19e434:
    a2 = a0 + a2;                                               // 0x0019e434: addu $a2, $a0, $a2
    a2 = *(uint8_t*)(a2);                                       // 0x0019e438: lbu $a2, 0($a2)
    a2 = a2 & 0xf0;                                             // 0x0019e43c: andi $a2, $a2, 0xf0
    a2 = a2 >> 4;                                               // 0x0019e440: sra $a2, $a2, 4
    a2 = a2 & 0xff;                                             // 0x0019e444: andi $a2, $a2, 0xff
label_0x19e448:
    t5 = *(int32_t*)((a3) + 4);                                 // 0x0019e448: lw $t5, 4($a3)
    a2 = a2 & 0xff;                                             // 0x0019e44c: andi $a2, $a2, 0xff
    t4 = t5 & 1;                                                // 0x0019e450: andi $t4, $t5, 1
    if (t4 != 0) goto label_0x19e484;                           // 0x0019e454: bnez $t4, 0x19e484
    a3 = a3 + 8;                                                // 0x0019e458: addiu $a3, $a3, 8
    if (t5 >= 0) goto label_0x19e46c;                           // 0x0019e45c: bgez $t5, 0x19e46c
    t4 = t5 >> 1;                                               // 0x0019e460: sra $t4, $t5, 1
    t4 = t5 + 1;                                                // 0x0019e464: addiu $t4, $t5, 1
    t4 = t4 >> 1;                                               // 0x0019e468: sra $t4, $t4, 1
label_0x19e46c:
    t4 = a0 + t4;                                               // 0x0019e46c: addu $t4, $a0, $t4
    t4 = *(uint8_t*)(t4);                                       // 0x0019e470: lbu $t4, 0($t4)
    t4 = t4 & 0xf;                                              // 0x0019e474: andi $t4, $t4, 0xf
    t4 = t4 << 4;                                               // 0x0019e478: sll $t4, $t4, 4
    goto label_0x19e4a4;                                        // 0x0019e47c: b 0x19e4a4
    t4 = t4 & 0xff;                                             // 0x0019e480: andi $t4, $t4, 0xff
label_0x19e484:
    if (t5 >= 0) goto label_0x19e494;                           // 0x0019e484: bgez $t5, 0x19e494
    t4 = t5 >> 1;                                               // 0x0019e488: sra $t4, $t5, 1
    t4 = t5 + 1;                                                // 0x0019e48c: addiu $t4, $t5, 1
    t4 = t4 >> 1;                                               // 0x0019e490: sra $t4, $t4, 1
label_0x19e494:
    t4 = a0 + t4;                                               // 0x0019e494: addu $t4, $a0, $t4
    t4 = *(uint8_t*)(t4);                                       // 0x0019e498: lbu $t4, 0($t4)
    t4 = t4 & 0xf0;                                             // 0x0019e49c: andi $t4, $t4, 0xf0
    t4 = t4 & 0xff;                                             // 0x0019e4a0: andi $t4, $t4, 0xff
label_0x19e4a4:
    t4 = t4 & 0xff;                                             // 0x0019e4a4: andi $t4, $t4, 0xff
    a2 = a2 & 0xff;                                             // 0x0019e4a8: andi $a2, $a2, 0xff
    a2 = a2 | t4;                                               // 0x0019e4ac: or $a2, $a2, $t4
    t2 = t2 + 1;                                                // 0x0019e4b0: addiu $t2, $t2, 1
    *(uint8_t*)(a1) = a2;                                       // 0x0019e4b4: sb $a2, 0($a1)
    a2 = (t2 < 0x20) ? 1 : 0;                                   // 0x0019e4b8: slti $a2, $t2, 0x20
    if (a2 != 0) goto label_0x19e3f4;                           // 0x0019e4bc: bnez $a2, 0x19e3f4
    a1 = a1 + 1;                                                // 0x0019e4c0: addiu $a1, $a1, 1
    t3 = t3 + 1;                                                // 0x0019e4c4: addiu $t3, $t3, 1
    a2 = (t3 < 2) ? 1 : 0;                                      // 0x0019e4c8: slti $a2, $t3, 2
    if (a2 != 0) goto label_0x19e3f0;                           // 0x0019e4cc: bnez $a2, 0x19e3f0
    a1 = a1 + v1;                                               // 0x0019e4d0: addu $a1, $a1, $v1
    t1 = t1 + 1;                                                // 0x0019e4d4: addiu $t1, $t1, 1
    a2 = (t1 < 4) ? 1 : 0;                                      // 0x0019e4d8: slti $a2, $t1, 4
    if (a2 != 0) goto label_0x19e3e4;                           // 0x0019e4dc: bnez $a2, 0x19e3e4
    a0 = a0 + 0x100;                                            // 0x0019e4e0: addiu $a0, $a0, 0x100
    return;                                                     // 0x0019e4e4: jr $ra
    /* nop */                                                   // 0x0019e4e8: nop 
}