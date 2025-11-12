void func_00187d40() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x70;                                            // 0x00187d40: addiu $sp, $sp, -0x70
    v0 = 0x24;                                                  // 0x00187d44: addiu $v0, $zero, 0x24
    v1 = 0x28 << 16;                                            // 0x00187d4c: lui $v1, 0x28
    s1 = v1 + -0x2fb8;                                          // 0x00187d58: addiu $s1, $v1, -0x2fb8
    v0 = s1 + 4;                                                // 0x00187d64: addiu $v0, $s1, 4
    s2 = s0 + v0;                                               // 0x00187d70: addu $s2, $s0, $v0
    func_00188ec0();  // 0x188dc8                                // 0x00187d74: jal 0x188dc8
    a0 = *(int32_t*)(s2);                                       // 0x00187d78: lw $a0, 0($s2)
    v1 = 3;                                                     // 0x00187d7c: addiu $v1, $zero, 3
    if (v0 != v1) goto label_0x187d90;                          // 0x00187d80: bne $v0, $v1, 0x187d90
    v0 = s1 + s0;                                               // 0x00187d84: addu $v0, $s1, $s0
    goto label_0x187e58;                                        // 0x00187d88: b 0x187e58
label_0x187d90:
    a2 = g_0027d054;  // Global at 0x0027d054                   // 0x00187d90: lw $a2, 8($v0)
    if (a2 == 0) goto label_0x187dac;                           // 0x00187d94: beqz $a2, 0x187dac
    a0 = 0x23 << 16;                                            // 0x00187d98: lui $a0, 0x23
    t3 = g_0027d058;  // Global at 0x0027d058                   // 0x00187d9c: lw $t3, 0xc($v0)
    if (t3 != 0) goto label_0x187dbc;                           // 0x00187da0: bnez $t3, 0x187dbc
    a1 = s1 + s0;                                               // 0x00187da4: addu $a1, $s1, $s0
    a0 = 0x23 << 16;                                            // 0x00187da8: lui $a0, 0x23
label_0x187dac:
    func_00116598();  // 0x116508                                // 0x00187dac: jal 0x116508
    a0 = &str_00229ff0;  // "libmc2: Invalid data length (over 8192)\n" // 0x00187db0: addiu $a0, $a0, -0x6010
    goto label_0x187e58;                                        // 0x00187db4: b 0x187e58
label_0x187dbc:
    s3 = 0x28 << 16;                                            // 0x00187dbc: lui $s3, 0x28
    t2 = 0x2080;                                                // 0x00187dc4: addiu $t2, $zero, 0x2080
    t0 = g_00280020;  // Global at 0x00280020                   // 0x00187dd0: lw $t0, 0x20($v1)
    s0 = 0x21 << 16;                                            // 0x00187dd4: lui $s0, 0x21
    t1 = g_0022a00c;  // Global at 0x0022a00c                   // 0x00187dd8: lw $t1, 0x1c($a0)
    v1 = *(int32_t*)((a1) + 0x14);                              // 0x00187de0: lw $v1, 0x14($a1)
    a0 = 0x28 << 16;                                            // 0x00187de4: lui $a0, 0x28
    a3 = g_0027d05c;  // Global at 0x0027d05c                   // 0x00187de8: lw $a3, 0x10($v0)
    a0 = a0 + -0xec0;                                           // 0x00187dec: addiu $a0, $a0, -0xec0
    v0 = s3 + -0x2f40;                                          // 0x00187df0: addiu $v0, $s3, -0x2f40
    g_0027d0c8 = a2;  // Global at 0x0027d0c8                   // 0x00187df8: sw $a2, 8($v0)
    s4 = 0x18 << 16;                                            // 0x00187dfc: lui $s4, 0x18
    g_0027d0e4 = v1;  // Global at 0x0027d0e4                   // 0x00187e00: sw $v1, 0x24($v0)
    a2 = 0x100;                                                 // 0x00187e04: addiu $a2, $zero, 0x100
    g_0027d0cc = t3;  // Global at 0x0027d0cc                   // 0x00187e08: sw $t3, 0xc($v0)
    s2 = 1;                                                     // 0x00187e0c: addiu $s2, $zero, 1
    g_0027d0d0 = a3;  // Global at 0x0027d0d0                   // 0x00187e10: sw $a3, 0x10($v0)
    g_0027d0d4 = t0;  // Global at 0x0027d0d4                   // 0x00187e14: sw $t0, 0x14($v0)
    g_0027d0d8 = t1;  // Global at 0x0027d0d8                   // 0x00187e18: sw $t1, 0x18($v0)
    func_00107d30();  // 0x107c70                                // 0x00187e1c: jal 0x107c70
    local_0 = t2;                                               // 0x00187e20: sw $t2, 0($sp)
    v1 = 6;                                                     // 0x00187e24: addiu $v1, $zero, 6
    g_00216324 = v1;  // Global at 0x00216324                   // 0x00187e28: sw $v1, 0x6324($s0)
    a0 = g_0027d048;  // Global at 0x0027d048                   // 0x00187e2c: lw $a0, 0($s1)
label_0x187e30:
    a1 = g_00216324;  // Global at 0x00216324                   // 0x00187e34: lw $a1, 0x6324($s0)
    a3 = s3 + -0x2f40;                                          // 0x00187e38: addiu $a3, $s3, -0x2f40
    func_001895d8();  // 0x189470                                // 0x00187e3c: jal 0x189470
    t0 = s4 + 0x7700;                                           // 0x00187e40: addiu $t0, $s4, 0x7700
    if (v0 != s2) goto label_0x187e30;                          // 0x00187e44: bnel $v0, $s2, 0x187e30
    a0 = g_0027d048;  // Global at 0x0027d048                   // 0x00187e48: lw $a0, 0($s1)
    func_001876a8();  // 0x1875d8                                // 0x00187e4c: jal 0x1875d8
    /* nop */                                                   // 0x00187e50: nop 
    v0 = g_0027d0c8;  // Global at 0x0027d0c8                   // 0x00187e54: lw $v0, 8($v0)
label_0x187e58:
    return;                                                     // 0x00187e70: jr $ra
    sp = sp + 0x70;                                             // 0x00187e74: addiu $sp, $sp, 0x70
}