void func_0012cb78() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_10;
    
    sp = sp + -0x50;                                            // 0x0012cb78: addiu $sp, $sp, -0x50
    s1 = s2 + 0x1c;                                             // 0x0012cbb0: addiu $s1, $s2, 0x1c
    s0 = s2 + 0xc;                                              // 0x0012cbb8: addiu $s0, $s2, 0xc
    goto label_0x12cbe0;                                        // 0x0012cbbc: b 0x12cbe0
    s4 = *(int32_t*)((s2) + 0xc);                               // 0x0012cbc0: lw $s4, 0xc($s2)
    /* nop */                                                   // 0x0012cbc4: nop 
label_0x12cbc8:
    v0 = *(int32_t*)(s0);                                       // 0x0012cbc8: lw $v0, 0($s0)
    s0 = s0 + 4;                                                // 0x0012cbcc: addiu $s0, $s0, 4
    v1 = g_1fff0000;  // Global at 0x1fff0000                   // 0x0012cbd0: lw $v1, 0($v0)
    t0 = *(int32_t*)((v1) + 0x18);                              // 0x0012cbd4: lw $t0, 0x18($v1)
    /* call function at address in t0 */                        // 0x0012cbd8: jalr $t0
label_0x12cbe0:
    func_00124bb8();  // 0x124b38                                // 0x0012cbe0: jal 0x124b38
    a0 = *(int32_t*)((s2) + 4);                                 // 0x0012cbe4: lw $a0, 4($s2)
    v0 = (s3 < v0) ? 1 : 0;                                     // 0x0012cbec: slt $v0, $s3, $v0
    s3 = s3 + 1;                                                // 0x0012cbf0: addiu $s3, $s3, 1
    s1 = s1 + 8;                                                // 0x0012cbf8: addiu $s1, $s1, 8
    if (v0 != 0) goto label_0x12cbc8;                           // 0x0012cbfc: bnez $v0, 0x12cbc8
    a2 = 0x4000;                                                // 0x0012cc00: addiu $a2, $zero, 0x4000
    func_0013fc80();  // 0x13fc78                                // 0x0012cc04: jal 0x13fc78
    v1 = *(int32_t*)((s2) + 0x1c);                              // 0x0012cc0c: lw $v1, 0x1c($s2)
    v1 = v1 - v0;                                               // 0x0012cc10: subu $v1, $v1, $v0
    v0 = (unsigned)v1 >> 0x1f;                                  // 0x0012cc14: srl $v0, $v1, 0x1f
    v1 = v1 + v0;                                               // 0x0012cc18: addu $v1, $v1, $v0
    v1 = v1 >> 1;                                               // 0x0012cc1c: sra $v1, $v1, 1
    *(uint32_t*)(s6) = v1;                                      // 0x0012cc20: sw $v1, 0($s6)
    v0 = *(int32_t*)((s2) + 0x20);                              // 0x0012cc24: lw $v0, 0x20($s2)
    a0 = *(int32_t*)((s2) + 0x38);                              // 0x0012cc28: lw $a0, 0x38($s2)
    v1 = (unsigned)v0 >> 0x1f;                                  // 0x0012cc2c: srl $v1, $v0, 0x1f
    v0 = v0 + v1;                                               // 0x0012cc30: addu $v0, $v0, $v1
    v0 = v0 >> 1;                                               // 0x0012cc34: sra $v0, $v0, 1
    v1 = (v0 < a0) ? 1 : 0;                                     // 0x0012cc38: slt $v1, $v0, $a0
    if (v1 != 0) a0 = v0;                                       // 0x0012cc3c: movn $a0, $v0, $v1
    *(uint32_t*)(s7) = a0;                                      // 0x0012cc40: sw $a0, 0($s7)
    v1 = *(int32_t*)((s2) + 0x3c);                              // 0x0012cc44: lw $v1, 0x3c($s2)
    if (v1 < 0) goto label_0x12cc60;                            // 0x0012cc48: bltzl $v1, 0x12cc60
    v0 = 0x1fff << 16;                                          // 0x0012cc4c: lui $v0, 0x1fff
    v0 = *(int32_t*)((s2) + 0x40);                              // 0x0012cc50: lw $v0, 0x40($s2)
    goto label_0x12cc64;                                        // 0x0012cc54: b 0x12cc64
    v0 = v1 - v0;                                               // 0x0012cc58: subu $v0, $v1, $v0
    /* nop */                                                   // 0x0012cc5c: nop 
