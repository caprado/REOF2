void func_0013bd60() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4;
    
    sp = sp + -0x60;                                            // 0x0013bd60: addiu $sp, $sp, -0x60
    local_0 = a0;                                               // 0x0013bda0: sw $a0, 0($sp)
    v0 = *(int8_t*)(s3);                                        // 0x0013bda4: lb $v0, 0($s3)
    if (v0 == 0) goto label_0x13bea0;                           // 0x0013bda8: beqz $v0, 0x13bea0
    v0 = s5 << 3;                                               // 0x0013bdb0: sll $v0, $s5, 3
    local_4 = v0;                                               // 0x0013bdb8: sw $v0, 4($sp)
    s7 = 0xa;                                                   // 0x0013bdbc: addiu $s7, $zero, 0xa
    s6 = 0xd;                                                   // 0x0013bdc0: addiu $s6, $zero, 0xd
    v0 = *(int8_t*)(a0);                                        // 0x0013bdc4: lb $v0, 0($a0)
    a2 = 0x5c;                                                  // 0x0013bdc8: addiu $a2, $zero, 0x5c
    if (v0 != a2) goto label_0x13bde0;                          // 0x0013bdcc: bne $v0, $a2, 0x13bde0
    v1 = *(uint8_t*)(a0);                                       // 0x0013bdd0: lbu $v1, 0($a0)
    v0 = 0x2f;                                                  // 0x0013bdd4: addiu $v0, $zero, 0x2f
    v1 = 0x2f;                                                  // 0x0013bdd8: addiu $v1, $zero, 0x2f
    *(uint8_t*)(a0) = v0;                                       // 0x0013bddc: sb $v0, 0($a0)
label_0x13bde0:
    v0 = v1 << 0x18;                                            // 0x0013bde0: sll $v0, $v1, 0x18
    v0 = v0 >> 0x18;                                            // 0x0013bde4: sra $v0, $v0, 0x18
    if (v0 == s7) goto label_0x13be04;                          // 0x0013bde8: beql $v0, $s7, 0x13be04
    v0 = *(int8_t*)((a0) + 1);                                  // 0x0013bdec: lb $v0, 1($a0)
    if (v0 == s6) goto label_0x13be04;                          // 0x0013bdf0: beql $v0, $s6, 0x13be04
    v0 = *(int8_t*)((a0) + 1);                                  // 0x0013bdf4: lb $v0, 1($a0)
    if (v0 != 0) goto label_0x13be88;                           // 0x0013bdf8: bnez $v0, 0x13be88
    v1 = s2 + 1;                                                // 0x0013bdfc: addiu $v1, $s2, 1
    v0 = *(int8_t*)((a0) + 1);                                  // 0x0013be00: lb $v0, 1($a0)
label_0x13be04:
    if (v0 == s7) goto label_0x13be20;                          // 0x0013be04: beql $v0, $s7, 0x13be20
    s2 = s2 + 1;                                                // 0x0013be08: addiu $s2, $s2, 1
    if (v0 == s6) goto label_0x13be20;                          // 0x0013be0c: beql $v0, $s6, 0x13be20
    s2 = s2 + 1;                                                // 0x0013be10: addiu $s2, $s2, 1
    if (v0 != 0) goto label_0x13be28;                           // 0x0013be14: bnez $v0, 0x13be28
    v0 = a0 + -1;                                               // 0x0013be18: addiu $v0, $a0, -1
    s2 = s2 + 1;                                                // 0x0013be1c: addiu $s2, $s2, 1
label_0x13be20:
    a0 = s3 + s2;                                               // 0x0013be20: addu $a0, $s3, $s2
    v0 = a0 + -1;                                               // 0x0013be24: addiu $v0, $a0, -1
label_0x13be28:
    v1 = g_00204490;  // Global at 0x00204490                   // 0x0013be28: lb $v1, 0($v0)
    if (v1 == s7) goto label_0x13be3c;                          // 0x0013be2c: beq $v1, $s7, 0x13be3c
    s1 = s2 - a1;                                               // 0x0013be30: subu $s1, $s2, $a1
    if (v1 != s6) goto label_0x13be44;                          // 0x0013be34: bnel $v1, $s6, 0x13be44
    /* multiply: fp * s4 -> hi:lo */                            // 0x0013be38: mult $ac2, $fp, $s4
label_0x13be3c:
    g_00204490 = 0;  // Global at 0x00204490                    // 0x0013be3c: sb $zero, 0($v0)
    /* multiply: fp * s4 -> hi:lo */                            // 0x0013be40: mult $ac2, $fp, $s4
label_0x13be44:
    v1 = local_4;                                               // 0x0013be44: lw $v1, 4($sp)
    a1 = s3 + a1;                                               // 0x0013be4c: addu $a1, $s3, $a1
    s0 = v0 + s4;                                               // 0x0013be50: addu $s0, $v0, $s4
    v0 = local_0;                                               // 0x0013be54: lw $v0, 0($sp)
    s0 = v1 + s0;                                               // 0x0013be58: addu $s0, $v1, $s0
    s0 = v0 + s0;                                               // 0x0013be5c: addu $s0, $v0, $s0
    func_00107b68();  // 0x107ab8                                // 0x0013be60: jal 0x107ab8
    a2 = s0 + s1;                                               // 0x0013be68: addu $a2, $s0, $s1
    v0 = *(int8_t*)((a2) + -1);                                 // 0x0013be6c: lb $v0, -1($a2)
    /* bnezl $v0, 0x13be78 */                                   // 0x0013be70: bnezl $v0, 0x13be78
    *(uint8_t*)(a2) = 0;                                        // 0x0013be74: sb $zero, 0($a2)
    v1 = s2 + 1;                                                // 0x0013be78: addiu $v1, $s2, 1
    s4 = s4 + 1;                                                // 0x0013be7c: addiu $s4, $s4, 1
    if (s4 == s5) goto label_0x13bea0;                          // 0x0013be80: beq $s4, $s5, 0x13bea0
label_0x13be88:
    v0 = s3 + s2;                                               // 0x0013be8c: addu $v0, $s3, $s2
    v1 = *(int8_t*)(a0);                                        // 0x0013be94: lb $v1, 0($a0)
    /* bnezl $v1, 0x13bdc8 */                                   // 0x0013be98: bnezl $v1, 0x13bdc8
    v0 = *(int8_t*)(a0);                                        // 0x0013be9c: lb $v0, 0($a0)
label_0x13bea0:
    v0 = 0x20 << 16;                                            // 0x0013bea0: lui $v0, 0x20
    v0 = v0 + 0x4490;                                           // 0x0013bea4: addiu $v0, $v0, 0x4490
    v1 = g_00204490;  // Global at 0x00204490                   // 0x0013bea8: lw $v1, 0($v0)
    /* bnezl $v1, 0x13becc */                                   // 0x0013beac: bnezl $v1, 0x13becc
    g_0020449c = fp;  // Global at 0x0020449c                   // 0x0013beb4: sw $fp, 0xc($v0)
    v1 = local_0;                                               // 0x0013beb8: lw $v1, 0($sp)
    g_00204498 = s5;  // Global at 0x00204498                   // 0x0013bebc: sw $s5, 8($v0)
    g_00204490 = v1;  // Global at 0x00204490                   // 0x0013bec0: sw $v1, 0($v0)
    g_00204494 = s4;  // Global at 0x00204494                   // 0x0013bec4: sw $s4, 4($v0)
    return;                                                     // 0x0013bef4: jr $ra
    sp = sp + 0x60;                                             // 0x0013bef8: addiu $sp, $sp, 0x60
}