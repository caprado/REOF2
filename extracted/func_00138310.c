void func_00138310() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_20, local_24, local_4;
    
    sp = sp + -0x70;                                            // 0x00138310: addiu $sp, $sp, -0x70
    v0 = 1;                                                     // 0x00138314: addiu $v0, $zero, 1
    a0 = *(int8_t*)((s2) + 1);                                  // 0x00138330: lb $a0, 1($s2)
    if (a0 != v0) goto label_0x138674;                          // 0x00138334: bnel $a0, $v0, 0x138674
    v0 = *(int8_t*)((s2) + 2);                                  // 0x0013833c: lb $v0, 2($s2)
    if (v0 != a0) goto label_0x1383ec;                          // 0x00138340: bne $v0, $a0, 0x1383ec
    v1 = *(uint8_t*)((s2) + 2);                                 // 0x00138344: lbu $v1, 2($s2)
    sceSifSetDma();  // 0x114680                                // 0x00138348: jal 0x114680
    a0 = *(int32_t*)((s2) + 0x2c);                              // 0x0013834c: lw $a0, 0x2c($s2)
    if (v0 >= 0) goto label_0x1383ec;                           // 0x00138350: bgezl $v0, 0x1383ec
    v1 = *(uint8_t*)((s2) + 2);                                 // 0x00138354: lbu $v1, 2($s2)
    a0 = *(int32_t*)((s2) + 4);                                 // 0x00138358: lw $a0, 4($s2)
    s0 = s2 + 0xc;                                              // 0x0013835c: addiu $s0, $s2, 0xc
    v1 = str_00225138;  // "DTR_Init: in (%d)\n"                // 0x00138368: lw $v1, 0($a0)
    v0 = *(int32_t*)((v1) + 0x20);                              // 0x0013836c: lw $v0, 0x20($v1)
    /* call function at address in v0 */                        // 0x00138370: jalr $v0
    s1 = s2 + 0x14;                                             // 0x00138374: addiu $s1, $s2, 0x14
    *(uint32_t*)(s0) = 0;                                       // 0x00138378: sw $zero, 0($s0)
    a0 = *(int32_t*)((s2) + 8);                                 // 0x0013837c: lw $a0, 8($s2)
    a1 = 1;                                                     // 0x00138380: addiu $a1, $zero, 1
    *(uint32_t*)((s2) + 0x10) = 0;                              // 0x00138384: sw $zero, 0x10($s2)
    v1 = str_00225138;  // "DTR_Init: in (%d)\n"                // 0x00138388: lw $v1, 0($a0)
    v0 = *(int32_t*)((v1) + 0x20);                              // 0x0013838c: lw $v0, 0x20($v1)
    /* call function at address in v0 */                        // 0x00138390: jalr $v0
    *(uint32_t*)(s1) = 0;                                       // 0x00138398: sw $zero, 0($s1)
    v0 = *(int32_t*)((s2) + 0x3c);                              // 0x0013839c: lw $v0, 0x3c($s2)
    v1 = *(int32_t*)((s2) + 0x10);                              // 0x001383a0: lw $v1, 0x10($s2)
    *(uint32_t*)((s2) + 0x18) = 0;                              // 0x001383a4: sw $zero, 0x18($s2)
    v0 = v0 + v1;                                               // 0x001383a8: addu $v0, $v0, $v1
    *(uint8_t*)((s2) + 2) = 0;                                  // 0x001383ac: sb $zero, 2($s2)
    if (v1 == 0) goto label_0x1383e8;                           // 0x001383b0: beqz $v1, 0x1383e8
    *(uint32_t*)((s2) + 0x3c) = v0;                             // 0x001383b4: sw $v0, 0x3c($s2)
    a0 = 0x22 << 16;                                            // 0x001383b8: lui $a0, 0x22
    func_00116508();  // 116508                                // 0x001383bc: jal 0x116508
    a0 = &str_00225070;  // "DTR_ExecHndl: Internal Error len\n" // 0x001383c0: addiu $a0, $a0, 0x5070
    /* nop */                                                   // 0x001383c4: nop 
label_0x1383c8:
    /* nop */                                                   // 0x001383c8: nop 
    /* nop */                                                   // 0x001383cc: nop 
    /* nop */                                                   // 0x001383d0: nop 
    /* nop */                                                   // 0x001383d4: nop 
    /* nop */                                                   // 0x001383d8: nop 
    goto label_0x1383c8;                                        // 0x001383dc: b 0x1383c8
    /* nop */                                                   // 0x001383e0: nop 
    /* nop */                                                   // 0x001383e4: nop 
