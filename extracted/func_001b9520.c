void func_001b9520() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_38, local_3c;
    
    sp = sp + -0x40;                                            // 0x001b9520: addiu $sp, $sp, -0x40
    a1 = gp + -0x7cc8;                                          // 0x001b9524: addiu $a1, $gp, -0x7cc8
    t0 = 1;                                                     // 0x001b952c: addiu $t0, $zero, 1
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b9530: addu.qb $zero, $sp, $s1
    a2 = *(int16_t*)((a0) + 0x38);                              // 0x001b9538: lh $a2, 0x38($a0)
    v1 = *(int8_t*)((a0) + 4);                                  // 0x001b953c: lb $v1, 4($a0)
    a1 = a1 + a2;                                               // 0x001b9540: addu $a1, $a1, $a2
    s0 = *(int8_t*)(a1);                                        // 0x001b9544: lb $s0, 0($a1)
    if (v1 == t0) goto label_0x1b95ac;                          // 0x001b9548: beq $v1, $t0, 0x1b95ac
    if (v1 == 0) goto label_0x1b9560;                           // 0x001b9550: beqz $v1, 0x1b9560
    /* nop */                                                   // 0x001b9554: nop 
    goto label_0x1b96c4;                                        // 0x001b9558: b 0x1b96c4
label_0x1b9560:
    v0 = v1 + 1;                                                // 0x001b9560: addiu $v0, $v1, 1
    *(uint8_t*)((s1) + 4) = v0;                                 // 0x001b9564: sb $v0, 4($s1)
    v0 = *(int8_t*)((s1) + 1);                                  // 0x001b9568: lb $v0, 1($s1)
    if (v0 != 0) goto label_0x1b95a4;                           // 0x001b956c: bnez $v0, 0x1b95a4
    /* nop */                                                   // 0x001b9570: nop 
    a1 = *(uint8_t*)((s1) + 2);                                 // 0x001b9574: lbu $a1, 2($s1)
    a0 = 2;                                                     // 0x001b9578: addiu $a0, $zero, 2
    a3 = s1 + 0x2c;                                             // 0x001b9580: addiu $a3, $s1, 0x2c
    func_001b8b40();  // 1b8b40                                // 0x001b9588: jal 0x1b8b40
    a0 = 4;                                                     // 0x001b9590: addiu $a0, $zero, 4
    v1 = 0x3c;                                                  // 0x001b9594: addiu $v1, $zero, 0x3c
    *(uint16_t*)((s1) + 8) = a0;                                // 0x001b9598: sh $a0, 8($s1)
    goto label_0x1b95ac;                                        // 0x001b959c: b 0x1b95ac
    *(uint16_t*)((s1) + 0xa) = v1;                              // 0x001b95a0: sh $v1, 0xa($s1)
label_0x1b95a4:
    func_001b8fe0();  // 1b8fe0                                // 0x001b95a4: jal 0x1b8fe0
    /* nop */                                                   // 0x001b95a8: nop 
label_0x1b95ac:
    v1 = *(int16_t*)((s1) + 0xa);                               // 0x001b95ac: lh $v1, 0xa($s1)
    v1 = v1 + -1;                                               // 0x001b95b0: addiu $v1, $v1, -1
    *(uint16_t*)((s1) + 0xa) = v1;                              // 0x001b95b4: sh $v1, 0xa($s1)
    if (v1 >= 0) goto label_0x1b960c;                           // 0x001b95c0: bgez $v1, 0x1b960c
    /* nop */                                                   // 0x001b95c4: nop 
    v0 = 0x3c;                                                  // 0x001b95c8: addiu $v0, $zero, 0x3c
    a0 = 1;                                                     // 0x001b95cc: addiu $a0, $zero, 1
    func_001ae5c0();  // 1ae5c0                                // 0x001b95d0: jal 0x1ae5c0
    *(uint16_t*)((s1) + 0xa) = v0;                              // 0x001b95d4: sh $v0, 0xa($s1)
    v1 = v0 & 0xffff;                                           // 0x001b95d8: andi $v1, $v0, 0xffff
    a0 = 2;                                                     // 0x001b95dc: addiu $a0, $zero, 2
    v0 = 3;                                                     // 0x001b95e0: addiu $v0, $zero, 3
    /* divide: v1 / v0 -> hi:lo */                              // 0x001b95e8: div $zero, $v1, $v0
    a3 = s1 + 0x2c;                                             // 0x001b95ec: addiu $a3, $s1, 0x2c
    t0 = 1;                                                     // 0x001b95f0: addiu $t0, $zero, 1
    v0 = *(uint8_t*)((s1) + 2);                                 // 0x001b95fc: lbu $v0, 2($s1)
    /* mfhi $v1 */                                              // 0x001b9600
    func_001b8b40();  // 1b8b40                                // 0x001b9604: jal 0x1b8b40
    a1 = v0 + v1;                                               // 0x001b9608: addu $a1, $v0, $v1
