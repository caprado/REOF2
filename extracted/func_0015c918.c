void func_0015c918() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x10;                                            // 0x0015c918: addiu $sp, $sp, -0x10
    a2 = *(int32_t*)((v0) + 0x138);                             // 0x0015c924: lw $a2, 0x138($v0)
    a0 = *(int32_t*)((v0) + 0x130);                             // 0x0015c928: lw $a0, 0x130($v0)
    a1 = *(int32_t*)((v0) + 0x134);                             // 0x0015c92c: lw $a1, 0x134($v0)
    return func_0013f658();  // Tail call                        // 0x0015c934: j 0x13f568
    sp = sp + 0x10;                                             // 0x0015c938: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0015c93c: nop 
    sp = sp + -0x60;                                            // 0x0015c940: addiu $sp, $sp, -0x60
    if (s2 != 0) goto label_0x15c978;                           // 0x0015c960: bnez $s2, 0x15c978
    a0 = 0x22 << 16;                                            // 0x0015c968: lui $a0, 0x22
    goto label_0x15ca14;                                        // 0x0015c96c: b 0x15ca14
    a0 = &str_002271d0;  // "W2000 mwPlyCreateSofdec:can't create handle" // 0x0015c970: addiu $a0, $a0, 0x71d0
    /* nop */                                                   // 0x0015c974: nop 
label_0x15c978:
    func_0015cd60();  // 15cd60                                // 0x0015c978: jal 0x15cd60
    /* nop */                                                   // 0x0015c97c: nop 
    v1 = 1;                                                     // 0x0015c980: addiu $v1, $zero, 1
    if (v0 != v1) goto label_0x15cc90;                          // 0x0015c984: bne $v0, $v1, 0x15cc90
    func_0015e338();  // 15e338                                // 0x0015c98c: jal 0x15e338
    /* nop */                                                   // 0x0015c990: nop 
    s0 = v0 + 0x68;                                             // 0x0015c998: addiu $s0, $v0, 0x68
    s1 = v0 + 4;                                                // 0x0015c99c: addiu $s1, $v0, 4
    v0 = *(int32_t*)((s0) + 4);                                 // 0x0015c9a0: lw $v0, 4($s0)
    if (v0 == 0) goto label_0x15c9e0;                           // 0x0015c9a4: beqz $v0, 0x15c9e0
    v0 = 8;                                                     // 0x0015c9a8: addiu $v0, $zero, 8
    a0 = a0 + 1;                                                // 0x0015c9b0: addiu $a0, $a0, 1
    /* nop */                                                   // 0x0015c9b4: nop 
    v0 = (a0 < 8) ? 1 : 0;                                      // 0x0015c9b8: slti $v0, $a0, 8
    if (v0 == 0) goto label_0x15c9dc;                           // 0x0015c9bc: beqz $v0, 0x15c9dc
    v1 = v1 + 0x210;                                            // 0x0015c9c0: addiu $v1, $v1, 0x210
    v0 = *(int32_t*)((s0) + 4);                                 // 0x0015c9c8: lw $v0, 4($s0)
    /* nop */                                                   // 0x0015c9cc: nop 
    /* nop */                                                   // 0x0015c9d0: nop 
    /* bnezl $v0, 0x15c9b8 */                                   // 0x0015c9d4: bnezl $v0, 0x15c9b8
    a0 = a0 + 1;                                                // 0x0015c9d8: addiu $a0, $a0, 1
label_0x15c9dc:
    v0 = 8;                                                     // 0x0015c9dc: addiu $v0, $zero, 8
label_0x15c9e0:
    if (a0 != v0) goto label_0x15ca00;                          // 0x0015c9e0: bnel $a0, $v0, 0x15ca00
    func_0015e7b0();  // 15e7b0                                // 0x0015c9e8: jal 0x15e7b0
    a0 = -0xb;                                                  // 0x0015c9ec: addiu $a0, $zero, -0xb
    a0 = 0x22 << 16;                                            // 0x0015c9f0: lui $a0, 0x22
    goto label_0x15ca14;                                        // 0x0015c9f4: b 0x15ca14
    a0 = &str_00227200;  // "E2053006 mwPlyCreateSofdec: Didn't set malloc/free func." // 0x0015c9f8: addiu $a0, $a0, 0x7200
    /* nop */                                                   // 0x0015c9fc: nop 
