void func_001dcb88() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_110, local_4, local_8, local_90, local_c;
    
    sp = sp + -0x1a0;                                           // 0x001dcb88: addiu $sp, $sp, -0x1a0
    a1 = 0x38;                                                  // 0x001dcb8c: addiu $a1, $zero, 0x38
    a2 = 0x33 << 16;                                            // 0x001dcb94: lui $a2, 0x33
    s5 = 0x33 << 16;                                            // 0x001dcb9c: lui $s5, 0x33
    s4 = a2;                                                    // 0x001dcba4: addiu $s4, $a2, 0
    s3 = s5 + -0x140;                                           // 0x001dcbac: addiu $s3, $s5, -0x140
    a0 = 0xff;                                                  // 0x001dcbb4: addiu $a0, $zero, 0xff
    s1 = g_0032ff58;  // Global at 0x0032ff58                   // 0x001dcbc4: lw $s1, 0x98($s3)
    v0 = g_0032ff54;  // Global at 0x0032ff54                   // 0x001dcbc8: lw $v0, 0x94($s3)
    v1 = g_0032fec4;  // Global at 0x0032fec4                   // 0x001dcbcc: lw $v1, 4($s3)
    /* multiply: v0 * a1 -> hi:lo */                            // 0x001dcbd0: mult $ac2, $v0, $a1
    a1 = *(uint8_t*)((s4) + 1);                                 // 0x001dcbd4: lbu $a1, 1($s4)
    s0 = v1 + v0;                                               // 0x001dcbd8: addu $s0, $v1, $v0
    s2 = s0 + 0x10;                                             // 0x001dcbdc: addiu $s2, $s0, 0x10
    if (a1 == a0) goto label_0x1dd0d4;                          // 0x001dcbe0: beq $a1, $a0, 0x1dd0d4
    v0 = -1;                                                    // 0x001dcbe4: addiu $v0, $zero, -1
    v0 = g_0032fecc;  // Global at 0x0032fecc                   // 0x001dcbe8: lw $v0, 0xc($s0)
    a0 = 1;                                                     // 0x001dcbec: addiu $a0, $zero, 1
    if (v0 != a0) goto label_0x1dcca8;                          // 0x001dcbf0: bnel $v0, $a0, 0x1dcca8
    v1 = g_0032fed0;  // Global at 0x0032fed0                   // 0x001dcbf4: lw $v1, 0x10($s0)
    v0 = g_00330000;  // Global at 0x00330000                   // 0x001dcbf8: lbu $v0, 0($a2)
    *(uint32_t*)(s1) = v0;                                      // 0x001dcbfc: sw $v0, 0($s1)
    v1 = *(uint8_t*)((s4) + 1);                                 // 0x001dcc00: lbu $v1, 1($s4)
    *(uint32_t*)((s1) + 8) = v1;                                // 0x001dcc04: sw $v1, 8($s1)
    v0 = *(uint8_t*)((s4) + 2);                                 // 0x001dcc08: lbu $v0, 2($s4)
    if (v1 == 0) goto label_0x1dd0d0;                           // 0x001dcc0c: beqz $v1, 0x1dd0d0
    *(uint32_t*)((s1) + 4) = v0;                                // 0x001dcc10: sw $v0, 4($s1)
    if (v1 == 0) goto label_0x1dcc64;                           // 0x001dcc18: beqz $v1, 0x1dcc64
    s0 = s1 + 0xc;                                              // 0x001dcc24: addiu $s0, $s1, 0xc
    v1 = a2 + s4;                                               // 0x001dcc28: addu $v1, $a2, $s4
    /* nop */                                                   // 0x001dcc2c: nop 
label_0x1dcc30:
    v0 = g_0032fec4;  // Global at 0x0032fec4                   // 0x001dcc30: lbu $v0, 4($v1)
    if (v0 == 0) goto label_0x1dcc4c;                           // 0x001dcc34: beqz $v0, 0x1dcc4c
    v0 = a3 << 1;                                               // 0x001dcc38: sll $v0, $a3, 1
    v1 = g_0032fec4;  // Global at 0x0032fec4                   // 0x001dcc3c: lbu $v1, 4($v1)
    v0 = s0 + v0;                                               // 0x001dcc40: addu $v0, $s0, $v0
    a3 = a3 + 1;                                                // 0x001dcc44: addiu $a3, $a3, 1
    g_0032febf = v1;  // Global at 0x0032febf                   // 0x001dcc48: sh $v1, 0($v0)
