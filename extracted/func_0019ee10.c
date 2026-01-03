/** @category graphics/texture @status complete @author caprado */
void func_0019ee10() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x0019ee10: addiu $sp, $sp, -0x50
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x0019ee1c: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x0019ee24: addu.qb $zero, $sp, $s1
    t5 = *(int32_t*)((gp) + -0x647c);                           // 0x0019ee2c: lw $t5, -0x647c($gp)
    t1 = 0x29 << 16;                                            // 0x0019ee30: lui $t1, 0x29
    a3 = 0x28 << 16;                                            // 0x0019ee34: lui $a3, 0x28
    t3 = 1;                                                     // 0x0019ee38: addiu $t3, $zero, 1
    t1 = t1 + -0x7380;                                          // 0x0019ee3c: addiu $t1, $t1, -0x7380
    a3 = a3 + 0x5480;                                           // 0x0019ee40: addiu $a3, $a3, 0x5480
    t0 = 0xffff << 16;                                          // 0x0019ee44: lui $t0, 0xffff
    t2 = 4;                                                     // 0x0019ee48: addiu $t2, $zero, 4
    v1 = 0x4000;                                                // 0x0019ee4c: addiu $v1, $zero, 0x4000
label_0x19ee50:
    if (t5 != 0) goto label_0x19ee60;                           // 0x0019ee50: bnez $t5, 0x19ee60
    goto label_0x19f05c;                                        // 0x0019ee58: b 0x19f05c
label_0x19ee60:
    if (t8 != 0) goto label_0x19ee80;                           // 0x0019ee60: bnez $t8, 0x19ee80
    t4 = *(int32_t*)((v0) + 0x10);                              // 0x0019ee68: lw $t4, 0x10($v0)
    if (t4 == t3) goto label_0x19ee7c;                          // 0x0019ee6c: beq $t4, $t3, 0x19ee7c
    /* nop */                                                   // 0x0019ee70: nop 
    if (t4 != t2) goto label_0x19f014;                          // 0x0019ee74: bne $t4, $t2, 0x19f014
    /* nop */                                                   // 0x0019ee78: nop 
label_0x19ee7c:
label_0x19ee80:
    goto label_0x19eeec;                                        // 0x0019ee80: b 0x19eeec
    t6 = (t4 < a2) ? 1 : 0;                                     // 0x0019ee84: slt $t6, $t4, $a2
label_0x19ee88:
    t6 = a1 + t6;                                               // 0x0019ee88: addu $t6, $a1, $t6
    s1 = *(int32_t*)(t6);                                       // 0x0019ee8c: lw $s1, 0($t6)
    t6 = s1 & 0xffff;                                           // 0x0019ee90: andi $t6, $s1, 0xffff
    if (t6 == 0) goto label_0x19eeb8;                           // 0x0019ee94: beqz $t6, 0x19eeb8
    s0 = t6 + -1;                                               // 0x0019ee98: addiu $s0, $t6, -1
    t6 = *(int32_t*)((v0) + 8);                                 // 0x0019ee9c: lw $t6, 8($v0)
    t7 = s0 << 3;                                               // 0x0019eea0: sll $t7, $s0, 3
    t7 = t7 - s0;                                               // 0x0019eea4: subu $t7, $t7, $s0
    t7 = t7 << 3;                                               // 0x0019eea8: sll $t7, $t7, 3
    t7 = t1 + t7;                                               // 0x0019eeac: addu $t7, $t1, $t7
    if (t7 == t6) goto label_0x19f014;                          // 0x0019eeb0: beq $t7, $t6, 0x19f014
    /* nop */                                                   // 0x0019eeb4: nop 
label_0x19eeb8:
    t6 = s1 & t0;                                               // 0x0019eeb8: and $t6, $s1, $t0
    t6 = (unsigned)t6 >> 0x10;                                  // 0x0019eebc: srl $t6, $t6, 0x10
    if (t6 == 0) goto label_0x19eee4;                           // 0x0019eec0: beqz $t6, 0x19eee4
    s0 = t6 + -1;                                               // 0x0019eec4: addiu $s0, $t6, -1
    t6 = *(int32_t*)((v0) + 8);                                 // 0x0019eec8: lw $t6, 8($v0)
    t7 = s0 << 3;                                               // 0x0019eecc: sll $t7, $s0, 3
    t7 = t7 - s0;                                               // 0x0019eed0: subu $t7, $t7, $s0
    t7 = t7 << 3;                                               // 0x0019eed4: sll $t7, $t7, 3
    t7 = a3 + t7;                                               // 0x0019eed8: addu $t7, $a3, $t7
    if (t7 == t6) goto label_0x19f014;                          // 0x0019eedc: beq $t7, $t6, 0x19f014
    /* nop */                                                   // 0x0019eee0: nop 
