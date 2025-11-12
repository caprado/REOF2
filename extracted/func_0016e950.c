void func_0016e950() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_28, local_2c, local_30, local_34, local_38;
    
    sp = sp + -0x90;                                            // 0x0016e950: addiu $sp, $sp, -0x90
    s6 = s3 + 0x98c;                                            // 0x0016e960: addiu $s6, $s3, 0x98c
    v0 = s3 + 0x94c;                                            // 0x0016e970: addiu $v0, $s3, 0x94c
    a3 = sp + 0x30;                                             // 0x0016e980: addiu $a3, $sp, 0x30
    s4 = *(int32_t*)((s3) + 0x1b30);                            // 0x0016e994: lw $s4, 0x1b30($s3)
    local_34 = v0;                                              // 0x0016e998: sw $v0, 0x34($sp)
    fp = s4 + 0x8c;                                             // 0x0016e99c: addiu $fp, $s4, 0x8c
    v0 = *(int32_t*)(s4);                                       // 0x0016e9a0: lw $v0, 0($s4)
    func_0016eef0();  // 0x16ebd8                                // 0x0016e9a8: jal 0x16ebd8
    local_38 = v0;                                              // 0x0016e9ac: sw $v0, 0x38($sp)
    if (v0 != 0) goto label_0x16eba4;                           // 0x0016e9b0: bnez $v0, 0x16eba4
    v0 = local_30;                                              // 0x0016e9b8: lw $v0, 0x30($sp)
    a1 = s4 + 0x948;                                            // 0x0016e9bc: addiu $a1, $s4, 0x948
    func_0016f360();  // 0x16f318                                // 0x0016e9c0: jal 0x16f318
    a0 = *(int32_t*)((v0) + 0x28);                              // 0x0016e9c4: lw $a0, 0x28($v0)
    func_0016eff8();  // 0x16eef0                                // 0x0016e9c8: jal 0x16eef0
    func_0017e658();  // 0x17e530                                // 0x0016e9d0: jal 0x17e530
    /* nop */                                                   // 0x0016e9d4: nop 
    a2 = 1;                                                     // 0x0016e9e0: addiu $a2, $zero, 1
    func_0013fcc0();  // 0x13fca8                                // 0x0016e9e4: jal 0x13fca8
    a0 = local_38;                                              // 0x0016e9f0: lw $a0, 0x38($sp)
    func_00171b18();  // 0x1719d0                                // 0x0016e9fc: jal 0x1719d0
    a2 = 1;                                                     // 0x0016ea08: addiu $a2, $zero, 1
    func_0013fcc0();  // 0x13fca8                                // 0x0016ea10: jal 0x13fca8
    func_0017e658();  // 0x17e530                                // 0x0016ea18: jal 0x17e530
    s5 = v0 - s0;                                               // 0x0016ea1c: subu $s5, $v0, $s0
    a0 = *(int32_t*)((fp) + 0x18);                              // 0x0016ea20: lw $a0, 0x18($fp)
    a0 = a0 << 5;                                               // 0x0016ea28: sll $a0, $a0, 5
    a0 = s3 + a0;                                               // 0x0016ea2c: addu $a0, $s3, $a0
    func_00177170();  // 0x177130                                // 0x0016ea30: jal 0x177130
    a0 = a0 + 0x2ac0;                                           // 0x0016ea34: addiu $a0, $a0, 0x2ac0
    v0 = *(int32_t*)((s6) + 0xc);                               // 0x0016ea38: lw $v0, 0xc($s6)
    a2 = local_28;                                              // 0x0016ea3c: lw $a2, 0x28($sp)
    a3 = 0xff00 << 16;                                          // 0x0016ea40: lui $a3, 0xff00
    t0 = local_2c;                                              // 0x0016ea44: lw $t0, 0x2c($sp)
    v1 = *(int32_t*)((s6) + 0x10);                              // 0x0016ea4c: lw $v1, 0x10($s6)
    v0 = v0 + a2;                                               // 0x0016ea50: addu $v0, $v0, $a2
    *(uint32_t*)((s6) + 0xc) = v0;                              // 0x0016ea54: sw $v0, 0xc($s6)
    v1 = v1 + t0;                                               // 0x0016ea5c: addu $v1, $v1, $t0
    *(uint32_t*)((s6) + 0x10) = v1;                             // 0x0016ea64: sw $v1, 0x10($s6)
    func_0016d3a8();  // 0x16d308                                // 0x0016ea68: jal 0x16d308
    a3 = a3 | 0xf06;                                            // 0x0016ea6c: ori $a3, $a3, 0xf06
    func_0016d2a8();  // 0x16d288                                // 0x0016ea78: jal 0x16d288
    if (s0 == 0) goto label_0x16ea98;                           // 0x0016ea80: beqz $s0, 0x16ea98
    /* nop */                                                   // 0x0016ea84: nop 
    func_001703a0();  // 0x170390                                // 0x0016ea88: jal 0x170390
    a0 = local_30;                                              // 0x0016ea8c: lw $a0, 0x30($sp)
    goto label_0x16eba4;                                        // 0x0016ea90: b 0x16eba4