label_0x1dcc4c:
    a2 = a2 + 1;                                                // 0x001dcc4c: addiu $a2, $a2, 1
    v0 = (a2 < a0) ? 1 : 0;                                     // 0x001dcc50: slt $v0, $a2, $a0
    if (v0 != 0) goto label_0x1dcc30;                           // 0x001dcc54: bnez $v0, 0x1dcc30
    v1 = a2 + s4;                                               // 0x001dcc58: addu $v1, $a2, $s4
    goto label_0x1dcc6c;                                        // 0x001dcc5c: b 0x1dcc6c
    *(uint32_t*)((s1) + 8) = a3;                                // 0x001dcc60: sw $a3, 8($s1)
label_0x1dcc64:
    s0 = s1 + 0xc;                                              // 0x001dcc64: addiu $s0, $s1, 0xc
    *(uint32_t*)((s1) + 8) = a3;                                // 0x001dcc68: sw $a3, 8($s1)
label_0x1dcc6c:
    if (a3 != 0) goto label_0x1dcc84;                           // 0x001dcc6c: bnez $a3, 0x1dcc84
    v0 = s5 + -0x140;                                           // 0x001dcc70: addiu $v0, $s5, -0x140
    v0 = 1;                                                     // 0x001dcc74: addiu $v0, $zero, 1
    *(uint16_t*)((s1) + 0xc) = 0;                               // 0x001dcc78: sh $zero, 0xc($s1)
    *(uint32_t*)((s1) + 8) = v0;                                // 0x001dcc7c: sw $v0, 8($s1)
    v0 = s5 + -0x140;                                           // 0x001dcc80: addiu $v0, $s5, -0x140
label_0x1dcc84:
    a0 = g_0032ff54;  // Global at 0x0032ff54                   // 0x001dcc88: lw $a0, 0x94($v0)
    a3 = *(int32_t*)((s1) + 8);                                 // 0x001dcc90: lw $a3, 8($s1)
    a1 = *(uint8_t*)((s1) + 4);                                 // 0x001dcc94: lbu $a1, 4($s1)
    func_001dd320();  // 1dd320                                // 0x001dcc98: jal 0x1dd320
    a2 = *(uint8_t*)(s1);                                       // 0x001dcc9c: lbu $a2, 0($s1)
    goto label_0x1dd0d4;                                        // 0x001dcca0: b 0x1dd0d4
label_0x1dcca8:
    if (v1 == a0) goto label_0x1dccc8;                          // 0x001dcca8: beq $v1, $a0, 0x1dccc8
    v0 = (v1 < 2) ? 1 : 0;                                      // 0x001dccac: slti $v0, $v1, 2
    if (v0 != 0) goto label_0x1dcd74;                           // 0x001dccb0: bnez $v0, 0x1dcd74
    v0 = 2;                                                     // 0x001dccb4: addiu $v0, $zero, 2
    if (v1 == v0) goto label_0x1dcd34;                          // 0x001dccb8: beql $v1, $v0, 0x1dcd34
    v0 = g_0032fed4;  // Global at 0x0032fed4                   // 0x001dccbc: lw $v0, 4($s2)
    goto label_0x1dcd74;                                        // 0x001dccc0: b 0x1dcd74
    /* nop */                                                   // 0x001dccc4: nop 
label_0x1dccc8:
    v0 = g_0032fed4;  // Global at 0x0032fed4                   // 0x001dccc8: lw $v0, 4($s2)
    v1 = g_0032fed8;  // Global at 0x0032fed8                   // 0x001dcccc: lw $v1, 8($s2)
    v0 = (v0 < v1) ? 1 : 0;                                     // 0x001dccd0: slt $v0, $v0, $v1
    if (v0 != 0) goto label_0x1dcd74;                           // 0x001dccd4: bnez $v0, 0x1dcd74
    /* nop */                                                   // 0x001dccd8: nop 
    g_0032fed4 = 0;  // Global at 0x0032fed4                    // 0x001dccdc: sw $zero, 4($s2)
    func_001dd218();  // 1dd218                                // 0x001dcce0: jal 0x1dd218
    a0 = g_0032ff54;  // Global at 0x0032ff54                   // 0x001dcce4: lw $a0, 0x94($s3)
    v1 = g_0032fed8;  // Global at 0x0032fed8                   // 0x001dcce8: lw $v1, 8($s2)
    v1 = (v1 < 2) ? 1 : 0;                                      // 0x001dccec: slti $v1, $v1, 2
    if (v1 != 0) goto label_0x1dcd04;                           // 0x001dccf0: bnez $v1, 0x1dcd04
    a0 = g_0032ff54;  // Global at 0x0032ff54                   // 0x001dccf4: lw $a0, 0x94($s3)
    func_001dd248();  // 1dd248                                // 0x001dccf8: jal 0x1dd248
    a0 = g_0032ff54;  // Global at 0x0032ff54                   // 0x001dcd00: lw $a0, 0x94($s3)
