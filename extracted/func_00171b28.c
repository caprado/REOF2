void func_00171b28() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_1, local_2, local_3, local_4, local_5;
    
    sp = sp + -0x30;                                            // 0x00171b28: addiu $sp, $sp, -0x30
    v1 = *(int32_t*)((a0) + 0x1b30);                            // 0x00171b48: lw $v1, 0x1b30($a0)
    s0 = v1 + 0x9d8;                                            // 0x00171b4c: addiu $s0, $v1, 0x9d8
    v1 = *(int32_t*)((s0) + 4);                                 // 0x00171b50: lw $v1, 4($s0)
    v0 = *(int32_t*)((s0) + 0xc);                               // 0x00171b54: lw $v0, 0xc($s0)
    a0 = *(int32_t*)((s0) + 8);                                 // 0x00171b58: lw $a0, 8($s0)
    a1 = *(uint8_t*)((s0) + 0x10);                              // 0x00171b5c: lbu $a1, 0x10($s0)
    v0 = v0 + v1;                                               // 0x00171b60: addu $v0, $v0, $v1
    *(uint32_t*)((s0) + 0xc) = v0;                              // 0x00171b64: sw $v0, 0xc($s0)
    *(uint32_t*)((s0) + 4) = a0;                                // 0x00171b68: sw $a0, 4($s0)
    *(uint32_t*)((s0) + 8) = 0;                                 // 0x00171b6c: sw $zero, 8($s0)
    local_0 = a1;                                               // 0x00171b70: sb $a1, 0($sp)
    v0 = *(uint8_t*)((s0) + 0x11);                              // 0x00171b74: lbu $v0, 0x11($s0)
    local_1 = v0;                                               // 0x00171b78: sb $v0, 1($sp)
    v1 = *(uint8_t*)((s0) + 0x12);                              // 0x00171b7c: lbu $v1, 0x12($s0)
    local_2 = v1;                                               // 0x00171b80: sb $v1, 2($sp)
    v0 = *(uint8_t*)(s2);                                       // 0x00171b84: lbu $v0, 0($s2)
    local_3 = v0;                                               // 0x00171b88: sb $v0, 3($sp)
    v1 = *(uint8_t*)((s2) + 1);                                 // 0x00171b8c: lbu $v1, 1($s2)
    local_4 = v1;                                               // 0x00171b90: sb $v1, 4($sp)
    v0 = *(uint8_t*)((s2) + 2);                                 // 0x00171b94: lbu $v0, 2($s2)
    local_5 = v0;                                               // 0x00171b98: sb $v0, 5($sp)
    goto label_0x171bfc;                                        // 0x00171b9c: b 0x171bfc
    a3 = (s1 < 4) ? 1 : 0;                                      // 0x00171ba0: slti $a3, $s1, 4
    /* nop */                                                   // 0x00171ba4: nop 
label_0x171ba8:
    v1 = *(uint8_t*)(v0);                                       // 0x00171ba8: lbu $v1, 0($v0)
    if (v1 != 0) goto label_0x171bf8;                           // 0x00171bac: bnez $v1, 0x171bf8
    a1 = a2 + 1;                                                // 0x00171bb0: addiu $a1, $a2, 1
    v0 = sp + a1;                                               // 0x00171bb4: addu $v0, $sp, $a1
    v1 = *(uint8_t*)(v0);                                       // 0x00171bb8: lbu $v1, 0($v0)
    /* bnezl $v1, 0x171bfc */                                   // 0x00171bbc: bnezl $v1, 0x171bfc
    v0 = a2 + sp;                                               // 0x00171bc4: addu $v0, $a2, $sp
    a0 = 1;                                                     // 0x00171bc8: addiu $a0, $zero, 1
    v1 = *(uint8_t*)((v0) + 2);                                 // 0x00171bcc: lbu $v1, 2($v0)
    if (v1 != a0) goto label_0x171bfc;                          // 0x00171bd0: bnel $v1, $a0, 0x171bfc
    v1 = *(uint8_t*)((v0) + 3);                                 // 0x00171bd8: lbu $v1, 3($v0)
    /* bnezl $v1, 0x171bfc */                                   // 0x00171bdc: bnezl $v1, 0x171bfc
    v0 = *(int32_t*)((s0) + 8);                                 // 0x00171be4: lw $v0, 8($s0)
    v0 = v0 + 1;                                                // 0x00171be8: addiu $v0, $v0, 1
    goto label_0x171c10;                                        // 0x00171bec: b 0x171c10
    *(uint32_t*)((s0) + 8) = v0;                                // 0x00171bf0: sw $v0, 8($s0)
    /* nop */                                                   // 0x00171bf4: nop 
