void func_0016ebd8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x0016ebd8: addiu $sp, $sp, -0x40
    s0 = *(int32_t*)((s4) + 0x1b30);                            // 0x0016ec08: lw $s0, 0x1b30($s4)
    v0 = *(int32_t*)((s0) + 0x134);                             // 0x0016ec0c: lw $v0, 0x134($s0)
    if (v0 == 0) goto label_0x16ec20;                           // 0x0016ec10: beqz $v0, 0x16ec20
    s5 = s4 + 0x94c;                                            // 0x0016ec14: addiu $s5, $s4, 0x94c
    goto label_0x16ec40;                                        // 0x0016ec18: b 0x16ec40
    *(uint32_t*)(s3) = v0;                                      // 0x0016ec1c: sw $v0, 0($s3)
label_0x16ec20:
    func_001702f0();  // 1702f0                                // 0x0016ec20: jal 0x1702f0
    /* nop */                                                   // 0x0016ec24: nop 
    if (v0 != 0) goto label_0x16ec40;                           // 0x0016ec28: bnez $v0, 0x16ec40
    *(uint32_t*)(s3) = v0;                                      // 0x0016ec2c: sw $v0, 0($s3)
    v1 = 1;                                                     // 0x0016ec30: addiu $v1, $zero, 1
    v0 = -1;                                                    // 0x0016ec34: addiu $v0, $zero, -1
    goto label_0x16eecc;                                        // 0x0016ec38: b 0x16eecc
    *(uint32_t*)((s5) + 0x24) = v1;                             // 0x0016ec3c: sw $v1, 0x24($s5)
label_0x16ec40:
    t2 = *(int32_t*)(s3);                                       // 0x0016ec40: lw $t2, 0($s3)
    a2 = t2 + 0x2c;                                             // 0x0016ec44: addiu $a2, $t2, 0x2c
    v0 = s2 | a2;                                               // 0x0016ec48: or $v0, $s2, $a2
    v0 = v0 & 7;                                                // 0x0016ec4c: andi $v0, $v0, 7
    if (v0 == 0) goto label_0x16ecb8;                           // 0x0016ec50: beqz $v0, 0x16ecb8
    v0 = s2 + 0x40;                                             // 0x0016ec58: addiu $v0, $s2, 0x40
label_0x16ec5c:
    a1 = a1 + 0x20;                                             // 0x0016ec9c: addiu $a1, $a1, 0x20
    /* nop */                                                   // 0x0016eca0: nop 
    /* nop */                                                   // 0x0016eca4: nop 
    if (a1 != v0) goto label_0x16ec5c;                          // 0x0016eca8: bne $a1, $v0, 0x16ec5c
    a2 = a2 + 0x20;                                             // 0x0016ecac: addiu $a2, $a2, 0x20
    goto label_0x16ecf4;                                        // 0x0016ecb0: b 0x16ecf4
    v1 = *(int32_t*)((s4) + 0x38);                              // 0x0016ecb4: lw $v1, 0x38($s4)
label_0x16ecb8:
    v0 = s2 + 0x40;                                             // 0x0016ecb8: addiu $v0, $s2, 0x40
label_0x16ecbc:
    a1 = a1 + 0x20;                                             // 0x0016ecdc: addiu $a1, $a1, 0x20
    /* nop */                                                   // 0x0016ece0: nop 
    /* nop */                                                   // 0x0016ece4: nop 
    if (a1 != v0) goto label_0x16ecbc;                          // 0x0016ece8: bne $a1, $v0, 0x16ecbc
    a2 = a2 + 0x20;                                             // 0x0016ecec: addiu $a2, $a2, 0x20
    v1 = *(int32_t*)((s4) + 0x38);                              // 0x0016ecf0: lw $v1, 0x38($s4)