label_0x1dcd04:
    func_001dd248();  // 1dd248                                // 0x001dcd04: jal 0x1dd248
    a1 = g_0032fee0;  // Global at 0x0032fee0                   // 0x001dcd08: lhu $a1, 0x10($s2)
    v1 = g_0032fedc;  // Global at 0x0032fedc                   // 0x001dcd0c: lw $v1, 0xc($s2)
    v1 = (v1 < 2) ? 1 : 0;                                      // 0x001dcd10: slti $v1, $v1, 2
    if (v1 != 0) goto label_0x1dcd2c;                           // 0x001dcd14: bnez $v1, 0x1dcd2c
    v0 = 2;                                                     // 0x001dcd18: addiu $v0, $zero, 2
    a0 = g_0032ff54;  // Global at 0x0032ff54                   // 0x001dcd1c: lw $a0, 0x94($s3)
    func_001dd248();  // 1dd248                                // 0x001dcd20: jal 0x1dd248
    v0 = 2;                                                     // 0x001dcd28: addiu $v0, $zero, 2
label_0x1dcd2c:
    goto label_0x1dcd70;                                        // 0x001dcd2c: b 0x1dcd70
    g_0032fed0 = v0;  // Global at 0x0032fed0                   // 0x001dcd30: sw $v0, 0x10($s0)
label_0x1dcd34:
    v1 = g_0032fedc;  // Global at 0x0032fedc                   // 0x001dcd34: lw $v1, 0xc($s2)
    v0 = (v0 < v1) ? 1 : 0;                                     // 0x001dcd38: slt $v0, $v0, $v1
    if (v0 != 0) goto label_0x1dcd74;                           // 0x001dcd3c: bnez $v0, 0x1dcd74
    /* nop */                                                   // 0x001dcd40: nop 
    g_0032fed4 = 0;  // Global at 0x0032fed4                    // 0x001dcd44: sw $zero, 4($s2)
    a1 = g_0032fee0;  // Global at 0x0032fee0                   // 0x001dcd48: lhu $a1, 0x10($s2)
    func_001dd248();  // 1dd248                                // 0x001dcd4c: jal 0x1dd248
    a0 = g_0032ff54;  // Global at 0x0032ff54                   // 0x001dcd50: lw $a0, 0x94($s3)
    v1 = g_0032fedc;  // Global at 0x0032fedc                   // 0x001dcd54: lw $v1, 0xc($s2)
    v1 = (v1 < 2) ? 1 : 0;                                      // 0x001dcd58: slti $v1, $v1, 2
    /* bnezl $v1, 0x1dcd74 */                                   // 0x001dcd5c: bnezl $v1, 0x1dcd74
    a1 = *(uint8_t*)((s4) + 1);                                 // 0x001dcd60: lbu $a1, 1($s4)
    a0 = g_0032ff54;  // Global at 0x0032ff54                   // 0x001dcd64: lw $a0, 0x94($s3)
    func_001dd248();  // 1dd248                                // 0x001dcd68: jal 0x1dd248
label_0x1dcd70:
    a1 = *(uint8_t*)((s4) + 1);                                 // 0x001dcd70: lbu $a1, 1($s4)
