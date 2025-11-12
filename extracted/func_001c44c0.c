void func_001c44c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001c44c0: addiu $sp, $sp, -0x20
    v0 = 0x63;                                                  // 0x001c44c4: addiu $v0, $zero, 0x63
    v1 = g_001c65f2;  // Global at 0x001c65f2                   // 0x001c44d0: lb $v1, 2($a0)
    if (v1 == v0) goto label_0x1c4788;                          // 0x001c44d4: beq $v1, $v0, 0x1c4788
    v0 = 0xa;                                                   // 0x001c44dc: addiu $v0, $zero, 0xa
    if (v1 == v0) goto label_0x1c46b8;                          // 0x001c44e0: beq $v1, $v0, 0x1c46b8
    a2 = 1;                                                     // 0x001c44e4: addiu $a2, $zero, 1
    if (v1 == a2) goto label_0x1c4538;                          // 0x001c44e8: beq $v1, $a2, 0x1c4538
    /* nop */                                                   // 0x001c44ec: nop 
    if (v1 == 0) goto label_0x1c4500;                           // 0x001c44f0: beqz $v1, 0x1c4500
    /* nop */                                                   // 0x001c44f4: nop 
    goto label_0x1c47ac;                                        // 0x001c44f8: b 0x1c47ac
    v0 = 1;                                                     // 0x001c44fc: addiu $v0, $zero, 1
label_0x1c4500:
    v1 = v1 + 1;                                                // 0x001c4500: addiu $v1, $v1, 1
    v0 = 8;                                                     // 0x001c4504: addiu $v0, $zero, 8
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x001c4508: sb $v1, 2($s0)
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c450c: sw $v0, 0x2c($s0)
    a1 = *(int32_t*)((s0) + 0xec);                              // 0x001c4510: lw $a1, 0xec($s0)
    func_001c0090();  // 0x1bffd0                                // 0x001c4514: jal 0x1bffd0
    a0 = *(int32_t*)((s0) + 0x24);                              // 0x001c4518: lw $a0, 0x24($s0)
    a0 = 1;                                                     // 0x001c451c: addiu $a0, $zero, 1
    func_001bfda0();  // 0x1bfcb0                                // 0x001c4520: jal 0x1bfcb0
    v0 = 0x3c;                                                  // 0x001c4528: addiu $v0, $zero, 0x3c
    at = 0x31 << 16;                                            // 0x001c452c: lui $at, 0x31
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001c4530: sw $v0, 0x10($s0)
    g_00313878 = 0;  // Global at 0x00313878                    // 0x001c4534: sb $zero, 0x3878($at)
label_0x1c4538:
    func_001c0bd0();  // 0x1c0bc0                                // 0x001c4538: jal 0x1c0bc0
    /* nop */                                                   // 0x001c453c: nop 
    v1 = -1;                                                    // 0x001c4540: addiu $v1, $zero, -1
    if (v0 == v1) goto label_0x1c46ac;                          // 0x001c4544: beq $v0, $v1, 0x1c46ac
    /* nop */                                                   // 0x001c4548: nop 
    if (v0 == 0) goto label_0x1c45b8;                           // 0x001c454c: beqz $v0, 0x1c45b8
    v1 = -0xfb;                                                 // 0x001c4550: addiu $v1, $zero, -0xfb
    if (v0 == v1) goto label_0x1c45ac;                          // 0x001c4554: beq $v0, $v1, 0x1c45ac
    /* nop */                                                   // 0x001c4558: nop 
    v1 = -0x100;                                                // 0x001c455c: addiu $v1, $zero, -0x100
    if (v0 == v1) goto label_0x1c4590;                          // 0x001c4560: beq $v0, $v1, 0x1c4590
    v1 = -0xfe;                                                 // 0x001c4564: addiu $v1, $zero, -0xfe
    if (v0 == v1) goto label_0x1c4584;                          // 0x001c4568: beq $v0, $v1, 0x1c4584
    /* nop */                                                   // 0x001c456c: nop 
    v1 = -0xfd;                                                 // 0x001c4570: addiu $v1, $zero, -0xfd
    if (v0 == v1) goto label_0x1c4584;                          // 0x001c4574: beq $v0, $v1, 0x1c4584
    /* nop */                                                   // 0x001c4578: nop 
    goto label_0x1c4650;                                        // 0x001c457c: b 0x1c4650
    v1 = v0 & 0xff;                                             // 0x001c4580: andi $v1, $v0, 0xff
