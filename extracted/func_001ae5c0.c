void func_001ae5c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 3;                                                     // 0x001ae5c0: addiu $v0, $zero, 3
    if (a0 == v0) goto label_0x1ae644;                          // 0x001ae5c4: beq $a0, $v0, 0x1ae644
    v0 = 2;                                                     // 0x001ae5c8: addiu $v0, $zero, 2
    if (a0 == v0) goto label_0x1ae63c;                          // 0x001ae5cc: beq $a0, $v0, 0x1ae63c
    /* nop */                                                   // 0x001ae5d0: nop 
    v0 = 1;                                                     // 0x001ae5d4: addiu $v0, $zero, 1
    if (a0 == v0) goto label_0x1ae5f8;                          // 0x001ae5d8: beq $a0, $v0, 0x1ae5f8
    /* nop */                                                   // 0x001ae5dc: nop 
    if (a0 == 0) goto label_0x1ae5f0;                           // 0x001ae5e0: beqz $a0, 0x1ae5f0
    /* nop */                                                   // 0x001ae5e4: nop 
    goto label_0x1ae684;                                        // 0x001ae5e8: b 0x1ae684
label_0x1ae5f0:
    goto label_0x1ae684;                                        // 0x001ae5f0: b 0x1ae684
    v0 = *(uint16_t*)((gp) + -0x6340);                          // 0x001ae5f4: lhu $v0, -0x6340($gp)
label_0x1ae5f8:
    a0 = *(uint16_t*)((gp) + -0x6344);                          // 0x001ae5f8: lhu $a0, -0x6344($gp)
    if (a0 != 0) goto label_0x1ae60c;                           // 0x001ae5fc: bnez $a0, 0x1ae60c
    v1 = a0 << 2;                                               // 0x001ae600: sll $v1, $a0, 2
    v1 = a0 << 2;                                               // 0x001ae608: sll $v1, $a0, 2
label_0x1ae60c:
    v0 = 0 | 0xff53;                                            // 0x001ae60c: ori $v0, $zero, 0xff53
    v1 = v1 + a0;                                               // 0x001ae610: addu $v1, $v1, $a0
    v1 = v1 << 1;                                               // 0x001ae614: sll $v1, $v1, 1
    v1 = v1 + a0;                                               // 0x001ae618: addu $v1, $v1, $a0
    v1 = v1 << 4;                                               // 0x001ae61c: sll $v1, $v1, 4
    /* divide: v1 / v0 -> hi:lo */                              // 0x001ae620: divu $zero, $v1, $v0
    /* nop */                                                   // 0x001ae624: nop 
    /* nop */                                                   // 0x001ae628: nop 
    /* mfhi $v0 */                                              // 0x001ae62c
    *(uint16_t*)((gp) + -0x6344) = v0;                          // 0x001ae630: sh $v0, -0x6344($gp)
    goto label_0x1ae684;                                        // 0x001ae634: b 0x1ae684
    v0 = v0 & 0xffff;                                           // 0x001ae638: andi $v0, $v0, 0xffff
label_0x1ae63c:
    goto label_0x1ae684;                                        // 0x001ae63c: b 0x1ae684
    v0 = *(uint8_t*)((gp) + -0x63c0);                           // 0x001ae640: lbu $v0, -0x63c0($gp)
label_0x1ae644:
    a0 = *(uint16_t*)((gp) + -0x6340);                          // 0x001ae644: lhu $a0, -0x6340($gp)
    if (a0 != 0) goto label_0x1ae658;                           // 0x001ae648: bnez $a0, 0x1ae658
    v1 = a0 << 2;                                               // 0x001ae64c: sll $v1, $a0, 2
    a0 = 1;                                                     // 0x001ae650: addiu $a0, $zero, 1
    v1 = a0 << 2;                                               // 0x001ae654: sll $v1, $a0, 2
label_0x1ae658:
    v0 = 0 | 0xff53;                                            // 0x001ae658: ori $v0, $zero, 0xff53
    v1 = v1 + a0;                                               // 0x001ae65c: addu $v1, $v1, $a0
    v1 = v1 << 1;                                               // 0x001ae660: sll $v1, $v1, 1
    v1 = v1 + a0;                                               // 0x001ae664: addu $v1, $v1, $a0
    v1 = v1 << 4;                                               // 0x001ae668: sll $v1, $v1, 4
    /* divide: v1 / v0 -> hi:lo */                              // 0x001ae66c: divu $zero, $v1, $v0
    /* nop */                                                   // 0x001ae670: nop 
    /* nop */                                                   // 0x001ae674: nop 
    /* mfhi $v0 */                                              // 0x001ae678
    *(uint16_t*)((gp) + -0x6340) = v0;                          // 0x001ae67c: sh $v0, -0x6340($gp)
    v0 = v0 & 0xffff;                                           // 0x001ae680: andi $v0, $v0, 0xffff
label_0x1ae684:
    return;                                                     // 0x001ae684: jr $ra
    /* nop */                                                   // 0x001ae688: nop 
}