label_0x1dcd74:
    /* bnezl $a1, 0x1dcdb8 */                                   // 0x001dcd74: bnezl $a1, 0x1dcdb8
    v1 = *(uint8_t*)((s4) + 4);                                 // 0x001dcd78: lbu $v1, 4($s4)
    s0 = s5 + -0x140;                                           // 0x001dcd7c: addiu $s0, $s5, -0x140
    a1 = sp + 0x110;                                            // 0x001dcd80: addiu $a1, $sp, 0x110
    func_001dd2b8();  // 1dd2b8                                // 0x001dcd84: jal 0x1dd2b8
    a0 = g_0032ff54;  // Global at 0x0032ff54                   // 0x001dcd88: lw $a0, 0x94($s0)
    /* bnezl $v0, 0x1dd0d0 */                                   // 0x001dcd8c: bnezl $v0, 0x1dd0d0
    *(uint32_t*)((s1) + 8) = 0;                                 // 0x001dcd90: sw $zero, 8($s1)
    v1 = local_110;                                             // 0x001dcd94: lhu $v1, 0x110($sp)
    v0 = 1;                                                     // 0x001dcd98: addiu $v0, $zero, 1
    *(uint32_t*)((s1) + 8) = v0;                                // 0x001dcd9c: sw $v0, 8($s1)
    *(uint16_t*)((s1) + 0xc) = v1;                              // 0x001dcda0: sh $v1, 0xc($s1)
    v0 = g_0032fec8;  // Global at 0x0032fec8                   // 0x001dcda4: lw $v0, 8($s0)
    *(uint32_t*)(s1) = v0;                                      // 0x001dcda8: sw $v0, 0($s1)
    v1 = g_0032fecc;  // Global at 0x0032fecc                   // 0x001dcdac: lw $v1, 0xc($s0)
    goto label_0x1dd0d0;                                        // 0x001dcdb0: b 0x1dd0d0
    *(uint32_t*)((s1) + 4) = v1;                                // 0x001dcdb4: sw $v1, 4($s1)
    v0 = 1;                                                     // 0x001dcdb8: addiu $v0, $zero, 1
    if (v1 != v0) goto label_0x1dcdd4;                          // 0x001dcdbc: bnel $v1, $v0, 0x1dcdd4
    v1 = *(uint8_t*)(s4);                                       // 0x001dcdc0: lbu $v1, 0($s4)
    g_0032fed0 = 0;  // Global at 0x0032fed0                    // 0x001dcdc4: sw $zero, 0($s2)
    goto label_0x1dd0d4;                                        // 0x001dcdcc: b 0x1dd0d4
    *(uint32_t*)((s1) + 8) = 0;                                 // 0x001dcdd0: sw $zero, 8($s1)
label_0x1dcdd4:
    a0 = *(uint8_t*)((s4) + 1);                                 // 0x001dcdd8: lbu $a0, 1($s4)
    v0 = *(uint8_t*)((s4) + 2);                                 // 0x001dcde0: lbu $v0, 2($s4)
    local_0 = v1;                                               // 0x001dcde4: sw $v1, 0($sp)
    local_4 = v0;                                               // 0x001dcde8: sw $v0, 4($sp)
    if (a0 == 0) goto label_0x1dce38;                           // 0x001dcdec: beqz $a0, 0x1dce38
    local_8 = a0;                                               // 0x001dcdf0: sw $a0, 8($sp)
    s6 = 0x33 << 16;                                            // 0x001dcdf4: lui $s6, 0x33
    v1 = a2 + s4;                                               // 0x001dcdf8: addu $v1, $a2, $s4
    /* nop */                                                   // 0x001dcdfc: nop 
label_0x1dce00:
    v0 = g_0032fec4;  // Global at 0x0032fec4                   // 0x001dce00: lbu $v0, 4($v1)
    if (v0 == 0) goto label_0x1dce20;                           // 0x001dce04: beqz $v0, 0x1dce20
    v0 = a3 << 1;                                               // 0x001dce08: sll $v0, $a3, 1
    v1 = g_0032fec4;  // Global at 0x0032fec4                   // 0x001dce0c: lbu $v1, 4($v1)
    a1 = sp + 0xc;                                              // 0x001dce10: addiu $a1, $sp, 0xc
    a3 = a3 + 1;                                                // 0x001dce14: addiu $a3, $a3, 1
    v0 = a1 + v0;                                               // 0x001dce18: addu $v0, $a1, $v0
    g_0032fec0 = v1;  // Global at 0x0032fec0                   // 0x001dce1c: sh $v1, 0($v0)
label_0x1dce20:
    a2 = a2 + 1;                                                // 0x001dce20: addiu $a2, $a2, 1
    v0 = (a2 < a0) ? 1 : 0;                                     // 0x001dce24: slt $v0, $a2, $a0
    if (v0 != 0) goto label_0x1dce00;                           // 0x001dce28: bnez $v0, 0x1dce00
    v1 = a2 + s4;                                               // 0x001dce2c: addu $v1, $a2, $s4
    goto label_0x1dce40;                                        // 0x001dce30: b 0x1dce40
    local_8 = a3;                                               // 0x001dce34: sw $a3, 8($sp)
