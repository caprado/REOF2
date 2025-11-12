void func_001d0c30() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_7c;
    
    sp = sp + -0x80;                                            // 0x001d0c30: addiu $sp, $sp, -0x80
    v0 = 1;                                                     // 0x001d0c34: addiu $v0, $zero, 1
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x001d0c3c: subu.qb $zero, $sp, $s5
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001d0c44: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001d0c54: addu.qb $zero, $sp, $s1
    v1 = *(int8_t*)(a0);                                        // 0x001d0c60: lb $v1, 0($a0)
    if (v1 == v0) goto label_0x1d0d38;                          // 0x001d0c64: beq $v1, $v0, 0x1d0d38
    if (v1 == 0) goto label_0x1d0c7c;                           // 0x001d0c6c: beqz $v1, 0x1d0c7c
    goto label_0x1d0e18;                                        // 0x001d0c74: b 0x1d0e18
label_0x1d0c7c:
    func_001d0c00();  // 0x1d09f0                                // 0x001d0c7c: jal 0x1d09f0
    /* nop */                                                   // 0x001d0c80: nop 
    *(uint32_t*)(s2) = v0;                                      // 0x001d0c84: sw $v0, 0($s2)
    v0 = *(int32_t*)(s2);                                       // 0x001d0c88: lw $v0, 0($s2)
    if (v0 == 0) goto label_0x1d0ca4;                           // 0x001d0c8c: beqz $v0, 0x1d0ca4
    *(uint8_t*)(s4) = 0;                                        // 0x001d0c94: sb $zero, 0($s4)
    v0 = 1;                                                     // 0x001d0c98: addiu $v0, $zero, 1
    goto label_0x1d0e18;                                        // 0x001d0c9c: b 0x1d0e18
    *(uint16_t*)(s3) = 0;                                       // 0x001d0ca0: sh $zero, 0($s3)
label_0x1d0ca4:
    goto label_0x1d0cf8;                                        // 0x001d0ca4: b 0x1d0cf8
    v0 = (s0 < 8) ? 1 : 0;                                      // 0x001d0ca8: slti $v0, $s0, 8
label_0x1d0cac:
    v0 = 0x33 << 16;                                            // 0x001d0cac: lui $v0, 0x33
    v1 = v1 + s0;                                               // 0x001d0cb0: addu $v1, $v1, $s0
    v0 = v0 + -0x2770;                                          // 0x001d0cb4: addiu $v0, $v0, -0x2770
    v1 = v1 << 2;                                               // 0x001d0cb8: sll $v1, $v1, 2
    s5 = v0 + v1;                                               // 0x001d0cc0: addu $s5, $v0, $v1
    a2 = 0x100;                                                 // 0x001d0cc4: addiu $a2, $zero, 0x100
    func_0010b2a0();  // 0x10b0e8                                // 0x001d0cc8: jal 0x10b0e8
    if (v0 != 0) goto label_0x1d0cf0;                           // 0x001d0cd0: bnez $v0, 0x1d0cf0
    /* nop */                                                   // 0x001d0cd4: nop 
    *(uint8_t*)(s4) = 0;                                        // 0x001d0cd8: sb $zero, 0($s4)
    v0 = 1;                                                     // 0x001d0cdc: addiu $v0, $zero, 1
    *(uint16_t*)(s3) = 0;                                       // 0x001d0ce0: sh $zero, 0($s3)
    v1 = *(int32_t*)((s5) + 0x100);                             // 0x001d0ce4: lw $v1, 0x100($s5)
    goto label_0x1d0e18;                                        // 0x001d0ce8: b 0x1d0e18
    *(uint32_t*)(s2) = v1;                                      // 0x001d0cec: sw $v1, 0($s2)
label_0x1d0cf0:
    s0 = s0 + 1;                                                // 0x001d0cf0: addiu $s0, $s0, 1
    v0 = (s0 < 8) ? 1 : 0;                                      // 0x001d0cf4: slti $v0, $s0, 8
label_0x1d0cf8:
    if (v0 != 0) goto label_0x1d0cac;                           // 0x001d0cf8: bnez $v0, 0x1d0cac
    v1 = s0 << 6;                                               // 0x001d0cfc: sll $v1, $s0, 6
    func_001c94c0();  // 0x1c9470                                // 0x001d0d00: jal 0x1c9470
    *(uint16_t*)((gp) + -0x6258) = v0;                          // 0x001d0d08: sh $v0, -0x6258($gp)
    v1 = *(int16_t*)((gp) + -0x6258);                           // 0x001d0d0c: lh $v1, -0x6258($gp)
    v0 = -1;                                                    // 0x001d0d10: addiu $v0, $zero, -1
    if (v1 != v0) goto label_0x1d0d24;                          // 0x001d0d14: bne $v1, $v0, 0x1d0d24
    /* nop */                                                   // 0x001d0d18: nop 
    goto label_0x1d0e1c;                                        // 0x001d0d1c: b 0x1d0e1c
label_0x1d0d24:
    v0 = *(int8_t*)(s4);                                        // 0x001d0d24: lb $v0, 0($s4)
    v0 = v0 + 1;                                                // 0x001d0d28: addiu $v0, $v0, 1
    *(uint8_t*)(s4) = v0;                                       // 0x001d0d2c: sb $v0, 0($s4)
    goto label_0x1d0e14;                                        // 0x001d0d30: b 0x1d0e14
    *(uint16_t*)(s3) = 0;                                       // 0x001d0d34: sh $zero, 0($s3)
