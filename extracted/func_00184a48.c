void func_00184a48() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_210, local_214, local_4, local_400, local_404;
    
    sp = sp + -0x4b0;                                           // 0x00184a48: addiu $sp, $sp, -0x4b0
    v0 = -1;                                                    // 0x00184a4c: addiu $v0, $zero, -1
    local_210 = v0;                                             // 0x00184a58: sw $v0, 0x210($sp)
    v0 = ((unsigned)s2 < (unsigned)1) ? 1 : 0;                  // 0x00184a60: sltiu $v0, $s2, 1
    s7 = 0x8101 << 16;                                          // 0x00184a68: lui $s7, 0x8101
    s7 = s7 | 0x6f;                                             // 0x00184a90: ori $s7, $s7, 0x6f
    local_404 = v0;                                             // 0x00184a9c: sw $v0, 0x404($sp)
    local_400 = 0;                                              // 0x00184aa0: sw $zero, 0x400($sp)
    /* nop */                                                   // 0x00184aa4: nop 
label_0x184aa8:
    a1 = 0x28 << 16;                                            // 0x00184aac: lui $a1, 0x28
    a1 = a1 + -0x7c00;                                          // 0x00184ab0: addiu $a1, $a1, -0x7c00
    func_00187390();  // 187390                                // 0x00184ab8: jal 0x187390
    a3 = 1;                                                     // 0x00184abc: addiu $a3, $zero, 1
    if (v0 == 0) goto label_0x184edc;                           // 0x00184ac0: beqz $v0, 0x184edc
    s0 = 0x28 << 16;                                            // 0x00184ac8: lui $s0, 0x28
    s0 = s0 + -0x7c00;                                          // 0x00184acc: addiu $s0, $s0, -0x7c00
    fp = 0x23 << 16;                                            // 0x00184ad0: lui $fp, 0x23
    /* nop */                                                   // 0x00184ad4: nop 
label_0x184ad8:
    v0 = g_00278400;  // Global at 0x00278400                   // 0x00184ad8: lhu $v0, 0($s0)
    v0 = v0 & 0x8000;                                           // 0x00184adc: andi $v0, $v0, 0x8000
    if (v0 == 0) goto label_0x184bb8;                           // 0x00184ae0: beqz $v0, 0x184bb8
    a0 = s0 + 0x40;                                             // 0x00184ae4: addiu $a0, $s0, 0x40
    func_0010ab20();  // 10ab20                                // 0x00184ae8: jal 0x10ab20
    a1 = fp + -0x60a0;                                          // 0x00184aec: addiu $a1, $fp, -0x60a0
    /* bnezl $v0, 0x184ba4 */                                   // 0x00184af0: bnezl $v0, 0x184ba4
    v0 = g_00278400;  // Global at 0x00278400                   // 0x00184af4: lhu $v0, 0($s0)
    a0 = sp + 0x200;                                            // 0x00184af8: addiu $a0, $sp, 0x200
    v0 = s0 & 7;                                                // 0x00184afc: andi $v0, $s0, 7
    if (v0 == 0) goto label_0x184b68;                           // 0x00184b00: beqz $v0, 0x184b68
    v0 = s0 + 0x200;                                            // 0x00184b08: addiu $v0, $s0, 0x200
label_0x184b0c:
    v1 = v1 + 0x20;                                             // 0x00184b4c: addiu $v1, $v1, 0x20
    a0 = a0 + 0x20;                                             // 0x00184b50: addiu $a0, $a0, 0x20
    /* nop */                                                   // 0x00184b54: nop 
    if (v1 != v0) goto label_0x184b0c;                          // 0x00184b58: bne $v1, $v0, 0x184b0c
    /* nop */                                                   // 0x00184b5c: nop 
    goto label_0x184ba4;                                        // 0x00184b60: b 0x184ba4
    v0 = g_00278400;  // Global at 0x00278400                   // 0x00184b64: lhu $v0, 0($s0)
label_0x184b68:
    v0 = s0 + 0x200;                                            // 0x00184b68: addiu $v0, $s0, 0x200
label_0x184b6c:
    v1 = v1 + 0x20;                                             // 0x00184b8c: addiu $v1, $v1, 0x20
    a0 = a0 + 0x20;                                             // 0x00184b90: addiu $a0, $a0, 0x20
    /* nop */                                                   // 0x00184b94: nop 
    if (v1 != v0) goto label_0x184b6c;                          // 0x00184b98: bne $v1, $v0, 0x184b6c
    /* nop */                                                   // 0x00184b9c: nop 
    v0 = g_00278400;  // Global at 0x00278400                   // 0x00184ba0: lhu $v0, 0($s0)