label_0x1dce38:
    s6 = 0x33 << 16;                                            // 0x001dce38: lui $s6, 0x33
    local_8 = a3;                                               // 0x001dce3c: sw $a3, 8($sp)
label_0x1dce40:
    s0 = s5 + -0x140;                                           // 0x001dce40: addiu $s0, $s5, -0x140
    func_001dd218();  // 1dd218                                // 0x001dce44: jal 0x1dd218
    a0 = g_0032ff54;  // Global at 0x0032ff54                   // 0x001dce48: lw $a0, 0x94($s0)
    v1 = local_c;                                               // 0x001dce4c: lhu $v1, 0xc($sp)
    if (v1 == 0) goto label_0x1dce64;                           // 0x001dce50: beqz $v1, 0x1dce64
    v1 = local_4;                                               // 0x001dce54: lw $v1, 4($sp)
    v0 = g_0032fecc;  // Global at 0x0032fecc                   // 0x001dce58: lw $v0, 0xc($s0)
    if (v1 == v0) goto label_0x1dce8c;                          // 0x001dce5c: beql $v1, $v0, 0x1dce8c
    v0 = g_0032fed4;  // Global at 0x0032fed4                   // 0x001dce60: lhu $v0, 0x14($s0)
label_0x1dce64:
    *(uint16_t*)((s1) + 0xc) = 0;                               // 0x001dce64: sh $zero, 0xc($s1)
    v0 = 1;                                                     // 0x001dce68: addiu $v0, $zero, 1
    *(uint32_t*)((s1) + 8) = v0;                                // 0x001dce6c: sw $v0, 8($s1)
    g_0032fee0 = 0;  // Global at 0x0032fee0                    // 0x001dce70: sh $zero, 0x10($s2)
    v0 = local_0;                                               // 0x001dce74: lw $v0, 0($sp)
    *(uint32_t*)(s1) = v0;                                      // 0x001dce78: sw $v0, 0($s1)
    v1 = local_4;                                               // 0x001dce7c: lw $v1, 4($sp)
    *(uint32_t*)((s1) + 4) = v1;                                // 0x001dce80: sw $v1, 4($s1)
    goto label_0x1dd0a0;                                        // 0x001dce84: b 0x1dd0a0
    g_0032fed0 = 0;  // Global at 0x0032fed0                    // 0x001dce88: sw $zero, 0($s2)
label_0x1dce8c:
    if (v0 == 0) goto label_0x1dcf6c;                           // 0x001dce8c: beqz $v0, 0x1dcf6c
    a0 = local_8;                                               // 0x001dce90: lw $a0, 8($sp)
    if (a0 <= 0) goto label_0x1dcf60;                           // 0x001dce9c: blez $a0, 0x1dcf60
    s0 = s1 + 0xc;                                              // 0x001dcea4: addiu $s0, $s1, 0xc
    v1 = s5 + -0x140;                                           // 0x001dcea8: addiu $v1, $s5, -0x140
    /* nop */                                                   // 0x001dceac: nop 
label_0x1dceb0:
    v0 = g_0032fed0;  // Global at 0x0032fed0                   // 0x001dceb0: lw $v0, 0x10($v1)
    if (v0 <= 0) goto label_0x1dcf14;                           // 0x001dceb4: blez $v0, 0x1dcf14
    a1 = sp + 0xc;                                              // 0x001dcebc: addiu $a1, $sp, 0xc
    t1 = a2 << 1;                                               // 0x001dcec0: sll $t1, $a2, 1
    v0 = g_0032fed4;  // Global at 0x0032fed4                   // 0x001dcec8: lhu $v0, 0x14($v1)
    v1 = t2 + t1;                                               // 0x001dcecc: addu $v1, $t2, $t1
    a0 = g_0032fec0;  // Global at 0x0032fec0                   // 0x001dced0: lhu $a0, 0($v1)
    if (a0 == v0) goto label_0x1dcf14;                          // 0x001dced4: beq $a0, $v0, 0x1dcf14
    t0 = a2 + 1;                                                // 0x001dced8: addiu $t0, $a2, 1
    a1 = s5 + -0x140;                                           // 0x001dcedc: addiu $a1, $s5, -0x140
