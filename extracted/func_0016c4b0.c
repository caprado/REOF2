void func_0016c4b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_20, local_24, local_28, local_2c, local_4, local_8, local_c;
    
    sp = sp + -0x60;                                            // 0x0016c4b0: addiu $sp, $sp, -0x60
    *(uint32_t*)(s3) = 0;                                       // 0x0016c4d8: sw $zero, 0($s3)
    s0 = *(int32_t*)((s1) + 0x1b38);                            // 0x0016c4dc: lw $s0, 0x1b38($s1)
    *(uint32_t*)(s2) = 0;                                       // 0x0016c4e0: sw $zero, 0($s2)
    func_00166ca8();  // 166ca8                                // 0x0016c4e4: jal 0x166ca8
    /* bnezl $v0, 0x16c6a4 */                                   // 0x0016c4ec: bnezl $v0, 0x16c6a4
    v1 = local_4;                                               // 0x0016c4f4: lw $v1, 4($sp)
    if (v1 == 0) goto label_0x16c6a0;                           // 0x0016c4f8: beqz $v1, 0x16c6a0
    a1 = 0xce;                                                  // 0x0016c4fc: addiu $a1, $zero, 0xce
    func_0016c958();  // 16c958                                // 0x0016c504: jal 0x16c958
    a2 = sp + 0x20;                                             // 0x0016c508: addiu $a2, $sp, 0x20
    v0 = local_0;                                               // 0x0016c510: lw $v0, 0($sp)
    if (a1 == v0) goto label_0x16c540;                          // 0x0016c514: beq $a1, $v0, 0x16c540
    v1 = local_20;                                              // 0x0016c518: lw $v1, 0x20($sp)
    if (a1 != 0) goto label_0x16c690;                           // 0x0016c51c: bnez $a1, 0x16c690
    v1 = local_c;                                               // 0x0016c520: lw $v1, 0xc($sp)
    v0 = local_4;                                               // 0x0016c524: lw $v0, 4($sp)
    v0 = v0 + v1;                                               // 0x0016c528: addu $v0, $v0, $v1
    v0 = v0 + -3;                                               // 0x0016c52c: addiu $v0, $v0, -3
    v1 = (v0 < 0) ? 1 : 0;                                      // 0x0016c530: slti $v1, $v0, 0
    goto label_0x16c698;                                        // 0x0016c534: b 0x16c698
    if (v1 != 0) v0 = 0;                                        // 0x0016c538: movn $v0, $zero, $v1
    /* nop */                                                   // 0x0016c53c: nop 
label_0x16c540:
    v0 = 4;                                                     // 0x0016c540: addiu $v0, $zero, 4
    *(uint32_t*)(s3) = v0;                                      // 0x0016c544: sw $v0, 0($s3)
    a0 = v1 & 0x80;                                             // 0x0016c54c: andi $a0, $v1, 0x80
    if (a0 != 0) goto label_0x16c6a0;                           // 0x0016c550: bnez $a0, 0x16c6a0
    *(uint32_t*)(s2) = v1;                                      // 0x0016c554: sw $v1, 0($s2)
    a2 = sp + 0x24;                                             // 0x0016c55c: addiu $a2, $sp, 0x24
    func_001670f0();  // 1670f0                                // 0x0016c564: jal 0x1670f0
    a3 = sp + 0x28;                                             // 0x0016c568: addiu $a3, $sp, 0x28
    a1 = local_20;                                              // 0x0016c56c: lw $a1, 0x20($sp)
    func_0016c6c0();  // 16c6c0                                // 0x0016c574: jal 0x16c6c0
    a2 = local_24;                                              // 0x0016c578: lw $a2, 0x24($sp)
    if (v0 == 0) goto label_0x16c5dc;                           // 0x0016c57c: beqz $v0, 0x16c5dc
    v1 = local_c;                                               // 0x0016c580: lw $v1, 0xc($sp)
    if (v1 != 0) goto label_0x16c5a0;                           // 0x0016c584: bnez $v1, 0x16c5a0
    local_24 = 0;                                               // 0x0016c588: sw $zero, 0x24($sp)
    v1 = local_0;                                               // 0x0016c58c: lw $v1, 0($sp)
    v0 = local_4;                                               // 0x0016c590: lw $v0, 4($sp)
    goto label_0x16c5a8;                                        // 0x0016c594: b 0x16c5a8
    v1 = v1 + v0;                                               // 0x0016c598: addu $v1, $v1, $v0
    /* nop */                                                   // 0x0016c59c: nop 
label_0x16c5a0:
    v0 = local_8;                                               // 0x0016c5a0: lw $v0, 8($sp)
    v1 = v0 + v1;                                               // 0x0016c5a4: addu $v1, $v0, $v1
