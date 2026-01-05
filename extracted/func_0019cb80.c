void func_0019cb80() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0xa0;                                            // 0x0019cb80: addiu $sp, $sp, -0xa0
    /* FPU: dps.w.ph $ac0, $sp, $s5 */                          // 0x0019cb8c: dps.w.ph $ac0, $sp, $s5
    /* FPU: subu.qb $zero, $sp, $s3 */                          // 0x0019cb98: subu.qb $zero, $sp, $s3
    /* FPU: dpa.w.ph $ac0, $sp, $s1 */                          // 0x0019cba0: dpa.w.ph $ac0, $sp, $s1
    func_0018db00();  // 18db00                                // 0x0019cba8: jal 0x18db00
    a0 = *(int32_t*)((a0) + 0x24);                              // 0x0019cbac: lw $a0, 0x24($a0)
    s2 = *(int16_t*)((s5) + 0x1a);                              // 0x0019cbb0: lh $s2, 0x1a($s5)
    s1 = *(int16_t*)((s5) + 0x1c);                              // 0x0019cbb8: lh $s1, 0x1c($s5)
    goto label_0x19cd40;                                        // 0x0019cbbc: b 0x19cd40
label_0x19cbc4:
    v1 = *(int32_t*)((s5) + 0x20);                              // 0x0019cbc4: lw $v1, 0x20($s5)
    if (v1 == 0) goto label_0x19cc28;                           // 0x0019cbc8: beqz $v1, 0x19cc28
    /* multiply: s2 * s1 -> hi:lo */                            // 0x0019cbcc: mult $ac2, $s2, $s1
    v0 = 1;                                                     // 0x0019cbd0: addiu $v0, $zero, 1
    if (v1 == v0) goto label_0x19cc20;                          // 0x0019cbd4: beq $v1, $v0, 0x19cc20
    /* multiply: s2 * s1 -> hi:lo */                            // 0x0019cbd8: mult $ac2, $s2, $s1
    v0 = 2;                                                     // 0x0019cbdc: addiu $v0, $zero, 2
    if (v1 == v0) goto label_0x19cc18;                          // 0x0019cbe0: beq $v1, $v0, 0x19cc18
    /* multiply: s2 * s1 -> hi:lo */                            // 0x0019cbe4: mult $ac2, $s2, $s1
    v0 = 0x13;                                                  // 0x0019cbe8: addiu $v0, $zero, 0x13
    if (v1 == v0) goto label_0x19cc10;                          // 0x0019cbec: beq $v1, $v0, 0x19cc10
    v0 = 0x14;                                                  // 0x0019cbf0: addiu $v0, $zero, 0x14
    if (v1 == v0) goto label_0x19cc04;                          // 0x0019cbf4: beq $v1, $v0, 0x19cc04
    /* nop */                                                   // 0x0019cbf8: nop 
    goto label_0x19cc30;                                        // 0x0019cbfc: b 0x19cc30
label_0x19cc04:
    /* multiply: s2 * s1 -> hi:lo */                            // 0x0019cc04: mult $ac2, $s2, $s1
    goto label_0x19cc2c;                                        // 0x0019cc08: b 0x19cc2c
    s0 = v0 >> 1;                                               // 0x0019cc0c: sra $s0, $v0, 1
label_0x19cc10:
    goto label_0x19cc2c;                                        // 0x0019cc10: b 0x19cc2c
label_0x19cc18:
    goto label_0x19cc2c;                                        // 0x0019cc18: b 0x19cc2c
    s0 = v0 << 1;                                               // 0x0019cc1c: sll $s0, $v0, 1
label_0x19cc20:
    goto label_0x19cc2c;                                        // 0x0019cc20: b 0x19cc2c
    s0 = v0 << 2;                                               // 0x0019cc24: sll $s0, $v0, 2
label_0x19cc28:
    s0 = v0 << 2;                                               // 0x0019cc28: sll $s0, $v0, 2
