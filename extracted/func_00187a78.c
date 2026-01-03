void func_00187a78() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x70;                                            // 0x00187a78: addiu $sp, $sp, -0x70
    v0 = 0x24;                                                  // 0x00187a7c: addiu $v0, $zero, 0x24
    v1 = 0x28 << 16;                                            // 0x00187a84: lui $v1, 0x28
    s1 = v1 + -0x2fb8;                                          // 0x00187a90: addiu $s1, $v1, -0x2fb8
    v0 = s1 + 4;                                                // 0x00187a9c: addiu $v0, $s1, 4
    s2 = s0 + v0;                                               // 0x00187aa8: addu $s2, $s0, $v0
    func_00188dc8();  // 188dc8                                // 0x00187aac: jal 0x188dc8
    a0 = *(int32_t*)(s2);                                       // 0x00187ab0: lw $a0, 0($s2)
    v1 = 3;                                                     // 0x00187ab4: addiu $v1, $zero, 3
    if (v0 != v1) goto label_0x187ac8;                          // 0x00187ab8: bne $v0, $v1, 0x187ac8
    a0 = s1 + s0;                                               // 0x00187abc: addu $a0, $s1, $s0
    goto label_0x187b58;                                        // 0x00187ac0: b 0x187b58
label_0x187ac8:
    s3 = 0x28 << 16;                                            // 0x00187ac8: lui $s3, 0x28
    a3 = 0x2080;                                                // 0x00187ad0: addiu $a3, $zero, 0x2080
    a1 = g_0027d054;  // Global at 0x0027d054                   // 0x00187ad8: lw $a1, 8($v0)
    a2 = g_0028000c;  // Global at 0x0028000c                   // 0x00187adc: lw $a2, 0xc($v1)
    v0 = s3 + -0x2f40;                                          // 0x00187ae0: addiu $v0, $s3, -0x2f40
    v1 = g_0027f150;  // Global at 0x0027f150                   // 0x00187ae4: lw $v1, 0x10($a0)
    s0 = 0x21 << 16;                                            // 0x00187ae8: lui $s0, 0x21
    g_0027d0c8 = a1;  // Global at 0x0027d0c8                   // 0x00187aec: sw $a1, 8($v0)
    a0 = 0x28 << 16;                                            // 0x00187af0: lui $a0, 0x28
    g_0027d0cc = a2;  // Global at 0x0027d0cc                   // 0x00187af4: sw $a2, 0xc($v0)
    a0 = a0 + -0xec0;                                           // 0x00187af8: addiu $a0, $a0, -0xec0
    g_0027d0d0 = v1;  // Global at 0x0027d0d0                   // 0x00187afc: sw $v1, 0x10($v0)
    g_0027d0d8 = 0;  // Global at 0x0027d0d8                    // 0x00187b04: sw $zero, 0x18($v0)
    a2 = 0x100;                                                 // 0x00187b08: addiu $a2, $zero, 0x100
    local_0 = a3;                                               // 0x00187b0c: sw $a3, 0($sp)
    g_0027d0d4 = 0;  // Global at 0x0027d0d4                    // 0x00187b14: sw $zero, 0x14($v0)
    func_00107c70();  // 107c70                                // 0x00187b18: jal 0x107c70
    s4 = 0x18 << 16;                                            // 0x00187b1c: lui $s4, 0x18
    s2 = 1;                                                     // 0x00187b20: addiu $s2, $zero, 1
    v0 = 4;                                                     // 0x00187b24: addiu $v0, $zero, 4
    g_00216324 = v0;  // Global at 0x00216324                   // 0x00187b28: sw $v0, 0x6324($s0)
    a0 = g_0027d048;  // Global at 0x0027d048                   // 0x00187b2c: lw $a0, 0($s1)
label_0x187b30:
    a1 = g_00216324;  // Global at 0x00216324                   // 0x00187b34: lw $a1, 0x6324($s0)
    a3 = s3 + -0x2f40;                                          // 0x00187b38: addiu $a3, $s3, -0x2f40
    func_00189470();  // 189470                                // 0x00187b3c: jal 0x189470
    t0 = s4 + 0x7700;                                           // 0x00187b40: addiu $t0, $s4, 0x7700
    if (v0 != s2) goto label_0x187b30;                          // 0x00187b44: bnel $v0, $s2, 0x187b30
    a0 = g_0027d048;  // Global at 0x0027d048                   // 0x00187b48: lw $a0, 0($s1)
    func_001875d8();  // 1875d8                                // 0x00187b4c: jal 0x1875d8
    /* nop */                                                   // 0x00187b50: nop 
    v0 = g_0027d0c8;  // Global at 0x0027d0c8                   // 0x00187b54: lw $v0, 8($v0)
label_0x187b58:
    return;                                                     // 0x00187b70: jr $ra
    sp = sp + 0x70;                                             // 0x00187b74: addiu $sp, $sp, 0x70
}