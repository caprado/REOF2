void func_00100858() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10;
    
    sp = sp + -0xc0;                                            // 0x00100858: addiu $sp, $sp, -0xc0
    s6 = 0x1f << 16;                                            // 0x00100874: lui $s6, 0x1f
    func_001005b0();  // 1005b0                                // 0x00100890: jal 0x1005b0
    local_10 = a2;                                              // 0x00100894: sw $a2, 0x10($sp)
    a0 = g_001edf28;  // Global at 0x001edf28                   // 0x00100898: lw $a0, -0x20d8($s6)
    SetOsdConfigParam();  // 0x114330                           // 0x0010089c: jal 0x114330
    /* nop */                                                   // 0x001008a0: nop 
    v1 = g_001edf28;  // Global at 0x001edf28                   // 0x001008a4: lw $v1, -0x20d8($s6)
    if (v1 != v0) goto label_0x100b3c;                          // 0x001008a8: bne $v1, $v0, 0x100b3c
    v0 = 0x25 << 16;                                            // 0x001008b0: lui $v0, 0x25
    a2 = 0x1f << 16;                                            // 0x001008b4: lui $a2, 0x1f
    v1 = 1;                                                     // 0x001008b8: addiu $v1, $zero, 1
    a0 = g_0024b718;  // Global at 0x0024b718                   // 0x001008bc: lw $a0, -0x48e8($v0)
    a1 = 0x25 << 16;                                            // 0x001008c0: lui $a1, 0x25
    g_001edf1c = v1;  // Global at 0x001edf1c                   // 0x001008c4: sw $v1, -0x20e4($a2)
    iReferThreadStatus();  // 0x1141e0                          // 0x001008c8: jal 0x1141e0
    a1 = a1 + -0x48e0;                                          // 0x001008cc: addiu $a1, $a1, -0x48e0
    func_00100d98();  // 100d98                                // 0x001008d0: jal 0x100d98
    a0 = 1;                                                     // 0x001008d4: addiu $a0, $zero, 1
    if (v0 != 0) goto label_0x100a70;                           // 0x001008d8: bnez $v0, 0x100a70
    func_00116d40();  // 116d40                                // 0x001008e0: jal 0x116d40
    s1 = 0x1f << 16;                                            // 0x001008e4: lui $s1, 0x1f
    v0 = g_001edf44;  // Global at 0x001edf44                   // 0x001008e8: lw $v0, -0x20bc($s1)
    if (v0 >= 0) goto label_0x1009a4;                           // 0x001008ec: bgez $v0, 0x1009a4
    s7 = 0x25 << 16;                                            // 0x001008f0: lui $s7, 0x25
    s4 = 0x1f << 16;                                            // 0x001008f4: lui $s4, 0x1f
    s5 = 0x25 << 16;                                            // 0x001008f8: lui $s5, 0x25
    goto label_0x10092c;                                        // 0x001008fc: b 0x10092c
    fp = 0x25 << 16;                                            // 0x00100900: lui $fp, 0x25
    /* nop */                                                   // 0x00100904: nop 
label_0x100908:
    v1 = -1;                                                    // 0x00100908: addiu $v1, $zero, -1
    /* nop */                                                   // 0x0010090c: nop 
label_0x100910:
    v0 = v0 + -1;                                               // 0x00100910: addiu $v0, $v0, -1
    /* nop */                                                   // 0x00100914: nop 
    /* nop */                                                   // 0x00100918: nop 
    /* nop */                                                   // 0x0010091c: nop 
    /* nop */                                                   // 0x00100920: nop 
    if (v0 != v1) goto label_0x100910;                          // 0x00100924: bne $v0, $v1, 0x100910
    /* nop */                                                   // 0x00100928: nop 
label_0x10092c:
    s0 = s7 + -0x4700;                                          // 0x0010092c: addiu $s0, $s7, -0x4700
label_0x100930:
    a1 = 0x8000 << 16;                                          // 0x00100930: lui $a1, 0x8000
    a1 = a1 | 0x597;                                            // 0x00100938: ori $a1, $a1, 0x597
    func_001174d8();  // 1174d8                                // 0x0010093c: jal 0x1174d8
    if (v0 >= 0) goto label_0x100994;                           // 0x00100944: bgezl $v0, 0x100994
    v0 = g_0024b924;  // Global at 0x0024b924                   // 0x00100948: lw $v0, 0x24($s0)
    v0 = g_001edf10;  // Global at 0x001edf10                   // 0x0010094c: lw $v0, -0x20f0($s4)
    if (v0 <= 0) goto label_0x100968;                           // 0x00100950: blez $v0, 0x100968
    v0 = 0x10 << 16;                                            // 0x00100954: lui $v0, 0x10
    a0 = 0x22 << 16;                                            // 0x00100958: lui $a0, 0x22
    func_00116508();  // 116508                                // 0x0010095c: jal 0x116508
    a0 = &str_0021fd28;  // "ee call cmd search %s\n"           // 0x00100960: addiu $a0, $a0, -0x2d8
    v0 = 0x10 << 16;                                            // 0x00100964: lui $v0, 0x10
