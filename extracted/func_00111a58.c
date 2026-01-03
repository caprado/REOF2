void func_00111a58() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_20, local_24, local_28, local_4, local_40, local_44, local_48;
    uint32_t local_8;
    
    sp = sp + -0xb0;                                            // 0x00111a58: addiu $sp, $sp, -0xb0
    a0 = sp + 0x60;                                             // 0x00111a60: addiu $a0, $sp, 0x60
    func_00111678();  // 111678                                // 0x00111a88: jal 0x111678
    s0 = sp + 0x20;                                             // 0x00111a90: addiu $s0, $sp, 0x20
    a0 = sp + 0x68;                                             // 0x00111a94: addiu $a0, $sp, 0x68
    func_00111678();  // 111678                                // 0x00111a98: jal 0x111678
    a0 = local_0;                                               // 0x00111aa0: lw $a0, 0($sp)
    v0 = ((unsigned)a0 < (unsigned)2) ? 1 : 0;                  // 0x00111aa4: sltiu $v0, $a0, 2
    if (v0 != 0) goto label_0x111b0c;                           // 0x00111aa8: bnez $v0, 0x111b0c
    v0 = local_4;                                               // 0x00111aac: lw $v0, 4($sp)
    v1 = local_20;                                              // 0x00111ab0: lw $v1, 0x20($sp)
    v0 = ((unsigned)v1 < (unsigned)2) ? 1 : 0;                  // 0x00111ab4: sltiu $v0, $v1, 2
    /* bnezl $v0, 0x111b34 */                                   // 0x00111ab8: bnezl $v0, 0x111b34
    v1 = local_24;                                              // 0x00111abc: lw $v1, 0x24($sp)
    v0 = a0 ^ 4;                                                // 0x00111ac0: xori $v0, $a0, 4
    if (v0 != 0) goto label_0x111ae0;                           // 0x00111ac4: bnez $v0, 0x111ae0
    v0 = v1 ^ 4;                                                // 0x00111ac8: xori $v0, $v1, 4
    v0 = v1 ^ 2;                                                // 0x00111acc: xori $v0, $v1, 2
    /* bnezl $v0, 0x111b0c */                                   // 0x00111ad0: bnezl $v0, 0x111b0c
    v0 = local_4;                                               // 0x00111ad4: lw $v0, 4($sp)
    goto label_0x111af4;                                        // 0x00111ad8: b 0x111af4
    v0 = 0x22 << 16;                                            // 0x00111adc: lui $v0, 0x22
label_0x111ae0:
    if (v0 != 0) goto label_0x111b00;                           // 0x00111ae0: bnez $v0, 0x111b00
    v0 = a0 ^ 2;                                                // 0x00111ae4: xori $v0, $a0, 2
    /* bnezl $v0, 0x111b34 */                                   // 0x00111ae8: bnezl $v0, 0x111b34
    v1 = local_24;                                              // 0x00111aec: lw $v1, 0x24($sp)
    v0 = 0x22 << 16;                                            // 0x00111af0: lui $v0, 0x22
label_0x111af4:
    goto label_0x111cac;                                        // 0x00111af4: b 0x111cac
    a0 = v0 + 0xe20;                                            // 0x00111af8: addiu $a0, $v0, 0xe20
    /* nop */                                                   // 0x00111afc: nop 
label_0x111b00:
    if (v0 != 0) goto label_0x111b28;                           // 0x00111b00: bnez $v0, 0x111b28
    v0 = v1 ^ 2;                                                // 0x00111b04: xori $v0, $v1, 2
    v0 = local_4;                                               // 0x00111b08: lw $v0, 4($sp)
label_0x111b0c:
    v1 = local_24;                                              // 0x00111b10: lw $v1, 0x24($sp)
    v0 = v0 ^ v1;                                               // 0x00111b14: xor $v0, $v0, $v1
    v0 = ((unsigned)0 < (unsigned)v0) ? 1 : 0;                  // 0x00111b18: sltu $v0, $zero, $v0
    goto label_0x111cac;                                        // 0x00111b1c: b 0x111cac
    local_4 = v0;                                               // 0x00111b20: sw $v0, 4($sp)
    /* nop */                                                   // 0x00111b24: nop 
label_0x111b28:
    if (v0 != 0) goto label_0x111b50;                           // 0x00111b28: bnez $v0, 0x111b50
    v1 = local_24;                                              // 0x00111b30: lw $v1, 0x24($sp)
    v0 = local_4;                                               // 0x00111b38: lw $v0, 4($sp)
    v0 = v0 ^ v1;                                               // 0x00111b3c: xor $v0, $v0, $v1
    v0 = ((unsigned)0 < (unsigned)v0) ? 1 : 0;                  // 0x00111b40: sltu $v0, $zero, $v0
    goto label_0x111cac;                                        // 0x00111b44: b 0x111cac
    local_24 = v0;                                              // 0x00111b48: sw $v0, 0x24($sp)
    /* nop */                                                   // 0x00111b4c: nop 