label_0x1dcee0:
    a3 = a3 + 1;                                                // 0x001dcee0: addiu $a3, $a3, 1
    v0 = g_0032fed0;  // Global at 0x0032fed0                   // 0x001dcee4: lw $v0, 0x10($a1)
    v0 = (a3 < v0) ? 1 : 0;                                     // 0x001dcee8: slt $v0, $a3, $v0
    if (v0 == 0) goto label_0x1dcf18;                           // 0x001dceec: beqz $v0, 0x1dcf18
    v1 = a3 << 1;                                               // 0x001dcef0: sll $v1, $a3, 1
    a0 = t2 + t1;                                               // 0x001dcef4: addu $a0, $t2, $t1
    v1 = a1 + v1;                                               // 0x001dcef8: addu $v1, $a1, $v1
    a1 = *(uint16_t*)(a0);                                      // 0x001dcefc: lhu $a1, 0($a0)
    v0 = g_0032fed4;  // Global at 0x0032fed4                   // 0x001dcf00: lhu $v0, 0x14($v1)
    if (a1 != v0) goto label_0x1dcee0;                          // 0x001dcf04: bne $a1, $v0, 0x1dcee0
    a1 = s5 + -0x140;                                           // 0x001dcf08: addiu $a1, $s5, -0x140
    goto label_0x1dcf1c;                                        // 0x001dcf0c: b 0x1dcf1c
    v0 = s5 + -0x140;                                           // 0x001dcf10: addiu $v0, $s5, -0x140
label_0x1dcf14:
    t0 = a2 + 1;                                                // 0x001dcf14: addiu $t0, $a2, 1
label_0x1dcf18:
    v0 = s5 + -0x140;                                           // 0x001dcf18: addiu $v0, $s5, -0x140
label_0x1dcf1c:
    v1 = g_0032fed0;  // Global at 0x0032fed0                   // 0x001dcf1c: lw $v1, 0x10($v0)
    if (a3 != v1) goto label_0x1dcf4c;                          // 0x001dcf20: bnel $a3, $v1, 0x1dcf4c
    a0 = a2 << 1;                                               // 0x001dcf28: sll $a0, $a2, 1
    v0 = sp + 0xc;                                              // 0x001dcf2c: addiu $v0, $sp, 0xc
    v0 = v0 + a0;                                               // 0x001dcf30: addu $v0, $v0, $a0
    v1 = t3 << 1;                                               // 0x001dcf34: sll $v1, $t3, 1
    a0 = g_0032fec0;  // Global at 0x0032fec0                   // 0x001dcf38: lhu $a0, 0($v0)
    v1 = s0 + v1;                                               // 0x001dcf3c: addu $v1, $s0, $v1
    t3 = t3 + 1;                                                // 0x001dcf40: addiu $t3, $t3, 1
    g_0032fec0 = a0;  // Global at 0x0032fec0                   // 0x001dcf44: sh $a0, 0($v1)
label_0x1dcf4c:
    v0 = (a2 < t4) ? 1 : 0;                                     // 0x001dcf4c: slt $v0, $a2, $t4
    if (v0 != 0) goto label_0x1dceb0;                           // 0x001dcf50: bnez $v0, 0x1dceb0
    v1 = s5 + -0x140;                                           // 0x001dcf54: addiu $v1, $s5, -0x140
    goto label_0x1dcfb0;                                        // 0x001dcf58: b 0x1dcfb0
    *(uint32_t*)((s1) + 8) = t3;                                // 0x001dcf5c: sw $t3, 8($s1)
label_0x1dcf60:
    s0 = s1 + 0xc;                                              // 0x001dcf60: addiu $s0, $s1, 0xc
    goto label_0x1dcfb0;                                        // 0x001dcf64: b 0x1dcfb0
    *(uint32_t*)((s1) + 8) = t3;                                // 0x001dcf68: sw $t3, 8($s1)
label_0x1dcf6c:
    a3 = local_8;                                               // 0x001dcf6c: lw $a3, 8($sp)
    if (a3 <= 0) goto label_0x1dcfa8;                           // 0x001dcf70: blez $a3, 0x1dcfa8
    s0 = s1 + 0xc;                                              // 0x001dcf78: addiu $s0, $s1, 0xc
    a1 = sp + 0xc;                                              // 0x001dcf7c: addiu $a1, $sp, 0xc
