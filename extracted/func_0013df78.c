void func_0013df78() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4, local_8;
    
    sp = sp + -0x60;                                            // 0x0013df78: addiu $sp, $sp, -0x60
    v0 = 0x20 << 16;                                            // 0x0013df7c: lui $v0, 0x20
    s7 = 0x20 << 16;                                            // 0x0013df84: lui $s7, 0x20
    v0 = v0 + 0x6a90;                                           // 0x0013df8c: addiu $v0, $v0, 0x6a90
    v1 = g_00207a6c;  // Global at 0x00207a6c                   // 0x0013dfac: lw $v1, 0x7a6c($s7)
    a0 = g_00206a90;  // Global at 0x00206a90                   // 0x0013dfb0: lw $a0, 0($v0)
    /* bnezl $v1, 0x13e1ec */                                   // 0x0013dfb4: bnezl $v1, 0x13e1ec
    v1 = s7 + 0x7a6c;                                           // 0x0013dfb8: addiu $v1, $s7, 0x7a6c
    s0 = 0x21 << 16;                                            // 0x0013dfbc: lui $s0, 0x21
    s3 = 0x20 << 16;                                            // 0x0013dfc0: lui $s3, 0x20
    func_00140b48();  // 140b48                                // 0x0013dfc4: jal 0x140b48
    s0 = s0 + -0x5b78;                                          // 0x0013dfc8: addiu $s0, $s0, -0x5b78
    func_00140f40();  // 140f40                                // 0x0013dfcc: jal 0x140f40
    s1 = s3 + 0x7a74;                                           // 0x0013dfd0: addiu $s1, $s3, 0x7a74
    func_00138fb8();  // 138fb8                                // 0x0013dfd4: jal 0x138fb8
    s4 = 0x21 << 16;                                            // 0x0013dfd8: lui $s4, 0x21
    func_0013e258();  // 13e258                                // 0x0013dfdc: jal 0x13e258
    s2 = 0x20 << 16;                                            // 0x0013dfe0: lui $s2, 0x20
    func_0013d808();  // 13d808                                // 0x0013dfe4: jal 0x13d808
    /* nop */                                                   // 0x0013dfe8: nop 
    func_00107c70();  // 107c70                                // 0x0013dff4: jal 0x107c70
    a2 = 0x8d0;                                                 // 0x0013dff8: addiu $a2, $zero, 0x8d0
    a0 = 0x880;                                                 // 0x0013dffc: addiu $a0, $zero, 0x880
    v1 = g_00207a74;  // Global at 0x00207a74                   // 0x0013e000: lw $v1, 0($s1)
    s0 = s0 + 0x40;                                             // 0x0013e004: addiu $s0, $s0, 0x40
    v0 = -0x40;                                                 // 0x0013e008: addiu $v0, $zero, -0x40
    s0 = s0 & v0;                                               // 0x0013e00c: and $s0, $s0, $v0
    g_0020a484 = a0;  // Global at 0x0020a484                   // 0x0013e010: sw $a0, -0x5b7c($s4)
    if (v1 != 0) goto label_0x13e060;                           // 0x0013e014: bnez $v1, 0x13e060
    g_00207a70 = s0;  // Global at 0x00207a70                   // 0x0013e018: sw $s0, 0x7a70($s2)
    func_0011b570();  // 11b570                                // 0x0013e01c: jal 0x11b570
    a0 = 0x8d0;                                                 // 0x0013e020: addiu $a0, $zero, 0x8d0
    if (v0 != 0) goto label_0x13e060;                           // 0x0013e024: bnez $v0, 0x13e060
    g_00207a74 = v0;  // Global at 0x00207a74                   // 0x0013e028: sw $v0, 0($s1)
    a0 = 0x22 << 16;                                            // 0x0013e02c: lui $a0, 0x22
    a1 = 0x8d0;                                                 // 0x0013e030: addiu $a1, $zero, 0x8d0
    func_00116508();  // 116508                                // 0x0013e034: jal 0x116508
    a0 = &str_00225f80;  // "E0100302: PS2RNA_Init can't create DTX\n" // 0x0013e038: addiu $a0, $a0, 0x5f80
    /* nop */                                                   // 0x0013e03c: nop 
label_0x13e040:
    /* nop */                                                   // 0x0013e040: nop 
    /* nop */                                                   // 0x0013e044: nop 
    /* nop */                                                   // 0x0013e048: nop 
    /* nop */                                                   // 0x0013e04c: nop 
    /* nop */                                                   // 0x0013e050: nop 
    goto label_0x13e040;                                        // 0x0013e054: b 0x13e040
    /* nop */                                                   // 0x0013e058: nop 
    /* nop */                                                   // 0x0013e05c: nop 