label_0x1c4584:
    v0 = 0x40;                                                  // 0x001c4584: addiu $v0, $zero, 0x40
    goto label_0x1c463c;                                        // 0x001c4588: b 0x1c463c
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c458c: sw $v0, 0x2c($s0)
label_0x1c4590:
    v0 = 9;                                                     // 0x001c4590: addiu $v0, $zero, 9
    v1 = 0x63;                                                  // 0x001c4594: addiu $v1, $zero, 0x63
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c4598: sw $v0, 0x2c($s0)
    v0 = 1;                                                     // 0x001c459c: addiu $v0, $zero, 1
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x001c45a0: sb $v1, 2($s0)
    goto label_0x1c46ac;                                        // 0x001c45a4: b 0x1c46ac
    *(uint32_t*)((s0) + 0x34) = v0;                             // 0x001c45a8: sw $v0, 0x34($s0)
label_0x1c45ac:
    v0 = 0x34;                                                  // 0x001c45ac: addiu $v0, $zero, 0x34
    goto label_0x1c463c;                                        // 0x001c45b0: b 0x1c463c
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c45b4: sw $v0, 0x2c($s0)
label_0x1c45b8:
    func_001c0c00();  // 0x1c0bf0                                // 0x001c45b8: jal 0x1c0bf0
    /* nop */                                                   // 0x001c45bc: nop 
    func_001c6e50();  // 0x1c6e20                                // 0x001c45c0: jal 0x1c6e20
    if (v0 != 0) goto label_0x1c462c;                           // 0x001c45c8: bnez $v0, 0x1c462c
    v1 = -0x100;                                                // 0x001c45cc: addiu $v1, $zero, -0x100
    func_001c74b0();  // 0x1c7480                                // 0x001c45d0: jal 0x1c7480
    a0 = *(int32_t*)((s0) + 0xec);                              // 0x001c45d4: lw $a0, 0xec($s0)
    if (v0 != 0) goto label_0x1c45f8;                           // 0x001c45d8: bnez $v0, 0x1c45f8
    v1 = 0x18;                                                  // 0x001c45dc: addiu $v1, $zero, 0x18
    v1 = -0x100;                                                // 0x001c45e0: addiu $v1, $zero, -0x100
    at = 0x31 << 16;                                            // 0x001c45e4: lui $at, 0x31
    v0 = 0x40;                                                  // 0x001c45e8: addiu $v0, $zero, 0x40
    g_00315fe4 = v1;  // Global at 0x00315fe4                   // 0x001c45ec: sw $v1, 0x5fe4($at)
    goto label_0x1c463c;                                        // 0x001c45f0: b 0x1c463c
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c45f4: sw $v0, 0x2c($s0)
label_0x1c45f8:
    a0 = 0x1c << 16;                                            // 0x001c45f8: lui $a0, 0x1c
    *(uint32_t*)((s0) + 0x2c) = v1;                             // 0x001c45fc: sw $v1, 0x2c($s0)
    v0 = 0xa;                                                   // 0x001c4600: addiu $v0, $zero, 0xa
    *(uint8_t*)((s0) + 2) = v0;                                 // 0x001c4604: sb $v0, 2($s0)
    v1 = 1;                                                     // 0x001c4608: addiu $v1, $zero, 1
    *(uint32_t*)((s0) + 0x30) = v1;                             // 0x001c460c: sw $v1, 0x30($s0)
    v0 = 5;                                                     // 0x001c4610: addiu $v0, $zero, 5
    *(uint32_t*)((s0) + 0x38) = v1;                             // 0x001c4614: sw $v1, 0x38($s0)
    a0 = a0 + 0x65f0;                                           // 0x001c4618: addiu $a0, $a0, 0x65f0
    func_001af2f0();  // 0x1af280                                // 0x001c461c: jal 0x1af280
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001c4620: sw $v0, 0x10($s0)
    goto label_0x1c46b0;                                        // 0x001c4624: b 0x1c46b0
    v0 = *(int32_t*)((gp) + -0x64d8);                           // 0x001c4628: lw $v0, -0x64d8($gp)
label_0x1c462c:
    at = 0x31 << 16;                                            // 0x001c462c: lui $at, 0x31
    v0 = 0x34;                                                  // 0x001c4630: addiu $v0, $zero, 0x34
    g_00315fe4 = v1;  // Global at 0x00315fe4                   // 0x001c4634: sw $v1, 0x5fe4($at)
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c4638: sw $v0, 0x2c($s0)
label_0x1c463c:
    v1 = 1;                                                     // 0x001c463c: addiu $v1, $zero, 1
    v0 = 0x63;                                                  // 0x001c4640: addiu $v0, $zero, 0x63
    *(uint32_t*)((s0) + 0x34) = v1;                             // 0x001c4644: sw $v1, 0x34($s0)
    goto label_0x1c46ac;                                        // 0x001c4648: b 0x1c46ac
    *(uint8_t*)((s0) + 2) = v0;                                 // 0x001c464c: sb $v0, 2($s0)