label_0x171bf8:
label_0x171bfc:
    v0 = 3;                                                     // 0x00171bfc: addiu $v0, $zero, 3
    if (a3 != 0) v0 = s1;                                       // 0x00171c00: movn $v0, $s1, $a3
    v0 = (a2 < v0) ? 1 : 0;                                     // 0x00171c04: slt $v0, $a2, $v0
    if (v0 != 0) goto label_0x171ba8;                           // 0x00171c08: bnez $v0, 0x171ba8
    v0 = sp + a2;                                               // 0x00171c0c: addu $v0, $sp, $a2
label_0x171c10:
    v0 = (s1 < 3) ? 1 : 0;                                      // 0x00171c10: slti $v0, $s1, 3
    if (v0 == 0) goto label_0x171c48;                           // 0x00171c14: beqz $v0, 0x171c48
    a0 = s2 + s1;                                               // 0x00171c18: addu $a0, $s2, $s1
    v0 = sp + s1;                                               // 0x00171c1c: addu $v0, $sp, $s1
    a0 = s1 + sp;                                               // 0x00171c20: addu $a0, $s1, $sp
    v1 = *(uint8_t*)(v0);                                       // 0x00171c24: lbu $v1, 0($v0)
    *(uint8_t*)((s0) + 0x10) = v1;                              // 0x00171c2c: sb $v1, 0x10($s0)
    v0 = *(uint8_t*)((a0) + 1);                                 // 0x00171c30: lbu $v0, 1($a0)
    *(uint8_t*)((s0) + 0x11) = v0;                              // 0x00171c34: sb $v0, 0x11($s0)
    v1 = *(uint8_t*)((a1) + 2);                                 // 0x00171c38: lbu $v1, 2($a1)
    goto label_0x171c84;                                        // 0x00171c3c: b 0x171c84
    *(uint8_t*)((s0) + 0x12) = v1;                              // 0x00171c40: sb $v1, 0x12($s0)
    /* nop */                                                   // 0x00171c44: nop 
label_0x171c48:
    v0 = *(uint8_t*)((a0) + -3);                                // 0x00171c48: lbu $v0, -3($a0)
    *(uint8_t*)((s0) + 0x10) = v0;                              // 0x00171c4c: sb $v0, 0x10($s0)
    v1 = *(uint8_t*)((a0) + -2);                                // 0x00171c50: lbu $v1, -2($a0)
    *(uint8_t*)((s0) + 0x11) = v1;                              // 0x00171c54: sb $v1, 0x11($s0)
    v0 = *(uint8_t*)((a0) + -1);                                // 0x00171c58: lbu $v0, -1($a0)
    goto label_0x171c84;                                        // 0x00171c5c: b 0x171c84
    *(uint8_t*)((s0) + 0x12) = v0;                              // 0x00171c60: sb $v0, 0x12($s0)
    /* nop */                                                   // 0x00171c64: nop 
    a0 = a0 + 4;                                                // 0x00171c68: addiu $a0, $a0, 4
    v1 = a0 - s2;                                               // 0x00171c6c: subu $v1, $a0, $s2
    v0 = v0 + 1;                                                // 0x00171c74: addiu $v0, $v0, 1
    s1 = s1 - v1;                                               // 0x00171c78: subu $s1, $s1, $v1
    *(uint32_t*)((s0) + 8) = v0;                                // 0x00171c7c: sw $v0, 8($s0)
    a3 = (s1 < 4) ? 1 : 0;                                      // 0x00171c80: slti $a3, $s1, 4
label_0x171c84:
    /* bnezl $a3, 0x171cac */                                   // 0x00171c84: bnezl $a3, 0x171cac
    func_00158410();  // 158410                                // 0x00171c94: jal 0x158410
    a2 = 4;                                                     // 0x00171c98: addiu $a2, $zero, 4
    /* bnezl $a0, 0x171c68 */                                   // 0x00171ca0: bnezl $a0, 0x171c68
    v0 = *(int32_t*)((s0) + 8);                                 // 0x00171ca4: lw $v0, 8($s0)
    return;                                                     // 0x00171cb8: jr $ra
    sp = sp + 0x30;                                             // 0x00171cbc: addiu $sp, $sp, 0x30
}