label_0x12cc60:
    v0 = v0 | 0xffff;                                           // 0x0012cc60: ori $v0, $v0, 0xffff
label_0x12cc64:
    *(uint32_t*)(s5) = v0;                                      // 0x0012cc64: sw $v0, 0($s5)
    a0 = *(int32_t*)((s2) + 4);                                 // 0x0012cc68: lw $a0, 4($s2)
    return func_00124b20();  // Tail call                       // 0x0012cc90: j 0x124b20
    sp = sp + 0x50;                                             // 0x0012cc94: addiu $sp, $sp, 0x50
    sp = sp + -0x50;                                            // 0x0012cc98: addiu $sp, $sp, -0x50
    v1 = *(int32_t*)((s2) + 0x3c);                              // 0x0012ccb8: lw $v1, 0x3c($s2)
    s4 = *(int32_t*)((s2) + 4);                                 // 0x0012ccbc: lw $s4, 4($s2)
    if (v1 < 0) goto label_0x12ccec;                            // 0x0012ccc0: bltz $v1, 0x12ccec
    s1 = *(int32_t*)((s2) + 8);                                 // 0x0012ccc4: lw $s1, 8($s2)
    v0 = *(int32_t*)((s2) + 0x40);                              // 0x0012ccc8: lw $v0, 0x40($s2)
    v0 = (v0 < v1) ? 1 : 0;                                     // 0x0012cccc: slt $v0, $v0, $v1
    /* bnezl $v0, 0x12ccf0 */                                   // 0x0012ccd0: bnezl $v0, 0x12ccf0
    v1 = *(int8_t*)((s2) + 3);                                  // 0x0012ccd4: lb $v1, 3($s2)
    v0 = *(int32_t*)((s2) + 0x48);                              // 0x0012ccd8: lw $v0, 0x48($s2)
    /* beqzl $v0, 0x12ccf0 */                                   // 0x0012ccdc: beqzl $v0, 0x12ccf0
    v1 = *(int8_t*)((s2) + 3);                                  // 0x0012cce0: lb $v1, 3($s2)
    /* call function at address in v0 */                        // 0x0012cce4: jalr $v0
    a0 = *(int32_t*)((s2) + 0x4c);                              // 0x0012cce8: lw $a0, 0x4c($s2)
label_0x12ccec:
    v1 = *(int8_t*)((s2) + 3);                                  // 0x0012ccec: lb $v1, 3($s2)
    v0 = 1;                                                     // 0x0012ccf0: addiu $v0, $zero, 1
    if (v1 != v0) goto label_0x12cd28;                          // 0x0012ccf4: bnel $v1, $v0, 0x12cd28
    v0 = *(int32_t*)(s1);                                       // 0x0012ccf8: lw $v0, 0($s1)
    v1 = *(int32_t*)(s1);                                       // 0x0012ccfc: lw $v1, 0($s1)
    v0 = *(int32_t*)((v1) + 0x24);                              // 0x0012cd04: lw $v0, 0x24($v1)
    /* call function at address in v0 */                        // 0x0012cd08: jalr $v0
    a1 = 1;                                                     // 0x0012cd0c: addiu $a1, $zero, 1
    /* bnezl $v0, 0x12cd28 */                                   // 0x0012cd10: bnezl $v0, 0x12cd28
    v0 = *(int32_t*)(s1);                                       // 0x0012cd14: lw $v0, 0($s1)
    v0 = 3;                                                     // 0x0012cd18: addiu $v0, $zero, 3
    goto label_0x12cfd4;                                        // 0x0012cd1c: b 0x12cfd4
    *(uint8_t*)((s2) + 1) = v0;                                 // 0x0012cd20: sb $v0, 1($s2)
    /* nop */                                                   // 0x0012cd24: nop 