label_0x16ecf4:
    v0 = 3;                                                     // 0x0016ecf4: addiu $v0, $zero, 3
    a0 = *(int32_t*)((a1) + 0x10);                              // 0x0016ed08: lw $a0, 0x10($a1)
    if (v1 != v0) goto label_0x16ee28;                          // 0x0016ed1c: bne $v1, $v0, 0x16ee28
    *(uint32_t*)((a2) + 0x10) = a0;                             // 0x0016ed20: sw $a0, 0x10($a2)
    v0 = *(int32_t*)((s2) + 0x18);                              // 0x0016ed24: lw $v0, 0x18($s2)
    v0 = v0 + -1;                                               // 0x0016ed28: addiu $v0, $v0, -1
    v0 = ((unsigned)v0 < (unsigned)2) ? 1 : 0;                  // 0x0016ed2c: sltiu $v0, $v0, 2
    /* beqzl $v0, 0x16ed64 */                                   // 0x0016ed30: beqzl $v0, 0x16ed64
    v1 = *(int32_t*)(s2);                                       // 0x0016ed34: lw $v1, 0($s2)
    v0 = *(int32_t*)((s0) + 0x134);                             // 0x0016ed38: lw $v0, 0x134($s0)
    /* bnezl $v0, 0x16ed64 */                                   // 0x0016ed3c: bnezl $v0, 0x16ed64
    v1 = *(int32_t*)(s2);                                       // 0x0016ed40: lw $v1, 0($s2)
    func_001703f8();  // 1703f8                                // 0x0016ed44: jal 0x1703f8
    a0 = *(int32_t*)((s0) + 0x12c);                             // 0x0016ed48: lw $a0, 0x12c($s0)
    v0 = *(int32_t*)((s0) + 0x130);                             // 0x0016ed4c: lw $v0, 0x130($s0)
    *(uint32_t*)((s0) + 0x12c) = v0;                            // 0x0016ed50: sw $v0, 0x12c($s0)
    v1 = *(int32_t*)(s3);                                       // 0x0016ed54: lw $v1, 0($s3)
    *(uint32_t*)((s0) + 0x130) = v1;                            // 0x0016ed58: sw $v1, 0x130($s0)
    t2 = *(int32_t*)(s3);                                       // 0x0016ed5c: lw $t2, 0($s3)
    v1 = *(int32_t*)(s2);                                       // 0x0016ed60: lw $v1, 0($s2)
    t0 = *(int32_t*)((s2) + 4);                                 // 0x0016ed64: lw $t0, 4($s2)
    v0 = v1 + 0xf;                                              // 0x0016ed68: addiu $v0, $v1, 0xf
    v1 = v1 + 0x1e;                                             // 0x0016ed6c: addiu $v1, $v1, 0x1e
    a0 = (v0 < 0) ? 1 : 0;                                      // 0x0016ed70: slti $a0, $v0, 0
    a1 = t0 + 0xf;                                              // 0x0016ed74: addiu $a1, $t0, 0xf
    if (a0 != 0) v0 = v1;                                       // 0x0016ed78: movn $v0, $v1, $a0
    t1 = (a1 < 0) ? 1 : 0;                                      // 0x0016ed7c: slti $t1, $a1, 0
    v0 = v0 >> 4;                                               // 0x0016ed80: sra $v0, $v0, 4
    t0 = t0 + 0x1e;                                             // 0x0016ed84: addiu $t0, $t0, 0x1e
    a0 = v0 << 4;                                               // 0x0016ed88: sll $a0, $v0, 4
    v0 = v0 << 3;                                               // 0x0016ed8c: sll $v0, $v0, 3
    a3 = a0 + 0x3f;                                             // 0x0016ed90: addiu $a3, $a0, 0x3f
    a0 = a0 + 0x7e;                                             // 0x0016ed94: addiu $a0, $a0, 0x7e
    a2 = v0 + 0x3f;                                             // 0x0016ed98: addiu $a2, $v0, 0x3f
    v0 = v0 + 0x7e;                                             // 0x0016ed9c: addiu $v0, $v0, 0x7e
    v1 = (a3 < 0) ? 1 : 0;                                      // 0x0016eda0: slti $v1, $a3, 0
    if (t1 != 0) a1 = t0;                                       // 0x0016eda4: movn $a1, $t0, $t1
    if (v1 != 0) a3 = a0;                                       // 0x0016eda8: movn $a3, $a0, $v1
    v1 = (a2 < 0) ? 1 : 0;                                      // 0x0016edac: slti $v1, $a2, 0
    if (v1 != 0) a2 = v0;                                       // 0x0016edb0: movn $a2, $v0, $v1
    v1 = *(int32_t*)((s0) + 0x12c);                             // 0x0016edb4: lw $v1, 0x12c($s0)
    a3 = a3 >> 6;                                               // 0x0016edb8: sra $a3, $a3, 6
    a1 = a1 >> 4;                                               // 0x0016edbc: sra $a1, $a1, 4
    /* multiply: a3 * a1 -> hi:lo */                            // 0x0016edc0: mult $ac2, $a3, $a1
    a3 = a3 << 6;                                               // 0x0016edc4: sll $a3, $a3, 6
    a2 = a2 >> 6;                                               // 0x0016edc8: sra $a2, $a2, 6
    a0 = *(int32_t*)((s0) + 0x130);                             // 0x0016edcc: lw $a0, 0x130($s0)
    a2 = a2 << 6;                                               // 0x0016edd4: sll $a2, $a2, 6
    t0 = *(int32_t*)((v1) + 8);                                 // 0x0016edd8: lw $t0, 8($v1)
    t1 = *(int32_t*)((a0) + 8);                                 // 0x0016eddc: lw $t1, 8($a0)
    v0 = v0 << 0xa;                                             // 0x0016ede0: sll $v0, $v0, 0xa
    *(uint16_t*)((s1) + 0x1e) = a3;                             // 0x0016ede4: sh $a3, 0x1e($s1)
    a0 = t1 + v0;                                               // 0x0016ede8: addu $a0, $t1, $v0
    v0 = t0 + v0;                                               // 0x0016edec: addu $v0, $t0, $v0
    a1 = a1 << 9;                                               // 0x0016edf0: sll $a1, $a1, 9
    *(uint16_t*)((s1) + 0x1c) = a2;                             // 0x0016edf4: sh $a2, 0x1c($s1)
    v1 = a0 + a1;                                               // 0x0016edf8: addu $v1, $a0, $a1
    a1 = v0 + a1;                                               // 0x0016edfc: addu $a1, $v0, $a1
    *(uint32_t*)((s1) + 4) = a1;                                // 0x0016ee00: sw $a1, 4($s1)
    *(uint32_t*)((s1) + 0x14) = v1;                             // 0x0016ee04: sw $v1, 0x14($s1)
    *(uint16_t*)((s1) + 0xe) = a3;                              // 0x0016ee08: sh $a3, 0xe($s1)
    *(uint16_t*)((s1) + 0xc) = a2;                              // 0x0016ee0c: sh $a2, 0xc($s1)
    *(uint32_t*)((s1) + 8) = t0;                                // 0x0016ee10: sw $t0, 8($s1)
    *(uint32_t*)(s1) = v0;                                      // 0x0016ee14: sw $v0, 0($s1)
    *(uint32_t*)((s1) + 0x18) = t1;                             // 0x0016ee18: sw $t1, 0x18($s1)
    goto label_0x16eeac;                                        // 0x0016ee1c: b 0x16eeac
    *(uint32_t*)((s1) + 0x10) = a0;                             // 0x0016ee20: sw $a0, 0x10($s1)
    /* nop */                                                   // 0x0016ee24: nop 
