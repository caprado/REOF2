void func_001cfaa0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_68, local_6c;
    
    sp = sp + -0x70;                                            // 0x001cfaa0: addiu $sp, $sp, -0x70
    v0 = 3;                                                     // 0x001cfaa4: addiu $v0, $zero, 3
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001cfab0: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001cfac0: addu.qb $zero, $sp, $s1
    v1 = *(int32_t*)(a0);                                       // 0x001cfacc: lw $v1, 0($a0)
    if (v1 == v0) goto label_0x1cfaf0;                          // 0x001cfad0: beq $v1, $v0, 0x1cfaf0
    v0 = 5;                                                     // 0x001cfad8: addiu $v0, $zero, 5
    if (v1 != v0) goto label_0x1cfae8;                          // 0x001cfadc: bne $v1, $v0, 0x1cfae8
    v0 = 0x20;                                                  // 0x001cfae4: addiu $v0, $zero, 0x20
label_0x1cfae8:
    goto label_0x1cfc14;                                        // 0x001cfae8: b 0x1cfc14
label_0x1cfaf0:
    a0 = sp + 0x6c;                                             // 0x001cfaf0: addiu $a0, $sp, 0x6c
    func_001cd550();  // 1cd550                                // 0x001cfaf4: jal 0x1cd550
    a1 = sp + 0x68;                                             // 0x001cfaf8: addiu $a1, $sp, 0x68
    if (v0 == 0) goto label_0x1cfc0c;                           // 0x001cfafc: beqz $v0, 0x1cfc0c
    v1 = local_68;                                              // 0x001cfb04: lw $v1, 0x68($sp)
    v0 = 0xf;                                                   // 0x001cfb08: addiu $v0, $zero, 0xf
    if (v1 != v0) goto label_0x1cfbcc;                          // 0x001cfb0c: bne $v1, $v0, 0x1cfbcc
    /* nop */                                                   // 0x001cfb10: nop 
    a0 = local_6c;                                              // 0x001cfb14: lw $a0, 0x6c($sp)
    v0 = 1;                                                     // 0x001cfb18: addiu $v0, $zero, 1
    v1 = *(uint8_t*)(a0);                                       // 0x001cfb1c: lbu $v1, 0($a0)
    if (v1 == v0) goto label_0x1cfb30;                          // 0x001cfb20: beq $v1, $v0, 0x1cfb30
    /* nop */                                                   // 0x001cfb24: nop 
    goto label_0x1cfc04;                                        // 0x001cfb28: b 0x1cfc04
    /* nop */                                                   // 0x001cfb2c: nop 
label_0x1cfb30:
    v0 = *(uint8_t*)((a0) + 1);                                 // 0x001cfb30: lbu $v0, 1($a0)
    *(uint8_t*)(s3) = v0;                                       // 0x001cfb34: sb $v0, 0($s3)
    a0 = *(int32_t*)((s4) + 0x48);                              // 0x001cfb38: lw $a0, 0x48($s4)
    goto label_0x1cfb5c;                                        // 0x001cfb3c: b 0x1cfb5c
label_0x1cfb44:
    v0 = *(uint8_t*)(s3);                                       // 0x001cfb44: lbu $v0, 0($s3)
    v1 = s4 + v1;                                               // 0x001cfb48: addu $v1, $s4, $v1
    v1 = *(int32_t*)((v1) + 0x4c);                              // 0x001cfb4c: lw $v1, 0x4c($v1)
    if (v1 == v0) goto label_0x1cfb68;                          // 0x001cfb50: beq $v1, $v0, 0x1cfb68
    /* nop */                                                   // 0x001cfb54: nop 
    a1 = a1 + 1;                                                // 0x001cfb58: addiu $a1, $a1, 1
label_0x1cfb5c:
    v0 = (a1 < a0) ? 1 : 0;                                     // 0x001cfb5c: slt $v0, $a1, $a0
    if (v0 != 0) goto label_0x1cfb44;                           // 0x001cfb60: bnez $v0, 0x1cfb44
    v1 = a1 << 2;                                               // 0x001cfb64: sll $v1, $a1, 2
label_0x1cfb68:
    goto label_0x1cfb90;                                        // 0x001cfb68: b 0x1cfb90
    a0 = a1 + 1;                                                // 0x001cfb6c: addiu $a0, $a1, 1
