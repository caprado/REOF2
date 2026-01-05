void func_00123558() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00123558: addiu $sp, $sp, -0x20
    v0 = 1;                                                     // 0x0012355c: addiu $v0, $zero, 1
    s1 = s0 + 0x48;                                             // 0x0012356c: addiu $s1, $s0, 0x48
    v1 = *(int32_t*)((s0) + 4);                                 // 0x00123578: lw $v1, 4($s0)
    if (v1 != v0) goto label_0x123698;                          // 0x0012357c: bne $v1, $v0, 0x123698
    s2 = *(int32_t*)(s1);                                       // 0x00123580: lw $s2, 0($s1)
    func_00134c58();  // 134c58                                // 0x00123584: jal 0x134c58
    a0 = *(int32_t*)((s0) + 8);                                 // 0x00123588: lw $a0, 8($s0)
    /* bnezl $v0, 0x123698 */                                   // 0x0012358c: bnezl $v0, 0x123698
    v1 = *(int32_t*)((s0) + 4);                                 // 0x00123590: lw $v1, 4($s0)
    a0 = *(int32_t*)((s0) + 0x7c);                              // 0x00123594: lw $a0, 0x7c($s0)
    a1 = s0 + 0x68;                                             // 0x00123598: addiu $a1, $s0, 0x68
    v0 = *(int32_t*)((s0) + 0x78);                              // 0x0012359c: lw $v0, 0x78($s0)
    a2 = s0 + 0x6c;                                             // 0x001235a0: addiu $a2, $s0, 0x6c
    /* call function at address in v0 */                        // 0x001235a4: jalr $v0
    a3 = s0 + 0x70;                                             // 0x001235a8: addiu $a3, $s0, 0x70
    a0 = *(int32_t*)((s1) + 0x18);                              // 0x001235ac: lw $a0, 0x18($s1)
    t1 = *(int32_t*)((s1) + 0x20);                              // 0x001235b0: lw $t1, 0x20($s1)
    a2 = 2;                                                     // 0x001235b4: addiu $a2, $zero, 2
    v1 = *(int32_t*)((s1) + 0x24);                              // 0x001235b8: lw $v1, 0x24($s1)
    t0 = a0 - t1;                                               // 0x001235bc: subu $t0, $a0, $t1
    a0 = *(int8_t*)((s0) + 0xe);                                // 0x001235c0: lb $a0, 0xe($s0)
    v0 = (v1 < t0) ? 1 : 0;                                     // 0x001235c4: slt $v0, $v1, $t0
    a1 = *(int32_t*)((s1) + 4);                                 // 0x001235c8: lw $a1, 4($s1)
    if (v0 != 0) t0 = v1;                                       // 0x001235cc: movn $t0, $v1, $v0
    v1 = t1 << 1;                                               // 0x001235d0: sll $v1, $t1, 1
    t3 = *(int32_t*)((s1) + 0x14);                              // 0x001235d4: lw $t3, 0x14($s1)
    v0 = (a1 < t0) ? 1 : 0;                                     // 0x001235d8: slt $v0, $a1, $t0
    if (v0 != 0) t0 = a1;                                       // 0x001235dc: movn $t0, $a1, $v0
    t2 = t3 + v1;                                               // 0x001235e0: addu $t2, $t3, $v1
    if (a0 != a2) goto label_0x123648;                          // 0x001235e4: bne $a0, $a2, 0x123648
    v1 = *(uint8_t*)((s0) + 0xe);                               // 0x001235e8: lbu $v1, 0xe($s0)
    v0 = *(int32_t*)((s1) + 0x1c);                              // 0x001235ec: lw $v0, 0x1c($s1)
    v0 = v0 + t1;                                               // 0x001235f4: addu $v0, $v0, $t1
    v0 = v0 << 1;                                               // 0x001235f8: sll $v0, $v0, 1
    if (t0 <= 0) goto label_0x12367c;                           // 0x001235fc: blez $t0, 0x12367c
    t1 = t3 + v0;                                               // 0x00123600: addu $t1, $t3, $v0