label_0x15ca00:
    func_0015ccb8();  // 15ccb8                                // 0x0015ca00: jal 0x15ccb8
    s5 = -1;                                                    // 0x0015ca04: addiu $s5, $zero, -1
    if (v0 != s5) goto label_0x15ca28;                          // 0x0015ca08: bne $v0, $s5, 0x15ca28
    a0 = 0x22 << 16;                                            // 0x0015ca0c: lui $a0, 0x22
    a0 = &str_00227230;  // "E2012 mwPlyCreate:can't create SFD" // 0x0015ca10: addiu $a0, $a0, 0x7230
label_0x15ca14:
    func_00163410();  // 163410                                // 0x0015ca14: jal 0x163410
    /* nop */                                                   // 0x0015ca18: nop 
    goto label_0x15cc90;                                        // 0x0015ca1c: b 0x15cc90
    /* nop */                                                   // 0x0015ca24: nop 
label_0x15ca28:
    if (s0 == 0) goto label_0x15ca3c;                           // 0x0015ca28: beqz $s0, 0x15ca3c
    func_00107c70();  // 107c70                                // 0x0015ca34: jal 0x107c70
    a2 = 0x210;                                                 // 0x0015ca38: addiu $a2, $zero, 0x210
label_0x15ca3c:
    func_0015cd08();  // 0x15cd08                               // 0x0015ca40: jal 0x15cd08
    func_0015bed0();  // 15bed0                                // 0x0015caac: jal 0x15bed0
    if (s3 != 0) goto label_0x15cad0;                           // 0x0015cab8: bnez $s3, 0x15cad0
    *(uint32_t*)((s0) + 0x40) = s3;                             // 0x0015cabc: sw $s3, 0x40($s0)
    a0 = 0x22 << 16;                                            // 0x0015cac0: lui $a0, 0x22
    goto label_0x15cc68;                                        // 0x0015cac4: b 0x15cc68
    a0 = &str_00227270;  // "E2013 mwPlyCreate:can't create SJ" // 0x0015cac8: addiu $a0, $a0, 0x7270
    /* nop */                                                   // 0x0015cacc: nop 
label_0x15cad0:
    func_0015c580();  // 15c580                                // 0x0015cad0: jal 0x15c580
    a2 = sp + 4;                                                // 0x0015cae0: addiu $a2, $sp, 4
    a3 = sp + 8;                                                // 0x0015cae4: addiu $a3, $sp, 8
    t0 = sp + 0xc;                                              // 0x0015cae8: addiu $t0, $sp, 0xc
    t1 = sp + 0x10;                                             // 0x0015caec: addiu $t1, $sp, 0x10
    func_0015b860();  // 15b860                                // 0x0015caf0: jal 0x15b860
    t2 = sp + 0x14;                                             // 0x0015caf4: addiu $t2, $sp, 0x14
    a2 = *(int32_t*)((s1) + 4);                                 // 0x0015cafc: lw $a2, 4($s1)
    func_0015c728();  // 15c728                                // 0x0015cb04: jal 0x15c728
    a3 = *(int32_t*)((s1) + 8);                                 // 0x0015cb08: lw $a3, 8($s1)
    func_0015c918();  // 15c918                                // 0x0015cb0c: jal 0x15c918
    if (v0 != 0) goto label_0x15cb28;                           // 0x0015cb14: bnez $v0, 0x15cb28
    *(uint32_t*)((s0) + 0x12c) = v0;                            // 0x0015cb18: sw $v0, 0x12c($s0)
    a0 = 0x22 << 16;                                            // 0x0015cb1c: lui $a0, 0x22
    goto label_0x15cc68;                                        // 0x0015cb20: b 0x15cc68
    a0 = &str_00227298;  // "E2020 mwPlyCreate:can't create SJ" // 0x0015cb24: addiu $a0, $a0, 0x7298
