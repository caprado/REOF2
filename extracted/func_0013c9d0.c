void func_0013c9d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0013c9d0: addiu $sp, $sp, -0x10
    t0 = 0xf << 16;                                             // 0x0013c9d4: lui $t0, 0xf
    t0 = t0 | 0xffff;                                           // 0x0013c9e4: ori $t0, $t0, 0xffff
    goto label_0x13c9f8;                                        // 0x0013c9ec: j 0x13c9f8
    sp = sp + 0x10;                                             // 0x0013c9f0: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0013c9f4: nop 
label_0x13c9f8:
    sp = sp + -0x40;                                            // 0x0013c9f8: addiu $sp, $sp, -0x40
    if (s1 != 0) goto label_0x13ca48;                           // 0x0013ca2c: bnez $s1, 0x13ca48
    a0 = 0x22 << 16;                                            // 0x0013ca34: lui $a0, 0x22
    func_0013d248();  // 0x13d1b8                                // 0x0013ca38: jal 0x13d1b8
    a0 = &str_00225be8;  // "E0011: Illigal parameter fname=%s\n" // 0x0013ca3c: addiu $a0, $a0, 0x5be8
    goto label_0x13cb68;                                        // 0x0013ca40: b 0x13cb68
    v0 = -1;                                                    // 0x0013ca44: addiu $v0, $zero, -1
label_0x13ca48:
    v1 = *(int32_t*)((s1) + 0x24);                              // 0x0013ca48: lw $v1, 0x24($s1)
    v1 = (v1 < 0x10) ? 1 : 0;                                   // 0x0013ca4c: slti $v1, $v1, 0x10
    if (v1 == 0) goto label_0x13cb68;                           // 0x0013ca50: beqz $v1, 0x13cb68
    v0 = -1;                                                    // 0x0013ca54: addiu $v0, $zero, -1
    /* bnezl $s2, 0x13ca78 */                                   // 0x0013ca58: bnezl $s2, 0x13ca78
    v1 = *(int32_t*)((s1) + 0x1c);                              // 0x0013ca5c: lw $v1, 0x1c($s1)
    a0 = 0x22 << 16;                                            // 0x0013ca60: lui $a0, 0x22
    func_0013d248();  // 0x13d1b8                                // 0x0013ca64: jal 0x13d1b8
    a0 = &str_00225c10;  // "E0009: Illigal parameter no=%d\n"  // 0x0013ca68: addiu $a0, $a0, 0x5c10
    goto label_0x13cb68;                                        // 0x0013ca6c: b 0x13cb68
    v0 = -1;                                                    // 0x0013ca70: addiu $v0, $zero, -1
    /* nop */                                                   // 0x0013ca74: nop 
    t0 = 0x7fff << 16;                                          // 0x0013ca78: lui $t0, 0x7fff
    t0 = t0 | 0xffff;                                           // 0x0013ca7c: ori $t0, $t0, 0xffff
    a2 = v1 + 0xf;                                              // 0x0013ca84: addiu $a2, $v1, 0xf
    a3 = v1 + 0x1e;                                             // 0x0013ca88: addiu $a3, $v1, 0x1e
    a1 = (a2 < 0) ? 1 : 0;                                      // 0x0013ca8c: slti $a1, $a2, 0
    if (a1 != 0) v0 = a3;                                       // 0x0013ca94: movn $v0, $a3, $a1
    v1 = v1 << 5;                                               // 0x0013ca98: sll $v1, $v1, 5
    v0 = v0 >> 4;                                               // 0x0013ca9c: sra $v0, $v0, 4
    v1 = s1 + v1;                                               // 0x0013caa0: addu $v1, $s1, $v1
    v0 = v0 << 4;                                               // 0x0013caa4: sll $v0, $v0, 4
    s0 = v1 + 0x38;                                             // 0x0013caa8: addiu $s0, $v1, 0x38
    v0 = a2 - v0;                                               // 0x0013caac: subu $v0, $a2, $v0
    *(uint32_t*)((s0) + 4) = s2;                                // 0x0013cab0: sw $s2, 4($s0)
    v0 = v0 << 5;                                               // 0x0013cab4: sll $v0, $v0, 5
    v0 = v0 + s1;                                               // 0x0013cabc: addu $v0, $v0, $s1
    v1 = *(int32_t*)((v0) + 0x38);                              // 0x0013cac0: lw $v1, 0x38($v0)
    t0 = v1 ^ t0;                                               // 0x0013cac4: xor $t0, $v1, $t0
    v1 = v1 + 1;                                                // 0x0013cac8: addiu $v1, $v1, 1
    if (t0 != 0) s3 = v1;                                       // 0x0013cacc: movn $s3, $v1, $t0
    func_0010af38();  // 0x10ae00                                // 0x0013cad0: jal 0x10ae00
    *(uint32_t*)(s0) = s3;                                      // 0x0013cad4: sw $s3, 0($s0)
    *(uint32_t*)((s0) + 8) = 0;                                 // 0x0013cad8: sw $zero, 8($s0)
    if (a2 == 0) goto label_0x13cb08;                           // 0x0013cae0: beqz $a2, 0x13cb08
