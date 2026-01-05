void func_00148588() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00148588: addiu $sp, $sp, -0x20
    a0 = a0 + 0x88f;                                            // 0x0014858c: addiu $a0, $a0, 0x88f
    a0 = (unsigned)a0 >> 4;                                     // 0x00148594: srl $a0, $a0, 4
    s0 = a0 << 4;                                               // 0x00148598: sll $s0, $a0, 4
    if (t0 <= 0) goto label_0x148624;                           // 0x001485a8: blez $t0, 0x148624
    t1 = 0xf << 16;                                             // 0x001485b0: lui $t1, 0xf
    t4 = 0xfff << 16;                                           // 0x001485b4: lui $t4, 0xfff
    t1 = t1 | 0xff40;                                           // 0x001485b8: ori $t1, $t1, 0xff40
    t4 = t4 | 0xffff;                                           // 0x001485bc: ori $t4, $t4, 0xffff
    t6 = 3;                                                     // 0x001485c0: addiu $t6, $zero, 3
    t5 = -1;                                                    // 0x001485c4: addiu $t5, $zero, -1
label_0x1485c8:
    v0 = (t1 < t0) ? 1 : 0;                                     // 0x001485c8: slt $v0, $t1, $t0
    if (v0 == 0) a3 = t0;                                       // 0x001485d0: movz $a3, $t0, $v0
    a2 = a3 + 0xf;                                              // 0x001485d8: addiu $a2, $a3, 0xf
    v0 = a3 + 0x1e;                                             // 0x001485dc: addiu $v0, $a3, 0x1e
    a1 = (t5 < a2) ? 1 : 0;                                     // 0x001485e0: slt $a1, $t5, $a2
    t0 = t0 - a3;                                               // 0x001485e4: subu $t0, $t0, $a3
    if (a1 != 0) v0 = a2;                                       // 0x001485e8: movn $v0, $a2, $a1
    a0 = t3 & t4;                                               // 0x001485ec: and $a0, $t3, $t4
    if (t0 != 0) v1 = t6;                                       // 0x001485f0: movn $v1, $t6, $t0
    v0 = v0 >> 4;                                               // 0x001485f4: sra $v0, $v0, 4
    a0 = a0 | v1;                                               // 0x00148604: or $a0, $a0, $v1
    a0 = a0 | v0;                                               // 0x0014860c: or $a0, $a0, $v0
    /* memory sync */                                           // 0x00148614: sync 
    t3 = t3 + a3;                                               // 0x00148618: addu $t3, $t3, $a3
    if (t0 > 0) goto label_0x1485c8;                            // 0x0014861c: bgtz $t0, 0x1485c8
    t2 = t2 + 0x10;                                             // 0x00148620: addiu $t2, $t2, 0x10
label_0x148624:
    iFlushCache();  // 0x114560                                 // 0x00148624: jal 0x114560
    func_0011d320();  // 11d320                                // 0x0014862c: jal 0x11d320
    /* nop */                                                   // 0x00148630: nop 
    v1 = 0xfff << 16;                                           // 0x00148634: lui $v1, 0xfff
    a1 = 0x1000 << 16;                                          // 0x00148638: lui $a1, 0x1000
    v1 = v1 | 0xffff;                                           // 0x0014863c: ori $v1, $v1, 0xffff
    a1 = a1 | 0xb430;                                           // 0x00148640: ori $a1, $a1, 0xb430
    v1 = s0 & v1;                                               // 0x00148644: and $v1, $s0, $v1
    a0 = 0x1000 << 16;                                          // 0x00148648: lui $a0, 0x1000
    g_10000000 = v1;  // Global at 0x10000000                   // 0x0014864c: sw $v1, 0($a1)
    a0 = a0 | 0xb420;                                           // 0x00148650: ori $a0, $a0, 0xb420
    g_10000000 = 0;  // Global at 0x10000000                    // 0x00148654: sw $zero, 0($a0)
    v1 = 0x1000 << 16;                                          // 0x00148658: lui $v1, 0x1000
    v1 = v1 | 0xb400;                                           // 0x0014865c: ori $v1, $v1, 0xb400
    a0 = 0x105;                                                 // 0x00148660: addiu $a0, $zero, 0x105
    g_10000000 = a0;  // Global at 0x10000000                   // 0x00148664: sw $a0, 0($v1)
    if (v0 == 0) goto label_0x14867c;                           // 0x00148668: beqz $v0, 0x14867c
    return func_0011d390();  // Tail call                        // 0x00148674: j 0x11d378
    sp = sp + 0x20;                                             // 0x00148678: addiu $sp, $sp, 0x20
label_0x14867c:
    return;                                                     // 0x00148680: jr $ra
    sp = sp + 0x20;                                             // 0x00148684: addiu $sp, $sp, 0x20
}