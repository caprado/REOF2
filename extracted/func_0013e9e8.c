void func_0013e9e8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_4;
    
    sp = sp + -0x40;                                            // 0x0013e9e8: addiu $sp, $sp, -0x40
    v1 = 1;                                                     // 0x0013e9ec: addiu $v1, $zero, 1
    v0 = *(int8_t*)((s1) + 0x50);                               // 0x0013ea0c: lb $v0, 0x50($s1)
    if (v0 != v1) goto label_0x13eb88;                          // 0x0013ea10: bne $v0, $v1, 0x13eb88
    v0 = *(int8_t*)((s1) + 0x26);                               // 0x0013ea18: lb $v0, 0x26($s1)
    v1 = *(uint8_t*)((s1) + 0x26);                              // 0x0013ea20: lbu $v1, 0x26($s1)
    if (v0 <= 0) goto label_0x13ea88;                           // 0x0013ea24: blez $v0, 0x13ea88
    s4 = 1;                                                     // 0x0013ea2c: addiu $s4, $zero, 1
    s0 = s1 + 8;                                                // 0x0013ea30: addiu $s0, $s1, 8
    /* nop */                                                   // 0x0013ea34: nop 
label_0x13ea38:
    func_00138698();  // 0x138690                                // 0x0013ea38: jal 0x138690
    a0 = *(int32_t*)((s0) + 8);                                 // 0x0013ea3c: lw $a0, 8($s0)
    if (v0 == s4) goto label_0x13ea70;                          // 0x0013ea40: beq $v0, $s4, 0x13ea70
    v0 = *(int32_t*)(s0);                                       // 0x0013ea48: lw $v0, 0($s0)
    a0 = *(int32_t*)((v0) + 8);                                 // 0x0013ea4c: lw $a0, 8($v0)
    v1 = *(int32_t*)(a0);                                       // 0x0013ea50: lw $v1, 0($a0)
    v0 = *(int32_t*)((v1) + 0x24);                              // 0x0013ea54: lw $v0, 0x24($v1)
    /* call function at address in v0 */                        // 0x0013ea58: jalr $v0
    /* nop */                                                   // 0x0013ea5c: nop 
    v1 = *(int32_t*)((s1) + 0x5c);                              // 0x0013ea60: lw $v1, 0x5c($s1)
    a0 = s2 + 1;                                                // 0x0013ea64: addiu $a0, $s2, 1
    v0 = v0 ^ v1;                                               // 0x0013ea68: xor $v0, $v0, $v1
    if (v0 == 0) s2 = a0;                                       // 0x0013ea6c: movz $s2, $a0, $v0
label_0x13ea70:
    v0 = *(int8_t*)((s1) + 0x26);                               // 0x0013ea70: lb $v0, 0x26($s1)
    s3 = s3 + 1;                                                // 0x0013ea74: addiu $s3, $s3, 1
    s0 = s0 + 4;                                                // 0x0013ea78: addiu $s0, $s0, 4
    v0 = (s3 < v0) ? 1 : 0;                                     // 0x0013ea7c: slt $v0, $s3, $v0
    if (v0 != 0) goto label_0x13ea38;                           // 0x0013ea80: bnez $v0, 0x13ea38
    v1 = *(uint8_t*)((s1) + 0x26);                              // 0x0013ea84: lbu $v1, 0x26($s1)
