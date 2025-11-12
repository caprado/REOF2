void func_00147460() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_20, local_24;
    
    sp = sp + -0xa0;                                            // 0x00147460: addiu $sp, $sp, -0xa0
    a2 = 2;                                                     // 0x00147464: addiu $a2, $zero, 2
    v1 = *(int32_t*)((s2) + 0xc);                               // 0x00147490: lw $v1, 0xc($s2)
    v0 = *(int32_t*)((s2) + 0x10);                              // 0x00147494: lw $v0, 0x10($s2)
    a0 = *(int32_t*)((s0) + 0x870);                             // 0x00147498: lw $a0, 0x870($s0)
    func_00147ca0();  // 0x147c28                                // 0x001474a0: jal 0x147c28
    local_0 = a2;                                               // 0x001474a4: sw $a2, 0($sp)
    v1 = 0x1000 << 16;                                          // 0x001474a8: lui $v1, 0x1000
    v1 = v1 | 0x2010;                                           // 0x001474ac: ori $v1, $v1, 0x2010
    v0 = g_10000000;  // Global at 0x10000000                   // 0x001474b0: lw $v0, 0($v1)
    v0 = v0 & 0x4000;                                           // 0x001474b4: andi $v0, $v0, 0x4000
    if (v0 == 0) goto label_0x1474c8;                           // 0x001474b8: beqz $v0, 0x1474c8
    v0 = 0x4000 << 16;                                          // 0x001474bc: lui $v0, 0x4000
    at = 0x1000 << 16;                                          // 0x001474c0: lui $at, 0x1000
    g_10002010 = v0;  // Global at 0x10002010                   // 0x001474c4: sw $v0, 0x2010($at)
label_0x1474c8:
    v1 = 0x1000 << 16;                                          // 0x001474c8: lui $v1, 0x1000
    s5 = (s3 < 0x400) ? 1 : 0;                                  // 0x001474cc: slti $s5, $s3, 0x400
    v1 = v1 | 0x2010;                                           // 0x001474d0: ori $v1, $v1, 0x2010
    /* nop */                                                   // 0x001474d4: nop 
label_0x1474d8:
    v0 = g_10000000;  // Global at 0x10000000                   // 0x001474d8: lw $v0, 0($v1)
    /* nop */                                                   // 0x001474dc: nop 
    /* nop */                                                   // 0x001474e0: nop 
    /* nop */                                                   // 0x001474e4: nop 
    /* nop */                                                   // 0x001474e8: nop 
    if (v0 < 0) goto label_0x1474d8;                            // 0x001474ec: bltz $v0, 0x1474d8
    /* nop */                                                   // 0x001474f0: nop 
    func_00144f18();  // 0x144ee8                                // 0x001474f8: jal 0x144ee8
    a0 = 0x1000 << 16;                                          // 0x00147500: lui $a0, 0x1000
    v1 = *(int32_t*)(s2);                                       // 0x00147504: lw $v1, 0($s2)
    a0 = a0 | 0x2010;                                           // 0x00147508: ori $a0, $a0, 0x2010
    /* nop */                                                   // 0x0014750c: nop 
