void func_0015e8c8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x0015e8c8: addiu $sp, $sp, -0x30
    if (s0 == 0) goto label_0x15e918;                           // 0x0015e8ec: beqz $s0, 0x15e918
    func_0015f7e0();  // 15f7e0                                // 0x0015e8f4: jal 0x15f7e0
    /* nop */                                                   // 0x0015e8f8: nop 
    v1 = 0x21 << 16;                                            // 0x0015e8fc: lui $v1, 0x21
    v0 = 0x21 << 16;                                            // 0x0015e904: lui $v0, 0x21
    g_00215540 = s0;  // Global at 0x00215540                   // 0x0015e908: sw $s0, 0x5540($v0)
    goto label_0x15e92c;                                        // 0x0015e90c: b 0x15e92c
    g_00215544 = s2;  // Global at 0x00215544                   // 0x0015e910: sw $s2, 0x5544($v1)
    /* nop */                                                   // 0x0015e914: nop 
label_0x15e918:
    v0 = 0x21 << 16;                                            // 0x0015e918: lui $v0, 0x21
    v1 = 0x21 << 16;                                            // 0x0015e91c: lui $v1, 0x21
    g_00215540 = 0;  // Global at 0x00215540                    // 0x0015e920: sw $zero, 0x5540($v0)
    g_00215544 = 0;  // Global at 0x00215544                    // 0x0015e928: sw $zero, 0x5544($v1)
label_0x15e92c:
    if (s1 == 0) goto label_0x15e95c;                           // 0x0015e92c: beqz $s1, 0x15e95c
    v0 = 0x26 << 16;                                            // 0x0015e930: lui $v0, 0x26
    a1 = v0 + -0x6300;                                          // 0x0015e934: addiu $a1, $v0, -0x6300
    a0 = g_00259d00;  // Global at 0x00259d00                   // 0x0015e938: lw $a0, 0($a1)
    v0 = a0 << 2;                                               // 0x0015e93c: sll $v0, $a0, 2
    v1 = (a0 < 0xf) ? 1 : 0;                                    // 0x0015e940: slti $v1, $a0, 0xf
    at = 0x26 << 16;                                            // 0x0015e944: lui $at, 0x26
    at = at + v0;                                               // 0x0015e948: addu $at, $at, $v0
    g_00259cc0 = s1;  // Global at 0x00259cc0                   // 0x0015e94c: sw $s1, -0x6340($at)
    if (v1 == 0) goto label_0x15e95c;                           // 0x0015e950: beqz $v1, 0x15e95c
    v0 = a0 + 1;                                                // 0x0015e954: addiu $v0, $a0, 1
    g_00259d00 = v0;  // Global at 0x00259d00                   // 0x0015e958: sw $v0, 0($a1)
label_0x15e95c:
    v0 = 0xff00 << 16;                                          // 0x0015e95c: lui $v0, 0xff00
    v0 = v0 | 0xf1c;                                            // 0x0015e960: ori $v0, $v0, 0xf1c
    if (s1 == v0) goto label_0x15ea50;                          // 0x0015e964: beq $s1, $v0, 0x15ea50
    v0 = ((unsigned)v0 < (unsigned)s1) ? 1 : 0;                 // 0x0015e968: sltu $v0, $v0, $s1
    if (v0 != 0) goto label_0x15e9b0;                           // 0x0015e96c: bnez $v0, 0x15e9b0
    /* nop */                                                   // 0x0015e970: nop 
    v0 = 0xff00 << 16;                                          // 0x0015e974: lui $v0, 0xff00
    v0 = v0 | 0xf18;                                            // 0x0015e978: ori $v0, $v0, 0xf18
    v0 = ((unsigned)v0 < (unsigned)s1) ? 1 : 0;                 // 0x0015e97c: sltu $v0, $v0, $s1
    if (v0 != 0) goto label_0x15ea78;                           // 0x0015e980: bnez $v0, 0x15ea78
    s4 = 0x26 << 16;                                            // 0x0015e984: lui $s4, 0x26
    v0 = 0xff00 << 16;                                          // 0x0015e988: lui $v0, 0xff00
    v0 = v0 | 0xf17;                                            // 0x0015e98c: ori $v0, $v0, 0xf17
    v0 = ((unsigned)s1 < (unsigned)v0) ? 1 : 0;                 // 0x0015e990: sltu $v0, $s1, $v0
    /* bnezl $v0, 0x15ea7c */                                   // 0x0015e994: bnezl $v0, 0x15ea7c
    a1 = 0x22 << 16;                                            // 0x0015e998: lui $a1, 0x22
    s4 = 0x26 << 16;                                            // 0x0015e99c: lui $s4, 0x26
    a1 = 0x22 << 16;                                            // 0x0015e9a0: lui $a1, 0x22
    goto label_0x15e9ec;                                        // 0x0015e9a4: b 0x15e9ec
    a1 = &str_002277c8;  // "SFD ERROR(%08X): Picture data size is large. Please increase MAXBPS of creation parameter." // 0x0015e9a8: addiu $a1, $a1, 0x77c8
    /* nop */                                                   // 0x0015e9ac: nop 