label_0x100968:
    v1 = -1;                                                    // 0x00100968: addiu $v1, $zero, -1
    /* nop */                                                   // 0x0010096c: nop 
label_0x100970:
    v0 = v0 + -1;                                               // 0x00100970: addiu $v0, $v0, -1
    /* nop */                                                   // 0x00100974: nop 
    /* nop */                                                   // 0x00100978: nop 
    /* nop */                                                   // 0x0010097c: nop 
    /* nop */                                                   // 0x00100980: nop 
    if (v0 != v1) goto label_0x100970;                          // 0x00100984: bne $v0, $v1, 0x100970
    /* nop */                                                   // 0x00100988: nop 
    goto label_0x100930;                                        // 0x0010098c: b 0x100930
    s0 = s7 + -0x4700;                                          // 0x00100990: addiu $s0, $s7, -0x4700
label_0x100994:
    if (v0 == 0) goto label_0x100908;                           // 0x00100994: beqz $v0, 0x100908
    v0 = 0x10 << 16;                                            // 0x00100998: lui $v0, 0x10
    goto label_0x1009b0;                                        // 0x0010099c: b 0x1009b0
    g_001edf44 = 0;  // Global at 0x001edf44                    // 0x001009a0: sw $zero, -0x20bc($s1)
label_0x1009a4:
    s4 = 0x1f << 16;                                            // 0x001009a4: lui $s4, 0x1f
    s5 = 0x25 << 16;                                            // 0x001009a8: lui $s5, 0x25
    fp = 0x25 << 16;                                            // 0x001009ac: lui $fp, 0x25
label_0x1009b0:
    v1 = *(uint8_t*)(s2);                                       // 0x001009b0: lbu $v1, 0($s2)
    a0 = s5 + -0x4880;                                          // 0x001009b4: addiu $a0, $s5, -0x4880
    v0 = v1 << 0x18;                                            // 0x001009bc: sll $v0, $v1, 0x18
    if (v0 == 0) goto label_0x1009f4;                           // 0x001009c0: beqz $v0, 0x1009f4
    g_0024b7a4 = v1;  // Global at 0x0024b7a4                   // 0x001009c4: sb $v1, 0x24($a0)
    a2 = a0 + 0x24;                                             // 0x001009c8: addiu $a2, $a0, 0x24
    a1 = a1 + 1;                                                // 0x001009cc: addiu $a1, $a1, 1
    v0 = (a1 < 0x100) ? 1 : 0;                                  // 0x001009d0: slti $v0, $a1, 0x100
    if (v0 == 0) goto label_0x1009f4;                           // 0x001009d4: beqz $v0, 0x1009f4
    v0 = s2 + a1;                                               // 0x001009d8: addu $v0, $s2, $a1
    a0 = a1 + a2;                                               // 0x001009dc: addu $a0, $a1, $a2
    v1 = g_00100000;  // Global at 0x00100000                   // 0x001009e0: lbu $v1, 0($v0)
    g_0024b780 = v1;  // Global at 0x0024b780                   // 0x001009e4: sb $v1, 0($a0)
    v1 = v1 << 0x18;                                            // 0x001009e8: sll $v1, $v1, 0x18
    /* bnezl $v1, 0x1009d0 */                                   // 0x001009ec: bnezl $v1, 0x1009d0
    a1 = a1 + 1;                                                // 0x001009f0: addiu $a1, $a1, 1
label_0x1009f4:
    v0 = 0x100;                                                 // 0x001009f4: addiu $v0, $zero, 0x100
    if (a1 != v0) goto label_0x100a0c;                          // 0x001009f8: bne $a1, $v0, 0x100a0c
    v0 = g_001edf10;  // Global at 0x001edf10                   // 0x001009fc: lw $v0, -0x20f0($s4)
    v0 = s5 + -0x4880;                                          // 0x00100a00: addiu $v0, $s5, -0x4880
    g_0024b8a3 = 0;  // Global at 0x0024b8a3                    // 0x00100a04: sb $zero, 0x123($v0)
    v0 = g_001edf10;  // Global at 0x001edf10                   // 0x00100a08: lw $v0, -0x20f0($s4)
label_0x100a0c:
    if (v0 <= 0) goto label_0x100a24;                           // 0x00100a0c: blez $v0, 0x100a24
    a0 = 0x22 << 16;                                            // 0x00100a10: lui $a0, 0x22
    a1 = 0x25 << 16;                                            // 0x00100a14: lui $a1, 0x25
    a0 = &str_0021fd48;  // "search name %s\n"                  // 0x00100a18: addiu $a0, $a0, -0x2b8
    func_00116508();  // 116508                                // 0x00100a1c: jal 0x116508
    a1 = a1 + -0x485c;                                          // 0x00100a20: addiu $a1, $a1, -0x485c
