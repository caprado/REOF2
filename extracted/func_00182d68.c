void func_00182d68() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0xb0;                                            // 0x00182d68: addiu $sp, $sp, -0xb0
    v0 = 0x898;                                                 // 0x00182d6c: addiu $v0, $zero, 0x898
    v1 = 0x27 << 16;                                            // 0x00182d74: lui $v1, 0x27
    a0 = 0x184;                                                 // 0x00182d84: addiu $a0, $zero, 0x184
    v0 = 0x21 << 16;                                            // 0x00182d9c: lui $v0, 0x21
    v0 = v0 + 0x6018;                                           // 0x00182da4: addiu $v0, $v0, 0x6018
    s7 = v1 + 0x7b58;                                           // 0x00182dac: addiu $s7, $v1, 0x7b58
    s3 = a0 + v0;                                               // 0x00182db4: addu $s3, $a0, $v0
    fp = s6 + s7;                                               // 0x00182dbc: addu $fp, $s6, $s7
    *(uint32_t*)(s1) = 0;                                       // 0x00182dc4: sw $zero, 0($s1)
    local_0 = s6;                                               // 0x00182dc8: sw $s6, 0($sp)
    v1 = *(int32_t*)((s3) + 0x170);                             // 0x00182dcc: lw $v1, 0x170($s3)
label_0x182dd0:
    s0 = *(int32_t*)(fp);                                       // 0x00182dd0: lw $s0, 0($fp)
    v0 = (s0 < v1) ? 1 : 0;                                     // 0x00182dd4: slt $v0, $s0, $v1
    if (v0 == 0) goto label_0x182e40;                           // 0x00182dd8: beqz $v0, 0x182e40
    v0 = local_0;                                               // 0x00182ddc: lw $v0, 0($sp)
    v1 = 0x27 << 16;                                            // 0x00182de0: lui $v1, 0x27
    v1 = v1 + 0x7b58;                                           // 0x00182de4: addiu $v1, $v1, 0x7b58
    s4 = 0x8000 << 16;                                          // 0x00182de8: lui $s4, 0x8000
    s2 = v0 + v1;                                               // 0x00182dec: addu $s2, $v0, $v1
    /* nop */                                                   // 0x00182df4: nop 
label_0x182df8:
    func_00182b88();  // 0x182a70                                // 0x00182dfc: jal 0x182a70
    v0 = *(int32_t*)(s1);                                       // 0x00182e08: lw $v0, 0($s1)
    if (v0 != 0) goto label_0x182e64;                           // 0x00182e0c: bnez $v0, 0x182e64
    v0 = v1 & s4;                                               // 0x00182e14: and $v0, $v1, $s4
    /* bnezl $v0, 0x182e30 */                                   // 0x00182e18: bnezl $v0, 0x182e30
    v1 = *(int32_t*)((s3) + 0x170);                             // 0x00182e1c: lw $v1, 0x170($s3)
    *(uint32_t*)(s1) = 0;                                       // 0x00182e20: sw $zero, 0($s1)
    goto label_0x182e64;                                        // 0x00182e28: b 0x182e64
    *(uint32_t*)(s2) = s0;                                      // 0x00182e2c: sw $s0, 0($s2)
    s0 = s0 + 1;                                                // 0x00182e30: addiu $s0, $s0, 1
    v0 = (s0 < v1) ? 1 : 0;                                     // 0x00182e34: slt $v0, $s0, $v1
    if (v0 != 0) goto label_0x182df8;                           // 0x00182e38: bnez $v0, 0x182df8
label_0x182e40:
    a0 = s6 + s7;                                               // 0x00182e40: addu $a0, $s6, $s7
    v0 = *(int32_t*)(a0);                                       // 0x00182e44: lw $v0, 0($a0)
    if (v0 == 0) goto label_0x182e58;                           // 0x00182e48: beqz $v0, 0x182e58
    goto label_0x182dd0;                                        // 0x00182e50: b 0x182dd0
    *(uint32_t*)(a0) = 0;                                       // 0x00182e54: sw $zero, 0($a0)
label_0x182e58:
    v1 = 0x8101 << 16;                                          // 0x00182e58: lui $v1, 0x8101
    v1 = v1 | 0x1c;                                             // 0x00182e5c: ori $v1, $v1, 0x1c
    *(uint32_t*)(s1) = v1;                                      // 0x00182e60: sw $v1, 0($s1)
label_0x182e64:
    return;                                                     // 0x00182e8c: jr $ra
    sp = sp + 0xb0;                                             // 0x00182e90: addiu $sp, $sp, 0xb0
}