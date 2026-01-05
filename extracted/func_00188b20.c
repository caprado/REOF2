void func_00188b20() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    v0 = 0x21 << 16;                                            // 0x00188b20: lui $v0, 0x21
    sp = sp + -0x30;                                            // 0x00188b24: addiu $sp, $sp, -0x30
    v1 = g_00216338;  // Global at 0x00216338                   // 0x00188b28: lw $v1, 0x6338($v0)
    if (v1 == 0) goto label_0x188be8;                           // 0x00188b34: beqz $v1, 0x188be8
    v0 = str_0022a0e8;  // "sceDbcDeleteSocket: rpc error\n"    // 0x00188b3c: lw $v0, 0($a0)
    a3 = 0x28 << 16;                                            // 0x00188b40: lui $a3, 0x28
    s0 = a3 + 0x12c0;                                           // 0x00188b44: addiu $s0, $a3, 0x12c0
    t0 = a0 + 0x14;                                             // 0x00188b48: addiu $t0, $a0, 0x14
    g_002812c0 = v0;  // Global at 0x002812c0                   // 0x00188b4c: sw $v0, 0x12c0($a3)
    t1 = s0 + 0x14;                                             // 0x00188b50: addiu $t1, $s0, 0x14
    g_002812e8 = a1;  // Global at 0x002812e8                   // 0x00188b54: sw $a1, 0x28($s0)
    v1 = g_0022a0ec;  // Global at 0x0022a0ec                   // 0x00188b58: lw $v1, 4($a0)
    g_002812ec = a2;  // Global at 0x002812ec                   // 0x00188b60: sw $a2, 0x2c($s0)
    g_002812c4 = v1;  // Global at 0x002812c4                   // 0x00188b64: sw $v1, 4($s0)
    v0 = g_0022a0f0;  // Global at 0x0022a0f0                   // 0x00188b68: lw $v0, 8($a0)
    g_002812c8 = v0;  // Global at 0x002812c8                   // 0x00188b6c: sw $v0, 8($s0)
    v1 = g_0022a0f4;  // Global at 0x0022a0f4                   // 0x00188b70: lw $v1, 0xc($a0)
    g_002812cc = v1;  // Global at 0x002812cc                   // 0x00188b74: sw $v1, 0xc($s0)
    v0 = g_0022a0f8;  // Global at 0x0022a0f8                   // 0x00188b78: lw $v0, 0x10($a0)
    g_002812d0 = v0;  // Global at 0x002812d0                   // 0x00188b7c: sw $v0, 0x10($s0)
label_0x188b80:
    v0 = t0 + a1;                                               // 0x00188b80: addu $v0, $t0, $a1
    a0 = t1 + a1;                                               // 0x00188b84: addu $a0, $t1, $a1
    v1 = g_00210000;  // Global at 0x00210000                   // 0x00188b88: lbu $v1, 0($v0)
    a1 = a1 + 1;                                                // 0x00188b8c: addiu $a1, $a1, 1
    v0 = (a1 < 0x10) ? 1 : 0;                                   // 0x00188b90: slti $v0, $a1, 0x10
    str_0022a0e8 = v1;  // Global at 0x0022a0e8                 // 0x00188b94: sb $v1, 0($a0)
    if (v0 != 0) goto label_0x188b80;                           // 0x00188b98: bnez $v0, 0x188b80
    /* nop */                                                   // 0x00188b9c: nop 
    a3 = a3 + 0x12c0;                                           // 0x00188ba0: addiu $a3, $a3, 0x12c0
    a1 = 0x8000 << 16;                                          // 0x00188ba4: lui $a1, 0x8000
    a0 = 0x28 << 16;                                            // 0x00188ba8: lui $a0, 0x28
    local_0 = 0;                                                // 0x00188bac: sw $zero, 0($sp)
    a0 = a0 + 0x1248;                                           // 0x00188bb0: addiu $a0, $a0, 0x1248
    a1 = a1 | 0x1301;                                           // 0x00188bb4: ori $a1, $a1, 0x1301
    t0 = 0x280;                                                 // 0x00188bbc: addiu $t0, $zero, 0x280
    t2 = 0x280;                                                 // 0x00188bc4: addiu $t2, $zero, 0x280
    func_001176a8();  // 1176a8                                // 0x00188bc8: jal 0x1176a8
    if (v0 >= 0) goto label_0x188be8;                           // 0x00188bd0: bgezl $v0, 0x188be8
    v0 = g_002812e4;  // Global at 0x002812e4                   // 0x00188bd4: lw $v0, 0x24($s0)
    a0 = 0x23 << 16;                                            // 0x00188bd8: lui $a0, 0x23
    func_001896c8();  // 1896c8                                // 0x00188bdc: jal 0x1896c8
    a0 = &str_0022a0e8;  // "sceDbcDeleteSocket: rpc error\n"   // 0x00188be0: addiu $a0, $a0, -0x5f18
label_0x188be8:
    return;                                                     // 0x00188bf0: jr $ra
    sp = sp + 0x30;                                             // 0x00188bf4: addiu $sp, $sp, 0x30
}