void func_001258f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4, local_60, local_68, local_70;
    
    sp = sp + -0x60;                                            // 0x001258f0: addiu $sp, $sp, -0x60
    s1 = 0x1f << 16;                                            // 0x00125900: lui $s1, 0x1f
    local_0 = a3;                                               // 0x0012593c: sw $a3, 0($sp)
    local_4 = t3;                                               // 0x00125940: sw $t3, 4($sp)
    /* nop */                                                   // 0x00125944: nop 
    v0 = (s0 < s2) ? 1 : 0;                                     // 0x00125948: slt $v0, $s0, $s2
    if (v0 == 0) goto label_0x125968;                           // 0x0012594c: beqz $v0, 0x125968
    a1 = g_001f2d98;  // Global at 0x001f2d98                   // 0x00125950: lw $a1, 0x2d98($s1)
    a0 = s3 + s0;                                               // 0x00125954: addu $a0, $s3, $s0
    func_00107ab8();  // 0x107a20                                // 0x00125958: jal 0x107a20
    a2 = 4;                                                     // 0x0012595c: addiu $a2, $zero, 4
    /* bnezl $v0, 0x125948 */                                   // 0x00125960: bnezl $v0, 0x125948
    s0 = s0 + 1;                                                // 0x00125964: addiu $s0, $s0, 1
label_0x125968:
    if (s0 == s2) goto label_0x125af0;                          // 0x00125968: beq $s0, $s2, 0x125af0
    v0 = -1;                                                    // 0x0012596c: addiu $v0, $zero, -1
    v1 = s0 & 3;                                                // 0x00125970: andi $v1, $s0, 3
    /* bnezl $v1, 0x125af4 */                                   // 0x00125974: bnezl $v1, 0x125af4
    a0 = s3 + s0;                                               // 0x0012597c: addu $a0, $s3, $s0
    s1 = a0 + 8;                                                // 0x00125980: addiu $s1, $a0, 8
    v1 = g_001f0000;  // Global at 0x001f0000                   // 0x00125984: lh $v1, 0($s1)
    v1 = (v1 < 2) ? 1 : 0;                                      // 0x00125988: slti $v1, $v1, 2
    /* beqzl $v1, 0x125af4 */                                   // 0x0012598c: beqzl $v1, 0x125af4
    s5 = 0x1f << 16;                                            // 0x00125998: lui $s5, 0x1f
    /* nop */                                                   // 0x0012599c: nop 
    v0 = (s0 < s2) ? 1 : 0;                                     // 0x001259a0: slt $v0, $s0, $s2
    if (v0 == 0) goto label_0x1259c0;                           // 0x001259a4: beqz $v0, 0x1259c0
    a1 = g_001f2d9c;  // Global at 0x001f2d9c                   // 0x001259a8: lw $a1, 0x2d9c($s5)
    a0 = s3 + s0;                                               // 0x001259ac: addu $a0, $s3, $s0
    func_00107ab8();  // 0x107a20                                // 0x001259b0: jal 0x107a20
    a2 = 4;                                                     // 0x001259b4: addiu $a2, $zero, 4
    /* bnezl $v0, 0x1259a0 */                                   // 0x001259b8: bnezl $v0, 0x1259a0
    s0 = s0 + 1;                                                // 0x001259bc: addiu $s0, $s0, 1
label_0x1259c0:
    if (s0 == s2) goto label_0x125af0;                          // 0x001259c0: beq $s0, $s2, 0x125af0
    v0 = -1;                                                    // 0x001259c4: addiu $v0, $zero, -1
    v0 = s0 + 8;                                                // 0x001259c8: addiu $v0, $s0, 8
    v1 = s3 + s0;                                               // 0x001259cc: addu $v1, $s3, $s0
    *(uint16_t*)(fp) = v0;                                      // 0x001259d0: sh $v0, 0($fp)
    a0 = -1;                                                    // 0x001259d4: addiu $a0, $zero, -1
    a2 = *(int32_t*)((v1) + 4);                                 // 0x001259d8: lw $a2, 4($v1)
    a3 = 1;                                                     // 0x001259dc: addiu $a3, $zero, 1
    v0 = local_0;                                               // 0x001259e0: lw $v0, 0($sp)
    t0 = 0x10;                                                  // 0x001259e4: addiu $t0, $zero, 0x10
    *(uint8_t*)(v0) = a0;                                       // 0x001259e8: sb $a0, 0($v0)
    v0 = g_001f0004;  // Global at 0x001f0004                   // 0x001259ec: lw $v0, 4($s1)
    a0 = local_4;                                               // 0x001259f0: lw $a0, 4($sp)
    v1 = g_001f0002;  // Global at 0x001f0002                   // 0x001259f4: lbu $v1, 2($s1)
    *(uint32_t*)(a0) = v0;                                      // 0x001259f8: sw $v0, 0($a0)
    *(uint8_t*)(s6) = v1;                                       // 0x001259fc: sb $v1, 0($s6)
    v0 = g_001f000e;  // Global at 0x001f000e                   // 0x00125a00: lbu $v0, 0xe($s1)
    *(uint8_t*)(s4) = v0;                                       // 0x00125a04: sb $v0, 0($s4)
    v1 = g_001f000c;  // Global at 0x001f000c                   // 0x00125a08: lbu $v1, 0xc($s1)
    v0 = v1 << 0x18;                                            // 0x00125a0c: sll $v0, $v1, 0x18
    *(uint8_t*)(s7) = v1;                                       // 0x00125a10: sb $v1, 0($s7)
    v0 = v0 >> 0x18;                                            // 0x00125a14: sra $v0, $v0, 0x18
    /* divide: a2 / v0 -> hi:lo */                              // 0x00125a18: div $zero, $a2, $v0
    /* beqzl $v0, 0x125a24 */                                   // 0x00125a1c: beqzl $v0, 0x125a24
    /* break (trap) */                                          // 0x00125a20: break 0, 7
    v0 = local_60;                                              // 0x00125a24: lw $v0, 0x60($sp)
    /* mflo $v1 */                                              // 0x00125a28
    *(uint32_t*)(v0) = v1;                                      // 0x00125a2c: sw $v1, 0($v0)
    a0 = local_68;                                              // 0x00125a30: lw $a0, 0x68($sp)
    *(uint32_t*)(a0) = a3;                                      // 0x00125a34: sw $a3, 0($a0)
    a1 = *(int8_t*)(s4);                                        // 0x00125a38: lb $a1, 0($s4)
    if (a1 != t0) goto label_0x125a50;                          // 0x00125a3c: bne $a1, $t0, 0x125a50
    v1 = *(uint8_t*)(s4);                                       // 0x00125a40: lbu $v1, 0($s4)
    v0 = local_70;                                              // 0x00125a44: lw $v0, 0x70($sp)
    goto label_0x125ab8;                                        // 0x00125a48: b 0x125ab8
    *(uint16_t*)(v0) = 0;                                       // 0x00125a4c: sh $zero, 0($v0)
