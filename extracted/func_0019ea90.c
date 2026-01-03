void func_0019ea90() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x0019ea90: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x0019ea98: addu.qb $zero, $sp, $s1
    if (s1 != 0) goto label_0x19eae8;                           // 0x0019eaa4: bnez $s1, 0x19eae8
    a0 = 0x29 << 16;                                            // 0x0019eaac: lui $a0, 0x29
    a1 = 0x200;                                                 // 0x0019eab0: addiu $a1, $zero, 0x200
    func_0019e820();  // 19e820                                // 0x0019eab4: jal 0x19e820
    a0 = a0 + -0x3b50;                                          // 0x0019eab8: addiu $a0, $a0, -0x3b50
    if (v0 != 0) goto label_0x19eacc;                           // 0x0019eabc: bnez $v0, 0x19eacc
    goto label_0x19eb7c;                                        // 0x0019eac4: b 0x19eb7c
label_0x19eacc:
    func_0019e900();  // 19e900                                // 0x0019ead0: jal 0x19e900
    at = 0x29 << 16;                                            // 0x0019ead8: lui $at, 0x29
    v0 = g_0028ffb8;  // Global at 0x0028ffb8                   // 0x0019eadc: lw $v0, -0x48($at)
    goto label_0x19eb2c;                                        // 0x0019eae0: b 0x19eb2c
    *(uint16_t*)((s1) + 0x14) = v0;                             // 0x0019eae4: sh $v0, 0x14($s1)
label_0x19eae8:
    a0 = *(int32_t*)((s1) + 4);                                 // 0x0019eae8: lw $a0, 4($s1)
    if (a0 == 0) goto label_0x19eb2c;                           // 0x0019eaec: beqz $a0, 0x19eb2c
    /* nop */                                                   // 0x0019eaf0: nop 
    goto label_0x19eb14;                                        // 0x0019eaf4: b 0x19eb14
    a1 = g_0028c4c4;  // Global at 0x0028c4c4                   // 0x0019eaf8: lh $a1, 0x14($a0)
label_0x19eafc:
    func_0019e880();  // 19e880                                // 0x0019eafc: jal 0x19e880
    /* nop */                                                   // 0x0019eb00: nop 
    a0 = *(int32_t*)((s1) + 4);                                 // 0x0019eb04: lw $a0, 4($s1)
    if (a0 == 0) goto label_0x19eb2c;                           // 0x0019eb08: beqz $a0, 0x19eb2c
    /* nop */                                                   // 0x0019eb0c: nop 
    a1 = g_0028c4c4;  // Global at 0x0028c4c4                   // 0x0019eb10: lh $a1, 0x14($a0)
label_0x19eb14:
    v1 = *(int16_t*)((s1) + 0x14);                              // 0x0019eb14: lh $v1, 0x14($s1)
    v0 = *(int16_t*)((s0) + 0x10);                              // 0x0019eb18: lh $v0, 0x10($s0)
    v1 = a1 - v1;                                               // 0x0019eb1c: subu $v1, $a1, $v1
    v0 = (v1 < v0) ? 1 : 0;                                     // 0x0019eb20: slt $v0, $v1, $v0
    if (v0 != 0) goto label_0x19eafc;                           // 0x0019eb24: bnez $v0, 0x19eafc
    /* nop */                                                   // 0x0019eb28: nop 
label_0x19eb2c:
    v0 = *(int32_t*)((s1) + 8);                                 // 0x0019eb2c: lw $v0, 8($s1)
    if (v0 == 0) goto label_0x19eb48;                           // 0x0019eb30: beqz $v0, 0x19eb48
    /* nop */                                                   // 0x0019eb34: nop 
    *(uint8_t*)((v0) + 0x35) = 0;                               // 0x0019eb38: sb $zero, 0x35($v0)
    v1 = 4;                                                     // 0x0019eb3c: addiu $v1, $zero, 4
    v0 = *(int32_t*)((s1) + 8);                                 // 0x0019eb40: lw $v0, 8($s1)
    *(uint32_t*)(v0) = v1;                                      // 0x0019eb44: sw $v1, 0($v0)
label_0x19eb48:
    v1 = *(int16_t*)((s1) + 0x14);                              // 0x0019eb48: lh $v1, 0x14($s1)
    v0 = 1;                                                     // 0x0019eb4c: addiu $v0, $zero, 1
    *(uint16_t*)((s0) + 0x14) = v1;                             // 0x0019eb50: sh $v1, 0x14($s0)
    *(uint8_t*)((s0) + 0x35) = v0;                              // 0x0019eb54: sb $v0, 0x35($s0)
    *(uint32_t*)((s1) + 8) = s0;                                // 0x0019eb58: sw $s0, 8($s1)
    v1 = *(int32_t*)((s0) + 4);                                 // 0x0019eb5c: lw $v1, 4($s0)
    *(uint32_t*)((s1) + 0xc) = v1;                              // 0x0019eb60: sw $v1, 0xc($s1)
    v1 = *(int32_t*)(s0);                                       // 0x0019eb64: lw $v1, 0($s0)
    *(uint32_t*)((s1) + 0x10) = v1;                             // 0x0019eb68: sw $v1, 0x10($s1)
    v1 = *(int16_t*)((s0) + 0x10);                              // 0x0019eb6c: lh $v1, 0x10($s0)
    *(uint16_t*)((s1) + 0x16) = v1;                             // 0x0019eb70: sh $v1, 0x16($s1)
    v1 = *(int16_t*)((s0) + 0x12);                              // 0x0019eb74: lh $v1, 0x12($s0)
    *(uint16_t*)((s1) + 0x18) = v1;                             // 0x0019eb78: sh $v1, 0x18($s1)
label_0x19eb7c:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x0019eb80: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0019eb84: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0019eb88: jr $ra
    sp = sp + 0x30;                                             // 0x0019eb8c: addiu $sp, $sp, 0x30
}