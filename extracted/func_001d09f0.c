void func_001d09f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x60;                                            // 0x001d09f0: addiu $sp, $sp, -0x60
    v0 = 0x2e;                                                  // 0x001d0a04: addiu $v0, $zero, 0x2e
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001d0a08: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001d0a18: addu.qb $zero, $sp, $s1
    v1 = 4;                                                     // 0x001d0a1c: addiu $v1, $zero, 4
    goto label_0x1d0a7c;                                        // 0x001d0a20: b 0x1d0a7c
label_0x1d0a28:
    if (a0 != 0) goto label_0x1d0a4c;                           // 0x001d0a28: bnez $a0, 0x1d0a4c
    at = (a1 < 0x3a) ? 1 : 0;                                   // 0x001d0a2c: slti $at, $a1, 0x3a
    if (at == 0) goto label_0x1d0a4c;                           // 0x001d0a30: beqz $at, 0x1d0a4c
    /* nop */                                                   // 0x001d0a34: nop 
    a3 = a3 + 1;                                                // 0x001d0a38: addiu $a3, $a3, 1
    if (a3 != v1) goto label_0x1d0a78;                          // 0x001d0a3c: bne $a3, $v1, 0x1d0a78
    /* nop */                                                   // 0x001d0a40: nop 
    goto label_0x1d0bd8;                                        // 0x001d0a44: b 0x1d0bd8
label_0x1d0a4c:
    if (a1 != v0) goto label_0x1d0a70;                          // 0x001d0a4c: bne $a1, $v0, 0x1d0a70
    /* nop */                                                   // 0x001d0a50: nop 
    t0 = t0 + 1;                                                // 0x001d0a54: addiu $t0, $t0, 1
    if (t0 != v1) goto label_0x1d0a68;                          // 0x001d0a58: bne $t0, $v1, 0x1d0a68
    goto label_0x1d0bd8;                                        // 0x001d0a60: b 0x1d0bd8
label_0x1d0a68:
    goto label_0x1d0a7c;                                        // 0x001d0a68: b 0x1d0a7c
    a2 = a2 + 1;                                                // 0x001d0a6c: addiu $a2, $a2, 1
label_0x1d0a70:
    goto label_0x1d0bd8;                                        // 0x001d0a70: b 0x1d0bd8
label_0x1d0a78:
    a2 = a2 + 1;                                                // 0x001d0a78: addiu $a2, $a2, 1
label_0x1d0a7c:
    a1 = *(int8_t*)(a2);                                        // 0x001d0a7c: lb $a1, 0($a2)
    if (a1 != 0) goto label_0x1d0a28;                           // 0x001d0a80: bnez $a1, 0x1d0a28
    a0 = (a1 < 0x30) ? 1 : 0;                                   // 0x001d0a84: slti $a0, $a1, 0x30
    func_001037b0();  // 0x103788                                // 0x001d0a8c: jal 0x103788
    goto label_0x1d0aa0;                                        // 0x001d0a94: b 0x1d0aa0
    s2 = v0 & 0xff;                                             // 0x001d0a98: andi $s2, $v0, 0xff
label_0x1d0a9c:
    s3 = s3 + 1;                                                // 0x001d0a9c: addiu $s3, $s3, 1
label_0x1d0aa0:
    func_0010af38();  // 0x10ae00                                // 0x001d0aa0: jal 0x10ae00
    at = ((unsigned)s3 < (unsigned)v0) ? 1 : 0;                 // 0x001d0aa8: sltu $at, $s3, $v0
    if (at == 0) goto label_0x1d0ac8;                           // 0x001d0aac: beqz $at, 0x1d0ac8
    v1 = s4 + s3;                                               // 0x001d0ab4: addu $v1, $s4, $s3
    v0 = 0x2e;                                                  // 0x001d0ab8: addiu $v0, $zero, 0x2e
    v1 = *(int8_t*)(v1);                                        // 0x001d0abc: lb $v1, 0($v1)
    if (v1 != v0) goto label_0x1d0a9c;                          // 0x001d0ac0: bne $v1, $v0, 0x1d0a9c
    /* nop */                                                   // 0x001d0ac4: nop 
label_0x1d0ac8:
    func_0010af38();  // 0x10ae00                                // 0x001d0ac8: jal 0x10ae00
    /* nop */                                                   // 0x001d0acc: nop 
    at = ((unsigned)s3 < (unsigned)v0) ? 1 : 0;                 // 0x001d0ad0: sltu $at, $s3, $v0
    if (at == 0) goto label_0x1d0ae4;                           // 0x001d0ad4: beqz $at, 0x1d0ae4
    a0 = s4 + s3;                                               // 0x001d0ad8: addu $a0, $s4, $s3
    s3 = s3 + 1;                                                // 0x001d0adc: addiu $s3, $s3, 1
    a0 = s4 + s3;                                               // 0x001d0ae0: addu $a0, $s4, $s3
label_0x1d0ae4:
    func_001037b0();  // 0x103788                                // 0x001d0ae4: jal 0x103788
    /* nop */                                                   // 0x001d0ae8: nop 
    goto label_0x1d0af8;                                        // 0x001d0aec: b 0x1d0af8
    s1 = v0 & 0xff;                                             // 0x001d0af0: andi $s1, $v0, 0xff
label_0x1d0af4:
    s3 = s3 + 1;                                                // 0x001d0af4: addiu $s3, $s3, 1