label_0x184ba4:
    v0 = v0 & 0x8000;                                           // 0x00184ba4: andi $v0, $v0, 0x8000
    /* beqzl $v0, 0x184bbc */                                   // 0x00184ba8: beqzl $v0, 0x184bbc
    if (s3 != 0) goto label_0x184ca4;                           // 0x00184bb0: bnez $s3, 0x184ca4
    t0 = local_400;                                             // 0x00184bb4: lw $t0, 0x400($sp)
label_0x184bb8:
    v0 = s5 | a0;                                               // 0x00184bbc: or $v0, $s5, $a0
    v0 = v0 & 7;                                                // 0x00184bc0: andi $v0, $v0, 7
    if (v0 == 0) goto label_0x184c2c;                           // 0x00184bc4: beqz $v0, 0x184c2c
    v0 = s5 + 0x200;                                            // 0x00184bcc: addiu $v0, $s5, 0x200
label_0x184bd0:
    v1 = v1 + 0x20;                                             // 0x00184c10: addiu $v1, $v1, 0x20
    a0 = a0 + 0x20;                                             // 0x00184c14: addiu $a0, $a0, 0x20
    /* nop */                                                   // 0x00184c18: nop 
    if (v1 != v0) goto label_0x184bd0;                          // 0x00184c1c: bne $v1, $v0, 0x184bd0
    /* nop */                                                   // 0x00184c20: nop 
    goto label_0x184c68;                                        // 0x00184c24: b 0x184c68
    a2 = 0x28 << 16;                                            // 0x00184c28: lui $a2, 0x28
label_0x184c2c:
    v0 = s5 + 0x200;                                            // 0x00184c2c: addiu $v0, $s5, 0x200
label_0x184c30:
    v1 = v1 + 0x20;                                             // 0x00184c50: addiu $v1, $v1, 0x20
    a0 = a0 + 0x20;                                             // 0x00184c54: addiu $a0, $a0, 0x20
    /* nop */                                                   // 0x00184c58: nop 
    if (v1 != v0) goto label_0x184c30;                          // 0x00184c5c: bne $v1, $v0, 0x184c30
    /* nop */                                                   // 0x00184c60: nop 
    a2 = 0x28 << 16;                                            // 0x00184c64: lui $a2, 0x28
label_0x184c68:
    a1 = a2 + -0x7c00;                                          // 0x00184c6c: addiu $a1, $a2, -0x7c00
    a3 = 1;                                                     // 0x00184c70: addiu $a3, $zero, 1
    func_001873b0();  // 1873b0                                // 0x00184c74: jal 0x1873b0
    /* beqzl $v0, 0x184ee0 */                                   // 0x00184c7c: beqzl $v0, 0x184ee0
    *(uint32_t*)(s1) = s7;                                      // 0x00184c80: sw $s7, 0($s1)
    /* bnezl $s3, 0x184eb4 */                                   // 0x00184c84: bnezl $s3, 0x184eb4
    *(uint32_t*)(s1) = 0;                                       // 0x00184c88: sw $zero, 0($s1)
    a2 = local_210;                                             // 0x00184c8c: lw $a2, 0x210($sp)
    a3 = -1;                                                    // 0x00184c90: addiu $a3, $zero, -1
    if (a2 == a3) goto label_0x184ec8;                          // 0x00184c94: beq $a2, $a3, 0x184ec8
    a3 = local_214;                                             // 0x00184c98: lw $a3, 0x214($sp)
    goto label_0x184e78;                                        // 0x00184c9c: b 0x184e78
label_0x184ca4:
    v0 = (0 < s3) ? 1 : 0;                                      // 0x00184ca4: slt $v0, $zero, $s3
    s6 = s6 + 1;                                                // 0x00184ca8: addiu $s6, $s6, 1
    s3 = s3 - v0;                                               // 0x00184cac: subu $s3, $s3, $v0
    t0 = t0 + 1;                                                // 0x00184cb0: addiu $t0, $t0, 1
    s0 = s0 + 0x200;                                            // 0x00184cb4: addiu $s0, $s0, 0x200
    v0 = (s6 < 2) ? 1 : 0;                                      // 0x00184cb8: slti $v0, $s6, 2
    if (v0 != 0) goto label_0x184ad8;                           // 0x00184cbc: bnez $v0, 0x184ad8
    local_400 = t0;                                             // 0x00184cc0: sw $t0, 0x400($sp)
    t1 = local_404;                                             // 0x00184cc4: lw $t1, 0x404($sp)
    if (t1 != 0) goto label_0x184cf0;                           // 0x00184cc8: bnez $t1, 0x184cf0
    v0 = (t0 < 0x14) ? 1 : 0;                                   // 0x00184cd0: slti $v0, $t0, 0x14
    if (v0 != 0) goto label_0x184cf4;                           // 0x00184cd4: bnez $v0, 0x184cf4
    v1 = 0x8101 << 16;                                          // 0x00184cdc: lui $v1, 0x8101
    v0 = -1;                                                    // 0x00184ce0: addiu $v0, $zero, -1
    v1 = v1 | 0x17;                                             // 0x00184ce4: ori $v1, $v1, 0x17
    goto label_0x184ee4;                                        // 0x00184ce8: b 0x184ee4
    *(uint32_t*)(s1) = v1;                                      // 0x00184cec: sw $v1, 0($s1)
