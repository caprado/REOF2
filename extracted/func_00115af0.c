void func_00115af0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00115af0: addiu $sp, $sp, -0x30
    iFlushCache();  // 0x114560                                 // 0x00115b04: jal 0x114560
    s0 = 0x25 << 16;                                            // 0x00115b08: lui $s0, 0x25
    s1 = s0 + -0x3cf0;                                          // 0x00115b0c: addiu $s1, $s0, -0x3cf0
    a2 = 0x11 << 16;                                            // 0x00115b10: lui $a2, 0x11
    a0 = 0x210;                                                 // 0x00115b14: addiu $a0, $zero, 0x210
    a2 = a2 + 0x5710;                                           // 0x00115b18: addiu $a2, $a2, 0x5710
    func_00115430();  // 115430                                // 0x00115b1c: jal 0x115430
    g_0024c310 = v0;  // Global at 0x0024c310                   // 0x00115b24: sw $v0, -0x3cf0($s0)
    v0 = g_0024c310;  // Global at 0x0024c310                   // 0x00115b28: lw $v0, -0x3cf0($s0)
    if (v0 >= 0) goto label_0x115b3c;                           // 0x00115b2c: bgez $v0, 0x115b3c
    a0 = 0x25 << 16;                                            // 0x00115b30: lui $a0, 0x25
    goto label_0x115b98;                                        // 0x00115b34: b 0x115b98
label_0x115b3c:
    v0 = 0x25 << 16;                                            // 0x00115b3c: lui $v0, 0x25
    g_0024c31c = 0;  // Global at 0x0024c31c                    // 0x00115b40: sw $zero, 0xc($s1)
    v1 = 0x2000 << 16;                                          // 0x00115b44: lui $v1, 0x2000
    a0 = a0 + -0x3b80;                                          // 0x00115b48: addiu $a0, $a0, -0x3b80
    v0 = v0 + -0x3cc0;                                          // 0x00115b4c: addiu $v0, $v0, -0x3cc0
    v0 = v0 | v1;                                               // 0x00115b50: or $v0, $v0, $v1
    g_0024c314 = 0;  // Global at 0x0024c314                    // 0x00115b54: sw $zero, 4($s1)
    a0 = a0 | v1;                                               // 0x00115b58: or $a0, $a0, $v1
    g_0024c318 = 0;  // Global at 0x0024c318                    // 0x00115b5c: sw $zero, 8($s1)
    g_0024c324 = a0;  // Global at 0x0024c324                   // 0x00115b60: sw $a0, 0x14($s1)
    a2 = 0x210;                                                 // 0x00115b64: addiu $a2, $zero, 0x210
    g_0024c320 = v0;  // Global at 0x0024c320                   // 0x00115b68: sw $v0, 0x10($s1)
    a1 = 0x45;                                                  // 0x00115b6c: addiu $a1, $zero, 0x45
    v1 = 0x48;                                                  // 0x00115b70: addiu $v1, $zero, 0x48
    a0 = 0x100;                                                 // 0x00115b74: addiu $a0, $zero, 0x100
    g_0024c344 = a2;  // Global at 0x0024c344                   // 0x00115b78: sh $a2, 4($v0)
    g_0024c346 = a1;  // Global at 0x0024c346                   // 0x00115b7c: sb $a1, 6($v0)
    g_0024c347 = v1;  // Global at 0x0024c347                   // 0x00115b80: sb $v1, 7($v0)
    g_0024c348 = 0;  // Global at 0x0024c348                    // 0x00115b84: sw $zero, 8($v0)
    func_00115668();  // 115668                                // 0x00115b88: jal 0x115668
    g_0024c342 = 0;  // Global at 0x0024c342                    // 0x00115b8c: sh $zero, 2($v0)
    g_0024c328 = v0;  // Global at 0x0024c328                   // 0x00115b90: sw $v0, 0x18($s1)
    v0 = 1;                                                     // 0x00115b94: addiu $v0, $zero, 1
label_0x115b98:
    return;                                                     // 0x00115ba4: jr $ra
    sp = sp + 0x30;                                             // 0x00115ba8: addiu $sp, $sp, 0x30
}