label_0x1383e8:
label_0x1383ec:
    if (v1 != 0) goto label_0x138674;                           // 0x001383ec: bnez $v1, 0x138674
    a0 = *(int32_t*)((s2) + 4);                                 // 0x001383f4: lw $a0, 4($s2)
    a2 = 0x7fff << 16;                                          // 0x001383f8: lui $a2, 0x7fff
    a1 = 1;                                                     // 0x00138400: addiu $a1, $zero, 1
    v1 = str_00225070;  // "DTR_ExecHndl: Internal Error len\n" // 0x00138404: lw $v1, 0($a0)
    v0 = *(int32_t*)((v1) + 0x18);                              // 0x00138408: lw $v0, 0x18($v1)
    /* call function at address in v0 */                        // 0x0013840c: jalr $v0
    a2 = a2 | 0xffff;                                           // 0x00138410: ori $a2, $a2, 0xffff
    a0 = *(int32_t*)((s2) + 8);                                 // 0x00138414: lw $a0, 8($s2)
    s3 = sp + 0x20;                                             // 0x00138418: addiu $s3, $sp, 0x20
    a2 = 0x7fff << 16;                                          // 0x0013841c: lui $a2, 0x7fff
    v1 = str_00225070;  // "DTR_ExecHndl: Internal Error len\n" // 0x00138420: lw $v1, 0($a0)
    a2 = a2 | 0xffff;                                           // 0x00138428: ori $a2, $a2, 0xffff
    v0 = *(int32_t*)((v1) + 0x18);                              // 0x0013842c: lw $v0, 0x18($v1)
    /* call function at address in v0 */                        // 0x00138430: jalr $v0
    a1 = *(int32_t*)((s2) + 0x38);                              // 0x00138438: lw $a1, 0x38($s2)
    s1 = local_24;                                              // 0x0013843c: lw $s1, 0x24($sp)
    s0 = sp + 0x10;                                             // 0x00138440: addiu $s0, $sp, 0x10
    t0 = local_4;                                               // 0x00138444: lw $t0, 4($sp)
    v1 = (t0 < s1) ? 1 : 0;                                     // 0x00138454: slt $v1, $t0, $s1
    /* beqzl $a1, 0x138460 */                                   // 0x00138458: beqzl $a1, 0x138460
    /* break (trap) */                                          // 0x0013845c: break 0, 7
    if (v1 != 0) s1 = t0;                                       // 0x00138460: movn $s1, $t0, $v1
    /* divide: s1 / a1 -> hi:lo */                              // 0x00138464: div $zero, $s1, $a1
    /* mflo $v0 */                                              // 0x00138468
    func_001404a0();  // 1404a0                                // 0x00138470: jal 0x1404a0
    a0 = *(int32_t*)((s2) + 4);                                 // 0x00138478: lw $a0, 4($s2)
    v1 = str_00225070;  // "DTR_ExecHndl: Internal Error len\n" // 0x00138480: lw $v1, 0($a0)
    v0 = *(int32_t*)((v1) + 0x1c);                              // 0x00138484: lw $v0, 0x1c($v1)
    /* call function at address in v0 */                        // 0x00138488: jalr $v0
    a1 = 1;                                                     // 0x0013848c: addiu $a1, $zero, 1
    s0 = sp + 0x30;                                             // 0x00138494: addiu $s0, $sp, 0x30
    func_001404a0();  // 1404a0                                // 0x001384a0: jal 0x1404a0
    a0 = *(int32_t*)((s2) + 8);                                 // 0x001384a8: lw $a0, 8($s2)
    v1 = str_00225070;  // "DTR_ExecHndl: Internal Error len\n" // 0x001384b0: lw $v1, 0($a0)
    v0 = *(int32_t*)((v1) + 0x1c);                              // 0x001384b4: lw $v0, 0x1c($v1)
    /* call function at address in v0 */                        // 0x001384b8: jalr $v0
    if (s1 <= 0) goto label_0x138674;                           // 0x001384c0: blezl $s1, 0x138674
    v1 = local_4;                                               // 0x001384c8: lw $v1, 4($sp)
    v0 = v1 & 0x3f;                                             // 0x001384cc: andi $v0, $v1, 0x3f
    if (v0 == 0) goto label_0x138518;                           // 0x001384d0: beqz $v0, 0x138518
    a0 = 0x22 << 16;                                            // 0x001384d4: lui $a0, 0x22
    func_00116508();  // 116508                                // 0x001384d8: jal 0x116508
    a0 = &str_00225090;  // "cks.data=%08x, ckd.data=%08x, cks.len=%d\n" // 0x001384dc: addiu $a0, $a0, 0x5090
    a0 = 0x22 << 16;                                            // 0x001384e0: lui $a0, 0x22
    a1 = local_0;                                               // 0x001384e4: lw $a1, 0($sp)
    a0 = &str_002250b8;  // "DTR_ExecHndl: Internal Error cks.data\n" // 0x001384e8: addiu $a0, $a0, 0x50b8
    a2 = local_20;                                              // 0x001384ec: lw $a2, 0x20($sp)
    func_00116508();  // 116508                                // 0x001384f0: jal 0x116508
    a3 = local_4;                                               // 0x001384f4: lw $a3, 4($sp)