label_0x147510:
    v0 = g_10000000;  // Global at 0x10000000                   // 0x00147510: lw $v0, 0($a0)
    /* nop */                                                   // 0x00147514: nop 
    /* nop */                                                   // 0x00147518: nop 
    /* nop */                                                   // 0x0014751c: nop 
    /* nop */                                                   // 0x00147520: nop 
    if (v0 < 0) goto label_0x147510;                            // 0x00147524: bltz $v0, 0x147510
    /* nop */                                                   // 0x00147528: nop 
    v0 = 0x18;                                                  // 0x0014752c: addiu $v0, $zero, 0x18
    s1 = 0xfff << 16;                                           // 0x00147530: lui $s1, 0xfff
    /* multiply: s3 * v0 -> hi:lo */                            // 0x00147534: mult $ac2, $s3, $v0
    s1 = s1 | 0xffff;                                           // 0x00147538: ori $s1, $s1, 0xffff
    v1 = v1 & s1;                                               // 0x0014753c: and $v1, $v1, $s1
    s4 = 0 | 0xffff;                                            // 0x00147540: ori $s4, $zero, 0xffff
    local_24 = v1;                                              // 0x00147544: sw $v1, 0x24($sp)
    a0 = ((unsigned)s4 < (unsigned)v0) ? 1 : 0;                 // 0x00147548: sltu $a0, $s4, $v0
    if (a0 == 0) goto label_0x147638;                           // 0x0014754c: beqz $a0, 0x147638
    local_20 = v0;                                              // 0x00147550: sw $v0, 0x20($sp)
    a1 = 0x14 << 16;                                            // 0x00147554: lui $a1, 0x14
    a0 = 4;                                                     // 0x00147558: addiu $a0, $zero, 4
    a1 = a1 + 0x7388;                                           // 0x0014755c: addiu $a1, $a1, 0x7388
    RemoveDmacHandler();  // 0x114000                           // 0x00147564: jal 0x114000
    a3 = sp + 0x20;                                             // 0x00147568: addiu $a3, $sp, 0x20
    v1 = 0x10;                                                  // 0x00147570: addiu $v1, $zero, 0x10
    v0 = 0x1000 << 16;                                          // 0x00147574: lui $v0, 0x1000
    a0 = 4;                                                     // 0x00147578: addiu $a0, $zero, 4
    v0 = v0 | 0xe010;                                           // 0x0014757c: ori $v0, $v0, 0xe010
    func_00114f60();  // 0x114ef8                                // 0x00147580: jal 0x114ef8
    g_10000000 = v1;  // Global at 0x10000000                   // 0x00147584: sw $v1, 0($v0)
    func_0011d378();  // 0x11d320                                // 0x00147588: jal 0x11d320
    /* nop */                                                   // 0x0014758c: nop 
    a1 = local_24;                                              // 0x00147590: lw $a1, 0x24($sp)
    v1 = 0x1000 << 16;                                          // 0x00147594: lui $v1, 0x1000
    v1 = v1 | 0xb410;                                           // 0x00147598: ori $v1, $v1, 0xb410
    a0 = 0x1000 << 16;                                          // 0x0014759c: lui $a0, 0x1000
    g_10000000 = a1;  // Global at 0x10000000                   // 0x001475a0: sw $a1, 0($v1)
    a0 = a0 | 0xb420;                                           // 0x001475a4: ori $a0, $a0, 0xb420
    g_10000000 = s4;  // Global at 0x10000000                   // 0x001475a8: sw $s4, 0($a0)
    v1 = 0x1000 << 16;                                          // 0x001475ac: lui $v1, 0x1000
    v1 = v1 | 0xb400;                                           // 0x001475b0: ori $v1, $v1, 0xb400
    a0 = 0x101;                                                 // 0x001475b4: addiu $a0, $zero, 0x101
    g_10000000 = a0;  // Global at 0x10000000                   // 0x001475b8: sw $a0, 0($v1)
    if (v0 == 0) goto label_0x1475d0;                           // 0x001475bc: beqz $v0, 0x1475d0
    v0 = local_24;                                              // 0x001475c0: lw $v0, 0x24($sp)
    func_0011d390();  // 0x11d378                                // 0x001475c4: jal 0x11d378
    /* nop */                                                   // 0x001475c8: nop 
    v0 = local_24;                                              // 0x001475cc: lw $v0, 0x24($sp)
label_0x1475d0:
    v1 = 0xf << 16;                                             // 0x001475d0: lui $v1, 0xf
    a0 = local_20;                                              // 0x001475d4: lw $a0, 0x20($sp)
    v1 = v1 | 0xfff0;                                           // 0x001475d8: ori $v1, $v1, 0xfff0
    v0 = v0 + v1;                                               // 0x001475dc: addu $v0, $v0, $v1
    v0 = v0 & s1;                                               // 0x001475e0: and $v0, $v0, $s1
    a0 = a0 - s4;                                               // 0x001475e4: subu $a0, $a0, $s4
    local_24 = v0;                                              // 0x001475e8: sw $v0, 0x24($sp)
    if (s5 == 0) goto label_0x14760c;                           // 0x001475ec: beqz $s5, 0x14760c
    local_20 = a0;                                              // 0x001475f0: sw $a0, 0x20($sp)
    a1 = *(int32_t*)((s0) + 0xf0);                              // 0x001475f4: lw $a1, 0xf0($s0)
    func_001471c8();  // 0x146f58                                // 0x001475fc: jal 0x146f58
    goto label_0x14761c;                                        // 0x00147604: b 0x14761c
    /* nop */                                                   // 0x00147608: nop 