label_0x1d0af8:
    func_0010af38();  // 0x10ae00                                // 0x001d0af8: jal 0x10ae00
    at = ((unsigned)s3 < (unsigned)v0) ? 1 : 0;                 // 0x001d0b00: sltu $at, $s3, $v0
    if (at == 0) goto label_0x1d0b20;                           // 0x001d0b04: beqz $at, 0x1d0b20
    v1 = s4 + s3;                                               // 0x001d0b0c: addu $v1, $s4, $s3
    v0 = 0x2e;                                                  // 0x001d0b10: addiu $v0, $zero, 0x2e
    v1 = *(int8_t*)(v1);                                        // 0x001d0b14: lb $v1, 0($v1)
    if (v1 != v0) goto label_0x1d0af4;                          // 0x001d0b18: bne $v1, $v0, 0x1d0af4
    /* nop */                                                   // 0x001d0b1c: nop 
label_0x1d0b20:
    func_0010af38();  // 0x10ae00                                // 0x001d0b20: jal 0x10ae00
    /* nop */                                                   // 0x001d0b24: nop 
    at = ((unsigned)s3 < (unsigned)v0) ? 1 : 0;                 // 0x001d0b28: sltu $at, $s3, $v0
    if (at == 0) goto label_0x1d0b3c;                           // 0x001d0b2c: beqz $at, 0x1d0b3c
    a0 = s4 + s3;                                               // 0x001d0b30: addu $a0, $s4, $s3
    s3 = s3 + 1;                                                // 0x001d0b34: addiu $s3, $s3, 1
    a0 = s4 + s3;                                               // 0x001d0b38: addu $a0, $s4, $s3
label_0x1d0b3c:
    func_001037b0();  // 0x103788                                // 0x001d0b3c: jal 0x103788
    /* nop */                                                   // 0x001d0b40: nop 
    goto label_0x1d0b50;                                        // 0x001d0b44: b 0x1d0b50
    s0 = v0 & 0xff;                                             // 0x001d0b48: andi $s0, $v0, 0xff
label_0x1d0b4c:
    s3 = s3 + 1;                                                // 0x001d0b4c: addiu $s3, $s3, 1
label_0x1d0b50:
    func_0010af38();  // 0x10ae00                                // 0x001d0b50: jal 0x10ae00
    at = ((unsigned)s3 < (unsigned)v0) ? 1 : 0;                 // 0x001d0b58: sltu $at, $s3, $v0
    if (at == 0) goto label_0x1d0b78;                           // 0x001d0b5c: beqz $at, 0x1d0b78
    v1 = s4 + s3;                                               // 0x001d0b64: addu $v1, $s4, $s3
    v0 = 0x2e;                                                  // 0x001d0b68: addiu $v0, $zero, 0x2e
    v1 = *(int8_t*)(v1);                                        // 0x001d0b6c: lb $v1, 0($v1)
    if (v1 != v0) goto label_0x1d0b4c;                          // 0x001d0b70: bne $v1, $v0, 0x1d0b4c
    /* nop */                                                   // 0x001d0b74: nop 
label_0x1d0b78:
    func_0010af38();  // 0x10ae00                                // 0x001d0b78: jal 0x10ae00
    /* nop */                                                   // 0x001d0b7c: nop 
    at = ((unsigned)s3 < (unsigned)v0) ? 1 : 0;                 // 0x001d0b80: sltu $at, $s3, $v0
    if (at == 0) goto label_0x1d0b94;                           // 0x001d0b84: beqz $at, 0x1d0b94
    a0 = s4 + s3;                                               // 0x001d0b88: addu $a0, $s4, $s3
    s3 = s3 + 1;                                                // 0x001d0b8c: addiu $s3, $s3, 1
    a0 = s4 + s3;                                               // 0x001d0b90: addu $a0, $s4, $s3
label_0x1d0b94:
    func_001037b0();  // 0x103788                                // 0x001d0b94: jal 0x103788
    /* nop */                                                   // 0x001d0b98: nop 
    v1 = s1 & 0xff;                                             // 0x001d0b9c: andi $v1, $s1, 0xff
    v0 = v0 & 0xff;                                             // 0x001d0ba0: andi $v0, $v0, 0xff
    a0 = v1 << 8;                                               // 0x001d0ba4: sll $a0, $v1, 8
    a2 = s2 & 0xff;                                             // 0x001d0ba8: andi $a2, $s2, 0xff
    a1 = a0 & 0xff00;                                           // 0x001d0bac: andi $a1, $a0, 0xff00
    v1 = s0 & 0xff;                                             // 0x001d0bb0: andi $v1, $s0, 0xff
    a0 = v1 << 0x10;                                            // 0x001d0bb4: sll $a0, $v1, 0x10
    a1 = a2 | a1;                                               // 0x001d0bb8: or $a1, $a2, $a1
    v1 = v0 << 0x18;                                            // 0x001d0bbc: sll $v1, $v0, 0x18
    v0 = 0xff << 16;                                            // 0x001d0bc0: lui $v0, 0xff
    a0 = a0 & v0;                                               // 0x001d0bc4: and $a0, $a0, $v0
    v0 = 0xff00 << 16;                                          // 0x001d0bc8: lui $v0, 0xff00
    a0 = a0 | a1;                                               // 0x001d0bcc: or $a0, $a0, $a1
    v0 = v1 & v0;                                               // 0x001d0bd0: and $v0, $v1, $v0
    v0 = v0 | a0;                                               // 0x001d0bd4: or $v0, $v0, $a0
label_0x1d0bd8:
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001d0bdc: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001d0be4: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001d0be8: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d0bec: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d0bf0: jr $ra
    sp = sp + 0x60;                                             // 0x001d0bf4: addiu $sp, $sp, 0x60
}