label_0x12cd28:
    s3 = s2 + 0x14;                                             // 0x0012cd28: addiu $s3, $s2, 0x14
    a2 = 0x7fff << 16;                                          // 0x0012cd2c: lui $a2, 0x7fff
    v1 = g_1fff0018;  // Global at 0x1fff0018                   // 0x0012cd34: lw $v1, 0x18($v0)
    a1 = 1;                                                     // 0x0012cd38: addiu $a1, $zero, 1
    a2 = a2 | 0xffff;                                           // 0x0012cd3c: ori $a2, $a2, 0xffff
    /* call function at address in v1 */                        // 0x0012cd40: jalr $v1
    func_00124b38();  // 0x124b28                                // 0x0012cd48: jal 0x124b28
    if (v0 != 0) goto label_0x12ced0;                           // 0x0012cd50: bnez $v0, 0x12ced0
    /* nop */                                                   // 0x0012cd54: nop 
    a2 = *(int32_t*)((s2) + 0x18);                              // 0x0012cd58: lw $a2, 0x18($s2)
    v0 = (a2 < 4) ? 1 : 0;                                      // 0x0012cd5c: slti $v0, $a2, 4
    if (v0 != 0) goto label_0x12ced0;                           // 0x0012cd60: bnez $v0, 0x12ced0
    a1 = 0 | 0x8001;                                            // 0x0012cd64: ori $a1, $zero, 0x8001
    a0 = *(int32_t*)(s3);                                       // 0x0012cd68: lw $a0, 0($s3)
    v1 = *(uint16_t*)(a0);                                      // 0x0012cd6c: lhu $v1, 0($a0)
    v0 = *(uint8_t*)((a0) + 1);                                 // 0x0012cd70: lbu $v0, 1($a0)
    v1 = v1 << 8;                                               // 0x0012cd74: sll $v1, $v1, 8
    v0 = v0 | v1;                                               // 0x0012cd78: or $v0, $v0, $v1
    v0 = v0 & 0xffff;                                           // 0x0012cd7c: andi $v0, $v0, 0xffff
    if (v0 != a1) goto label_0x12ced0;                          // 0x0012cd80: bne $v0, $a1, 0x12ced0
    v0 = 3;                                                     // 0x0012cd84: addiu $v0, $zero, 3
    *(uint8_t*)((s2) + 1) = v0;                                 // 0x0012cd8c: sb $v0, 1($s2)
    func_00126c40();  // 0x126be0                                // 0x0012cd90: jal 0x126be0
    a2 = sp + 0x10;                                             // 0x0012cd94: addiu $a2, $sp, 0x10
    /* bnezl $v0, 0x12ce98 */                                   // 0x0012cd98: bnezl $v0, 0x12ce98
    a1 = local_10;                                              // 0x0012cda0: lh $a1, 0x10($sp)
    v0 = *(int32_t*)((s2) + 0x18);                              // 0x0012cda4: lw $v0, 0x18($s2)
    v0 = (v0 < a1) ? 1 : 0;                                     // 0x0012cda8: slt $v0, $v0, $a1
    /* bnezl $v0, 0x12cf4c */                                   // 0x0012cdac: bnezl $v0, 0x12cf4c
    v1 = *(int32_t*)(s1);                                       // 0x0012cdb0: lw $v1, 0($s1)
    func_00140598();  // 0x1404a0                                // 0x0012cdbc: jal 0x1404a0
    v1 = *(int32_t*)(s1);                                       // 0x0012cdc4: lw $v1, 0($s1)
    v0 = *(int32_t*)((v1) + 0x20);                              // 0x0012cdd0: lw $v0, 0x20($v1)
    /* call function at address in v0 */                        // 0x0012cdd4: jalr $v0
    v1 = *(int32_t*)(s1);                                       // 0x0012cddc: lw $v1, 0($s1)
    a1 = 1;                                                     // 0x0012cde4: addiu $a1, $zero, 1
    v0 = *(int32_t*)((v1) + 0x1c);                              // 0x0012cde8: lw $v0, 0x1c($v1)
    /* call function at address in v0 */                        // 0x0012cdec: jalr $v0
    goto label_0x12ce98;                                        // 0x0012cdf4: b 0x12ce98
    /* nop */                                                   // 0x0012cdfc: nop 