label_0x14760c:
    a1 = *(int32_t*)((s0) + 0xf0);                              // 0x0014760c: lw $a1, 0xf0($s0)
    func_00147460();  // 0x1471c8                                // 0x00147614: jal 0x1471c8
label_0x14761c:
    func_00114ef8();  // 0x114e90                                // 0x0014761c: jal 0x114e90
    a0 = 4;                                                     // 0x00147620: addiu $a0, $zero, 4
    _EnableIntc();  // 0x114010                                 // 0x00147628: jal 0x114010
    a0 = 4;                                                     // 0x0014762c: addiu $a0, $zero, 4
    goto label_0x1476b4;                                        // 0x00147630: b 0x1476b4
    a0 = *(int32_t*)((s0) + 0x870);                             // 0x00147634: lw $a0, 0x870($s0)
label_0x147638:
    func_0011d378();  // 0x11d320                                // 0x00147638: jal 0x11d320
    /* nop */                                                   // 0x0014763c: nop 
    a1 = *(int32_t*)(s2);                                       // 0x00147640: lw $a1, 0($s2)
    v1 = 0x1000 << 16;                                          // 0x00147644: lui $v1, 0x1000
    v1 = v1 | 0xb410;                                           // 0x00147648: ori $v1, $v1, 0xb410
    a2 = 0x1000 << 16;                                          // 0x0014764c: lui $a2, 0x1000
    a1 = a1 & s1;                                               // 0x00147650: and $a1, $a1, $s1
    a2 = a2 | 0xb420;                                           // 0x00147654: ori $a2, $a2, 0xb420
    g_10000000 = a1;  // Global at 0x10000000                   // 0x00147658: sw $a1, 0($v1)
    a0 = 0x1000 << 16;                                          // 0x0014765c: lui $a0, 0x1000
    a0 = a0 | 0xb400;                                           // 0x00147660: ori $a0, $a0, 0xb400
    a1 = 0x101;                                                 // 0x00147664: addiu $a1, $zero, 0x101
    v1 = local_20;                                              // 0x00147668: lw $v1, 0x20($sp)
    g_10000000 = v1;  // Global at 0x10000000                   // 0x0014766c: sw $v1, 0($a2)
    if (v0 == 0) goto label_0x147680;                           // 0x00147670: beqz $v0, 0x147680
    g_10000000 = a1;  // Global at 0x10000000                   // 0x00147674: sw $a1, 0($a0)
    func_0011d390();  // 0x11d378                                // 0x00147678: jal 0x11d378
    /* nop */                                                   // 0x0014767c: nop 
label_0x147680:
    if (s5 == 0) goto label_0x1476a0;                           // 0x00147680: beqz $s5, 0x1476a0
    local_20 = 0;                                               // 0x00147684: sw $zero, 0x20($sp)
    a1 = *(int32_t*)((s0) + 0xf0);                              // 0x00147688: lw $a1, 0xf0($s0)
    func_001471c8();  // 0x146f58                                // 0x00147690: jal 0x146f58
    goto label_0x1476b4;                                        // 0x00147698: b 0x1476b4
    a0 = *(int32_t*)((s0) + 0x870);                             // 0x0014769c: lw $a0, 0x870($s0)
label_0x1476a0:
    a1 = *(int32_t*)((s0) + 0xf0);                              // 0x001476a0: lw $a1, 0xf0($s0)
    func_00147460();  // 0x1471c8                                // 0x001476a8: jal 0x1471c8
    a0 = *(int32_t*)((s0) + 0x870);                             // 0x001476b0: lw $a0, 0x870($s0)
label_0x1476b4:
    v0 = 3;                                                     // 0x001476b4: addiu $v0, $zero, 3
    local_0 = v0;                                               // 0x001476b8: sw $v0, 0($sp)
    func_00147ca0();  // 0x147c28                                // 0x001476bc: jal 0x147c28
    return;                                                     // 0x001476e0: jr $ra
    sp = sp + 0xa0;                                             // 0x001476e4: addiu $sp, $sp, 0xa0
}