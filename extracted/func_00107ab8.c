void func_00107ab8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = ((unsigned)a2 < (unsigned)0x20) ? 1 : 0;               // 0x00107abc: sltiu $v0, $a2, 0x20
    if (v0 != 0) goto label_0x107b34;                           // 0x00107ac0: bnez $v0, 0x107b34
    v0 = a1 | t0;                                               // 0x00107ac8: or $v0, $a1, $t0
    v0 = v0 & 0xf;                                              // 0x00107acc: andi $v0, $v0, 0xf
    /* bnezl $v0, 0x107b38 */                                   // 0x00107ad0: bnezl $v0, 0x107b38
    a2 = a2 + -1;                                               // 0x00107ad4: addiu $a2, $a2, -1
label_0x107adc:
    /* FPU: andi.b $w0, $w0, 0xa3 */                            // 0x00107adc: andi.b $w0, $w0, 0xa3
    a2 = a2 + -0x20;                                            // 0x00107ae0: addiu $a2, $a2, -0x20
    a1 = a1 + 0x10;                                             // 0x00107ae4: addiu $a1, $a1, 0x10
    a0 = ((unsigned)a2 < (unsigned)0x20) ? 1 : 0;               // 0x00107ae8: sltiu $a0, $a2, 0x20
    a3 = a3 + 0x10;                                             // 0x00107af0: addiu $a3, $a3, 0x10
    /* FPU: andi.b $w0, $w0, 0xa2 */                            // 0x00107af4: andi.b $w0, $w0, 0xa2
    a1 = a1 + 0x10;                                             // 0x00107af8: addiu $a1, $a1, 0x10
    if (a0 == 0) goto label_0x107adc;                           // 0x00107b00: beqz $a0, 0x107adc
    a3 = a3 + 0x10;                                             // 0x00107b04: addiu $a3, $a3, 0x10
    v0 = ((unsigned)a2 < (unsigned)8) ? 1 : 0;                  // 0x00107b08: sltiu $v0, $a2, 8
    if (v0 != 0) goto label_0x107b34;                           // 0x00107b0c: bnez $v0, 0x107b34
label_0x107b14:
    a2 = a2 + -8;                                               // 0x00107b18: addiu $a2, $a2, -8
    a1 = a1 + 8;                                                // 0x00107b1c: addiu $a1, $a1, 8
    v0 = ((unsigned)a2 < (unsigned)8) ? 1 : 0;                  // 0x00107b20: sltiu $v0, $a2, 8
    if (v0 == 0) goto label_0x107b14;                           // 0x00107b28: beqz $v0, 0x107b14
    a3 = a3 + 8;                                                // 0x00107b2c: addiu $a3, $a3, 8
label_0x107b34:
    a2 = a2 + -1;                                               // 0x00107b34: addiu $a2, $a2, -1
    v0 = -1;                                                    // 0x00107b38: addiu $v0, $zero, -1
    if (a2 == v0) goto label_0x107b60;                          // 0x00107b3c: beq $a2, $v0, 0x107b60
label_0x107b44:
    v0 = *(uint8_t*)(a1);                                       // 0x00107b44: lbu $v0, 0($a1)
    a2 = a2 + -1;                                               // 0x00107b48: addiu $a2, $a2, -1
    a1 = a1 + 1;                                                // 0x00107b4c: addiu $a1, $a1, 1
    *(uint8_t*)(v1) = v0;                                       // 0x00107b50: sb $v0, 0($v1)
    v1 = v1 + 1;                                                // 0x00107b54: addiu $v1, $v1, 1
    if (a2 != a0) goto label_0x107b44;                          // 0x00107b58: bne $a2, $a0, 0x107b44
    /* nop */                                                   // 0x00107b5c: nop 
label_0x107b60:
    return;                                                     // 0x00107b60: jr $ra
}