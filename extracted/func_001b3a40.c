void func_001b3a40() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_48;
    
    sp = sp + -0x50;                                            // 0x001b3a40: addiu $sp, $sp, -0x50
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b3a4c: addu.qb $zero, $sp, $s1
    s0 = sp + 0x4a;                                             // 0x001b3a5c: addiu $s0, $sp, 0x4a
label_0x1b3a60:
    a3 = *(uint8_t*)(s2);                                       // 0x001b3a60: lbu $a3, 0($s2)
    if (a3 == 0) goto label_0x1b3b84;                           // 0x001b3a64: beqz $a3, 0x1b3b84
    s2 = s2 + 1;                                                // 0x001b3a68: addiu $s2, $s2, 1
    v0 = 0xa;                                                   // 0x001b3a6c: addiu $v0, $zero, 0xa
    if (a3 == v0) goto label_0x1b3b88;                          // 0x001b3a70: beq $a3, $v0, 0x1b3b88
    v0 = ((unsigned)a3 < (unsigned)0x80) ? 1 : 0;               // 0x001b3a78: sltiu $v0, $a3, 0x80
    if (v0 != 0) goto label_0x1b3a90;                           // 0x001b3a7c: bnez $v0, 0x1b3a90
    v0 = ((unsigned)a3 < (unsigned)0xe0) ? 1 : 0;               // 0x001b3a80: sltiu $v0, $a3, 0xe0
    at = ((unsigned)a3 < (unsigned)0xa0) ? 1 : 0;               // 0x001b3a84: sltiu $at, $a3, 0xa0
    if (at != 0) goto label_0x1b3aa0;                           // 0x001b3a88: bnez $at, 0x1b3aa0
    /* nop */                                                   // 0x001b3a8c: nop 
label_0x1b3a90:
    if (v0 != 0) goto label_0x1b3ab8;                           // 0x001b3a90: bnez $v0, 0x1b3ab8
    at = ((unsigned)a3 < (unsigned)0x100) ? 1 : 0;              // 0x001b3a94: sltiu $at, $a3, 0x100
    if (at == 0) goto label_0x1b3abc;                           // 0x001b3a98: beqz $at, 0x1b3abc
    v0 = 0x3c;                                                  // 0x001b3a9c: addiu $v0, $zero, 0x3c
label_0x1b3aa0:
    v0 = *(uint8_t*)(s2);                                       // 0x001b3aa0: lbu $v0, 0($s2)
    s1 = s1 + 1;                                                // 0x001b3aa4: addiu $s1, $s1, 1
    if (v0 == 0) goto label_0x1b3b84;                           // 0x001b3aa8: beqz $v0, 0x1b3b84
    s2 = s2 + 1;                                                // 0x001b3aac: addiu $s2, $s2, 1
    goto label_0x1b3a60;                                        // 0x001b3ab0: b 0x1b3a60
    s1 = s1 + 1;                                                // 0x001b3ab4: addiu $s1, $s1, 1
label_0x1b3ab8:
    v0 = 0x3c;                                                  // 0x001b3ab8: addiu $v0, $zero, 0x3c
label_0x1b3abc:
    if (a3 != v0) goto label_0x1b3b7c;                          // 0x001b3abc: bne $a3, $v0, 0x1b3b7c
    /* nop */                                                   // 0x001b3ac0: nop 
    local_48 = a3;                                              // 0x001b3ac4: sb $a3, 0x48($sp)
    a1 = 1;                                                     // 0x001b3ac8: addiu $a1, $zero, 1
    a0 = ((unsigned)a3 < (unsigned)0x80) ? 1 : 0;               // 0x001b3acc: sltiu $a0, $a3, 0x80
    goto label_0x1b3b1c;                                        // 0x001b3ad0: b 0x1b3b1c
    v1 = ((unsigned)a3 < (unsigned)0xe0) ? 1 : 0;               // 0x001b3ad4: sltiu $v1, $a3, 0xe0
label_0x1b3ad8:
    v0 = *(int8_t*)((v0) + -1);                                 // 0x001b3ad8: lb $v0, -1($v0)
    if (v0 == 0) goto label_0x1b3b2c;                           // 0x001b3adc: beqz $v0, 0x1b3b2c
    v0 = a1 + sp;                                               // 0x001b3ae0: addu $v0, $a1, $sp
    v0 = a1 + -1;                                               // 0x001b3ae4: addiu $v0, $a1, -1
    v0 = s2 + v0;                                               // 0x001b3ae8: addu $v0, $s2, $v0
    if (a0 != 0) goto label_0x1b3b00;                           // 0x001b3aec: bnez $a0, 0x1b3b00
    a2 = g_0023dbcf;  // Global at 0x0023dbcf                   // 0x001b3af0: lbu $a2, 0($v0)
    at = ((unsigned)a3 < (unsigned)0xa0) ? 1 : 0;               // 0x001b3af4: sltiu $at, $a3, 0xa0
    if (at != 0) goto label_0x1b3b28;                           // 0x001b3af8: bnez $at, 0x1b3b28
    /* nop */                                                   // 0x001b3afc: nop 