label_0x13cae8:
    v0 = s2 + a1;                                               // 0x0013cae8: addu $v0, $s2, $a1
    a1 = a1 + 1;                                                // 0x0013caec: addiu $a1, $a1, 1
    v1 = *(uint8_t*)(v0);                                       // 0x0013caf0: lbu $v1, 0($v0)
    a0 = ((unsigned)a1 < (unsigned)a2) ? 1 : 0;                 // 0x0013caf4: sltu $a0, $a1, $a2
    v0 = *(int32_t*)((s0) + 8);                                 // 0x0013caf8: lw $v0, 8($s0)
    v0 = v0 + v1;                                               // 0x0013cafc: addu $v0, $v0, $v1
    if (a0 != 0) goto label_0x13cae8;                           // 0x0013cb00: bnez $a0, 0x13cae8
    *(uint32_t*)((s0) + 8) = v0;                                // 0x0013cb04: sw $v0, 8($s0)
label_0x13cb08:
    *(uint32_t*)((s0) + 0x10) = s4;                             // 0x0013cb08: sw $s4, 0x10($s0)
    t0 = 1;                                                     // 0x0013cb0c: addiu $t0, $zero, 1
    *(uint32_t*)((s0) + 0x14) = s5;                             // 0x0013cb10: sw $s5, 0x14($s0)
    *(uint32_t*)((s0) + 0x1c) = 0;                              // 0x0013cb14: sw $zero, 0x1c($s0)
    *(uint32_t*)((s0) + 0x18) = 0;                              // 0x0013cb18: sw $zero, 0x18($s0)
    *(uint32_t*)((s0) + 0xc) = s6;                              // 0x0013cb1c: sw $s6, 0xc($s0)
    v1 = *(int32_t*)((s1) + 0x1c);                              // 0x0013cb20: lw $v1, 0x1c($s1)
    a2 = *(int32_t*)((s1) + 0x24);                              // 0x0013cb24: lw $a2, 0x24($s1)
    a0 = v1 + 1;                                                // 0x0013cb28: addiu $a0, $v1, 1
    v1 = v1 + 0x10;                                             // 0x0013cb2c: addiu $v1, $v1, 0x10
    a1 = (a0 < 0) ? 1 : 0;                                      // 0x0013cb30: slti $a1, $a0, 0
    if (a1 != 0) v0 = v1;                                       // 0x0013cb38: movn $v0, $v1, $a1
    a3 = *(int8_t*)((s1) + 1);                                  // 0x0013cb3c: lb $a3, 1($s1)
    v0 = v0 >> 4;                                               // 0x0013cb40: sra $v0, $v0, 4
    a2 = a2 + 1;                                                // 0x0013cb44: addiu $a2, $a2, 1
    v0 = v0 << 4;                                               // 0x0013cb48: sll $v0, $v0, 4
    *(uint32_t*)((s1) + 0x24) = a2;                             // 0x0013cb4c: sw $a2, 0x24($s1)
    a0 = a0 - v0;                                               // 0x0013cb50: subu $a0, $a0, $v0
    if (a3 != t0) goto label_0x13cb64;                          // 0x0013cb54: bne $a3, $t0, 0x13cb64
    *(uint32_t*)((s1) + 0x1c) = a0;                             // 0x0013cb58: sw $a0, 0x1c($s1)
    v0 = 2;                                                     // 0x0013cb5c: addiu $v0, $zero, 2
    *(uint8_t*)((s1) + 1) = v0;                                 // 0x0013cb60: sb $v0, 1($s1)
label_0x13cb64:
label_0x13cb68:
    return;                                                     // 0x0013cb88: jr $ra
    sp = sp + 0x40;                                             // 0x0013cb8c: addiu $sp, $sp, 0x40
}