label_0x16ea98:
    if (s5 <= 0) goto label_0x16eb90;                           // 0x0016ea98: blezl $s5, 0x16eb90
    v0 = *(int32_t*)((s4) + 0x134);                             // 0x0016ea9c: lw $v0, 0x134($s4)
    func_00170250();  // 0x170240                                // 0x0016eaa4: jal 0x170240
    func_0016f0f8();  // 0x16eff8                                // 0x0016eab0: jal 0x16eff8
    a1 = local_30;                                              // 0x0016eab4: lw $a1, 0x30($sp)
    a1 = local_30;                                              // 0x0016eabc: lw $a1, 0x30($sp)
    func_0016f1a0();  // 0x16f0f8                                // 0x0016eac0: jal 0x16f0f8
    a0 = *(int32_t*)((s4) + 0x88);                              // 0x0016eac8: lw $a0, 0x88($s4)
    v0 = local_30;                                              // 0x0016eacc: lw $v0, 0x30($sp)
    a2 = 3;                                                     // 0x0016ead0: addiu $a2, $zero, 3
    a1 = *(int32_t*)((fp) + 0x38);                              // 0x0016ead4: lw $a1, 0x38($fp)
    *(uint32_t*)((v0) + 0x1c) = a0;                             // 0x0016ead8: sw $a0, 0x1c($v0)
    v0 = local_28;                                              // 0x0016eadc: lw $v0, 0x28($sp)
    v1 = local_30;                                              // 0x0016eae0: lw $v1, 0x30($sp)
    *(uint32_t*)((v1) + 0x14) = v0;                             // 0x0016eae4: sw $v0, 0x14($v1)
    a0 = local_30;                                              // 0x0016eae8: lw $a0, 0x30($sp)
    v0 = local_2c;                                              // 0x0016eaec: lw $v0, 0x2c($sp)
    if (a1 == a2) goto label_0x16eb10;                          // 0x0016eaf0: beq $a1, $a2, 0x16eb10
    *(uint32_t*)((a0) + 0x18) = v0;                             // 0x0016eaf4: sw $v0, 0x18($a0)
    v0 = *(int32_t*)((s4) + 0x134);                             // 0x0016eaf8: lw $v0, 0x134($s4)
    /* bnezl $v0, 0x16eb14 */                                   // 0x0016eafc: bnezl $v0, 0x16eb14
    *(uint32_t*)((s4) + 0x134) = 0;                             // 0x0016eb00: sw $zero, 0x134($s4)
    v0 = local_30;                                              // 0x0016eb04: lw $v0, 0x30($sp)
    goto label_0x16eb14;                                        // 0x0016eb08: b 0x16eb14
    *(uint32_t*)((s4) + 0x134) = v0;                            // 0x0016eb0c: sw $v0, 0x134($s4)