label_0x1b3b00:
    if (v1 != 0) goto label_0x1b3b14;                           // 0x001b3b00: bnez $v1, 0x1b3b14
    v0 = a1 + sp;                                               // 0x001b3b04: addu $v0, $a1, $sp
    at = ((unsigned)a3 < (unsigned)0x100) ? 1 : 0;              // 0x001b3b08: sltiu $at, $a3, 0x100
    if (at != 0) goto label_0x1b3b28;                           // 0x001b3b0c: bnez $at, 0x1b3b28
    /* nop */                                                   // 0x001b3b10: nop 
label_0x1b3b14:
    g_0023dc17 = a2;  // Global at 0x0023dc17                   // 0x001b3b14: sb $a2, 0x48($v0)
    a1 = a1 + 1;                                                // 0x001b3b18: addiu $a1, $a1, 1
label_0x1b3b1c:
    v0 = (a1 < 4) ? 1 : 0;                                      // 0x001b3b1c: slti $v0, $a1, 4
    if (v0 != 0) goto label_0x1b3ad8;                           // 0x001b3b20: bnez $v0, 0x1b3ad8
    v0 = s2 + a1;                                               // 0x001b3b24: addu $v0, $s2, $a1
label_0x1b3b28:
    v0 = a1 + sp;                                               // 0x001b3b28: addu $v0, $a1, $sp
label_0x1b3b2c:
    g_0023dc17 = 0;  // Global at 0x0023dc17                    // 0x001b3b2c: sb $zero, 0x48($v0)
    v0 = *(int8_t*)(s0);                                        // 0x001b3b30: lb $v0, 0($s0)
    if (v0 == 0) goto label_0x1b3b40;                           // 0x001b3b34: beqz $v0, 0x1b3b40
    v0 = 0x20;                                                  // 0x001b3b38: addiu $v0, $zero, 0x20
    *(uint8_t*)(s0) = v0;                                       // 0x001b3b3c: sb $v0, 0($s0)
label_0x1b3b40:
    a1 = 0x24 << 16;                                            // 0x001b3b40: lui $a1, 0x24
    a0 = sp + 0x48;                                             // 0x001b3b44: addiu $a0, $sp, 0x48
    func_0010ac68();  // 0x10ab20                                // 0x001b3b48: jal 0x10ab20
    a1 = a1 + -0x2438;                                          // 0x001b3b4c: addiu $a1, $a1, -0x2438
    if (v0 != 0) goto label_0x1b3b60;                           // 0x001b3b50: bnez $v0, 0x1b3b60
    a1 = 0x24 << 16;                                            // 0x001b3b54: lui $a1, 0x24
    goto label_0x1b3a60;                                        // 0x001b3b58: b 0x1b3a60
    s2 = s2 + 3;                                                // 0x001b3b5c: addiu $s2, $s2, 3
label_0x1b3b60:
    a0 = sp + 0x48;                                             // 0x001b3b60: addiu $a0, $sp, 0x48
    func_0010ac68();  // 0x10ab20                                // 0x001b3b64: jal 0x10ab20
    a1 = a1 + -0x2430;                                          // 0x001b3b68: addiu $a1, $a1, -0x2430
    if (v0 != 0) goto label_0x1b3b7c;                           // 0x001b3b6c: bnez $v0, 0x1b3b7c
    /* nop */                                                   // 0x001b3b70: nop 
    goto label_0x1b3a60;                                        // 0x001b3b74: b 0x1b3a60
    s2 = s2 + 3;                                                // 0x001b3b78: addiu $s2, $s2, 3
label_0x1b3b7c:
    goto label_0x1b3a60;                                        // 0x001b3b7c: b 0x1b3a60
    s1 = s1 + 1;                                                // 0x001b3b80: addiu $s1, $s1, 1
label_0x1b3b84:
label_0x1b3b88:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001b3b8c: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b3b90: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b3b94: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b3b98: jr $ra
    sp = sp + 0x50;                                             // 0x001b3b9c: addiu $sp, $sp, 0x50
}