label_0x1dcf80:
    v0 = a2 << 1;                                               // 0x001dcf80: sll $v0, $a2, 1
    v1 = a1 + v0;                                               // 0x001dcf84: addu $v1, $a1, $v0
    a2 = a2 + 1;                                                // 0x001dcf88: addiu $a2, $a2, 1
    a0 = g_0032fec0;  // Global at 0x0032fec0                   // 0x001dcf8c: lhu $a0, 0($v1)
    v0 = s0 + v0;                                               // 0x001dcf90: addu $v0, $s0, $v0
    v1 = (a2 < a3) ? 1 : 0;                                     // 0x001dcf94: slt $v1, $a2, $a3
    if (v1 != 0) goto label_0x1dcf80;                           // 0x001dcf98: bnez $v1, 0x1dcf80
    g_0032fec0 = a0;  // Global at 0x0032fec0                   // 0x001dcf9c: sh $a0, 0($v0)
    goto label_0x1dcfb0;                                        // 0x001dcfa0: b 0x1dcfb0
    *(uint32_t*)((s1) + 8) = a2;                                // 0x001dcfa4: sw $a2, 8($s1)
label_0x1dcfa8:
    s0 = s1 + 0xc;                                              // 0x001dcfa8: addiu $s0, $s1, 0xc
    *(uint32_t*)((s1) + 8) = a2;                                // 0x001dcfac: sw $a2, 8($s1)
label_0x1dcfb0:
    v0 = local_0;                                               // 0x001dcfb0: lw $v0, 0($sp)
    s3 = s5 + -0x140;                                           // 0x001dcfb4: addiu $s3, $s5, -0x140
    a3 = *(int32_t*)((s1) + 8);                                 // 0x001dcfb8: lw $a3, 8($s1)
    *(uint32_t*)(s1) = v0;                                      // 0x001dcfc0: sw $v0, 0($s1)
    v0 = local_4;                                               // 0x001dcfc8: lw $v0, 4($sp)
    a2 = *(uint8_t*)(s1);                                       // 0x001dcfcc: lbu $a2, 0($s1)
    *(uint32_t*)((s1) + 4) = v0;                                // 0x001dcfd0: sw $v0, 4($s1)
    a0 = g_0032ff54;  // Global at 0x0032ff54                   // 0x001dcfd4: lw $a0, 0x94($s3)
    func_001dd320();  // 1dd320                                // 0x001dcfd8: jal 0x1dd320
    a1 = *(uint8_t*)((s1) + 4);                                 // 0x001dcfdc: lbu $a1, 4($s1)
    v0 = *(int32_t*)((s1) + 8);                                 // 0x001dcfe0: lw $v0, 8($s1)
    if (v0 <= 0) goto label_0x1dd018;                           // 0x001dcfe4: blez $v0, 0x1dd018
    v0 = v0 + -1;                                               // 0x001dcfe8: addiu $v0, $v0, -1
    a0 = g_0032fed8;  // Global at 0x0032fed8                   // 0x001dcfec: lw $a0, 8($s2)
    v0 = v0 << 1;                                               // 0x001dcff0: sll $v0, $v0, 1
    v0 = s0 + v0;                                               // 0x001dcff4: addu $v0, $s0, $v0
    v1 = g_0032febf;  // Global at 0x0032febf                   // 0x001dcff8: lhu $v1, 0($v0)
    if (a0 <= 0) goto label_0x1dd0a0;                           // 0x001dcffc: blez $a0, 0x1dd0a0
    g_0032fee0 = v1;  // Global at 0x0032fee0                   // 0x001dd000: sh $v1, 0x10($s2)
    v0 = g_0032fedc;  // Global at 0x0032fedc                   // 0x001dd004: lw $v0, 0xc($s2)
    if (v0 <= 0) goto label_0x1dd0a0;                           // 0x001dd008: blez $v0, 0x1dd0a0
    v0 = 1;                                                     // 0x001dd00c: addiu $v0, $zero, 1
    goto label_0x1dd0a0;                                        // 0x001dd010: b 0x1dd0a0
    g_0032fed0 = v0;  // Global at 0x0032fed0                   // 0x001dd014: sw $v0, 0($s2)
