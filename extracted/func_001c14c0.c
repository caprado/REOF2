void func_001c14c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
label_0x1c14c0:
    sp = sp + -0x30;                                            // 0x001c14c0: addiu $sp, $sp, -0x30
    func_001c12a0();  // 0x1c1238                                // 0x001c14d4: jal 0x1c1238
    v0 = *(uint8_t*)((s1) + 2);                                 // 0x001c14dc: lbu $v0, 2($s1)
    s0 = v0 + s0;                                               // 0x001c14e0: addu $s0, $v0, $s0
    if (s0 < 0) goto label_0x1c1520;                            // 0x001c14e4: bltzl $s0, 0x1c1520
    s0 = s0 + 0x3c;                                             // 0x001c14e8: addiu $s0, $s0, 0x3c
    v0 = (s0 < 0x3c) ? 1 : 0;                                   // 0x001c14ec: slti $v0, $s0, 0x3c
    /* bnezl $v0, 0x1c1534 */                                   // 0x001c14f0: bnezl $v0, 0x1c1534
    *(uint8_t*)((s1) + 2) = s0;                                 // 0x001c14f4: sb $s0, 2($s1)
    /* nop */                                                   // 0x001c14fc: nop 
label_0x1c1500:
    func_001c1498();  // 0x1c1468                                // 0x001c1500: jal 0x1c1468
    s0 = s0 + -0x3c;                                            // 0x001c1504: addiu $s0, $s0, -0x3c
    v0 = (s0 < 0x3c) ? 1 : 0;                                   // 0x001c1508: slti $v0, $s0, 0x3c
    if (v0 == 0) goto label_0x1c1500;                           // 0x001c150c: beqz $v0, 0x1c1500
    goto label_0x1c1538;                                        // 0x001c1514: b 0x1c1538
    *(uint8_t*)((s1) + 2) = s0;                                 // 0x001c1518: sb $s0, 2($s1)
    /* nop */                                                   // 0x001c151c: nop 
label_0x1c1520:
    func_001c14c0();  // 0x1c1498                                // 0x001c1520: jal 0x1c1498
    if (s0 < 0) goto label_0x1c1520;                            // 0x001c1528: bltzl $s0, 0x1c1520
    s0 = s0 + 0x3c;                                             // 0x001c152c: addiu $s0, $s0, 0x3c
    *(uint8_t*)((s1) + 2) = s0;                                 // 0x001c1530: sb $s0, 2($s1)
label_0x1c1538:
    return func_001c1468();  // Tail call                        // 0x001c1544: j 0x1c12a0
    sp = sp + 0x30;                                             // 0x001c1548: addiu $sp, $sp, 0x30
    /* nop */                                                   // 0x001c154c: nop 
    goto label_0x1c14c0;                                        // 0x001c1550: j 0x1c14c0
    a1 = -0x21c;                                                // 0x001c1554: addiu $a1, $zero, -0x21c
    sp = sp + -0x30;                                            // 0x001c1558: addiu $sp, $sp, -0x30
    func_001c10b0();  // 0x1c1060                                // 0x001c1568: jal 0x1c1060
    func_001c1180();  // 0x1c1118                                // 0x001c1570: jal 0x1c1118
    v1 = 0x3c;                                                  // 0x001c1578: addiu $v1, $zero, 0x3c
    /* multiply: v0 * v1 -> hi:lo */                            // 0x001c1580: mult $ac2, $v0, $v1
    v0 = v0 + -0x21c;                                           // 0x001c158c: addiu $v0, $v0, -0x21c
    a1 = s1 + v0;                                               // 0x001c1590: addu $a1, $s1, $v0
    goto label_0x1c14c0;                                        // 0x001c1598: j 0x1c14c0
    sp = sp + 0x30;                                             // 0x001c159c: addiu $sp, $sp, 0x30
    sp = sp + -0x30;                                            // 0x001c15a0: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001c15a8: addu.qb $zero, $sp, $s1
    func_0010af38();  // 0x10ae00                                // 0x001c15b4: jal 0x10ae00
    goto label_0x1c15e4;                                        // 0x001c15bc: b 0x1c15e4
label_0x1c15c4:
    v1 = *(int8_t*)(s1);                                        // 0x001c15c4: lb $v1, 0($s1)
    if (v1 == 0) goto label_0x1c15f0;                           // 0x001c15c8: beqz $v1, 0x1c15f0
    /* nop */                                                   // 0x001c15cc: nop 
    v1 = v1 ^ 0xff;                                             // 0x001c15d0: xori $v1, $v1, 0xff
    s1 = s1 + 1;                                                // 0x001c15d4: addiu $s1, $s1, 1
    *(uint8_t*)(s0) = v1;                                       // 0x001c15d8: sb $v1, 0($s0)
    a0 = a0 + 1;                                                // 0x001c15dc: addiu $a0, $a0, 1
    s0 = s0 + 1;                                                // 0x001c15e0: addiu $s0, $s0, 1
label_0x1c15e4:
    v1 = (a0 < v0) ? 1 : 0;                                     // 0x001c15e4: slt $v1, $a0, $v0
    if (v1 != 0) goto label_0x1c15c4;                           // 0x001c15e8: bnez $v1, 0x1c15c4
    /* nop */                                                   // 0x001c15ec: nop 
label_0x1c15f0:
    *(uint8_t*)(s0) = 0;                                        // 0x001c15f0: sb $zero, 0($s0)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001c15f8: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c15fc: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c1600: jr $ra
    sp = sp + 0x30;                                             // 0x001c1604: addiu $sp, $sp, 0x30
}