label_0x184cf0:
label_0x184cf4:
    func_00182b88();  // 182b88                                // 0x00184cf8: jal 0x182b88
    v1 = *(int32_t*)(s1);                                       // 0x00184d00: lw $v1, 0($s1)
    if (v1 != 0) goto label_0x184ee4;                           // 0x00184d08: bnez $v1, 0x184ee4
    v0 = -1;                                                    // 0x00184d0c: addiu $v0, $zero, -1
    v0 = 0xffff << 16;                                          // 0x00184d10: lui $v0, 0xffff
    v0 = v0 | 0xffff;                                           // 0x00184d14: ori $v0, $v0, 0xffff
    if (s2 != v0) goto label_0x184ebc;                          // 0x00184d18: bne $s2, $v0, 0x184ebc
    v0 = 0x7fff << 16;                                          // 0x00184d1c: lui $v0, 0x7fff
    func_00182d68();  // 182d68                                // 0x00184d24: jal 0x182d68
    v1 = *(int32_t*)(s1);                                       // 0x00184d2c: lw $v1, 0($s1)
    if (v1 != 0) goto label_0x184ee0;                           // 0x00184d30: bnez $v1, 0x184ee0
    a2 = 0x8000 << 16;                                          // 0x00184d38: lui $a2, 0x8000
    a2 = s2 | a2;                                               // 0x00184d40: or $a2, $s2, $a2
    func_00182c38();  // 182c38                                // 0x00184d48: jal 0x182c38
    v1 = *(int32_t*)(s1);                                       // 0x00184d50: lw $v1, 0($s1)
    if (v1 != 0) goto label_0x184ee4;                           // 0x00184d54: bnez $v1, 0x184ee4
    v0 = -1;                                                    // 0x00184d58: addiu $v0, $zero, -1
    a2 = -1;                                                    // 0x00184d64: addiu $a2, $zero, -1
    func_00182c38();  // 182c38                                // 0x00184d68: jal 0x182c38
    v1 = *(int32_t*)(s1);                                       // 0x00184d70: lw $v1, 0($s1)
    if (v1 != 0) goto label_0x184ee4;                           // 0x00184d74: bnez $v1, 0x184ee4
    v0 = -1;                                                    // 0x00184d78: addiu $v0, $zero, -1
    v0 = 0x28 << 16;                                            // 0x00184d7c: lui $v0, 0x28
    s0 = v0 + -0x7c00;                                          // 0x00184d84: addiu $s0, $v0, -0x7c00
    v0 = a1 | s0;                                               // 0x00184d88: or $v0, $a1, $s0
    v0 = v0 & 7;                                                // 0x00184d8c: andi $v0, $v0, 7
    if (v0 == 0) goto label_0x184dfc;                           // 0x00184d90: beqz $v0, 0x184dfc
    v0 = s0 + 0x200;                                            // 0x00184d98: addiu $v0, $s0, 0x200
    v1 = a1 + 0x200;                                            // 0x00184d9c: addiu $v1, $a1, 0x200
label_0x184da0:
    a1 = a1 + 0x20;                                             // 0x00184de0: addiu $a1, $a1, 0x20
    a2 = a2 + 0x20;                                             // 0x00184de4: addiu $a2, $a2, 0x20
    /* nop */                                                   // 0x00184de8: nop 
    if (a1 != v1) goto label_0x184da0;                          // 0x00184dec: bne $a1, $v1, 0x184da0
    /* nop */                                                   // 0x00184df0: nop 
    goto label_0x184e3c;                                        // 0x00184df4: b 0x184e3c
    g_00278600 = 0;  // Global at 0x00278600                    // 0x00184df8: sh $zero, 0($v0)
label_0x184dfc:
    v0 = s0 + 0x200;                                            // 0x00184dfc: addiu $v0, $s0, 0x200
    v1 = a1 + 0x200;                                            // 0x00184e00: addiu $v1, $a1, 0x200