label_0x1b960c:
    v1 = *(int16_t*)((s1) + 8);                                 // 0x001b960c: lh $v1, 8($s1)
    v1 = v1 + -1;                                               // 0x001b9610: addiu $v1, $v1, -1
    *(uint16_t*)((s1) + 8) = v1;                                // 0x001b9614: sh $v1, 8($s1)
    if (v1 >= 0) goto label_0x1b96c0;                           // 0x001b9620: bgez $v1, 0x1b96c0
    /* nop */                                                   // 0x001b9624: nop 
    v0 = 4;                                                     // 0x001b9628: addiu $v0, $zero, 4
    *(uint16_t*)((s1) + 8) = v0;                                // 0x001b962c: sh $v0, 8($s1)
    v0 = *(int8_t*)((s1) + 1);                                  // 0x001b9630: lb $v0, 1($s1)
    if (v0 != 0) goto label_0x1b968c;                           // 0x001b9634: bnez $v0, 0x1b968c
    v0 = 0x22 << 16;                                            // 0x001b9638: lui $v0, 0x22
    v0 = 0x22 << 16;                                            // 0x001b963c: lui $v0, 0x22
    v1 = s0 << 2;                                               // 0x001b9640: sll $v1, $s0, 2
    v0 = v0 + -0x36b0;                                          // 0x001b9644: addiu $v0, $v0, -0x36b0
    a0 = s1 + 0x2c;                                             // 0x001b9648: addiu $a0, $s1, 0x2c
    v0 = v0 + v1;                                               // 0x001b964c: addu $v0, $v0, $v1
    a2 = sp + 0x3c;                                             // 0x001b9650: addiu $a2, $sp, 0x3c
    a1 = g_0021c950;  // Global at 0x0021c950                   // 0x001b9654: lw $a1, 0($v0)
    func_001b8c20();  // 1b8c20                                // 0x001b9658: jal 0x1b8c20
    a3 = sp + 0x38;                                             // 0x001b965c: addiu $a3, $sp, 0x38
    if (v0 == 0) goto label_0x1b96c0;                           // 0x001b9660: beqz $v0, 0x1b96c0
    /* nop */                                                   // 0x001b9664: nop 
    a1 = *(uint8_t*)((s1) + 2);                                 // 0x001b9668: lbu $a1, 2($s1)
    a0 = 2;                                                     // 0x001b966c: addiu $a0, $zero, 2
    a3 = local_3c;                                              // 0x001b9670: lw $a3, 0x3c($sp)
    t0 = local_38;                                              // 0x001b9678: lw $t0, 0x38($sp)
    func_001ac590();  // 1ac590                                // 0x001b967c: jal 0x1ac590
    t1 = 0x2000;                                                // 0x001b9680: addiu $t1, $zero, 0x2000
    goto label_0x1b96c0;                                        // 0x001b9684: b 0x1b96c0
    /* nop */                                                   // 0x001b9688: nop 
label_0x1b968c:
    v1 = s0 << 2;                                               // 0x001b968c: sll $v1, $s0, 2
    v0 = v0 + -0x36b0;                                          // 0x001b9690: addiu $v0, $v0, -0x36b0
    a0 = s1 + 0x2c;                                             // 0x001b9694: addiu $a0, $s1, 0x2c
    v0 = v0 + v1;                                               // 0x001b9698: addu $v0, $v0, $v1
    a2 = sp + 0x3c;                                             // 0x001b969c: addiu $a2, $sp, 0x3c
    a1 = g_002192a0;  // Global at 0x002192a0                   // 0x001b96a0: lw $a1, 0($v0)
    func_001b8c20();  // 1b8c20                                // 0x001b96a4: jal 0x1b8c20
    a3 = sp + 0x38;                                             // 0x001b96a8: addiu $a3, $sp, 0x38
    if (v0 == 0) goto label_0x1b96c0;                           // 0x001b96ac: beqz $v0, 0x1b96c0
    /* nop */                                                   // 0x001b96b0: nop 
    a1 = local_3c;                                              // 0x001b96b4: lw $a1, 0x3c($sp)
    func_001ad9c0();  // 1ad9c0                                // 0x001b96b8: jal 0x1ad9c0
label_0x1b96c0:
label_0x1b96c4:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b96c4: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b96c8: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b96cc: jr $ra
    sp = sp + 0x40;                                             // 0x001b96d0: addiu $sp, $sp, 0x40
}