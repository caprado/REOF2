void func_0019ec00() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x60;                                            // 0x0019ec00: addiu $sp, $sp, -0x60
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x0019ec0c: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x0019ec18: addu.qb $zero, $sp, $s1
    goto label_0x19ed10;                                        // 0x0019ec24: b 0x19ed10
label_0x19ec2c:
    s1 = *(int32_t*)(s3);                                       // 0x0019ec2c: lw $s1, 0($s3)
    v0 = s1 & 0xffff;                                           // 0x0019ec30: andi $v0, $s1, 0xffff
    if (v0 == 0) goto label_0x19ec9c;                           // 0x0019ec34: beqz $v0, 0x19ec9c
    s3 = s3 + 4;                                                // 0x0019ec38: addiu $s3, $s3, 4
    a0 = v0 + -1;                                               // 0x0019ec3c: addiu $a0, $v0, -1
    v1 = a0 << 3;                                               // 0x0019ec40: sll $v1, $a0, 3
    v0 = 0x29 << 16;                                            // 0x0019ec44: lui $v0, 0x29
    v1 = v1 - a0;                                               // 0x0019ec48: subu $v1, $v1, $a0
    v0 = v0 + -0x7380;                                          // 0x0019ec4c: addiu $v0, $v0, -0x7380
    v1 = v1 << 3;                                               // 0x0019ec50: sll $v1, $v1, 3
    s4 = v0 + v1;                                               // 0x0019ec54: addu $s4, $v0, $v1
    v0 = *(int8_t*)((s4) + 0x35);                               // 0x0019ec58: lb $v0, 0x35($s4)
    if (v0 != 0) goto label_0x19ec9c;                           // 0x0019ec5c: bnez $v0, 0x19ec9c
    /* nop */                                                   // 0x0019ec60: nop 
    a1 = *(int16_t*)((s4) + 0x12);                              // 0x0019ec64: lh $a1, 0x12($s4)
    func_0019ed40();  // 19ed40                                // 0x0019ec68: jal 0x19ed40
    a0 = *(int16_t*)((s4) + 0x10);                              // 0x0019ec6c: lh $a0, 0x10($s4)
    v1 = -1;                                                    // 0x0019ec70: addiu $v1, $zero, -1
    if (v0 != v1) goto label_0x19ec84;                          // 0x0019ec74: bne $v0, $v1, 0x19ec84
    goto label_0x19ed1c;                                        // 0x0019ec7c: b 0x19ed1c
label_0x19ec84:
    func_0019e990();  // 19e990                                // 0x0019ec84: jal 0x19e990
    if (v0 != 0) goto label_0x19ec9c;                           // 0x0019ec8c: bnez $v0, 0x19ec9c
    /* nop */                                                   // 0x0019ec90: nop 
    goto label_0x19ed1c;                                        // 0x0019ec94: b 0x19ed1c
label_0x19ec9c:
    v0 = 0xffff << 16;                                          // 0x0019ec9c: lui $v0, 0xffff
    v0 = s1 & v0;                                               // 0x0019eca0: and $v0, $s1, $v0
    v0 = (unsigned)v0 >> 0x10;                                  // 0x0019eca4: srl $v0, $v0, 0x10
    if (v0 == 0) goto label_0x19ed0c;                           // 0x0019eca8: beqz $v0, 0x19ed0c
    a0 = v0 + -1;                                               // 0x0019ecac: addiu $a0, $v0, -1
    v1 = a0 << 3;                                               // 0x0019ecb0: sll $v1, $a0, 3
    v0 = 0x28 << 16;                                            // 0x0019ecb4: lui $v0, 0x28
    v1 = v1 - a0;                                               // 0x0019ecb8: subu $v1, $v1, $a0
    v0 = v0 + 0x5480;                                           // 0x0019ecbc: addiu $v0, $v0, 0x5480
    v1 = v1 << 3;                                               // 0x0019ecc0: sll $v1, $v1, 3
    s1 = v0 + v1;                                               // 0x0019ecc4: addu $s1, $v0, $v1
    v0 = *(int8_t*)((s1) + 0x35);                               // 0x0019ecc8: lb $v0, 0x35($s1)
    if (v0 != 0) goto label_0x19ed0c;                           // 0x0019eccc: bnez $v0, 0x19ed0c
    /* nop */                                                   // 0x0019ecd0: nop 
    a1 = *(int16_t*)((s1) + 0x12);                              // 0x0019ecd4: lh $a1, 0x12($s1)
    func_0019ed40();  // 19ed40                                // 0x0019ecd8: jal 0x19ed40
    a0 = *(int16_t*)((s1) + 0x10);                              // 0x0019ecdc: lh $a0, 0x10($s1)
    v1 = -1;                                                    // 0x0019ece0: addiu $v1, $zero, -1
    if (v0 != v1) goto label_0x19ecf4;                          // 0x0019ece4: bne $v0, $v1, 0x19ecf4
    goto label_0x19ed1c;                                        // 0x0019ecec: b 0x19ed1c
label_0x19ecf4:
    func_0019e990();  // 19e990                                // 0x0019ecf4: jal 0x19e990
    if (v0 != 0) goto label_0x19ed0c;                           // 0x0019ecfc: bnez $v0, 0x19ed0c
    /* nop */                                                   // 0x0019ed00: nop 
    goto label_0x19ed1c;                                        // 0x0019ed04: b 0x19ed1c
label_0x19ed0c:
    s0 = s0 + 1;                                                // 0x0019ed0c: addiu $s0, $s0, 1
label_0x19ed10:
    v0 = (s0 < s2) ? 1 : 0;                                     // 0x0019ed10: slt $v0, $s0, $s2
    if (v0 != 0) goto label_0x19ec2c;                           // 0x0019ed14: bnez $v0, 0x19ec2c
    v0 = 1;                                                     // 0x0019ed18: addiu $v0, $zero, 1
label_0x19ed1c:
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x0019ed20: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x0019ed28: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x0019ed2c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0019ed30: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0019ed34: jr $ra
    sp = sp + 0x60;                                             // 0x0019ed38: addiu $sp, $sp, 0x60
}