label_0x16c5a8:
    v0 = local_28;                                              // 0x0016c5a8: lw $v0, 0x28($sp)
    if (v0 == v1) goto label_0x16c5dc;                          // 0x0016c5ac: beq $v0, $v1, 0x16c5dc
    a1 = 0xcc;                                                  // 0x0016c5b4: addiu $a1, $zero, 0xcc
    a2 = sp + 0x2c;                                             // 0x0016c5b8: addiu $a2, $sp, 0x2c
    func_0016cab0();  // 16cab0                                // 0x0016c5bc: jal 0x16cab0
    local_28 = v1;                                              // 0x0016c5c0: sw $v1, 0x28($sp)
    a3 = local_28;                                              // 0x0016c5c8: lw $a3, 0x28($sp)
    func_00167160();  // 167160                                // 0x0016c5d4: jal 0x167160
    local_24 = v0;                                              // 0x0016c5d8: sw $v0, 0x24($sp)
label_0x16c5dc:
    a0 = local_24;                                              // 0x0016c5dc: lw $a0, 0x24($sp)
    if (a0 == 0) goto label_0x16c674;                           // 0x0016c5e0: beqz $a0, 0x16c674
    /* nop */                                                   // 0x0016c5e4: nop 
    func_00158278();  // 158278                                // 0x0016c5e8: jal 0x158278
    /* nop */                                                   // 0x0016c5ec: nop 
    v0 = 8;                                                     // 0x0016c5f4: addiu $v0, $zero, 8
    if (v1 == v0) goto label_0x16c628;                          // 0x0016c5fc: beq $v1, $v0, 0x16c628
    local_2c = a0;                                              // 0x0016c600: sw $a0, 0x2c($sp)
    v0 = ((unsigned)v1 < (unsigned)9) ? 1 : 0;                  // 0x0016c604: sltiu $v0, $v1, 9
    if (v0 == 0) goto label_0x16c688;                           // 0x0016c608: beqz $v0, 0x16c688
    v0 = 0x40;                                                  // 0x0016c60c: addiu $v0, $zero, 0x40
    v0 = 4;                                                     // 0x0016c610: addiu $v0, $zero, 4
    if (v1 == v0) goto label_0x16c640;                          // 0x0016c614: beq $v1, $v0, 0x16c640
    v0 = local_24;                                              // 0x0016c618: lw $v0, 0x24($sp)
    goto label_0x16c690;                                        // 0x0016c61c: b 0x16c690
    /* nop */                                                   // 0x0016c624: nop 
label_0x16c628:
    v0 = local_20;                                              // 0x0016c628: lw $v0, 0x20($sp)
    v0 = v0 & 0x40;                                             // 0x0016c62c: andi $v0, $v0, 0x40
    if (v0 == 0) goto label_0x16c688;                           // 0x0016c630: beqz $v0, 0x16c688
    a1 = 8;                                                     // 0x0016c634: addiu $a1, $zero, 8
    goto label_0x16c654;                                        // 0x0016c638: b 0x16c654
label_0x16c640:
    v0 = local_20;                                              // 0x0016c640: lw $v0, 0x20($sp)
    v0 = v0 & 0x48;                                             // 0x0016c644: andi $v0, $v0, 0x48
    if (v0 == 0) goto label_0x16c688;                           // 0x0016c648: beqz $v0, 0x16c688
    a1 = 4;                                                     // 0x0016c64c: addiu $a1, $zero, 4
label_0x16c654:
    func_0016c958();  // 16c958                                // 0x0016c654: jal 0x16c958
    a2 = sp + 0x20;                                             // 0x0016c658: addiu $a2, $sp, 0x20
    if (a1 == 0) goto label_0x16c674;                           // 0x0016c660: beqz $a1, 0x16c674
    /* nop */                                                   // 0x0016c664: nop 
    v0 = local_24;                                              // 0x0016c668: lw $v0, 0x24($sp)
    if (a1 != v0) goto label_0x16c690;                          // 0x0016c66c: bne $a1, $v0, 0x16c690
label_0x16c674:
    func_0016c8d0();  // 16c8d0                                // 0x0016c674: jal 0x16c8d0
    goto label_0x16c6a4;                                        // 0x0016c67c: b 0x16c6a4
    /* nop */                                                   // 0x0016c684: nop 
label_0x16c688:
    v0 = local_24;                                              // 0x0016c688: lw $v0, 0x24($sp)
label_0x16c690:
    func_0016c868();  // 16c868                                // 0x0016c690: jal 0x16c868
label_0x16c698:
    *(uint32_t*)(s3) = v0;                                      // 0x0016c698: sw $v0, 0($s3)
label_0x16c6a0:
label_0x16c6a4:
    return;                                                     // 0x0016c6b4: jr $ra
    sp = sp + 0x60;                                             // 0x0016c6b8: addiu $sp, $sp, 0x60
}