label_0x16eb10:
    *(uint32_t*)((s4) + 0x134) = 0;                             // 0x0016eb10: sw $zero, 0x134($s4)
label_0x16eb14:
    v0 = *(int32_t*)((s4) + 0x134);                             // 0x0016eb14: lw $v0, 0x134($s4)
    if (v0 != 0) goto label_0x16eba4;                           // 0x0016eb18: bnez $v0, 0x16eba4
    v1 = *(int32_t*)((s3) + 0x38);                              // 0x0016eb20: lw $v1, 0x38($s3)
    v0 = 3;                                                     // 0x0016eb24: addiu $v0, $zero, 3
    if (v1 != v0) goto label_0x16eb58;                          // 0x0016eb28: bne $v1, $v0, 0x16eb58
    /* nop */                                                   // 0x0016eb2c: nop 
    v0 = *(int32_t*)((fp) + 0x18);                              // 0x0016eb30: lw $v0, 0x18($fp)
    v0 = v0 + -1;                                               // 0x0016eb34: addiu $v0, $v0, -1
    v0 = ((unsigned)v0 < (unsigned)2) ? 1 : 0;                  // 0x0016eb38: sltiu $v0, $v0, 2
    if (v0 == 0) goto label_0x16eb58;                           // 0x0016eb3c: beqz $v0, 0x16eb58
    /* nop */                                                   // 0x0016eb40: nop 
    func_001703d0();  // 0x1703b8                                // 0x0016eb44: jal 0x1703b8
    a0 = local_30;                                              // 0x0016eb48: lw $a0, 0x30($sp)
    goto label_0x16eb64;                                        // 0x0016eb4c: b 0x16eb64
    v0 = local_34;                                              // 0x0016eb50: lw $v0, 0x34($sp)
    /* nop */                                                   // 0x0016eb54: nop 
label_0x16eb58:
    func_001703b8();  // 0x1703a0                                // 0x0016eb58: jal 0x1703a0
    a0 = local_30;                                              // 0x0016eb5c: lw $a0, 0x30($sp)
    v0 = local_34;                                              // 0x0016eb60: lw $v0, 0x34($sp)
label_0x16eb64:
    a0 = local_38;                                              // 0x0016eb64: lw $a0, 0x38($sp)
    a2 = v0 + 0xc;                                              // 0x0016eb68: addiu $a2, $v0, 0xc
    func_0015b2e8();  // 0x15b2d0                                // 0x0016eb6c: jal 0x15b2d0
    a1 = v0 + 8;                                                // 0x0016eb70: addiu $a1, $v0, 8
    a2 = *(int32_t*)((fp) + 0x18);                              // 0x0016eb78: lw $a2, 0x18($fp)
    func_001735e8();  // 0x173580                                // 0x0016eb7c: jal 0x173580
    a1 = 1;                                                     // 0x0016eb80: addiu $a1, $zero, 1
    goto label_0x16eba0;                                        // 0x0016eb84: b 0x16eba0
    *(uint32_t*)((s4) + 0x84) = 0;                              // 0x0016eb88: sw $zero, 0x84($s4)
    /* nop */                                                   // 0x0016eb8c: nop 
label_0x16eb90:
    /* bnezl $v0, 0x16eba4 */                                   // 0x0016eb90: bnezl $v0, 0x16eba4
    func_001703a0();  // 0x170390                                // 0x0016eb98: jal 0x170390
    a0 = local_30;                                              // 0x0016eb9c: lw $a0, 0x30($sp)
label_0x16eba0:
label_0x16eba4:
    return;                                                     // 0x0016ebcc: jr $ra
    sp = sp + 0x90;                                             // 0x0016ebd0: addiu $sp, $sp, 0x90
}