label_0x13ea88:
    v0 = v1 << 0x18;                                            // 0x0013ea88: sll $v0, $v1, 0x18
    v0 = v0 >> 0x18;                                            // 0x0013ea8c: sra $v0, $v0, 0x18
    if (s2 != v0) goto label_0x13eb88;                          // 0x0013ea90: bne $s2, $v0, 0x13eb88
    if (s2 <= 0) goto label_0x13eb88;                           // 0x0013ea98: blez $s2, 0x13eb88
    s2 = s1 + 0x10;                                             // 0x0013eaa0: addiu $s2, $s1, 0x10
    s0 = s1 + 8;                                                // 0x0013eaa4: addiu $s0, $s1, 8
    v0 = *(int32_t*)(s0);                                       // 0x0013eaa8: lw $v0, 0($s0)
    /* nop */                                                   // 0x0013eaac: nop 
    a2 = 0x7fff << 16;                                          // 0x0013eab0: lui $a2, 0x7fff
    a0 = *(int32_t*)((v0) + 8);                                 // 0x0013eabc: lw $a0, 8($v0)
    v1 = *(int32_t*)(a0);                                       // 0x0013eac0: lw $v1, 0($a0)
    v0 = *(int32_t*)((v1) + 0x18);                              // 0x0013eac4: lw $v0, 0x18($v1)
    /* call function at address in v0 */                        // 0x0013eac8: jalr $v0
    a2 = a2 | 0xffff;                                           // 0x0013eacc: ori $a2, $a2, 0xffff
    a3 = *(int32_t*)(s0);                                       // 0x0013ead0: lw $a3, 0($s0)
    a0 = *(int32_t*)((a3) + 8);                                 // 0x0013ead8: lw $a0, 8($a3)
    v1 = *(int32_t*)(a0);                                       // 0x0013eadc: lw $v1, 0($a0)
    v0 = *(int32_t*)((v1) + 0x20);                              // 0x0013eae0: lw $v0, 0x20($v1)
    /* call function at address in v0 */                        // 0x0013eae4: jalr $v0
    v1 = *(int32_t*)(s0);                                       // 0x0013eaec: lw $v1, 0($s0)
    a2 = 0x7fff << 16;                                          // 0x0013eaf0: lui $a2, 0x7fff
    a0 = *(int32_t*)((v1) + 8);                                 // 0x0013eaf8: lw $a0, 8($v1)
    a2 = a2 | 0xffff;                                           // 0x0013eafc: ori $a2, $a2, 0xffff
    v1 = *(int32_t*)(a0);                                       // 0x0013eb00: lw $v1, 0($a0)
    v0 = *(int32_t*)((v1) + 0x18);                              // 0x0013eb04: lw $v0, 0x18($v1)
    /* call function at address in v0 */                        // 0x0013eb08: jalr $v0
    v1 = local_4;                                               // 0x0013eb14: lw $v1, 4($sp)
    v0 = *(int32_t*)((s1) + 0x5c);                              // 0x0013eb18: lw $v0, 0x5c($s1)
    if (v1 == v0) goto label_0x13eb48;                          // 0x0013eb1c: beq $v1, $v0, 0x13eb48
    /* nop */                                                   // 0x0013eb24: nop 
label_0x13eb28:
    /* nop */                                                   // 0x0013eb28: nop 
    /* nop */                                                   // 0x0013eb2c: nop 
    /* nop */                                                   // 0x0013eb30: nop 
    /* nop */                                                   // 0x0013eb34: nop 
    /* nop */                                                   // 0x0013eb38: nop 
    goto label_0x13eb28;                                        // 0x0013eb3c: b 0x13eb28
    /* nop */                                                   // 0x0013eb40: nop 
    /* nop */                                                   // 0x0013eb44: nop 
label_0x13eb48:
    v0 = *(int32_t*)(s0);                                       // 0x0013eb48: lw $v0, 0($s0)
    s0 = s0 + 4;                                                // 0x0013eb4c: addiu $s0, $s0, 4
    a0 = *(int32_t*)((v0) + 8);                                 // 0x0013eb50: lw $a0, 8($v0)
    v1 = *(int32_t*)(a0);                                       // 0x0013eb54: lw $v1, 0($a0)
    v0 = *(int32_t*)((v1) + 0x20);                              // 0x0013eb58: lw $v0, 0x20($v1)
    /* call function at address in v0 */                        // 0x0013eb5c: jalr $v0
    s3 = s3 + 1;                                                // 0x0013eb60: addiu $s3, $s3, 1
    *(uint8_t*)((s1) + 0x53) = 0;                               // 0x0013eb64: sb $zero, 0x53($s1)
    a0 = *(int32_t*)(s2);                                       // 0x0013eb68: lw $a0, 0($s2)
    func_001388a0();  // 0x138890                                // 0x0013eb6c: jal 0x138890
    s2 = s2 + 4;                                                // 0x0013eb70: addiu $s2, $s2, 4
    v0 = *(int8_t*)((s1) + 0x26);                               // 0x0013eb74: lb $v0, 0x26($s1)
    v0 = (s3 < v0) ? 1 : 0;                                     // 0x0013eb78: slt $v0, $s3, $v0
    /* bnezl $v0, 0x13eab0 */                                   // 0x0013eb7c: bnezl $v0, 0x13eab0
    v0 = *(int32_t*)(s0);                                       // 0x0013eb80: lw $v0, 0($s0)
label_0x13eb88:
    return;                                                     // 0x0013eb9c: jr $ra
    sp = sp + 0x40;                                             // 0x0013eba0: addiu $sp, $sp, 0x40
}