label_0x123608:
    v0 = *(uint8_t*)(a2);                                       // 0x00123608: lbu $v0, 0($a2)
    v1 = a3 << 1;                                               // 0x0012360c: sll $v1, $a3, 1
    a0 = v1 + t2;                                               // 0x00123610: addu $a0, $v1, $t2
    v1 = v1 + t1;                                               // 0x00123614: addu $v1, $v1, $t1
    v0 = v0 << 8;                                               // 0x00123618: sll $v0, $v0, 8
    a3 = a3 + 1;                                                // 0x0012361c: addiu $a3, $a3, 1
    *(uint16_t*)(a0) = v0;                                      // 0x00123620: sh $v0, 0($a0)
    a1 = (a3 < t0) ? 1 : 0;                                     // 0x00123624: slt $a1, $a3, $t0
    v0 = *(uint8_t*)((a2) + 1);                                 // 0x00123628: lbu $v0, 1($a2)
    a2 = a2 + 2;                                                // 0x0012362c: addiu $a2, $a2, 2
    v0 = v0 << 8;                                               // 0x00123630: sll $v0, $v0, 8
    if (a1 != 0) goto label_0x123608;                           // 0x00123634: bnez $a1, 0x123608
    *(uint16_t*)(v1) = v0;                                      // 0x00123638: sh $v0, 0($v1)
    goto label_0x12367c;                                        // 0x0012363c: b 0x12367c
    v1 = *(uint8_t*)((s0) + 0xe);                               // 0x00123640: lbu $v1, 0xe($s0)
    /* nop */                                                   // 0x00123644: nop 
label_0x123648:
    if (t0 <= 0) goto label_0x12367c;                           // 0x00123648: blez $t0, 0x12367c
    /* nop */                                                   // 0x00123654: nop 
label_0x123658:
    v0 = s2 + a3;                                               // 0x00123658: addu $v0, $s2, $a3
    a3 = a3 + 1;                                                // 0x0012365c: addiu $a3, $a3, 1
    v1 = *(uint8_t*)(v0);                                       // 0x00123660: lbu $v1, 0($v0)
    a0 = (a3 < t0) ? 1 : 0;                                     // 0x00123664: slt $a0, $a3, $t0
    v1 = v1 << 8;                                               // 0x00123668: sll $v1, $v1, 8
    *(uint16_t*)(a1) = v1;                                      // 0x0012366c: sh $v1, 0($a1)
    if (a0 != 0) goto label_0x123658;                           // 0x00123670: bnez $a0, 0x123658
    a1 = a1 + 2;                                                // 0x00123674: addiu $a1, $a1, 2
    v1 = *(uint8_t*)((s0) + 0xe);                               // 0x00123678: lbu $v1, 0xe($s0)
label_0x12367c:
    v0 = v1 << 0x18;                                            // 0x0012367c: sll $v0, $v1, 0x18
    v1 = 2;                                                     // 0x00123680: addiu $v1, $zero, 2
    v0 = v0 >> 0x18;                                            // 0x00123684: sra $v0, $v0, 0x18
    *(uint32_t*)((s0) + 4) = v1;                                // 0x00123688: sw $v1, 4($s0)
    /* multiply: t0 * v0 -> hi:lo */                            // 0x0012368c: mult $ac2, $t0, $v0
    *(uint32_t*)((s0) + 0x90) = t0;                             // 0x00123690: sw $t0, 0x90($s0)
    *(uint32_t*)((s0) + 0x94) = v0;                             // 0x00123694: sw $v0, 0x94($s0)
label_0x123698:
    v0 = 2;                                                     // 0x00123698: addiu $v0, $zero, 2
    if (v1 != v0) goto label_0x1236c4;                          // 0x0012369c: bnel $v1, $v0, 0x1236c4
    v1 = *(int32_t*)((s0) + 0x80);                              // 0x001236a4: lw $v1, 0x80($s0)
    a0 = *(int32_t*)((s0) + 0x84);                              // 0x001236a8: lw $a0, 0x84($s0)
    a1 = *(int32_t*)((s0) + 0x94);                              // 0x001236ac: lw $a1, 0x94($s0)
    /* call function at address in v1 */                        // 0x001236b0: jalr $v1
    a2 = *(int32_t*)((s0) + 0x90);                              // 0x001236b4: lw $a2, 0x90($s0)
    v0 = 3;                                                     // 0x001236b8: addiu $v0, $zero, 3
    *(uint32_t*)((s0) + 4) = v0;                                // 0x001236bc: sw $v0, 4($s0)
label_0x1236c4:
    return;                                                     // 0x001236d0: jr $ra
    sp = sp + 0x20;                                             // 0x001236d4: addiu $sp, $sp, 0x20
}