label_0x1d0d38:
    a0 = *(int16_t*)((gp) + -0x6258);                           // 0x001d0d38: lh $a0, -0x6258($gp)
    func_001c9590();  // 0x1c9510                                // 0x001d0d3c: jal 0x1c9510
    a1 = sp + 0x7c;                                             // 0x001d0d40: addiu $a1, $sp, 0x7c
    v1 = 1;                                                     // 0x001d0d44: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x1d0d98;                          // 0x001d0d48: beq $v0, $v1, 0x1d0d98
    v1 = -1;                                                    // 0x001d0d4c: addiu $v1, $zero, -1
    if (v0 == v1) goto label_0x1d0d7c;                          // 0x001d0d50: beq $v0, $v1, 0x1d0d7c
    /* nop */                                                   // 0x001d0d54: nop 
    v1 = -2;                                                    // 0x001d0d58: addiu $v1, $zero, -2
    if (v0 == v1) goto label_0x1d0d7c;                          // 0x001d0d5c: beq $v0, $v1, 0x1d0d7c
    v1 = -3;                                                    // 0x001d0d60: addiu $v1, $zero, -3
    if (v0 == v1) goto label_0x1d0d74;                          // 0x001d0d64: beq $v0, $v1, 0x1d0d74
    /* nop */                                                   // 0x001d0d68: nop 
    goto label_0x1d0d80;                                        // 0x001d0d6c: b 0x1d0d80
    a0 = *(int16_t*)((gp) + -0x6258);                           // 0x001d0d70: lh $a0, -0x6258($gp)
label_0x1d0d74:
    goto label_0x1d0e18;                                        // 0x001d0d74: b 0x1d0e18
label_0x1d0d7c:
    a0 = *(int16_t*)((gp) + -0x6258);                           // 0x001d0d7c: lh $a0, -0x6258($gp)
label_0x1d0d80:
    func_001c9510();  // 0x1c94c0                                // 0x001d0d80: jal 0x1c94c0
    /* nop */                                                   // 0x001d0d84: nop 
    *(uint8_t*)(s4) = 0;                                        // 0x001d0d88: sb $zero, 0($s4)
    v0 = -1;                                                    // 0x001d0d8c: addiu $v0, $zero, -1
    goto label_0x1d0e18;                                        // 0x001d0d90: b 0x1d0e18
    *(uint16_t*)(s3) = 0;                                       // 0x001d0d94: sh $zero, 0($s3)
label_0x1d0d98:
    func_001c9510();  // 0x1c94c0                                // 0x001d0d98: jal 0x1c94c0
    a0 = *(int16_t*)((gp) + -0x6258);                           // 0x001d0d9c: lh $a0, -0x6258($gp)
    *(uint8_t*)(s4) = 0;                                        // 0x001d0da0: sb $zero, 0($s4)
    v0 = 0x33 << 16;                                            // 0x001d0da4: lui $v0, 0x33
    *(uint16_t*)(s3) = 0;                                       // 0x001d0da8: sh $zero, 0($s3)
    v0 = v0 + -0x2770;                                          // 0x001d0dac: addiu $v0, $v0, -0x2770
    v1 = local_7c;                                              // 0x001d0db0: lw $v1, 0x7c($sp)
    a2 = 0x100;                                                 // 0x001d0db8: addiu $a2, $zero, 0x100
    *(uint32_t*)(s2) = v1;                                      // 0x001d0dbc: sw $v1, 0($s2)
    a0 = *(int32_t*)((gp) + -0x625c);                           // 0x001d0dc0: lw $a0, -0x625c($gp)
    v1 = a0 << 6;                                               // 0x001d0dc4: sll $v1, $a0, 6
    v1 = v1 + a0;                                               // 0x001d0dc8: addu $v1, $v1, $a0
    v1 = v1 << 2;                                               // 0x001d0dcc: sll $v1, $v1, 2
    s0 = v0 + v1;                                               // 0x001d0dd0: addu $s0, $v0, $v1
    func_0010b460();  // 0x10b2a0                                // 0x001d0dd4: jal 0x10b2a0
    v0 = local_7c;                                              // 0x001d0ddc: lw $v0, 0x7c($sp)
    *(uint32_t*)((s0) + 0x100) = v0;                            // 0x001d0de0: sw $v0, 0x100($s0)
    v0 = *(int32_t*)((gp) + -0x625c);                           // 0x001d0de4: lw $v0, -0x625c($gp)
    v0 = v0 + 1;                                                // 0x001d0de8: addiu $v0, $v0, 1
    *(uint32_t*)((gp) + -0x625c) = v0;                          // 0x001d0dec: sw $v0, -0x625c($gp)
    v1 = *(int32_t*)((gp) + -0x625c);                           // 0x001d0df0: lw $v1, -0x625c($gp)
    if (v1 >= 0) goto label_0x1d0e08;                           // 0x001d0df4: bgez $v1, 0x1d0e08
    v0 = v1 & 7;                                                // 0x001d0df8: andi $v0, $v1, 7
    if (v0 == 0) goto label_0x1d0e08;                           // 0x001d0dfc: beqz $v0, 0x1d0e08
    /* nop */                                                   // 0x001d0e00: nop 
    v0 = v0 + -8;                                               // 0x001d0e04: addiu $v0, $v0, -8
label_0x1d0e08:
    *(uint32_t*)((gp) + -0x625c) = v0;                          // 0x001d0e08: sw $v0, -0x625c($gp)
    goto label_0x1d0e18;                                        // 0x001d0e0c: b 0x1d0e18
    v0 = 1;                                                     // 0x001d0e10: addiu $v0, $zero, 1
label_0x1d0e14:
label_0x1d0e18:
label_0x1d0e1c:
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x001d0e1c: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001d0e20: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001d0e28: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001d0e2c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d0e30: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d0e34: jr $ra
    sp = sp + 0x80;                                             // 0x001d0e38: addiu $sp, $sp, 0x80
}