label_0x13e060:
    s0 = s3 + 0x7a74;                                           // 0x0013e060: addiu $s0, $s3, 0x7a74
    s6 = 0x22 << 16;                                            // 0x0013e064: lui $s6, 0x22
    a2 = g_00207a74;  // Global at 0x00207a74                   // 0x0013e068: lw $a2, 0($s0)
    a0 = &str_00225e48;  // "E0110101: ps2rna_init_psj wk size error\n" // 0x0013e06c: addiu $a0, $s6, 0x5e48
    func_00116508();  // 116508                                // 0x0013e070: jal 0x116508
    a1 = 0x8d0;                                                 // 0x0013e074: addiu $a1, $zero, 0x8d0
    t0 = 0x20 << 16;                                            // 0x0013e078: lui $t0, 0x20
    v0 = g_00207a74;  // Global at 0x00207a74                   // 0x0013e07c: lw $v0, 0($s0)
    s0 = 0x21 << 16;                                            // 0x0013e080: lui $s0, 0x21
    v1 = -0x40;                                                 // 0x0013e084: addiu $v1, $zero, -0x40
    a1 = g_00207a70;  // Global at 0x00207a70                   // 0x0013e088: lw $a1, 0x7a70($s2)
    v0 = v0 + 0x40;                                             // 0x0013e08c: addiu $v0, $v0, 0x40
    a3 = g_0020a484;  // Global at 0x0020a484                   // 0x0013e090: lw $a3, -0x5b7c($s4)
    v0 = v0 & v1;                                               // 0x0013e094: and $v0, $v0, $v1
    a0 = 1;                                                     // 0x0013e098: addiu $a0, $zero, 1
    func_00138c38();  // 138c38                                // 0x0013e0a0: jal 0x138c38
    g_00207a78 = v0;  // Global at 0x00207a78                   // 0x0013e0a4: sw $v0, 0x7a78($t0)
    if (v0 != 0) goto label_0x13e0e0;                           // 0x0013e0a8: bnez $v0, 0x13e0e0
    g_0020a480 = v0;  // Global at 0x0020a480                   // 0x0013e0ac: sw $v0, -0x5b80($s0)
    a0 = 0x22 << 16;                                            // 0x0013e0b0: lui $a0, 0x22
    func_00116508();  // 116508                                // 0x0013e0b4: jal 0x116508
    a0 = &str_00225fc8;  // "E02041101: Failed, sceSifAllocIopHeap(%d) in PS2RNA_Init." // 0x0013e0b8: addiu $a0, $a0, 0x5fc8
    /* nop */                                                   // 0x0013e0bc: nop 
label_0x13e0c0:
    /* nop */                                                   // 0x0013e0c0: nop 
    /* nop */                                                   // 0x0013e0c4: nop 
    /* nop */                                                   // 0x0013e0c8: nop 
    /* nop */                                                   // 0x0013e0cc: nop 
    /* nop */                                                   // 0x0013e0d0: nop 
    goto label_0x13e0c0;                                        // 0x0013e0d4: b 0x13e0c0
    /* nop */                                                   // 0x0013e0d8: nop 
    /* nop */                                                   // 0x0013e0dc: nop 
label_0x13e0e0:
    s0 = s0 + -0x5b80;                                          // 0x0013e0e0: addiu $s0, $s0, -0x5b80
    a1 = 0x14 << 16;                                            // 0x0013e0e4: lui $a1, 0x14
    a0 = g_0020a480;  // Global at 0x0020a480                   // 0x0013e0e8: lw $a0, 0($s0)
    a1 = a1 + -0x23a0;                                          // 0x0013e0ec: addiu $a1, $a1, -0x23a0
    func_00138e38();  // 138e38                                // 0x0013e0f4: jal 0x138e38
    s1 = 0x20 << 16;                                            // 0x0013e0f8: lui $s1, 0x20
    a1 = 0x14 << 16;                                            // 0x0013e0fc: lui $a1, 0x14
    a0 = g_0020a480;  // Global at 0x0020a480                   // 0x0013e100: lw $a0, 0($s0)
    a1 = a1 + -0x2340;                                          // 0x0013e104: addiu $a1, $a1, -0x2340
    func_00138e48();  // 138e48                                // 0x0013e10c: jal 0x138e48
    s4 = s1 + 0x7a54;                                           // 0x0013e110: addiu $s4, $s1, 0x7a54
    v0 = g_00207a54;  // Global at 0x00207a54                   // 0x0013e114: lw $v0, 0($s4)
    if (v0 != 0) goto label_0x13e1a0;                           // 0x0013e118: bnez $v0, 0x13e1a0
    s3 = 0x20 << 16;                                            // 0x0013e11c: lui $s3, 0x20
    v0 = 0x20 << 16;                                            // 0x0013e120: lui $v0, 0x20
    s5 = 0x20 << 16;                                            // 0x0013e124: lui $s5, 0x20
    v1 = g_00207a38;  // Global at 0x00207a38                   // 0x0013e128: lw $v1, 0x7a38($v0)
    s0 = s5 + 0x7a50;                                           // 0x0013e12c: addiu $s0, $s5, 0x7a50
    v0 = v1 << 0xa;                                             // 0x0013e134: sll $v0, $v1, 0xa
    g_00207a5c = v1;  // Global at 0x00207a5c                   // 0x0013e138: sw $v1, 0x7a5c($s3)
    v0 = v0 + 0x40;                                             // 0x0013e13c: addiu $v0, $v0, 0x40
    g_00207a50 = v0;  // Global at 0x00207a50                   // 0x0013e140: sw $v0, 0($s0)
    func_0011b570();  // 11b570                                // 0x0013e144: jal 0x11b570
    if (v0 != 0) goto label_0x13e188;                           // 0x0013e14c: bnez $v0, 0x13e188
    g_00207a54 = v0;  // Global at 0x00207a54                   // 0x0013e150: sw $v0, 0($s4)
    a0 = 0x22 << 16;                                            // 0x0013e154: lui $a0, 0x22
    a1 = g_00207a50;  // Global at 0x00207a50                   // 0x0013e158: lw $a1, 0($s0)
    func_00116508();  // 116508                                // 0x0013e15c: jal 0x116508
    a0 = &str_00225ff0;  // "E1072601: not enough PSJ handle\n" // 0x0013e160: addiu $a0, $a0, 0x5ff0
    /* nop */                                                   // 0x0013e164: nop 
