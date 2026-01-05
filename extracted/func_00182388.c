void func_00182388() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x00182388: addiu $sp, $sp, -0x50
    goto label_0x1824b4;                                        // 0x001823a4: b 0x1824b4
    /* nop */                                                   // 0x001823ac: nop 
label_0x1823b0:
    if (s2 < 0) goto label_0x1823c8;                            // 0x001823b0: bltz $s2, 0x1823c8
    if (v1 < 0) goto label_0x1823c8;                            // 0x001823b8: bltz $v1, 0x1823c8
    v0 = (s2 < v1) ? 1 : 0;                                     // 0x001823c0: slt $v0, $s2, $v1
    if (v0 == 0) s0 = v1;                                       // 0x001823c4: movz $s0, $v1, $v0
label_0x1823c8:
    func_0010b0e8();  // 10b0e8                                // 0x001823d0: jal 0x10b0e8
    if (v0 != 0) goto label_0x1824ec;                           // 0x001823d8: bnez $v0, 0x1824ec
    s1 = s1 + s0;                                               // 0x001823e0: addu $s1, $s1, $s0
    s3 = s3 + s0;                                               // 0x001823e4: addu $s3, $s3, $s0
    v1 = *(int8_t*)(s1);                                        // 0x001823e8: lb $v1, 0($s1)
    v0 = 0x3f;                                                  // 0x001823ec: addiu $v0, $zero, 0x3f
    if (v1 != v0) goto label_0x18241c;                          // 0x001823f0: bne $v1, $v0, 0x18241c
    a1 = *(uint8_t*)(s1);                                       // 0x001823f4: lbu $a1, 0($s1)
    v1 = 0x3f;                                                  // 0x001823f8: addiu $v1, $zero, 0x3f
    /* nop */                                                   // 0x001823fc: nop 
label_0x182400:
    v0 = *(int8_t*)(s3);                                        // 0x00182400: lb $v0, 0($s3)
    if (v0 == 0) goto label_0x182484;                           // 0x00182404: beqz $v0, 0x182484
    s1 = s1 + 1;                                                // 0x00182408: addiu $s1, $s1, 1
    s3 = s3 + 1;                                                // 0x0018240c: addiu $s3, $s3, 1
    v0 = *(int8_t*)(s1);                                        // 0x00182410: lb $v0, 0($s1)
    if (v0 == v1) goto label_0x182400;                          // 0x00182414: beq $v0, $v1, 0x182400
    a1 = *(uint8_t*)(s1);                                       // 0x00182418: lbu $a1, 0($s1)
label_0x18241c:
    v0 = a1 << 0x18;                                            // 0x0018241c: sll $v0, $a1, 0x18
    v1 = 0x2a;                                                  // 0x00182420: addiu $v1, $zero, 0x2a
    v0 = v0 >> 0x18;                                            // 0x00182424: sra $v0, $v0, 0x18
    if (v0 != v1) goto label_0x1824b8;                          // 0x00182428: bne $v0, $v1, 0x1824b8
    a0 = 0x2a;                                                  // 0x00182430: addiu $a0, $zero, 0x2a
    v1 = 0x3f;                                                  // 0x00182434: addiu $v1, $zero, 0x3f
label_0x182438:
    s1 = s1 + 1;                                                // 0x00182438: addiu $s1, $s1, 1
label_0x18243c:
    v0 = *(int8_t*)(s1);                                        // 0x0018243c: lb $v0, 0($s1)
    a1 = *(uint8_t*)(s1);                                       // 0x00182440: lbu $a1, 0($s1)
    /* nop */                                                   // 0x00182444: nop 
    /* nop */                                                   // 0x00182448: nop 
    if (v0 == a0) goto label_0x182438;                          // 0x0018244c: beq $v0, $a0, 0x182438
    /* nop */                                                   // 0x00182450: nop 
    if (v0 == v1) goto label_0x18243c;                          // 0x00182454: beql $v0, $v1, 0x18243c
    s1 = s1 + 1;                                                // 0x00182458: addiu $s1, $s1, 1
    if (v0 == 0) goto label_0x182484;                           // 0x0018245c: beqz $v0, 0x182484
    s2 = 1;                                                     // 0x00182460: addiu $s2, $zero, 1
    goto label_0x182494;                                        // 0x00182464: b 0x182494
    a1 = a1 << 0x18;                                            // 0x00182468: sll $a1, $a1, 0x18
    /* nop */                                                   // 0x0018246c: nop 
label_0x182470:
    func_00182388();  // 182388                                // 0x00182474: jal 0x182388
    if (v0 != s2) goto label_0x18248c;                          // 0x0018247c: bnel $v0, $s2, 0x18248c
    a1 = *(uint8_t*)(s1);                                       // 0x00182480: lbu $a1, 0($s1)
label_0x182484:
    goto label_0x1824ec;                                        // 0x00182484: b 0x1824ec
    v0 = 1;                                                     // 0x00182488: addiu $v0, $zero, 1
label_0x18248c:
    s3 = s3 + 1;                                                // 0x0018248c: addiu $s3, $s3, 1
    a1 = a1 << 0x18;                                            // 0x00182490: sll $a1, $a1, 0x18
label_0x182494:
    func_001821a8();  // 1821a8                                // 0x00182498: jal 0x1821a8
    a1 = a1 >> 0x18;                                            // 0x0018249c: sra $a1, $a1, 0x18
    if (s0 >= 0) goto label_0x182470;                           // 0x001824a4: bgez $s0, 0x182470
    s3 = s3 + s0;                                               // 0x001824a8: addu $s3, $s3, $s0
    goto label_0x1824ec;                                        // 0x001824ac: b 0x1824ec
label_0x1824b4:
label_0x1824b8:
    func_001821a8();  // 1821a8                                // 0x001824b8: jal 0x1821a8
    a1 = 0x3f;                                                  // 0x001824bc: addiu $a1, $zero, 0x3f
    func_001821a8();  // 1821a8                                // 0x001824c8: jal 0x1821a8
    a1 = 0x2a;                                                  // 0x001824cc: addiu $a1, $zero, 0x2a
    if (s2 >= 0) goto label_0x1823b0;                           // 0x001824d0: bgez $s2, 0x1823b0
    if (v1 >= 0) goto label_0x1823b0;                           // 0x001824d8: bgez $v1, 0x1823b0
    func_0010ab20();  // 10ab20                                // 0x001824e0: jal 0x10ab20
    v0 = ((unsigned)v0 < (unsigned)1) ? 1 : 0;                  // 0x001824e8: sltiu $v0, $v0, 1
label_0x1824ec:
    return;                                                     // 0x00182500: jr $ra
    sp = sp + 0x50;                                             // 0x00182504: addiu $sp, $sp, 0x50
}