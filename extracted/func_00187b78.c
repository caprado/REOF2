void func_00187b78() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    v1 = 0x24;                                                  // 0x00187b78: addiu $v1, $zero, 0x24
    v0 = 0x28 << 16;                                            // 0x00187b7c: lui $v0, 0x28
    sp = sp + -0x70;                                            // 0x00187b84: addiu $sp, $sp, -0x70
    v0 = v0 + -0x2fb8;                                          // 0x00187b88: addiu $v0, $v0, -0x2fb8
    v0 = v0 + 4;                                                // 0x00187b94: addiu $v0, $v0, 4
    s1 = a0 + v0;                                               // 0x00187ba0: addu $s1, $a0, $v0
    func_00188ec0();  // 0x188dc8                                // 0x00187bac: jal 0x188dc8
    a0 = *(int32_t*)(s1);                                       // 0x00187bb0: lw $a0, 0($s1)
    v1 = 3;                                                     // 0x00187bb4: addiu $v1, $zero, 3
    if (v0 != v1) goto label_0x187bc8;                          // 0x00187bb8: bne $v0, $v1, 0x187bc8
    s3 = 0x28 << 16;                                            // 0x00187bbc: lui $s3, 0x28
    goto label_0x187c30;                                        // 0x00187bc0: b 0x187c30
label_0x187bc8:
    v1 = 0x2080;                                                // 0x00187bc8: addiu $v1, $zero, 0x2080
    v0 = s3 + -0x2f40;                                          // 0x00187bcc: addiu $v0, $s3, -0x2f40
    a0 = 0x28 << 16;                                            // 0x00187bd0: lui $a0, 0x28
    g_0027d0d8 = 0;  // Global at 0x0027d0d8                    // 0x00187bd4: sw $zero, 0x18($v0)
    a0 = a0 + -0xec0;                                           // 0x00187bd8: addiu $a0, $a0, -0xec0
    local_0 = v1;                                               // 0x00187bdc: sw $v1, 0($sp)
    g_0027d0d4 = 0;  // Global at 0x0027d0d4                    // 0x00187be4: sw $zero, 0x14($v0)
    func_00107d30();  // 0x107c70                                // 0x00187be8: jal 0x107c70
    a2 = 0x100;                                                 // 0x00187bec: addiu $a2, $zero, 0x100
    s0 = 0x21 << 16;                                            // 0x00187bf0: lui $s0, 0x21
    v0 = 0xd;                                                   // 0x00187bf4: addiu $v0, $zero, 0xd
    s4 = 0x18 << 16;                                            // 0x00187bf8: lui $s4, 0x18
    g_00216324 = v0;  // Global at 0x00216324                   // 0x00187bfc: sw $v0, 0x6324($s0)
    s2 = 1;                                                     // 0x00187c00: addiu $s2, $zero, 1
    a0 = *(int32_t*)(s1);                                       // 0x00187c04: lw $a0, 0($s1)
label_0x187c08:
    a1 = g_00216324;  // Global at 0x00216324                   // 0x00187c0c: lw $a1, 0x6324($s0)
    a3 = s3 + -0x2f40;                                          // 0x00187c10: addiu $a3, $s3, -0x2f40
    func_001895d8();  // 0x189470                                // 0x00187c14: jal 0x189470
    t0 = s4 + 0x7700;                                           // 0x00187c18: addiu $t0, $s4, 0x7700
    if (v0 != s2) goto label_0x187c08;                          // 0x00187c1c: bnel $v0, $s2, 0x187c08
    a0 = *(int32_t*)(s1);                                       // 0x00187c20: lw $a0, 0($s1)
    func_001876a8();  // 0x1875d8                                // 0x00187c24: jal 0x1875d8
    /* nop */                                                   // 0x00187c28: nop 
    v0 = g_0027d0c8;  // Global at 0x0027d0c8                   // 0x00187c2c: lw $v0, 8($v0)
label_0x187c30:
    return;                                                     // 0x00187c48: jr $ra
    sp = sp + 0x70;                                             // 0x00187c4c: addiu $sp, $sp, 0x70
}