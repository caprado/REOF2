void func_00133808() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4;
    
    sp = sp + -0x40;                                            // 0x00133808: addiu $sp, $sp, -0x40
    func_0012d468();  // 12d468                                // 0x00133828: jal 0x12d468
    a0 = *(int32_t*)((s0) + 4);                                 // 0x0013382c: lw $a0, 4($s0)
label_0x133838:
    a0 = *(int32_t*)((s0) + 4);                                 // 0x00133838: lw $a0, 4($s0)
    func_0012d610();  // 12d610                                // 0x00133840: jal 0x12d610
    s1 = s1 + 1;                                                // 0x00133844: addiu $s1, $s1, 1
    v1 = (s1 < 2) ? 1 : 0;                                      // 0x00133848: slti $v1, $s1, 2
    *(uint32_t*)(s2) = v0;                                      // 0x0013384c: sw $v0, 0($s2)
    if (v1 != 0) goto label_0x133838;                           // 0x00133850: bnez $v1, 0x133838
    s2 = s2 + 4;                                                // 0x00133854: addiu $s2, $s2, 4
    v0 = 1;                                                     // 0x00133858: addiu $v0, $zero, 1
    if (s3 != v0) goto label_0x1338e0;                          // 0x0013385c: bne $s3, $v0, 0x1338e0
    a2 = *(int16_t*)((s0) + 0x42);                              // 0x00133860: lh $a2, 0x42($s0)
    a0 = -0x80;                                                 // 0x00133864: addiu $a0, $zero, -0x80
    if (a2 != a0) goto label_0x133890;                          // 0x00133868: bne $a2, $a0, 0x133890
    v1 = *(uint16_t*)((s0) + 0x42);                             // 0x0013386c: lhu $v1, 0x42($s0)
    v0 = local_0;                                               // 0x00133870: lw $v0, 0($sp)
    if (v0 != a2) goto label_0x1338a8;                          // 0x00133874: bne $v0, $a2, 0x1338a8
    a0 = *(int32_t*)((s0) + 0xc);                               // 0x00133878: lw $a0, 0xc($s0)
    func_0012c4d0();  // 12c4d0                                // 0x00133880: jal 0x12c4d0
    goto label_0x1339b8;                                        // 0x00133888: b 0x1339b8
label_0x133890:
    v0 = local_0;                                               // 0x00133890: lw $v0, 0($sp)
    if (v0 != a0) goto label_0x1338c0;                          // 0x00133894: bnel $v0, $a0, 0x1338c0
    a2 = v1 << 0x10;                                            // 0x00133898: sll $a2, $v1, 0x10
    goto label_0x1338ac;                                        // 0x0013389c: b 0x1338ac
    a0 = *(int32_t*)((s0) + 0xc);                               // 0x001338a0: lw $a0, 0xc($s0)
    /* nop */                                                   // 0x001338a4: nop 
label_0x1338a8:
label_0x1338ac:
    func_0012c4d0();  // 12c4d0                                // 0x001338ac: jal 0x12c4d0
    goto label_0x1339b8;                                        // 0x001338b4: b 0x1339b8
    /* nop */                                                   // 0x001338bc: nop 
label_0x1338c0:
    a0 = *(int32_t*)((s0) + 0xc);                               // 0x001338c0: lw $a0, 0xc($s0)
    a2 = a2 >> 0x10;                                            // 0x001338c4: sra $a2, $a2, 0x10
    func_0012c4d0();  // 12c4d0                                // 0x001338cc: jal 0x12c4d0
    a2 = a2 + v0;                                               // 0x001338d0: addu $a2, $a2, $v0
    goto label_0x1339b8;                                        // 0x001338d4: b 0x1339b8
    /* nop */                                                   // 0x001338dc: nop 
label_0x1338e0:
    v1 = -0x80;                                                 // 0x001338e0: addiu $v1, $zero, -0x80
    if (a2 != v1) goto label_0x133908;                          // 0x001338e4: bne $a2, $v1, 0x133908
    v0 = local_0;                                               // 0x001338e8: lw $v0, 0($sp)
    if (v0 != a2) goto label_0x133918;                          // 0x001338ec: bne $v0, $a2, 0x133918
    a0 = *(int32_t*)((s0) + 0xc);                               // 0x001338f0: lw $a0, 0xc($s0)
    func_0012c4d0();  // 12c4d0                                // 0x001338f8: jal 0x12c4d0
    a2 = -0xf;                                                  // 0x001338fc: addiu $a2, $zero, -0xf
    goto label_0x133940;                                        // 0x00133900: b 0x133940
    a2 = *(int16_t*)((s0) + 0x44);                              // 0x00133904: lh $a2, 0x44($s0)