label_0x15e9b0:
    v0 = 0xff00 << 16;                                          // 0x0015e9b0: lui $v0, 0xff00
    v0 = v0 | 0xf40;                                            // 0x0015e9b4: ori $v0, $v0, 0xf40
    if (s1 == v0) goto label_0x15ea00;                          // 0x0015e9b8: beq $s1, $v0, 0x15ea00
    v0 = ((unsigned)s1 < (unsigned)v0) ? 1 : 0;                 // 0x0015e9bc: sltu $v0, $s1, $v0
    if (v0 != 0) goto label_0x15ea78;                           // 0x0015e9c0: bnez $v0, 0x15ea78
    s4 = 0x26 << 16;                                            // 0x0015e9c4: lui $s4, 0x26
    v0 = ((unsigned)s1 < (unsigned)-1) ? 1 : 0;                 // 0x0015e9c8: sltiu $v0, $s1, -1
    if (v0 == 0) goto label_0x15ea7c;                           // 0x0015e9cc: beqz $v0, 0x15ea7c
    a1 = 0x22 << 16;                                            // 0x0015e9d0: lui $a1, 0x22
    v0 = ((unsigned)s1 < (unsigned)-3) ? 1 : 0;                 // 0x0015e9d4: sltiu $v0, $s1, -3
    if (v0 != 0) goto label_0x15ea80;                           // 0x0015e9d8: bnez $v0, 0x15ea80
    a1 = &str_00227860;  // "E20010703F mwPlySfdStandby: "      // 0x0015e9dc: addiu $a1, $a1, 0x7860
    s4 = 0x26 << 16;                                            // 0x0015e9e0: lui $s4, 0x26
    a1 = 0x22 << 16;                                            // 0x0015e9e4: lui $a1, 0x22
    a1 = &str_00227798;  // "DEC ERROR(%08X): "                 // 0x0015e9e8: addiu $a1, $a1, 0x7798
label_0x15e9ec:
    func_0010a4d8();  // 10a4d8                                // 0x0015e9f0: jal 0x10a4d8
    a0 = s4 + -0x62f8;                                          // 0x0015e9f4: addiu $a0, $s4, -0x62f8
    goto label_0x15ea90;                                        // 0x0015e9f8: b 0x15ea90
    a0 = s4 + -0x62f8;                                          // 0x0015e9fc: addiu $a0, $s4, -0x62f8
label_0x15ea00:
    s4 = 0x26 << 16;                                            // 0x0015ea00: lui $s4, 0x26
    a1 = 0x22 << 16;                                            // 0x0015ea04: lui $a1, 0x22
    s0 = s4 + -0x62f8;                                          // 0x0015ea08: addiu $s0, $s4, -0x62f8
    a2 = 0xff00 << 16;                                          // 0x0015ea0c: lui $a2, 0xff00
    a1 = &str_002277b0;  // "SFD ERROR(%08X): width, height of cprm is short." // 0x0015ea10: addiu $a1, $a1, 0x77b0
    func_0010a4d8();  // 10a4d8                                // 0x0015ea18: jal 0x10a4d8
    a2 = a2 | 0xf40;                                            // 0x0015ea1c: ori $a2, $a2, 0xf40
    if (s2 == 0) goto label_0x15ea34;                           // 0x0015ea20: beqz $s2, 0x15ea34
    /* nop */                                                   // 0x0015ea24: nop 
    func_001714c8();  // 1714c8                                // 0x0015ea28: jal 0x1714c8
label_0x15ea34:
    if (s3 == 0) goto label_0x15ea8c;                           // 0x0015ea34: beqz $s3, 0x15ea8c
    func_0010af38();  // 10af38                                // 0x0015ea40: jal 0x10af38
    a2 = 0x69;                                                  // 0x0015ea44: addiu $a2, $zero, 0x69
    goto label_0x15ea90;                                        // 0x0015ea48: b 0x15ea90
    a0 = s4 + -0x62f8;                                          // 0x0015ea4c: addiu $a0, $s4, -0x62f8
label_0x15ea50:
    s4 = 0x26 << 16;                                            // 0x0015ea50: lui $s4, 0x26
    a1 = 0x22 << 16;                                            // 0x0015ea54: lui $a1, 0x22
    a2 = 0xff00 << 16;                                          // 0x0015ea58: lui $a2, 0xff00
    a1 = &str_00227800;  // "SFD ERROR(%08X)"                   // 0x0015ea5c: addiu $a1, $a1, 0x7800
    a0 = s4 + -0x62f8;                                          // 0x0015ea60: addiu $a0, $s4, -0x62f8
    func_0010a4d8();  // 10a4d8                                // 0x0015ea64: jal 0x10a4d8
    a2 = a2 | 0xf1c;                                            // 0x0015ea68: ori $a2, $a2, 0xf1c
    goto label_0x15ea90;                                        // 0x0015ea6c: b 0x15ea90
    a0 = s4 + -0x62f8;                                          // 0x0015ea70: addiu $a0, $s4, -0x62f8
    /* nop */                                                   // 0x0015ea74: nop 
label_0x15ea78:
    a1 = 0x22 << 16;                                            // 0x0015ea78: lui $a1, 0x22
label_0x15ea7c:
    a1 = &str_00227860;  // "E20010703F mwPlySfdStandby: "      // 0x0015ea7c: addiu $a1, $a1, 0x7860
label_0x15ea80:
    func_0010a4d8();  // 10a4d8                                // 0x0015ea84: jal 0x10a4d8
    a0 = s4 + -0x62f8;                                          // 0x0015ea88: addiu $a0, $s4, -0x62f8
label_0x15ea8c:
    a0 = s4 + -0x62f8;                                          // 0x0015ea8c: addiu $a0, $s4, -0x62f8
label_0x15ea90:
    return func_001634a8();  // Tail call                        // 0x0015eaa8: j 0x163410
    sp = sp + 0x30;                                             // 0x0015eaac: addiu $sp, $sp, 0x30
    v1 = 0x21 << 16;                                            // 0x0015eab0: lui $v1, 0x21
    return;                                                     // 0x0015eab4: jr $ra
    v0 = g_00215540;  // Global at 0x00215540                   // 0x0015eab8: lw $v0, 0x5540($v1)
}