label_0x1cfb70:
    v1 = a0 << 2;                                               // 0x001cfb70: sll $v1, $a0, 2
    v0 = a1 << 2;                                               // 0x001cfb74: sll $v0, $a1, 2
    v1 = s4 + v1;                                               // 0x001cfb78: addu $v1, $s4, $v1
    v0 = s4 + v0;                                               // 0x001cfb7c: addu $v0, $s4, $v0
    v1 = *(int32_t*)((v1) + 0x4c);                              // 0x001cfb80: lw $v1, 0x4c($v1)
    a0 = a0 + 1;                                                // 0x001cfb84: addiu $a0, $a0, 1
    a1 = a1 + 1;                                                // 0x001cfb88: addiu $a1, $a1, 1
    *(uint32_t*)((v0) + 0x4c) = v1;                             // 0x001cfb8c: sw $v1, 0x4c($v0)
label_0x1cfb90:
    v1 = *(int32_t*)((s4) + 0x48);                              // 0x001cfb90: lw $v1, 0x48($s4)
    v0 = (a0 < v1) ? 1 : 0;                                     // 0x001cfb94: slt $v0, $a0, $v1
    if (v0 != 0) goto label_0x1cfb70;                           // 0x001cfb98: bnez $v0, 0x1cfb70
    v0 = v1 + -1;                                               // 0x001cfb9c: addiu $v0, $v1, -1
    *(uint32_t*)((s4) + 0x48) = v0;                             // 0x001cfba0: sw $v0, 0x48($s4)
    v1 = *(int32_t*)((s4) + 0x4c);                              // 0x001cfba4: lw $v1, 0x4c($s4)
    v0 = *(int32_t*)((s4) + 0x40);                              // 0x001cfba8: lw $v0, 0x40($s4)
    if (v1 != v0) goto label_0x1cfbbc;                          // 0x001cfbac: bne $v1, $v0, 0x1cfbbc
    /* nop */                                                   // 0x001cfbb0: nop 
    goto label_0x1cfbc0;                                        // 0x001cfbb4: b 0x1cfbc0
    v0 = 1;                                                     // 0x001cfbb8: addiu $v0, $zero, 1
label_0x1cfbbc:
label_0x1cfbc0:
    *(uint8_t*)((s4) + 0x44) = v0;                              // 0x001cfbc0: sb $v0, 0x44($s4)
    goto label_0x1cfc04;                                        // 0x001cfbc4: b 0x1cfc04
    s1 = 4;                                                     // 0x001cfbc8: addiu $s1, $zero, 4
label_0x1cfbcc:
    v1 = *(int32_t*)((s2) + 0xc);                               // 0x001cfbcc: lw $v1, 0xc($s2)
    v0 = *(int32_t*)((s2) + 4);                                 // 0x001cfbd0: lw $v0, 4($s2)
    v0 = v1 - v0;                                               // 0x001cfbd4: subu $v0, $v1, $v0
    if (v0 != 0) goto label_0x1cfbe8;                           // 0x001cfbd8: bnez $v0, 0x1cfbe8
    func_001cfd60();  // 1cfd60                                // 0x001cfbe0: jal 0x1cfd60
    /* nop */                                                   // 0x001cfbe4: nop 
label_0x1cfbe8:
    v0 = local_68;                                              // 0x001cfbe8: lw $v0, 0x68($sp)
    *(uint8_t*)(s3) = v0;                                       // 0x001cfbf0: sb $v0, 0($s3)
    a1 = local_6c;                                              // 0x001cfbf4: lw $a1, 0x6c($sp)
    func_001cfd80();  // 1cfd80                                // 0x001cfbf8: jal 0x1cfd80
    s1 = 1;                                                     // 0x001cfc00: addiu $s1, $zero, 1
label_0x1cfc04:
    func_001cd5e0();  // 1cd5e0                                // 0x001cfc04: jal 0x1cd5e0
    /* nop */                                                   // 0x001cfc08: nop 
label_0x1cfc0c:
label_0x1cfc14:
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001cfc14: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001cfc1c: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001cfc20: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001cfc24: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001cfc28: jr $ra
    sp = sp + 0x70;                                             // 0x001cfc2c: addiu $sp, $sp, 0x70
}