label_0x1384f8:
    /* nop */                                                   // 0x001384f8: nop 
    /* nop */                                                   // 0x001384fc: nop 
    /* nop */                                                   // 0x00138500: nop 
    /* nop */                                                   // 0x00138504: nop 
    /* nop */                                                   // 0x00138508: nop 
    goto label_0x1384f8;                                        // 0x0013850c: b 0x1384f8
    /* nop */                                                   // 0x00138510: nop 
    /* nop */                                                   // 0x00138514: nop 
label_0x138518:
    a0 = local_0;                                               // 0x00138518: lw $a0, 0($sp)
    v0 = a0 & 0x3f;                                             // 0x0013851c: andi $v0, $a0, 0x3f
    /* beqzl $v0, 0x138570 */                                   // 0x00138520: beqzl $v0, 0x138570
    v0 = local_20;                                              // 0x00138524: lw $v0, 0x20($sp)
    a0 = 0x22 << 16;                                            // 0x00138528: lui $a0, 0x22
    func_00116508();  // 116508                                // 0x0013852c: jal 0x116508
    a0 = &str_002250e8;  // "DTR_ExecHndl: Internal Error ckd.data\n" // 0x00138530: addiu $a0, $a0, 0x50e8
    a0 = 0x22 << 16;                                            // 0x00138534: lui $a0, 0x22
    a1 = local_0;                                               // 0x00138538: lw $a1, 0($sp)
    a0 = &str_002250b8;  // "DTR_ExecHndl: Internal Error cks.data\n" // 0x0013853c: addiu $a0, $a0, 0x50b8
    a2 = local_20;                                              // 0x00138540: lw $a2, 0x20($sp)
    func_00116508();  // 116508                                // 0x00138544: jal 0x116508
    a3 = local_4;                                               // 0x00138548: lw $a3, 4($sp)
    /* nop */                                                   // 0x0013854c: nop 
label_0x138550:
    /* nop */                                                   // 0x00138550: nop 
    /* nop */                                                   // 0x00138554: nop 
    /* nop */                                                   // 0x00138558: nop 
    /* nop */                                                   // 0x0013855c: nop 
    /* nop */                                                   // 0x00138560: nop 
    goto label_0x138550;                                        // 0x00138564: b 0x138550
    /* nop */                                                   // 0x00138568: nop 
    /* nop */                                                   // 0x0013856c: nop 
    v0 = v0 & 0x3f;                                             // 0x00138570: andi $v0, $v0, 0x3f
    if (v0 == 0) goto label_0x1385c0;                           // 0x00138574: beqz $v0, 0x1385c0
    a1 = a0 + v1;                                               // 0x00138578: addu $a1, $a0, $v1
    a0 = 0x22 << 16;                                            // 0x0013857c: lui $a0, 0x22
    func_00116508();  // 116508                                // 0x00138580: jal 0x116508
    a0 = &str_00225110;  // "E0101701 DTR_ExecHndl: can't use DMA\n" // 0x00138584: addiu $a0, $a0, 0x5110
    a0 = 0x22 << 16;                                            // 0x00138588: lui $a0, 0x22
    a1 = local_0;                                               // 0x0013858c: lw $a1, 0($sp)
    a0 = &str_002250b8;  // "DTR_ExecHndl: Internal Error cks.data\n" // 0x00138590: addiu $a0, $a0, 0x50b8
    a2 = local_20;                                              // 0x00138594: lw $a2, 0x20($sp)
    func_00116508();  // 116508                                // 0x00138598: jal 0x116508
    a3 = local_4;                                               // 0x0013859c: lw $a3, 4($sp)