label_0x15cb28:
    func_0013f020();  // 13f020                                // 0x0015cb2c: jal 0x13f020
    if (v0 != 0) goto label_0x15cb48;                           // 0x0015cb34: bnez $v0, 0x15cb48
    *(uint32_t*)((s0) + 0x14c) = v0;                            // 0x0015cb38: sw $v0, 0x14c($s0)
    a0 = 0x22 << 16;                                            // 0x0015cb3c: lui $a0, 0x22
    goto label_0x15cc68;                                        // 0x0015cb40: b 0x15cc68
    a0 = &str_002272c0;  // "E201185: can't create SfxHn"       // 0x0015cb44: addiu $a0, $a0, 0x72c0
label_0x15cb48:
    v0 = local_0;                                               // 0x0015cb48: lw $v0, 0($sp)
    s4 = 1;                                                     // 0x0015cb4c: addiu $s4, $zero, 1
    *(uint32_t*)((s0) + 0x3c) = s4;                             // 0x0015cb50: sw $s4, 0x3c($s0)
    v1 = 0x21 << 16;                                            // 0x0015cb54: lui $v1, 0x21
    *(uint32_t*)((s0) + 0x58) = v0;                             // 0x0015cb58: sw $v0, 0x58($s0)
    v1 = v1 + 0x42e8;                                           // 0x0015cb5c: addiu $v1, $v1, 0x42e8
    *(uint32_t*)((s0) + 0x68) = 0;                              // 0x0015cb60: sw $zero, 0x68($s0)
    s1 = s0 + 0x48;                                             // 0x0015cb64: addiu $s1, $s0, 0x48
    *(uint32_t*)(s0) = v1;                                      // 0x0015cb68: sw $v1, 0($s0)
    v0 = *(int32_t*)((s2) + 0x20);                              // 0x0015cb70: lw $v0, 0x20($s2)
    a1 = 3;                                                     // 0x0015cb74: addiu $a1, $zero, 3
    *(uint32_t*)((s0) + 8) = 0;                                 // 0x0015cb78: sw $zero, 8($s0)
    func_001755b0();  // 1755b0                                // 0x0015cb80: jal 0x1755b0
    *(uint32_t*)((s0) + 0x50) = v0;                             // 0x0015cb84: sw $v0, 0x50($s0)
    /* bnezl $v0, 0x15cb90 */                                   // 0x0015cb88: bnezl $v0, 0x15cb90
    *(uint32_t*)(s1) = 0;                                       // 0x0015cb8c: sw $zero, 0($s1)
    *(uint32_t*)((s0) + 0x6c) = s4;                             // 0x0015cb90: sw $s4, 0x6c($s0)
    *(uint8_t*)((s0) + 0x70) = 0;                               // 0x0015cb98: sb $zero, 0x70($s0)
    *(uint8_t*)((s0) + 0x71) = 0;                               // 0x0015cba0: sb $zero, 0x71($s0)
    *(uint8_t*)((s0) + 0x72) = 0;                               // 0x0015cba4: sb $zero, 0x72($s0)
    *(uint8_t*)((s0) + 0x73) = 0;                               // 0x0015cba8: sb $zero, 0x73($s0)
    func_00163f78();  // 163f78                                // 0x0015cbac: jal 0x163f78
    *(uint32_t*)((s0) + 0x5c) = 0;                              // 0x0015cbb0: sw $zero, 0x5c($s0)
    func_00163f88();  // 163f88                                // 0x0015cbb8: jal 0x163f88
    *(uint32_t*)((s0) + 0x54) = 0;                              // 0x0015cbc0: sw $zero, 0x54($s0)
    *(uint32_t*)((s0) + 0x84) = 0;                              // 0x0015cbc4: sw $zero, 0x84($s0)
    func_00164280();  // 0x164280                               // 0x0015cbc8: jal 0x164280
    a0 = *(int32_t*)((s0) + 0x12c);                             // 0x0015cbcc: lw $a0, 0x12c($s0)
    if (v0 == 0) goto label_0x15cc70;                           // 0x0015cbd0: beqz $v0, 0x15cc70
    *(uint32_t*)((s0) + 0x44) = v0;                             // 0x0015cbd4: sw $v0, 0x44($s0)
    func_0015f270();  // 15f270                                // 0x0015cbd8: jal 0x15f270
    func_0013c870();  // 13c870                                // 0x0015cbe0: jal 0x13c870
    a0 = *(int32_t*)((s0) + 0x12c);                             // 0x0015cbe4: lw $a0, 0x12c($s0)
    *(uint32_t*)((s0) + 0x74) = 0;                              // 0x0015cbe8: sw $zero, 0x74($s0)
    *(uint32_t*)((s0) + 0x4c) = v0;                             // 0x0015cbec: sw $v0, 0x4c($s0)
    func_0013c9c8();  // 13c9c8                                // 0x0015cbf4: jal 0x13c9c8
    a1 = *(int32_t*)((s0) + 0x44);                              // 0x0015cbf8: lw $a1, 0x44($s0)
    func_0015cdc8();  // 15cdc8                                // 0x0015cbfc: jal 0x15cdc8
    if (v0 == s5) goto label_0x15cc70;                          // 0x0015cc04: beq $v0, $s5, 0x15cc70
    /* nop */                                                   // 0x0015cc08: nop 
    a3 = *(int32_t*)((s2) + 0xc);                               // 0x0015cc0c: lw $a3, 0xc($s2)
    a0 = *(int32_t*)((s0) + 0xac);                              // 0x0015cc10: lw $a0, 0xac($s0)
    a1 = *(int32_t*)((s0) + 0xb0);                              // 0x0015cc14: lw $a1, 0xb0($s0)
    func_00160820();  // 160820                                // 0x0015cc18: jal 0x160820
    a2 = *(int32_t*)((s2) + 8);                                 // 0x0015cc1c: lw $a2, 8($s2)
    /* bnezl $v0, 0x15cc38 */                                   // 0x0015cc20: bnezl $v0, 0x15cc38
    *(uint32_t*)((s0) + 0xa8) = v0;                             // 0x0015cc24: sw $v0, 0xa8($s0)
    a0 = 0x22 << 16;                                            // 0x0015cc28: lui $a0, 0x22
    goto label_0x15cc68;                                        // 0x0015cc2c: b 0x15cc68
    a0 = &str_002272e8;  // "E201212 mwPlyCreate: can't set AddInfSJ" // 0x0015cc30: addiu $a0, $a0, 0x72e8
    /* nop */                                                   // 0x0015cc34: nop 
    func_001611a8();  // 1611a8                                // 0x0015cc3c: jal 0x1611a8
    a1 = *(int32_t*)((s0) + 0x2c);                              // 0x0015cc40: lw $a1, 0x2c($s0)
    func_001615a8();  // 1615a8                                // 0x0015cc44: jal 0x1615a8
    func_00161638();  // 161638                                // 0x0015cc50: jal 0x161638
    *(uint32_t*)((s0) + 0xe8) = v0;                             // 0x0015cc54: sw $v0, 0xe8($s0)
    if (v0 == 0) goto label_0x15cc80;                           // 0x0015cc58: beqz $v0, 0x15cc80
    /* nop */                                                   // 0x0015cc5c: nop 
    a0 = 0x22 << 16;                                            // 0x0015cc60: lui $a0, 0x22
    a0 = &str_00227308;  // "E3012100: M1V Decode is not support yet." // 0x0015cc64: addiu $a0, $a0, 0x7308
label_0x15cc68:
    func_00163410();  // 163410                                // 0x0015cc68: jal 0x163410
    /* nop */                                                   // 0x0015cc6c: nop 
label_0x15cc70:
    func_0015ce90();  // 15ce90                                // 0x0015cc70: jal 0x15ce90
    goto label_0x15cc90;                                        // 0x0015cc78: b 0x15cc90
label_0x15cc80:
    func_00161698();  // 161698                                // 0x0015cc80: jal 0x161698
    *(uint32_t*)((s0) + 4) = s4;                                // 0x0015cc88: sw $s4, 4($s0)
label_0x15cc90:
    return;                                                     // 0x0015ccac: jr $ra
    sp = sp + 0x60;                                             // 0x0015ccb0: addiu $sp, $sp, 0x60
}