label_0x12ce00:
    s0 = (a1 < a0) ? 1 : 0;                                     // 0x0012ce00: slt $s0, $a1, $a0
    /* beqzl $s0, 0x12ce54 */                                   // 0x0012ce04: beqzl $s0, 0x12ce54
    v0 = *(int32_t*)(s3);                                       // 0x0012ce0c: lw $v0, 0($s3)
    v1 = g_1fff0000;  // Global at 0x1fff0000                   // 0x0012ce10: lb $v1, 0($v0)
    /* bnezl $v1, 0x12ce54 */                                   // 0x0012ce14: bnezl $v1, 0x12ce54
    a1 = a1 + 1;                                                // 0x0012ce20: addiu $a1, $a1, 1
    /* nop */                                                   // 0x0012ce24: nop 
    v0 = (a1 < a2) ? 1 : 0;                                     // 0x0012ce28: slt $v0, $a1, $a2
    /* beqzl $v0, 0x12ce50 */                                   // 0x0012ce2c: beqzl $v0, 0x12ce50
    s0 = (a1 < a0) ? 1 : 0;                                     // 0x0012ce30: slt $s0, $a1, $a0
    v0 = *(int32_t*)((s2) + 0x14);                              // 0x0012ce34: lw $v0, 0x14($s2)
    v0 = v0 + a1;                                               // 0x0012ce38: addu $v0, $v0, $a1
    v1 = g_1fff0000;  // Global at 0x1fff0000                   // 0x0012ce3c: lb $v1, 0($v0)
    /* nop */                                                   // 0x0012ce40: nop 
    /* beqzl $v1, 0x12ce28 */                                   // 0x0012ce44: beqzl $v1, 0x12ce28
    a1 = a1 + 1;                                                // 0x0012ce48: addiu $a1, $a1, 1
    s0 = (a1 < a0) ? 1 : 0;                                     // 0x0012ce4c: slt $s0, $a1, $a0
    func_00140598();  // 0x1404a0                                // 0x0012ce58: jal 0x1404a0
    v1 = *(int32_t*)(s1);                                       // 0x0012ce60: lw $v1, 0($s1)
    v0 = *(int32_t*)((v1) + 0x20);                              // 0x0012ce6c: lw $v0, 0x20($v1)
    /* call function at address in v0 */                        // 0x0012ce70: jalr $v0
    v1 = *(int32_t*)(s1);                                       // 0x0012ce78: lw $v1, 0($s1)
    a1 = 1;                                                     // 0x0012ce80: addiu $a1, $zero, 1
    v0 = *(int32_t*)((v1) + 0x1c);                              // 0x0012ce84: lw $v0, 0x1c($v1)
    /* call function at address in v0 */                        // 0x0012ce88: jalr $v0
    if (s0 != 0) goto label_0x12cfd8;                           // 0x0012ce90: bnez $s0, 0x12cfd8
label_0x12ce98:
    v1 = *(int32_t*)(s1);                                       // 0x0012ce98: lw $v1, 0($s1)
    a2 = 0x7fff << 16;                                          // 0x0012ce9c: lui $a2, 0x7fff
    a1 = 1;                                                     // 0x0012cea4: addiu $a1, $zero, 1
    v0 = *(int32_t*)((v1) + 0x18);                              // 0x0012cea8: lw $v0, 0x18($v1)
    a2 = a2 | 0xffff;                                           // 0x0012ceac: ori $a2, $a2, 0xffff
    /* call function at address in v0 */                        // 0x0012ceb0: jalr $v0
    a0 = *(int32_t*)((s2) + 0x18);                              // 0x0012ceb8: lw $a0, 0x18($s2)
    if (a0 != 0) goto label_0x12ce00;                           // 0x0012cebc: bnez $a0, 0x12ce00
    goto label_0x12cfd8;                                        // 0x0012cec4: b 0x12cfd8
    /* nop */                                                   // 0x0012cecc: nop 
label_0x12ced0:
    func_0012d4e0();  // 0x12d4c8                                // 0x0012ced0: jal 0x12d4c8
    v1 = *(int32_t*)((s2) + 0x34);                              // 0x0012ced8: lw $v1, 0x34($s2)
    v1 = (v1 < v0) ? 1 : 0;                                     // 0x0012cedc: slt $v1, $v1, $v0
    if (v1 != 0) goto label_0x12cf10;                           // 0x0012cee0: bnez $v1, 0x12cf10
    v0 = 3;                                                     // 0x0012cee4: addiu $v0, $zero, 3
    *(uint8_t*)((s2) + 1) = v0;                                 // 0x0012ceec: sb $v0, 1($s2)
    v0 = *(int32_t*)(s1);                                       // 0x0012cef4: lw $v0, 0($s1)
    v1 = g_1fff001c;  // Global at 0x1fff001c                   // 0x0012cef8: lw $v1, 0x1c($v0)
    /* call function at address in v1 */                        // 0x0012cefc: jalr $v1
    a1 = 1;                                                     // 0x0012cf00: addiu $a1, $zero, 1
    goto label_0x12cfd8;                                        // 0x0012cf04: b 0x12cfd8
    /* nop */                                                   // 0x0012cf0c: nop 