label_0x125a50:
    v0 = 8;                                                     // 0x00125a50: addiu $v0, $zero, 8
    if (a1 != v0) goto label_0x125a68;                          // 0x00125a54: bne $a1, $v0, 0x125a68
    v0 = 4;                                                     // 0x00125a58: addiu $v0, $zero, 4
    a0 = local_70;                                              // 0x00125a5c: lw $a0, 0x70($sp)
    goto label_0x125ab8;                                        // 0x00125a60: b 0x125ab8
    *(uint16_t*)(a0) = a3;                                      // 0x00125a64: sh $a3, 0($a0)
label_0x125a68:
    if (a1 != v0) goto label_0x125abc;                          // 0x00125a68: bne $a1, $v0, 0x125abc
    a0 = 2;                                                     // 0x00125a6c: addiu $a0, $zero, 2
    v0 = *(int8_t*)(s6);                                        // 0x00125a70: lb $v0, 0($s6)
    v1 = (unsigned)a2 >> 0x1f;                                  // 0x00125a74: srl $v1, $a2, 0x1f
    v1 = a2 + v1;                                               // 0x00125a78: addu $v1, $a2, $v1
    v0 = v0 << 1;                                               // 0x00125a7c: sll $v0, $v0, 1
    v1 = v1 >> 1;                                               // 0x00125a80: sra $v1, $v1, 1
    *(uint8_t*)(s7) = v0;                                       // 0x00125a84: sb $v0, 0($s7)
    v0 = local_68;                                              // 0x00125a88: lw $v0, 0x68($sp)
    *(uint32_t*)(v0) = a1;                                      // 0x00125a8c: sw $a1, 0($v0)
    v0 = *(int8_t*)(s6);                                        // 0x00125a90: lb $v0, 0($s6)
    /* divide: v1 / v0 -> hi:lo */                              // 0x00125a94: div $zero, $v1, $v0
    /* beqzl $v0, 0x125aa0 */                                   // 0x00125a98: beqzl $v0, 0x125aa0
    /* break (trap) */                                          // 0x00125a9c: break 0, 7
    v0 = local_60;                                              // 0x00125aa0: lw $v0, 0x60($sp)
    /* mflo $v1 */                                              // 0x00125aa4
    *(uint32_t*)(v0) = v1;                                      // 0x00125aa8: sw $v1, 0($v0)
    *(uint8_t*)(s4) = t0;                                       // 0x00125aac: sb $t0, 0($s4)
    v0 = local_70;                                              // 0x00125ab0: lw $v0, 0x70($sp)
    *(uint16_t*)(v0) = a0;                                      // 0x00125ab4: sh $a0, 0($v0)
label_0x125ab8:
    v1 = *(uint8_t*)(s4);                                       // 0x00125ab8: lbu $v1, 0($s4)
label_0x125abc:
    if (v1 == 0) goto label_0x125af0;                           // 0x00125abc: beqz $v1, 0x125af0
    v0 = -1;                                                    // 0x00125ac0: addiu $v0, $zero, -1
    v1 = *(int8_t*)(s7);                                        // 0x00125ac4: lb $v1, 0($s7)
    if (v1 == 0) goto label_0x125af4;                           // 0x00125ac8: beqz $v1, 0x125af4
    v1 = *(uint8_t*)(s6);                                       // 0x00125ad0: lbu $v1, 0($s6)
    v1 = v1 + -1;                                               // 0x00125ad4: addiu $v1, $v1, -1
    v1 = ((unsigned)v1 < (unsigned)2) ? 1 : 0;                  // 0x00125ad8: sltiu $v1, $v1, 2
    if (v1 == 0) goto label_0x125af8;                           // 0x00125adc: beqz $v1, 0x125af8
    a0 = local_4;                                               // 0x00125ae4: lw $a0, 4($sp)
    v1 = *(int32_t*)(a0);                                       // 0x00125ae8: lw $v1, 0($a0)
    if (v1 != 0) v0 = 0;                                        // 0x00125aec: movn $v0, $zero, $v1
label_0x125af0:
label_0x125af4:
label_0x125af8:
    return;                                                     // 0x00125b18: jr $ra
    sp = sp + 0x60;                                             // 0x00125b1c: addiu $sp, $sp, 0x60
}