label_0x133908:
    if (v0 != v1) goto label_0x133930;                          // 0x00133908: bne $v0, $v1, 0x133930
    a0 = *(int32_t*)((s0) + 0xc);                               // 0x0013390c: lw $a0, 0xc($s0)
    goto label_0x13391c;                                        // 0x00133910: b 0x13391c
    /* nop */                                                   // 0x00133914: nop 
label_0x133918:
label_0x13391c:
    func_0012c4d0();  // 12c4d0                                // 0x0013391c: jal 0x12c4d0
    goto label_0x133940;                                        // 0x00133924: b 0x133940
    a2 = *(int16_t*)((s0) + 0x44);                              // 0x00133928: lh $a2, 0x44($s0)
    /* nop */                                                   // 0x0013392c: nop 
label_0x133930:
    a2 = a2 + v0;                                               // 0x00133930: addu $a2, $a2, $v0
    func_0012c4d0();  // 12c4d0                                // 0x00133934: jal 0x12c4d0
    a2 = *(int16_t*)((s0) + 0x44);                              // 0x0013393c: lh $a2, 0x44($s0)
label_0x133940:
    a0 = -0x80;                                                 // 0x00133940: addiu $a0, $zero, -0x80
    if (a2 != a0) goto label_0x133970;                          // 0x00133944: bne $a2, $a0, 0x133970
    v1 = *(uint16_t*)((s0) + 0x44);                             // 0x00133948: lhu $v1, 0x44($s0)
    v0 = local_4;                                               // 0x0013394c: lw $v0, 4($sp)
    if (v0 != a2) goto label_0x133988;                          // 0x00133950: bne $v0, $a2, 0x133988
    a0 = *(int32_t*)((s0) + 0xc);                               // 0x00133954: lw $a0, 0xc($s0)
    a1 = 1;                                                     // 0x00133958: addiu $a1, $zero, 1
    func_0012c4d0();  // 12c4d0                                // 0x0013395c: jal 0x12c4d0
    a2 = 0xf;                                                   // 0x00133960: addiu $a2, $zero, 0xf
    goto label_0x1339b8;                                        // 0x00133964: b 0x1339b8
    /* nop */                                                   // 0x0013396c: nop 
label_0x133970:
    v0 = local_4;                                               // 0x00133970: lw $v0, 4($sp)
    if (v0 != a0) goto label_0x1339a0;                          // 0x00133974: bnel $v0, $a0, 0x1339a0
    a2 = v1 << 0x10;                                            // 0x00133978: sll $a2, $v1, 0x10
    goto label_0x13398c;                                        // 0x0013397c: b 0x13398c
    a0 = *(int32_t*)((s0) + 0xc);                               // 0x00133980: lw $a0, 0xc($s0)
    /* nop */                                                   // 0x00133984: nop 
label_0x133988:
label_0x13398c:
    func_0012c4d0();  // 12c4d0                                // 0x0013398c: jal 0x12c4d0
    a1 = 1;                                                     // 0x00133990: addiu $a1, $zero, 1
    goto label_0x1339b8;                                        // 0x00133994: b 0x1339b8
    /* nop */                                                   // 0x0013399c: nop 
label_0x1339a0:
    a0 = *(int32_t*)((s0) + 0xc);                               // 0x001339a0: lw $a0, 0xc($s0)
    a2 = a2 >> 0x10;                                            // 0x001339a4: sra $a2, $a2, 0x10
    a1 = 1;                                                     // 0x001339a8: addiu $a1, $zero, 1
    func_0012c4d0();  // 12c4d0                                // 0x001339ac: jal 0x12c4d0
    a2 = a2 + v0;                                               // 0x001339b0: addu $a2, $a2, $v0
label_0x1339b8:
    return;                                                     // 0x001339c8: jr $ra
    sp = sp + 0x40;                                             // 0x001339cc: addiu $sp, $sp, 0x40
}