label_0x184e04:
    a1 = a1 + 0x20;                                             // 0x00184e24: addiu $a1, $a1, 0x20
    a2 = a2 + 0x20;                                             // 0x00184e28: addiu $a2, $a2, 0x20
    /* nop */                                                   // 0x00184e2c: nop 
    if (a1 != v1) goto label_0x184e04;                          // 0x00184e30: bne $a1, $v1, 0x184e04
    /* nop */                                                   // 0x00184e34: nop 
    g_00278600 = 0;  // Global at 0x00278600                    // 0x00184e38: sh $zero, 0($v0)
label_0x184e3c:
    v0 = 0x28 << 16;                                            // 0x00184e40: lui $v0, 0x28
    a1 = v0 + -0x7c00;                                          // 0x00184e48: addiu $a1, $v0, -0x7c00
    func_001873b0();  // 1873b0                                // 0x00184e4c: jal 0x1873b0
    a3 = 1;                                                     // 0x00184e50: addiu $a3, $zero, 1
    if (v0 == 0) goto label_0x184edc;                           // 0x00184e54: beqz $v0, 0x184edc
    a2 = local_210;                                             // 0x00184e58: lw $a2, 0x210($sp)
    v1 = -1;                                                    // 0x00184e5c: addiu $v1, $zero, -1
    if (a2 != v1) goto label_0x184e74;                          // 0x00184e60: bne $a2, $v1, 0x184e74
    a3 = local_214;                                             // 0x00184e64: lw $a3, 0x214($sp)
    v0 = 0x8101 << 16;                                          // 0x00184e68: lui $v0, 0x8101
    goto label_0x184ee4;                                        // 0x00184e6c: b 0x184ee4
    v0 = v0 | 0x9002;                                           // 0x00184e70: ori $v0, $v0, 0x9002
label_0x184e74:
label_0x184e78:
    func_00182f70();  // 182f70                                // 0x00184e78: jal 0x182f70
    if (v0 != 0) goto label_0x184ee0;                           // 0x00184e80: bnez $v0, 0x184ee0
    *(uint32_t*)(s1) = v0;                                      // 0x00184e84: sw $v0, 0($s1)
    v0 = local_4;                                               // 0x00184e88: lw $v0, 4($sp)
    a2 = local_210;                                             // 0x00184e90: lw $a2, 0x210($sp)
    v0 = v0 + 1;                                                // 0x00184e98: addiu $v0, $v0, 1
    a3 = local_214;                                             // 0x00184e9c: lw $a3, 0x214($sp)
    func_00184770();  // 184770                                // 0x00184ea0: jal 0x184770
    local_4 = v0;                                               // 0x00184ea4: sw $v0, 4($sp)
    if (v0 != 0) goto label_0x184ee0;                           // 0x00184ea8: bnez $v0, 0x184ee0
    *(uint32_t*)(s1) = v0;                                      // 0x00184eac: sw $v0, 0($s1)
    *(uint32_t*)(s1) = 0;                                       // 0x00184eb0: sw $zero, 0($s1)
    goto label_0x184ee4;                                        // 0x00184eb4: b 0x184ee4
    v0 = local_400;                                             // 0x00184eb8: lw $v0, 0x400($sp)
label_0x184ebc:
    v0 = v0 | 0xffff;                                           // 0x00184ebc: ori $v0, $v0, 0xffff
    goto label_0x184aa8;                                        // 0x00184ec0: b 0x184aa8
    s2 = s2 & v0;                                               // 0x00184ec4: and $s2, $s2, $v0
label_0x184ec8:
    v1 = 0x8101 << 16;                                          // 0x00184ec8: lui $v1, 0x8101
    v0 = -1;                                                    // 0x00184ecc: addiu $v0, $zero, -1
    v1 = v1 | 0x9002;                                           // 0x00184ed0: ori $v1, $v1, 0x9002
    goto label_0x184ee4;                                        // 0x00184ed4: b 0x184ee4
    *(uint32_t*)(s1) = v1;                                      // 0x00184ed8: sw $v1, 0($s1)
label_0x184edc:
    *(uint32_t*)(s1) = s7;                                      // 0x00184edc: sw $s7, 0($s1)
label_0x184ee0:
    v0 = -1;                                                    // 0x00184ee0: addiu $v0, $zero, -1
label_0x184ee4:
    return;                                                     // 0x00184f0c: jr $ra
    sp = sp + 0x4b0;                                            // 0x00184f10: addiu $sp, $sp, 0x4b0
}