label_0x111b50:
    s5 = 0xffff << 16;                                          // 0x00111b50: lui $s5, 0xffff
    s0 = s3 & s5;                                               // 0x00111b5c: and $s0, $s3, $s5
    s6 = s2 & s5;                                               // 0x00111b64: and $s6, $s2, $s5
    func_0010f748();  // 10f748                                // 0x00111b70: jal 0x10f748
    func_0010f748();  // 10f748                                // 0x00111b80: jal 0x10f748
    func_0010f748();  // 10f748                                // 0x00111b90: jal 0x10f748
    func_0010f748();  // 10f748                                // 0x00111ba4: jal 0x10f748
    s1 = ((unsigned)s0 < (unsigned)s1) ? 1 : 0;                 // 0x00111bac: sltu $s1, $s0, $s1
    s0 = s0 & s5;                                               // 0x00111bbc: and $s0, $s0, $s5
    v0 = local_4;                                               // 0x00111bc8: lw $v0, 4($sp)
    s4 = ((unsigned)a2 < (unsigned)s4) ? 1 : 0;                 // 0x00111bcc: sltu $s4, $a2, $s4
    a0 = local_8;                                               // 0x00111bd0: lw $a0, 8($sp)
    a3 = local_28;                                              // 0x00111bd4: lw $a3, 0x28($sp)
    a1 = local_24;                                              // 0x00111bdc: lw $a1, 0x24($sp)
    a0 = a0 + a3;                                               // 0x00111be4: addu $a0, $a0, $a3
    v1 = -1;                                                    // 0x00111be8: addiu $v1, $zero, -1
    v0 = v0 ^ a1;                                               // 0x00111bf0: xor $v0, $v0, $a1
    a0 = a0 + 4;                                                // 0x00111bf4: addiu $a0, $a0, 4
    v0 = ((unsigned)0 < (unsigned)v0) ? 1 : 0;                  // 0x00111bf8: sltu $v0, $zero, $v0
    v1 = ((unsigned)v1 < (unsigned)s1) ? 1 : 0;                 // 0x00111bfc: sltu $v1, $v1, $s1
    local_44 = v0;                                              // 0x00111c00: sw $v0, 0x44($sp)
    if (v1 == 0) goto label_0x111c4c;                           // 0x00111c04: beqz $v1, 0x111c4c
    local_48 = a0;                                              // 0x00111c08: sw $a0, 0x48($sp)
    a3 = 0 | 0x8000;                                            // 0x00111c0c: ori $a3, $zero, 0x8000
    a1 = -1;                                                    // 0x00111c14: addiu $a1, $zero, -1
    v0 = s1 & 1;                                                // 0x00111c1c: andi $v0, $s1, 1
label_0x111c20:
    v1 = ((unsigned)a1 < (unsigned)s1) ? 1 : 0;                 // 0x00111c2c: sltu $v1, $a1, $s1
    if (v0 == 0) goto label_0x111c40;                           // 0x00111c30: beqz $v0, 0x111c40
    a0 = a0 + 1;                                                // 0x00111c34: addiu $a0, $a0, 1
    a2 = a2 | a3;                                               // 0x00111c3c: or $a2, $a2, $a3
label_0x111c40:
    if (v1 != 0) goto label_0x111c20;                           // 0x00111c40: bnez $v1, 0x111c20
    v0 = s1 & 1;                                                // 0x00111c44: andi $v0, $s1, 1
    local_48 = a0;                                              // 0x00111c48: sw $a0, 0x48($sp)
label_0x111c4c:
    v0 = -1;                                                    // 0x00111c4c: addiu $v0, $zero, -1
    v0 = ((unsigned)v0 < (unsigned)s1) ? 1 : 0;                 // 0x00111c54: sltu $v0, $v0, $s1
    if (v0 != 0) goto label_0x111ca0;                           // 0x00111c58: bnez $v0, 0x111ca0
    v0 = 3;                                                     // 0x00111c5c: addiu $v0, $zero, 3
    a0 = local_48;                                              // 0x00111c60: lw $a0, 0x48($sp)
    t0 = 0 | 0x8000;                                            // 0x00111c64: ori $t0, $zero, 0x8000
    a3 = 1;                                                     // 0x00111c6c: addiu $a3, $zero, 1
    a1 = -1;                                                    // 0x00111c70: addiu $a1, $zero, -1
label_0x111c78:
    v1 = a2 & t0;                                               // 0x00111c7c: and $v1, $a2, $t0
    v0 = s1 | a3;                                               // 0x00111c80: or $v0, $s1, $a3
    a0 = a0 + -1;                                               // 0x00111c84: addiu $a0, $a0, -1
    if (v1 != 0) s1 = v0;                                       // 0x00111c88: movn $s1, $v0, $v1
    v0 = ((unsigned)a1 < (unsigned)s1) ? 1 : 0;                 // 0x00111c8c: sltu $v0, $a1, $s1
    if (v0 == 0) goto label_0x111c78;                           // 0x00111c90: beqz $v0, 0x111c78
    local_48 = a0;                                              // 0x00111c98: sw $a0, 0x48($sp)
    v0 = 3;                                                     // 0x00111c9c: addiu $v0, $zero, 3
label_0x111ca0:
    local_40 = v0;                                              // 0x00111ca4: sw $v0, 0x40($sp)
    a0 = sp + 0x40;                                             // 0x00111ca8: addiu $a0, $sp, 0x40
label_0x111cac:
    func_001115a0();  // 1115a0                                // 0x00111cac: jal 0x1115a0
    /* nop */                                                   // 0x00111cb0: nop 
    return;                                                     // 0x00111cd4: jr $ra
    sp = sp + 0xb0;                                             // 0x00111cd8: addiu $sp, $sp, 0xb0
}