label_0x19cc2c:
label_0x19cc30:
    func_0018c710();  // 18c710                                // 0x0019cc30: jal 0x18c710
    /* nop */                                                   // 0x0019cc34: nop 
    func_0018dc30();  // 18dc30                                // 0x0019cc3c: jal 0x18dc30
    a1 = 0x10;                                                  // 0x0019cc40: addiu $a1, $zero, 0x10
    func_0019cd80();  // 19cd80                                // 0x0019cc4c: jal 0x19cd80
    v1 = *(int8_t*)((s5) + 0x36);                               // 0x0019cc54: lb $v1, 0x36($s5)
    if (v1 != 0) goto label_0x19ccbc;                           // 0x0019cc58: bnez $v1, 0x19ccbc
    v0 = s2 >> 6;                                               // 0x0019cc7c: sra $v0, $s2, 6
    if (s2 >= 0) goto label_0x19cc90;                           // 0x0019cc80: bgez $s2, 0x19cc90
    v0 = s2 + 0x3f;                                             // 0x0019cc88: addiu $v0, $s2, 0x3f
    v0 = v0 >> 6;                                               // 0x0019cc8c: sra $v0, $v0, 6
label_0x19cc90:
    t2 = *(int16_t*)((s5) + 0x20);                              // 0x0019cc90: lh $t2, 0x20($s5)
    a1 = 1;                                                     // 0x0019cca0: addiu $a1, $zero, 1
    func_0018c760();  // 18c760                                // 0x0019ccac: jal 0x18c760
    goto label_0x19cd10;                                        // 0x0019ccb4: b 0x19cd10
label_0x19ccbc:
    a0 = *(int16_t*)((s5) + 0x28);                              // 0x0019ccbc: lh $a0, 0x28($s5)
    v0 = a0 >> 6;                                               // 0x0019cccc: sra $v0, $a0, 6
    v1 = *(int16_t*)((s5) + 0x2a);                              // 0x0019ccd4: lh $v1, 0x2a($s5)
    if (a0 >= 0) goto label_0x19cce8;                           // 0x0019ccd8: bgez $a0, 0x19cce8
    v0 = a0 + 0x3f;                                             // 0x0019cce0: addiu $v0, $a0, 0x3f
    v0 = v0 >> 6;                                               // 0x0019cce4: sra $v0, $v0, 6
label_0x19cce8:
    a1 = 1;                                                     // 0x0019ccf4: addiu $a1, $zero, 1
    func_0018c760();  // 18c760                                // 0x0019cd04: jal 0x18c760
label_0x19cd10:
    a3 = 0x29 << 16;                                            // 0x0019cd10: lui $a3, 0x29
    v1 = 0x1000 << 16;                                          // 0x0019cd18: lui $v1, 0x1000
    a1 = a0 | v1;                                               // 0x0019cd1c: or $a1, $a0, $v1
    func_0018ce40();  // 18ce40                                // 0x0019cd28: jal 0x18ce40
    a3 = a3 + -0x350;                                           // 0x0019cd2c: addiu $a3, $a3, -0x350
    s2 = s2 >> 1;                                               // 0x0019cd30: sra $s2, $s2, 1
    s1 = s1 >> 1;                                               // 0x0019cd34: sra $s1, $s1, 1
    s4 = s4 + s0;                                               // 0x0019cd38: addu $s4, $s4, $s0
    s3 = s3 + 1;                                                // 0x0019cd3c: addiu $s3, $s3, 1
label_0x19cd40:
    v1 = *(int32_t*)((s5) + 0x30);                              // 0x0019cd40: lw $v1, 0x30($s5)
    v1 = ((unsigned)s3 < (unsigned)v1) ? 1 : 0;                 // 0x0019cd44: sltu $v1, $s3, $v1
    if (v1 != 0) goto label_0x19cbc4;                           // 0x0019cd48: bnez $v1, 0x19cbc4
    /* nop */                                                   // 0x0019cd4c: nop 
    /* FPU: xori.b $w2, $w0, 0xb6 */                            // 0x0019cd54: xori.b $w2, $w0, 0xb6
    /* FPU: ld.b $w1, -0x4c($zero) */                           // 0x0019cd5c: ld.b $w1, -0x4c($zero)
    /* FPU: aver_u.h $w1, $w0, $w19 */                          // 0x0019cd60: aver_u.h $w1, $w0, $w19
    /* FPU: xori.b $w1, $w0, 0xb2 */                            // 0x0019cd64: xori.b $w1, $w0, 0xb2
    /* FPU: ld.b $w0, -0x50($zero) */                           // 0x0019cd6c: ld.b $w0, -0x50($zero)
    return;                                                     // 0x0019cd70: jr $ra
    sp = sp + 0xa0;                                             // 0x0019cd74: addiu $sp, $sp, 0xa0
}