label_0x19eee4:
    t4 = t4 + 1;                                                // 0x0019eee4: addiu $t4, $t4, 1
    t6 = (t4 < a2) ? 1 : 0;                                     // 0x0019eee8: slt $t6, $t4, $a2
label_0x19eeec:
    if (t6 != 0) goto label_0x19ee88;                           // 0x0019eeec: bnez $t6, 0x19ee88
    t6 = t4 << 2;                                               // 0x0019eef0: sll $t6, $t4, 2
    t4 = *(int16_t*)((a0) + 0x12);                              // 0x0019eef4: lh $t4, 0x12($a0)
    s0 = *(int16_t*)((v0) + 0x14);                              // 0x0019eef8: lh $s0, 0x14($v0)
    t4 = t4 + -1;                                               // 0x0019eefc: addiu $t4, $t4, -1
    t6 = ~t4;                                                   // 0x0019ef00: not $t6, $t4
    t4 = s0 + t4;                                               // 0x0019ef04: addu $t4, $s0, $t4
    t7 = t6 & t4;                                               // 0x0019ef08: and $t7, $t6, $t4
    if (s0 != t7) goto label_0x19f018;                          // 0x0019ef0c: bne $s0, $t7, 0x19f018
    s0 = *(int32_t*)((v0) + 4);                                 // 0x0019ef14: lw $s0, 4($v0)
    if (s0 != 0) goto label_0x19ef3c;                           // 0x0019ef18: bnez $s0, 0x19ef3c
    /* nop */                                                   // 0x0019ef1c: nop 
    t4 = *(int16_t*)((a0) + 0x10);                              // 0x0019ef20: lh $t4, 0x10($a0)
    t6 = v1 - t7;                                               // 0x0019ef24: subu $t6, $v1, $t7
    t4 = ((unsigned)t6 < (unsigned)t4) ? 1 : 0;                 // 0x0019ef28: sltu $t4, $t6, $t4
    if (t4 != 0) goto label_0x19f014;                           // 0x0019ef2c: bnez $t4, 0x19f014
    /* nop */                                                   // 0x0019ef30: nop 
    goto label_0x19f060;                                        // 0x0019ef34: b 0x19f060
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x0019ef38: xori.b $w1, $w0, 0xb4
label_0x19ef3c:
    t6 = *(int16_t*)((a0) + 0x10);                              // 0x0019ef3c: lh $t6, 0x10($a0)
    goto label_0x19eff8;                                        // 0x0019ef40: b 0x19eff8
label_0x19ef48:
    if (t8 != 0) goto label_0x19ef64;                           // 0x0019ef48: bnez $t8, 0x19ef64
    t4 = *(int32_t*)((s0) + 0x10);                              // 0x0019ef50: lw $t4, 0x10($s0)
    if (t4 == t3) goto label_0x19ef64;                          // 0x0019ef54: beq $t4, $t3, 0x19ef64
    /* nop */                                                   // 0x0019ef58: nop 
    if (t4 != t2) goto label_0x19f014;                          // 0x0019ef5c: bne $t4, $t2, 0x19f014
    /* nop */                                                   // 0x0019ef60: nop 
label_0x19ef64:
    goto label_0x19efcc;                                        // 0x0019ef64: b 0x19efcc
label_0x19ef6c:
    s1 = a1 + s1;                                               // 0x0019ef6c: addu $s1, $a1, $s1
    s4 = *(int32_t*)(s1);                                       // 0x0019ef70: lw $s4, 0($s1)
    s1 = s4 & 0xffff;                                           // 0x0019ef74: andi $s1, $s4, 0xffff
    if (s1 == 0) goto label_0x19ef9c;                           // 0x0019ef78: beqz $s1, 0x19ef9c
    s3 = s1 + -1;                                               // 0x0019ef7c: addiu $s3, $s1, -1
    s1 = *(int32_t*)((s0) + 8);                                 // 0x0019ef80: lw $s1, 8($s0)
    s2 = s3 << 3;                                               // 0x0019ef84: sll $s2, $s3, 3
    s2 = s2 - s3;                                               // 0x0019ef88: subu $s2, $s2, $s3
    s2 = s2 << 3;                                               // 0x0019ef8c: sll $s2, $s2, 3
    s2 = t1 + s2;                                               // 0x0019ef90: addu $s2, $t1, $s2
    if (s2 == s1) goto label_0x19f014;                          // 0x0019ef94: beq $s2, $s1, 0x19f014
    /* nop */                                                   // 0x0019ef98: nop 