label_0x1c4650:
    *(uint32_t*)((s0) + 0x34) = v1;                             // 0x001c4650: sw $v1, 0x34($s0)
    v0 = 3;                                                     // 0x001c4654: addiu $v0, $zero, 3
    v1 = *(int32_t*)((s0) + 0x34);                              // 0x001c4658: lw $v1, 0x34($s0)
    if (v1 == v0) goto label_0x1c4698;                          // 0x001c465c: beq $v1, $v0, 0x1c4698
    v0 = 0x40;                                                  // 0x001c4660: addiu $v0, $zero, 0x40
    v0 = 4;                                                     // 0x001c4664: addiu $v0, $zero, 4
    if (v1 == v0) goto label_0x1c4694;                          // 0x001c4668: beq $v1, $v0, 0x1c4694
    v0 = 2;                                                     // 0x001c466c: addiu $v0, $zero, 2
    if (v1 == v0) goto label_0x1c4694;                          // 0x001c4670: beq $v1, $v0, 0x1c4694
    /* nop */                                                   // 0x001c4674: nop 
    v0 = 1;                                                     // 0x001c4678: addiu $v0, $zero, 1
    if (v1 == v0) goto label_0x1c468c;                          // 0x001c467c: beq $v1, $v0, 0x1c468c
    v0 = 5;                                                     // 0x001c4680: addiu $v0, $zero, 5
    goto label_0x1c46a0;                                        // 0x001c4684: b 0x1c46a0
    v1 = 1;                                                     // 0x001c4688: addiu $v1, $zero, 1
label_0x1c468c:
    goto label_0x1c469c;                                        // 0x001c468c: b 0x1c469c
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c4690: sw $v0, 0x2c($s0)
label_0x1c4694:
    v0 = 0x40;                                                  // 0x001c4694: addiu $v0, $zero, 0x40
label_0x1c4698:
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c4698: sw $v0, 0x2c($s0)
label_0x1c469c:
    v1 = 1;                                                     // 0x001c469c: addiu $v1, $zero, 1
label_0x1c46a0:
    v0 = 0x63;                                                  // 0x001c46a0: addiu $v0, $zero, 0x63
    *(uint32_t*)((s0) + 0x34) = v1;                             // 0x001c46a4: sw $v1, 0x34($s0)
    *(uint8_t*)((s0) + 2) = v0;                                 // 0x001c46a8: sb $v0, 2($s0)
label_0x1c46ac:
    v0 = *(int32_t*)((gp) + -0x64d8);                           // 0x001c46ac: lw $v0, -0x64d8($gp)
label_0x1c46b0:
    goto label_0x1c47a8;                                        // 0x001c46b0: b 0x1c47a8
    *(uint32_t*)((s0) + 0x14) = v0;                             // 0x001c46b4: sw $v0, 0x14($s0)
label_0x1c46b8:
    v1 = *(uint16_t*)((s0) + 0xa);                              // 0x001c46b8: lhu $v1, 0xa($s0)
    v0 = v1 & 0x20;                                             // 0x001c46bc: andi $v0, $v1, 0x20
    if (v0 == 0) goto label_0x1c471c;                           // 0x001c46c0: beqz $v0, 0x1c471c
    /* nop */                                                   // 0x001c46c4: nop 
    func_001c7470();  // 0x1c7460                                // 0x001c46c8: jal 0x1c7460
    /* nop */                                                   // 0x001c46cc: nop 
    *(uint32_t*)((s0) + 0x30) = 0;                              // 0x001c46d0: sw $zero, 0x30($s0)
    v0 = 1;                                                     // 0x001c46d4: addiu $v0, $zero, 1
    v1 = *(int32_t*)((s0) + 0x38);                              // 0x001c46d8: lw $v1, 0x38($s0)
    if (v1 != v0) goto label_0x1c46f4;                          // 0x001c46dc: bne $v1, $v0, 0x1c46f4
    a0 = 0x1c << 16;                                            // 0x001c46e0: lui $a0, 0x1c
    func_001af3a0();  // 0x1af2f0                                // 0x001c46e4: jal 0x1af2f0
    a0 = a0 + 0x65f0;                                           // 0x001c46e8: addiu $a0, $a0, 0x65f0
    goto label_0x1c47ac;                                        // 0x001c46ec: b 0x1c47ac