label_0x12cf10:
    func_0012d4b0();  // 0x12d498                                // 0x0012cf10: jal 0x12d498
    a0 = *(int32_t*)((s2) + 0xc);                               // 0x0012cf18: lw $a0, 0xc($s2)
    v1 = *(int32_t*)(a0);                                       // 0x0012cf20: lw $v1, 0($a0)
    v0 = *(int32_t*)((v1) + 0x24);                              // 0x0012cf24: lw $v0, 0x24($v1)
    /* call function at address in v0 */                        // 0x0012cf28: jalr $v0
    v1 = (unsigned)v0 >> 0x1f;                                  // 0x0012cf30: srl $v1, $v0, 0x1f
    v1 = v1 + v0;                                               // 0x0012cf34: addu $v1, $v1, $v0
    v1 = v1 >> 1;                                               // 0x0012cf38: sra $v1, $v1, 1
    v1 = (v1 < s0) ? 1 : 0;                                     // 0x0012cf3c: slt $v1, $v1, $s0
    if (v1 == 0) goto label_0x12cf68;                           // 0x0012cf40: beqz $v1, 0x12cf68
    /* nop */                                                   // 0x0012cf44: nop 
    v1 = *(int32_t*)(s1);                                       // 0x0012cf48: lw $v1, 0($s1)
    v0 = *(int32_t*)((v1) + 0x1c);                              // 0x0012cf54: lw $v0, 0x1c($v1)
    /* call function at address in v0 */                        // 0x0012cf58: jalr $v0
    a1 = 1;                                                     // 0x0012cf5c: addiu $a1, $zero, 1
    goto label_0x12cfd8;                                        // 0x0012cf60: b 0x12cfd8
label_0x12cf68:
    func_00124b38();  // 0x124b28                                // 0x0012cf68: jal 0x124b28
    v1 = 0xa;                                                   // 0x0012cf70: addiu $v1, $zero, 0xa
    if (v0 != v1) goto label_0x12cf90;                          // 0x0012cf74: bne $v0, $v1, 0x12cf90
    a1 = 1;                                                     // 0x0012cf78: addiu $a1, $zero, 1
    v1 = *(int32_t*)(s1);                                       // 0x0012cf7c: lw $v1, 0($s1)
    v0 = *(int32_t*)((v1) + 0x1c);                              // 0x0012cf84: lw $v0, 0x1c($v1)
    /* call function at address in v0 */                        // 0x0012cf88: jalr $v0
label_0x12cf90:
    func_00124b38();  // 0x124b28                                // 0x0012cf90: jal 0x124b28
    v1 = 0xf;                                                   // 0x0012cf98: addiu $v1, $zero, 0xf
    if (v0 != v1) goto label_0x12cfc0;                          // 0x0012cf9c: bnel $v0, $v1, 0x12cfc0
    a2 = *(int32_t*)((s2) + 0x18);                              // 0x0012cfa0: lw $a2, 0x18($s2)
    v1 = *(int32_t*)(s1);                                       // 0x0012cfa4: lw $v1, 0($s1)
    v0 = *(int32_t*)((v1) + 0x1c);                              // 0x0012cfb0: lw $v0, 0x1c($v1)
    /* call function at address in v0 */                        // 0x0012cfb4: jalr $v0
    a1 = 1;                                                     // 0x0012cfb8: addiu $a1, $zero, 1
    a2 = *(int32_t*)((s2) + 0x18);                              // 0x0012cfbc: lw $a2, 0x18($s2)
label_0x12cfc0:
    func_00124ef0();  // 0x124e68                                // 0x0012cfc4: jal 0x124e68
    a1 = *(int32_t*)((s2) + 0x14);                              // 0x0012cfc8: lw $a1, 0x14($s2)
    func_00124f08();  // 0x124ef0                                // 0x0012cfcc: jal 0x124ef0
label_0x12cfd4:
label_0x12cfd8:
    return;                                                     // 0x0012cfec: jr $ra
    sp = sp + 0x50;                                             // 0x0012cff0: addiu $sp, $sp, 0x50
}