label_0x100a24:
    v0 = local_10;                                              // 0x00100a24: lw $v0, 0x10($sp)
    s0 = s5 + -0x4880;                                          // 0x00100a28: addiu $s0, $s5, -0x4880
    a1 = 0x12c;                                                 // 0x00100a2c: addiu $a1, $zero, 0x12c
    g_0024b8a8 = v0;  // Global at 0x0024b8a8                   // 0x00100a34: sw $v0, 0x128($s0)
    func_00116c90();  // 116c90                                // 0x00100a38: jal 0x116c90
    g_0024b8a4 = s0;  // Global at 0x0024b8a4                   // 0x00100a3c: sw $s0, 0x124($s0)
    a0 = s7 + -0x4700;                                          // 0x00100a40: addiu $a0, $s7, -0x4700
    local_0 = 0;                                                // 0x00100a44: sw $zero, 0($sp)
    t0 = 0x12c;                                                 // 0x00100a54: addiu $t0, $zero, 0x12c
    t1 = fp + -0x4740;                                          // 0x00100a58: addiu $t1, $fp, -0x4740
    t2 = 4;                                                     // 0x00100a5c: addiu $t2, $zero, 4
    func_001176a8();  // 1176a8                                // 0x00100a60: jal 0x1176a8
    if (v0 >= 0) goto label_0x100a84;                           // 0x00100a68: bgez $v0, 0x100a84
    v0 = 0x2000 << 16;                                          // 0x00100a6c: lui $v0, 0x2000
label_0x100a70:
    a0 = g_001edf28;  // Global at 0x001edf28                   // 0x00100a70: lw $a0, -0x20d8($s6)
    iSignalSema();  // 0x114300                                 // 0x00100a74: jal 0x114300
    /* nop */                                                   // 0x00100a78: nop 
    goto label_0x100b3c;                                        // 0x00100a7c: b 0x100b3c
label_0x100a84:
    v0 = s0 | v0;                                               // 0x00100a84: or $v0, $s0, $v0
    /* lwl $v1, 0x23($v0) */                                    // 0x00100ac8: lwl $v1, 0x23($v0)
    /* lwr $v1, 0x20($v0) */                                    // 0x00100acc: lwr $v1, 0x20($v0)
    /* swl $v1, 0x23($s3) */                                    // 0x00100ad0: swl $v1, 0x23($s3)
    /* swr $v1, 0x20($s3) */                                    // 0x00100ad4: swr $v1, 0x20($s3)
    v1 = g_001edf10;  // Global at 0x001edf10                   // 0x00100ad8: lw $v1, -0x20f0($s4)
    if (v1 <= 0) goto label_0x100b20;                           // 0x00100adc: blez $v1, 0x100b20
    a0 = 0x22 << 16;                                            // 0x00100ae0: lui $a0, 0x22
    a1 = s3 + 8;                                                // 0x00100ae4: addiu $a1, $s3, 8
    func_00116508();  // 116508                                // 0x00100ae8: jal 0x116508
    a0 = &str_0021fd60;  // "search size %d\n"                  // 0x00100aec: addiu $a0, $a0, -0x2a0
    v0 = g_001edf10;  // Global at 0x001edf10                   // 0x00100af0: lw $v0, -0x20f0($s4)
    if (v0 <= 0) goto label_0x100b20;                           // 0x00100af4: blez $v0, 0x100b20
    a0 = 0x22 << 16;                                            // 0x00100af8: lui $a0, 0x22
    a1 = *(int32_t*)((s3) + 4);                                 // 0x00100afc: lw $a1, 4($s3)
    func_00116508();  // 116508                                // 0x00100b00: jal 0x116508
    a0 = &str_0021fd70;  // "search loc lbn %d\n"               // 0x00100b04: addiu $a0, $a0, -0x290
    v0 = g_001edf10;  // Global at 0x001edf10                   // 0x00100b08: lw $v0, -0x20f0($s4)
    if (v0 <= 0) goto label_0x100b20;                           // 0x00100b0c: blez $v0, 0x100b20
    a0 = 0x22 << 16;                                            // 0x00100b10: lui $a0, 0x22
    a1 = *(int32_t*)(s3);                                       // 0x00100b14: lw $a1, 0($s3)
    func_00116508();  // 116508                                // 0x00100b18: jal 0x116508
    a0 = &str_0021fd80;  // "Ncmd fail sema cur_cmd:%d keep_cmd:%d\n" // 0x00100b1c: addiu $a0, $a0, -0x280
label_0x100b20:
    v1 = 0x2000 << 16;                                          // 0x00100b20: lui $v1, 0x2000
    v0 = fp + -0x4740;                                          // 0x00100b24: addiu $v0, $fp, -0x4740
    v0 = v0 | v1;                                               // 0x00100b28: or $v0, $v0, $v1
    a0 = g_001edf28;  // Global at 0x001edf28                   // 0x00100b2c: lw $a0, -0x20d8($s6)
    iSignalSema();  // 0x114300                                 // 0x00100b30: jal 0x114300
    s0 = g_0024b8c0;  // Global at 0x0024b8c0                   // 0x00100b34: lw $s0, 0($v0)
label_0x100b3c:
    return;                                                     // 0x00100b64: jr $ra
    sp = sp + 0xc0;                                             // 0x00100b68: addiu $sp, $sp, 0xc0
}