label_0x1dd018:
    s0 = sp + 0x90;                                             // 0x001dd018: addiu $s0, $sp, 0x90
    a1 = local_4;                                               // 0x001dd01c: lbu $a1, 4($sp)
    a0 = g_0032ff54;  // Global at 0x0032ff54                   // 0x001dd020: lw $a0, 0x94($s3)
    t0 = sp | 0xc;                                              // 0x001dd024: ori $t0, $sp, 0xc
    a2 = local_0;                                               // 0x001dd028: lbu $a2, 0($sp)
    func_001dd320();  // 1dd320                                // 0x001dd030: jal 0x1dd320
    a3 = local_8;                                               // 0x001dd034: lw $a3, 8($sp)
    a0 = local_8;                                               // 0x001dd038: lw $a0, 8($sp)
    if (a0 <= 0) goto label_0x1dd078;                           // 0x001dd03c: blez $a0, 0x1dd078
    v0 = local_90;                                              // 0x001dd044: lhu $v0, 0x90($sp)
    v1 = g_0032fee0;  // Global at 0x0032fee0                   // 0x001dd048: lhu $v1, 0x10($s2)
    if (v0 == v1) goto label_0x1dd078;                          // 0x001dd04c: beq $v0, $v1, 0x1dd078
    a2 = a2 + 1;                                                // 0x001dd05c: addiu $a2, $a2, 1
label_0x1dd060:
    v0 = (a2 < v1) ? 1 : 0;                                     // 0x001dd060: slt $v0, $a2, $v1
    if (v0 == 0) goto label_0x1dd078;                           // 0x001dd064: beqz $v0, 0x1dd078
    t1 = t1 + 2;                                                // 0x001dd068: addiu $t1, $t1, 2
    v0 = *(uint16_t*)(t1);                                      // 0x001dd06c: lhu $v0, 0($t1)
    if (v0 != a1) goto label_0x1dd060;                          // 0x001dd070: bnel $v0, $a1, 0x1dd060
    a2 = a2 + 1;                                                // 0x001dd074: addiu $a2, $a2, 1
label_0x1dd078:
    if (a2 != a0) goto label_0x1dd0a4;                          // 0x001dd078: bne $a2, $a0, 0x1dd0a4
    a1 = s6 + -0x138;                                           // 0x001dd07c: addiu $a1, $s6, -0x138
    g_0032fed0 = 0;  // Global at 0x0032fed0                    // 0x001dd080: sw $zero, 0($s2)
    v0 = 1;                                                     // 0x001dd084: addiu $v0, $zero, 1
    *(uint32_t*)((s1) + 8) = v0;                                // 0x001dd088: sw $v0, 8($s1)
    *(uint16_t*)((s1) + 0xc) = 0;                               // 0x001dd08c: sh $zero, 0xc($s1)
    v0 = local_0;                                               // 0x001dd090: lw $v0, 0($sp)
    *(uint32_t*)(s1) = v0;                                      // 0x001dd094: sw $v0, 0($s1)
    v1 = local_4;                                               // 0x001dd098: lw $v1, 4($sp)
    *(uint32_t*)((s1) + 4) = v1;                                // 0x001dd09c: sw $v1, 4($s1)
label_0x1dd0a0:
    a1 = s6 + -0x138;                                           // 0x001dd0a0: addiu $a1, $s6, -0x138
label_0x1dd0a4:
    /* nop */                                                   // 0x001dd0ac: nop 
label_0x1dd0b0:
    v1 = *(uint8_t*)(a0);                                       // 0x001dd0b0: lbu $v1, 0($a0)
    a2 = a2 + 1;                                                // 0x001dd0b4: addiu $a2, $a2, 1
    a0 = a0 + 1;                                                // 0x001dd0b8: addiu $a0, $a0, 1
    v0 = ((unsigned)a2 < (unsigned)0x88) ? 1 : 0;               // 0x001dd0bc: sltiu $v0, $a2, 0x88
    g_0032fec8 = v1;  // Global at 0x0032fec8                   // 0x001dd0c0: sb $v1, 0($a1)
    a1 = a1 + 1;                                                // 0x001dd0c4: addiu $a1, $a1, 1
    if (v0 != 0) goto label_0x1dd0b0;                           // 0x001dd0c8: bnez $v0, 0x1dd0b0
    /* nop */                                                   // 0x001dd0cc: nop 
label_0x1dd0d0:
label_0x1dd0d4:
    return;                                                     // 0x001dd0f4: jr $ra
    sp = sp + 0x1a0;                                            // 0x001dd0f8: addiu $sp, $sp, 0x1a0
}