label_0x19ef9c:
    s1 = s4 & t0;                                               // 0x0019ef9c: and $s1, $s4, $t0
    s1 = (unsigned)s1 >> 0x10;                                  // 0x0019efa0: srl $s1, $s1, 0x10
    if (s1 == 0) goto label_0x19efc8;                           // 0x0019efa4: beqz $s1, 0x19efc8
    s3 = s1 + -1;                                               // 0x0019efa8: addiu $s3, $s1, -1
    s1 = *(int32_t*)((s0) + 8);                                 // 0x0019efac: lw $s1, 8($s0)
    s2 = s3 << 3;                                               // 0x0019efb0: sll $s2, $s3, 3
    s2 = s2 - s3;                                               // 0x0019efb4: subu $s2, $s2, $s3
    s2 = s2 << 3;                                               // 0x0019efb8: sll $s2, $s2, 3
    s2 = a3 + s2;                                               // 0x0019efbc: addu $s2, $a3, $s2
    if (s2 == s1) goto label_0x19f014;                          // 0x0019efc0: beq $s2, $s1, 0x19f014
    /* nop */                                                   // 0x0019efc4: nop 
label_0x19efc8:
    t4 = t4 + 1;                                                // 0x0019efc8: addiu $t4, $t4, 1
label_0x19efcc:
    s1 = (t4 < a2) ? 1 : 0;                                     // 0x0019efcc: slt $s1, $t4, $a2
    if (s1 != 0) goto label_0x19ef6c;                           // 0x0019efd0: bnez $s1, 0x19ef6c
    s1 = t4 << 2;                                               // 0x0019efd4: sll $s1, $t4, 2
    s0 = *(int32_t*)((s0) + 4);                                 // 0x0019efd8: lw $s0, 4($s0)
    if (s0 != 0) goto label_0x19eff8;                           // 0x0019efdc: bnez $s0, 0x19eff8
    t4 = v1 - t7;                                               // 0x0019efe0: subu $t4, $v1, $t7
    t4 = ((unsigned)t4 < (unsigned)t6) ? 1 : 0;                 // 0x0019efe4: sltu $t4, $t4, $t6
    if (t4 != 0) goto label_0x19f014;                           // 0x0019efe8: bnez $t4, 0x19f014
    /* nop */                                                   // 0x0019efec: nop 
    goto label_0x19f05c;                                        // 0x0019eff0: b 0x19f05c
label_0x19eff8:
    v0 = *(int16_t*)((s0) + 0x14);                              // 0x0019eff8: lh $v0, 0x14($s0)
    v0 = v0 - t7;                                               // 0x0019effc: subu $v0, $v0, $t7
    v0 = ((unsigned)v0 < (unsigned)t6) ? 1 : 0;                 // 0x0019f000: sltu $v0, $v0, $t6
    if (v0 != 0) goto label_0x19ef48;                           // 0x0019f004: bnez $v0, 0x19ef48
    goto label_0x19f05c;                                        // 0x0019f00c: b 0x19f05c
    /* nop */                                                   // 0x0019f010: nop 
label_0x19f014:
label_0x19f018:
    v0 = *(int32_t*)((v0) + 4);                                 // 0x0019f018: lw $v0, 4($v0)
    if (v0 != 0) goto label_0x19ee60;                           // 0x0019f01c: bnez $v0, 0x19ee60
    /* nop */                                                   // 0x0019f020: nop 
    t6 = *(int16_t*)((t4) + 0x14);                              // 0x0019f024: lh $t6, 0x14($t4)
    v0 = *(int16_t*)((a0) + 0x10);                              // 0x0019f028: lh $v0, 0x10($a0)
    t4 = *(int16_t*)((t4) + 0x16);                              // 0x0019f02c: lh $t4, 0x16($t4)
    t4 = t6 + t4;                                               // 0x0019f030: addu $t4, $t6, $t4
    t4 = v1 - t4;                                               // 0x0019f034: subu $t4, $v1, $t4
    v0 = (t4 < v0) ? 1 : 0;                                     // 0x0019f038: slt $v0, $t4, $v0
    if (v0 != 0) goto label_0x19f04c;                           // 0x0019f03c: bnez $v0, 0x19f04c
    v0 = 1;                                                     // 0x0019f040: addiu $v0, $zero, 1
    goto label_0x19f05c;                                        // 0x0019f044: b 0x19f05c
    /* nop */                                                   // 0x0019f048: nop 
label_0x19f04c:
    if (t8 != 0) goto label_0x19f05c;                           // 0x0019f04c: bnez $t8, 0x19f05c
    v0 = -1;                                                    // 0x0019f050: addiu $v0, $zero, -1
    goto label_0x19ee50;                                        // 0x0019f054: b 0x19ee50
    t8 = t8 + 1;                                                // 0x0019f058: addiu $t8, $t8, 1
label_0x19f05c:
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x0019f05c: xori.b $w1, $w0, 0xb4
label_0x19f060:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x0019f064: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x0019f068: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0019f06c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0019f070: jr $ra
    sp = sp + 0x50;                                             // 0x0019f074: addiu $sp, $sp, 0x50
}