label_0x1385a0:
    /* nop */                                                   // 0x001385a0: nop 
    /* nop */                                                   // 0x001385a4: nop 
    /* nop */                                                   // 0x001385a8: nop 
    /* nop */                                                   // 0x001385ac: nop 
    /* nop */                                                   // 0x001385b0: nop 
    goto label_0x1385a0;                                        // 0x001385b4: b 0x1385a0
    /* nop */                                                   // 0x001385b8: nop 
    /* nop */                                                   // 0x001385bc: nop 
label_0x1385c0:
    func_00114bd8();  // 114bd8                                // 0x001385c0: jal 0x114bd8
    a1 = a1 + -1;                                               // 0x001385c4: addiu $a1, $a1, -1
    v0 = 0xfff << 16;                                           // 0x001385c8: lui $v0, 0xfff
    v1 = local_0;                                               // 0x001385cc: lw $v1, 0($sp)
    v0 = v0 | 0xffff;                                           // 0x001385d0: ori $v0, $v0, 0xffff
    a2 = local_4;                                               // 0x001385d4: lw $a2, 4($sp)
    a0 = s2 + 0x1c;                                             // 0x001385d8: addiu $a0, $s2, 0x1c
    a3 = local_20;                                              // 0x001385dc: lw $a3, 0x20($sp)
    v1 = v1 & v0;                                               // 0x001385e0: and $v1, $v1, $v0
    *(uint32_t*)((s2) + 0x1c) = v1;                             // 0x001385e4: sw $v1, 0x1c($s2)
    a1 = 1;                                                     // 0x001385e8: addiu $a1, $zero, 1
    *(uint32_t*)((s2) + 0x20) = a3;                             // 0x001385ec: sw $a3, 0x20($s2)
    *(uint32_t*)((s2) + 0x24) = a2;                             // 0x001385f0: sw $a2, 0x24($s2)
    isceSifSetDma();  // 0x1146a0                               // 0x001385f4: jal 0x1146a0
    *(uint32_t*)((s2) + 0x28) = 0;                              // 0x001385f8: sw $zero, 0x28($s2)
    if (v0 != 0) goto label_0x138648;                           // 0x001385fc: bnez $v0, 0x138648
    *(uint32_t*)((s2) + 0x2c) = v0;                             // 0x00138600: sw $v0, 0x2c($s2)
    a0 = 0x22 << 16;                                            // 0x00138604: lui $a0, 0x22
    func_00116508();  // 116508                                // 0x00138608: jal 0x116508
    a0 = &str_00225138;  // "DTR_Init: in (%d)\n"               // 0x0013860c: addiu $a0, $a0, 0x5138
    a0 = *(int32_t*)((s2) + 4);                                 // 0x00138610: lw $a0, 4($s2)
    a1 = 1;                                                     // 0x00138614: addiu $a1, $zero, 1
    v1 = str_00225138;  // "DTR_Init: in (%d)\n"                // 0x00138618: lw $v1, 0($a0)
    v0 = *(int32_t*)((v1) + 0x1c);                              // 0x0013861c: lw $v0, 0x1c($v1)
    /* call function at address in v0 */                        // 0x00138620: jalr $v0
    a0 = *(int32_t*)((s2) + 8);                                 // 0x00138628: lw $a0, 8($s2)
    v1 = str_00225138;  // "DTR_Init: in (%d)\n"                // 0x00138630: lw $v1, 0($a0)
    v0 = *(int32_t*)((v1) + 0x1c);                              // 0x00138634: lw $v0, 0x1c($v1)
    /* call function at address in v0 */                        // 0x00138638: jalr $v0
    goto label_0x138674;                                        // 0x00138640: b 0x138674
label_0x138648:
    v0 = 1;                                                     // 0x00138658: addiu $v0, $zero, 1
    *(uint8_t*)((s2) + 2) = v0;                                 // 0x0013866c: sb $v0, 2($s2)
label_0x138674:
    return;                                                     // 0x00138684: jr $ra
    sp = sp + 0x70;                                             // 0x00138688: addiu $sp, $sp, 0x70
}