label_0x1c46f4:
    func_001c6d20();  // 0x1c6cd0                                // 0x001c46f4: jal 0x1c6cd0
    a0 = *(int32_t*)((s0) + 0xec);                              // 0x001c46f8: lw $a0, 0xec($s0)
    a0 = 0x1c << 16;                                            // 0x001c46fc: lui $a0, 0x1c
    v0 = 1;                                                     // 0x001c4700: addiu $v0, $zero, 1
    at = 0x31 << 16;                                            // 0x001c4704: lui $at, 0x31
    a0 = a0 + 0x65f0;                                           // 0x001c4708: addiu $a0, $a0, 0x65f0
    func_001af3a0();  // 0x1af2f0                                // 0x001c470c: jal 0x1af2f0
    g_00313878 = v0;  // Global at 0x00313878                   // 0x001c4710: sb $v0, 0x3878($at)
    goto label_0x1c47ac;                                        // 0x001c4714: b 0x1c47ac
label_0x1c471c:
    v0 = *(int32_t*)((s0) + 0x10);                              // 0x001c471c: lw $v0, 0x10($s0)
    if (v0 == 0) goto label_0x1c4734;                           // 0x001c4720: beqz $v0, 0x1c4734
    /* nop */                                                   // 0x001c4724: nop 
    v0 = v0 + -1;                                               // 0x001c4728: addiu $v0, $v0, -1
    goto label_0x1c47a8;                                        // 0x001c472c: b 0x1c47a8
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001c4730: sw $v0, 0x10($s0)
label_0x1c4734:
    v0 = v1 & 8;                                                // 0x001c4734: andi $v0, $v1, 8
    if (v0 == 0) goto label_0x1c4750;                           // 0x001c4738: beqz $v0, 0x1c4750
    v0 = v1 & 4;                                                // 0x001c473c: andi $v0, $v1, 4
    v0 = *(int32_t*)((s0) + 0x38);                              // 0x001c4740: lw $v0, 0x38($s0)
    if (v0 == 0) goto label_0x1c4768;                           // 0x001c4744: beqz $v0, 0x1c4768
    /* nop */                                                   // 0x001c4748: nop 
    v0 = v1 & 4;                                                // 0x001c474c: andi $v0, $v1, 4
label_0x1c4750:
    if (v0 == 0) goto label_0x1c47a8;                           // 0x001c4750: beqz $v0, 0x1c47a8
    /* nop */                                                   // 0x001c4754: nop 
    v1 = *(int32_t*)((s0) + 0x38);                              // 0x001c4758: lw $v1, 0x38($s0)
    v0 = 1;                                                     // 0x001c475c: addiu $v0, $zero, 1
    if (v1 != v0) goto label_0x1c47a8;                          // 0x001c4760: bne $v1, $v0, 0x1c47a8
    /* nop */                                                   // 0x001c4764: nop 
label_0x1c4768:
    func_001c7480();  // 0x1c7470                                // 0x001c4768: jal 0x1c7470
    /* nop */                                                   // 0x001c476c: nop 
    v1 = *(int32_t*)((s0) + 0x38);                              // 0x001c4770: lw $v1, 0x38($s0)
    v0 = 5;                                                     // 0x001c4774: addiu $v0, $zero, 5
    v1 = v1 ^ 1;                                                // 0x001c4778: xori $v1, $v1, 1
    *(uint32_t*)((s0) + 0x38) = v1;                             // 0x001c477c: sw $v1, 0x38($s0)
    goto label_0x1c47a8;                                        // 0x001c4780: b 0x1c47a8
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001c4784: sw $v0, 0x10($s0)
label_0x1c4788:
    v0 = *(uint16_t*)((s0) + 0xa);                              // 0x001c4788: lhu $v0, 0xa($s0)
    v0 = v0 & 0xfff0;                                           // 0x001c478c: andi $v0, $v0, 0xfff0
    if (v0 == 0) goto label_0x1c47a8;                           // 0x001c4790: beqz $v0, 0x1c47a8
    /* nop */                                                   // 0x001c4794: nop 
    func_001c7470();  // 0x1c7460                                // 0x001c4798: jal 0x1c7460
    /* nop */                                                   // 0x001c479c: nop 
    goto label_0x1c47ac;                                        // 0x001c47a0: b 0x1c47ac
label_0x1c47a8:
    v0 = 1;                                                     // 0x001c47a8: addiu $v0, $zero, 1
label_0x1c47ac:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c47b0: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c47b4: jr $ra
    sp = sp + 0x20;                                             // 0x001c47b8: addiu $sp, $sp, 0x20
}