void func_00187c50() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    v1 = 0x24;                                                  // 0x00187c50: addiu $v1, $zero, 0x24
    v0 = 0x28 << 16;                                            // 0x00187c54: lui $v0, 0x28
    sp = sp + -0x70;                                            // 0x00187c5c: addiu $sp, $sp, -0x70
    v0 = v0 + -0x2fb8;                                          // 0x00187c60: addiu $v0, $v0, -0x2fb8
    v0 = v0 + 4;                                                // 0x00187c6c: addiu $v0, $v0, 4
    s2 = a0 + v0;                                               // 0x00187c78: addu $s2, $a0, $v0
    func_00188ec0();  // 0x188dc8                                // 0x00187c84: jal 0x188dc8
    a0 = *(int32_t*)(s2);                                       // 0x00187c88: lw $a0, 0($s2)
    v1 = 3;                                                     // 0x00187c8c: addiu $v1, $zero, 3
    if (v0 != v1) goto label_0x187ca0;                          // 0x00187c90: bne $v0, $v1, 0x187ca0
    s3 = 0x28 << 16;                                            // 0x00187c94: lui $s3, 0x28
    goto label_0x187d1c;                                        // 0x00187c98: b 0x187d1c
label_0x187ca0:
    v0 = 0x2080;                                                // 0x00187ca0: addiu $v0, $zero, 0x2080
    v1 = s3 + -0x2f40;                                          // 0x00187ca4: addiu $v1, $s3, -0x2f40
    s0 = 0x28 << 16;                                            // 0x00187ca8: lui $s0, 0x28
    g_0027d0d8 = 0;  // Global at 0x0027d0d8                    // 0x00187cac: sw $zero, 0x18($v1)
    s0 = s0 + -0xec0;                                           // 0x00187cb0: addiu $s0, $s0, -0xec0
    local_0 = v0;                                               // 0x00187cb4: sw $v0, 0($sp)
    g_0027d0d4 = 0;  // Global at 0x0027d0d4                    // 0x00187cbc: sw $zero, 0x14($v1)
    a2 = 0x100;                                                 // 0x00187cc4: addiu $a2, $zero, 0x100
    func_00107d30();  // 0x107c70                                // 0x00187cc8: jal 0x107c70
    s1 = 0x21 << 16;                                            // 0x00187ccc: lui $s1, 0x21
    s4 = 0x18 << 16;                                            // 0x00187cd0: lui $s4, 0x18
    a1 = a0 + 0xff;                                             // 0x00187cd8: addiu $a1, $a0, 0xff
    func_00114c70();  // 0x114bd8                                // 0x00187cdc: jal 0x114bd8
    s0 = 1;                                                     // 0x00187ce0: addiu $s0, $zero, 1
    v0 = 0xc;                                                   // 0x00187ce4: addiu $v0, $zero, 0xc
    g_00216324 = v0;  // Global at 0x00216324                   // 0x00187ce8: sw $v0, 0x6324($s1)
    a0 = *(int32_t*)(s2);                                       // 0x00187cec: lw $a0, 0($s2)
label_0x187cf0:
    a1 = g_00216324;  // Global at 0x00216324                   // 0x00187cf4: lw $a1, 0x6324($s1)
    a3 = s3 + -0x2f40;                                          // 0x00187cf8: addiu $a3, $s3, -0x2f40
    func_001895d8();  // 0x189470                                // 0x00187cfc: jal 0x189470
    t0 = s4 + 0x7700;                                           // 0x00187d00: addiu $t0, $s4, 0x7700
    if (v0 != s0) goto label_0x187cf0;                          // 0x00187d04: bnel $v0, $s0, 0x187cf0
    a0 = *(int32_t*)(s2);                                       // 0x00187d08: lw $a0, 0($s2)
    func_001876a8();  // 0x1875d8                                // 0x00187d0c: jal 0x1875d8
    /* nop */                                                   // 0x00187d10: nop 
    v0 = g_0027d054;  // Global at 0x0027d054                   // 0x00187d14: lw $v0, 8($v0)
    v0 = ((unsigned)0 < (unsigned)v0) ? 1 : 0;                  // 0x00187d18: sltu $v0, $zero, $v0
label_0x187d1c:
    return;                                                     // 0x00187d34: jr $ra
    sp = sp + 0x70;                                             // 0x00187d38: addiu $sp, $sp, 0x70
}