label_0x13e168:
    /* nop */                                                   // 0x0013e168: nop 
    /* nop */                                                   // 0x0013e16c: nop 
    /* nop */                                                   // 0x0013e170: nop 
    /* nop */                                                   // 0x0013e174: nop 
    /* nop */                                                   // 0x0013e178: nop 
    goto label_0x13e168;                                        // 0x0013e17c: b 0x13e168
    /* nop */                                                   // 0x0013e180: nop 
    /* nop */                                                   // 0x0013e184: nop 
label_0x13e188:
    a1 = g_00207a50;  // Global at 0x00207a50                   // 0x0013e188: lw $a1, 0x7a50($s2)
    a0 = &str_00225e48;  // "E0110101: ps2rna_init_psj wk size error\n" // 0x0013e18c: addiu $a0, $s6, 0x5e48
    func_00116508();  // 116508                                // 0x0013e190: jal 0x116508
    a2 = g_00207a54;  // Global at 0x00207a54                   // 0x0013e194: lw $a2, 0x7a54($s1)
    goto label_0x13e1a8;                                        // 0x0013e198: b 0x13e1a8
    v0 = g_00207a54;  // Global at 0x00207a54                   // 0x0013e19c: lw $v0, 0x7a54($s1)
label_0x13e1a0:
    s5 = 0x20 << 16;                                            // 0x0013e1a0: lui $s5, 0x20
    v0 = g_00207a54;  // Global at 0x00207a54                   // 0x0013e1a4: lw $v0, 0x7a54($s1)
label_0x13e1a8:
    v1 = -0x40;                                                 // 0x0013e1a8: addiu $v1, $zero, -0x40
    a1 = g_00207a5c;  // Global at 0x00207a5c                   // 0x0013e1ac: lw $a1, 0x7a5c($s3)
    t1 = 0x20 << 16;                                            // 0x0013e1b0: lui $t1, 0x20
    v0 = v0 + 0x3f;                                             // 0x0013e1b4: addiu $v0, $v0, 0x3f
    a0 = 0xa;                                                   // 0x0013e1b8: addiu $a0, $zero, 0xa
    v0 = v0 & v1;                                               // 0x0013e1bc: and $v0, $v0, $v1
    v1 = g_00207a50;  // Global at 0x00207a50                   // 0x0013e1c0: lw $v1, 0x7a50($s5)
    local_0 = a1;                                               // 0x0013e1c4: sw $a1, 0($sp)
    a2 = 3;                                                     // 0x0013e1cc: addiu $a2, $zero, 3
    local_4 = v0;                                               // 0x0013e1d8: sw $v0, 4($sp)
    g_00207a58 = v0;  // Global at 0x00207a58                   // 0x0013e1dc: sw $v0, 0x7a58($t1)
    func_00139120();  // 139120                                // 0x0013e1e0: jal 0x139120
    local_8 = v1;                                               // 0x0013e1e4: sw $v1, 8($sp)
    v1 = s7 + 0x7a6c;                                           // 0x0013e1e8: addiu $v1, $s7, 0x7a6c
    v0 = g_00207a6c;  // Global at 0x00207a6c                   // 0x0013e1f0: lw $v0, 0($v1)
    v0 = v0 + 1;                                                // 0x0013e1fc: addiu $v0, $v0, 1
    g_00207a6c = v0;  // Global at 0x00207a6c                   // 0x0013e218: sw $v0, 0($v1)
    return;                                                     // 0x0013e21c: jr $ra
    sp = sp + 0x60;                                             // 0x0013e220: addiu $sp, $sp, 0x60
}