label_0x16ee28:
    v0 = *(int32_t*)((s2) + 0x18);                              // 0x0016ee28: lw $v0, 0x18($s2)
    v0 = v0 + -1;                                               // 0x0016ee2c: addiu $v0, $v0, -1
    v0 = ((unsigned)v0 < (unsigned)2) ? 1 : 0;                  // 0x0016ee30: sltiu $v0, $v0, 2
    if (v0 == 0) goto label_0x16ee54;                           // 0x0016ee34: beqz $v0, 0x16ee54
    v0 = *(int32_t*)((s0) + 0x104);                             // 0x0016ee38: lw $v0, 0x104($s0)
    v1 = *(int32_t*)((s0) + 0x108);                             // 0x0016ee3c: lw $v1, 0x108($s0)
    v0 = v0 ^ 1;                                                // 0x0016ee40: xori $v0, $v0, 1
    v1 = v1 ^ 1;                                                // 0x0016ee44: xori $v1, $v1, 1
    *(uint32_t*)((s0) + 0x104) = v0;                            // 0x0016ee48: sw $v0, 0x104($s0)
    *(uint32_t*)((s0) + 0x108) = v1;                            // 0x0016ee4c: sw $v1, 0x108($s0)
    v0 = *(int32_t*)((s0) + 0x104);                             // 0x0016ee50: lw $v0, 0x104($s0)
label_0x16ee54:
    a0 = s0 + 0x10c;                                            // 0x0016ee54: addiu $a0, $s0, 0x10c
    v1 = *(int32_t*)((s0) + 0x108);                             // 0x0016ee58: lw $v1, 0x108($s0)
    v0 = v0 << 4;                                               // 0x0016ee5c: sll $v0, $v0, 4
    v0 = v0 + a0;                                               // 0x0016ee60: addu $v0, $v0, $a0
    v1 = v1 << 4;                                               // 0x0016ee64: sll $v1, $v1, 4
    v1 = v1 + a0;                                               // 0x0016ee84: addu $v1, $v1, $a0
label_0x16eeac:
    v1 = *(int32_t*)((t2) + 8);                                 // 0x0016eeac: lw $v1, 8($t2)
    a0 = t2 + 0x2c;                                             // 0x0016eeb0: addiu $a0, $t2, 0x2c
    *(uint32_t*)((s1) + 0x2c) = 0;                              // 0x0016eeb4: sw $zero, 0x2c($s1)
    *(uint32_t*)((s1) + 0x28) = 0;                              // 0x0016eebc: sw $zero, 0x28($s1)
    *(uint32_t*)((s1) + 0x20) = v1;                             // 0x0016eec0: sw $v1, 0x20($s1)
    *(uint32_t*)((s1) + 0x24) = a0;                             // 0x0016eec4: sw $a0, 0x24($s1)
    *(uint32_t*)((s5) + 0x24) = 0;                              // 0x0016eec8: sw $zero, 0x24($s5)
label_0x16eecc:
    return;                                                     // 0x0016eee8: jr $ra
    sp = sp + 0x40;                                             // 0x0016eeec: addiu $sp, $sp, 0x40
}