void func_001b84b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001b84b0: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b84b8: addu.qb $zero, $sp, $s1
    v1 = *(uint8_t*)((s1) + 2);                                 // 0x001b84c4: lbu $v1, 2($s1)
    a0 = *(uint8_t*)((a0) + 0xc8c);                             // 0x001b84c8: lbu $a0, 0xc8c($a0)
    if (v1 == 0) goto label_0x1b8530;                           // 0x001b84cc: beqz $v1, 0x1b8530
    if (s0 != 0) goto label_0x1b84f4;                           // 0x001b84d4: bnez $s0, 0x1b84f4
    v1 = 6;                                                     // 0x001b84d8: addiu $v1, $zero, 6
    func_001b8380();  // 1b8380                                // 0x001b84e0: jal 0x1b8380
    a1 = 6;                                                     // 0x001b84e4: addiu $a1, $zero, 6
    goto label_0x1b8528;                                        // 0x001b84e8: b 0x1b8528
    /* nop */                                                   // 0x001b84ec: nop 
    v1 = 6;                                                     // 0x001b84f0: addiu $v1, $zero, 6
label_0x1b84f4:
    if (s0 != v1) goto label_0x1b8514;                          // 0x001b84f4: bne $s0, $v1, 0x1b8514
    v1 = 0x19;                                                  // 0x001b84f8: addiu $v1, $zero, 0x19
    func_001b8380();  // 1b8380                                // 0x001b8500: jal 0x1b8380
    a1 = 8;                                                     // 0x001b8504: addiu $a1, $zero, 8
    goto label_0x1b8528;                                        // 0x001b8508: b 0x1b8528
    /* nop */                                                   // 0x001b850c: nop 
    v1 = 0x19;                                                  // 0x001b8510: addiu $v1, $zero, 0x19
label_0x1b8514:
    if (s0 != v1) goto label_0x1b856c;                          // 0x001b8514: bne $s0, $v1, 0x1b856c
    /* nop */                                                   // 0x001b8518: nop 
    func_001b8380();  // 1b8380                                // 0x001b8520: jal 0x1b8380
    a1 = 9;                                                     // 0x001b8524: addiu $a1, $zero, 9
label_0x1b8528:
    goto label_0x1b8570;                                        // 0x001b8528: b 0x1b8570
label_0x1b8530:
    func_005895c0();  // 0x5895c0                               // 0x001b8530: jal 0x5895c0
    /* nop */                                                   // 0x001b8534: nop 
    v1 = -1;                                                    // 0x001b853c: addiu $v1, $zero, -1
    if (a0 == v1) goto label_0x1b856c;                          // 0x001b8544: beq $a0, $v1, 0x1b856c
    /* nop */                                                   // 0x001b8548: nop 
    a2 = *(uint8_t*)((s1) + 3);                                 // 0x001b854c: lbu $a2, 3($s1)
    a3 = s1 + 0x38;                                             // 0x001b8554: addiu $a3, $s1, 0x38
    t0 = 1;                                                     // 0x001b8558: addiu $t0, $zero, 1
    func_001b8b40();  // 1b8b40                                // 0x001b8564: jal 0x1b8b40
    a0 = a2 + 8;                                                // 0x001b8568: addiu $a0, $a2, 8
label_0x1b856c:
label_0x1b8570:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b8570: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b8574: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b8578: jr $ra
    sp = sp + 0x30;                                             // 0x001b857c: addiu $sp, $sp, 0x30
}