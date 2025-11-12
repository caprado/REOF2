void func_00123a70() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4, local_50, local_58, local_60, local_8, local_c;
    
    sp = sp + -0x50;                                            // 0x00123a70: addiu $sp, $sp, -0x50
    v0 = (a1 < 8) ? 1 : 0;                                      // 0x00123a74: slti $v0, $a1, 8
    t0 = sp + 8;                                                // 0x00123ab8: addiu $t0, $sp, 8
    a3 = sp + 4;                                                // 0x00123abc: addiu $a3, $sp, 4
    t1 = sp + 0xc;                                              // 0x00123ac0: addiu $t1, $sp, 0xc
    if (v0 == 0) goto label_0x123ad8;                           // 0x00123ac4: beqz $v0, 0x123ad8
    t2 = local_60;                                              // 0x00123ac8: lw $t2, 0x60($sp)
    *(uint16_t*)(s1) = 0;                                       // 0x00123acc: sh $zero, 0($s1)
    goto label_0x123b58;                                        // 0x00123ad0: b 0x123b58
    v0 = -1;                                                    // 0x00123ad4: addiu $v0, $zero, -1
label_0x123ad8:
    func_00123a18();  // 0x123700                                // 0x00123ad8: jal 0x123700
    /* nop */                                                   // 0x00123adc: nop 
    v0 = -1;                                                    // 0x00123ae4: addiu $v0, $zero, -1
    if (v1 == 0) goto label_0x123b58;                           // 0x00123ae8: beqz $v1, 0x123b58
    a0 = v1 - s0;                                               // 0x00123aec: subu $a0, $v1, $s0
    v1 = a0 << 0x10;                                            // 0x00123af0: sll $v1, $a0, 0x10
    if (v1 <= 0) goto label_0x123b58;                           // 0x00123af4: blez $v1, 0x123b58
    *(uint16_t*)(s1) = a0;                                      // 0x00123af8: sh $a0, 0($s1)
    a2 = local_0;                                               // 0x00123afc: lw $a2, 0($sp)
    a3 = -1;                                                    // 0x00123b00: addiu $a3, $zero, -1
    v1 = local_4;                                               // 0x00123b04: lbu $v1, 4($sp)
    t0 = 1;                                                     // 0x00123b08: addiu $t0, $zero, 1
    a0 = local_8;                                               // 0x00123b0c: lbu $a0, 8($sp)
    *(uint32_t*)(s3) = a2;                                      // 0x00123b14: sw $a2, 0($s3)
    a1 = local_c;                                               // 0x00123b18: lw $a1, 0xc($sp)
    *(uint8_t*)(s2) = v1;                                       // 0x00123b1c: sb $v1, 0($s2)
    *(uint8_t*)(s4) = a0;                                       // 0x00123b20: sb $a0, 0($s4)
    v1 = local_50;                                              // 0x00123b24: lw $v1, 0x50($sp)
    *(uint32_t*)(v1) = a1;                                      // 0x00123b28: sw $a1, 0($v1)
    *(uint8_t*)(s5) = a3;                                       // 0x00123b2c: sb $a3, 0($s5)
    a0 = *(int8_t*)(s4);                                        // 0x00123b30: lb $a0, 0($s4)
    v1 = *(int8_t*)(s2);                                        // 0x00123b34: lb $v1, 0($s2)
    /* multiply: v1 * a0 -> hi:lo */                            // 0x00123b38: mult $ac3, $v1, $a0
    a0 = (v1 < 0) ? 1 : 0;                                      // 0x00123b3c: slti $a0, $v1, 0
    a1 = v1 + 7;                                                // 0x00123b40: addiu $a1, $v1, 7
    if (a0 != 0) v1 = a1;                                       // 0x00123b44: movn $v1, $a1, $a0
    v1 = v1 >> 3;                                               // 0x00123b48: sra $v1, $v1, 3
    *(uint8_t*)(s6) = v1;                                       // 0x00123b4c: sb $v1, 0($s6)
    a0 = local_58;                                              // 0x00123b50: lw $a0, 0x58($sp)
    *(uint32_t*)(a0) = t0;                                      // 0x00123b54: sw $t0, 0($a0)
label_0x123b58:
    return;                                                     // 0x00123b78: jr $ra
    sp = sp + 0x50;                                             // 0x00123b7c: addiu $sp, $sp, 0x50
}