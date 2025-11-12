void func_0019e990() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x0019e990: addiu $sp, $sp, -0x40
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x0019e99c: addu.qb $zero, $sp, $s1
    if (s2 != 0) goto label_0x19e9e8;                           // 0x0019e9a8: bnez $s2, 0x19e9e8
    a0 = 0x29 << 16;                                            // 0x0019e9b0: lui $a0, 0x29
    a1 = 0x200;                                                 // 0x0019e9b4: addiu $a1, $zero, 0x200
    func_0019e880();  // 0x19e820                                // 0x0019e9b8: jal 0x19e820
    a0 = a0 + -0x3b50;                                          // 0x0019e9bc: addiu $a0, $a0, -0x3b50
    if (v0 != 0) goto label_0x19e9d0;                           // 0x0019e9c0: bnez $v0, 0x19e9d0
    goto label_0x19ea70;                                        // 0x0019e9c8: b 0x19ea70
label_0x19e9d0:
    func_0019e950();  // 0x19e900                                // 0x0019e9d4: jal 0x19e900
    at = 0x29 << 16;                                            // 0x0019e9dc: lui $at, 0x29
    goto label_0x19ea3c;                                        // 0x0019e9e0: b 0x19ea3c
    a0 = g_0028ffb8;  // Global at 0x0028ffb8                   // 0x0019e9e4: lh $a0, -0x48($at)
label_0x19e9e8:
    a0 = 0x29 << 16;                                            // 0x0019e9e8: lui $a0, 0x29
    a1 = 0x200;                                                 // 0x0019e9ec: addiu $a1, $zero, 0x200
    func_0019e880();  // 0x19e820                                // 0x0019e9f0: jal 0x19e820
    a0 = a0 + -0x3b50;                                          // 0x0019e9f4: addiu $a0, $a0, -0x3b50
    if (v0 != 0) goto label_0x19ea08;                           // 0x0019e9f8: bnez $v0, 0x19ea08
    goto label_0x19ea70;                                        // 0x0019ea00: b 0x19ea70
label_0x19ea08:
    func_0019e950();  // 0x19e900                                // 0x0019ea0c: jal 0x19e900
    v0 = *(int16_t*)((s1) + 0x12);                              // 0x0019ea14: lh $v0, 0x12($s1)
    a0 = *(int16_t*)((s2) + 0x14);                              // 0x0019ea18: lh $a0, 0x14($s2)
    v1 = *(int16_t*)((s2) + 0x16);                              // 0x0019ea1c: lh $v1, 0x16($s2)
    a1 = v0 + -1;                                               // 0x0019ea20: addiu $a1, $v0, -1
    v0 = ~a1;                                                   // 0x0019ea24: not $v0, $a1
    v1 = a0 + v1;                                               // 0x0019ea28: addu $v1, $a0, $v1
    v1 = a1 + v1;                                               // 0x0019ea2c: addu $v1, $a1, $v1
    v0 = v0 & v1;                                               // 0x0019ea30: and $v0, $v0, $v1
label_0x19ea3c:
    *(uint16_t*)((s1) + 0x14) = a0;                             // 0x0019ea3c: sh $a0, 0x14($s1)
    v0 = 1;                                                     // 0x0019ea40: addiu $v0, $zero, 1
    *(uint8_t*)((s1) + 0x35) = v0;                              // 0x0019ea44: sb $v0, 0x35($s1)
    *(uint32_t*)((s0) + 8) = s1;                                // 0x0019ea48: sw $s1, 8($s0)
    v1 = *(int32_t*)((s1) + 4);                                 // 0x0019ea4c: lw $v1, 4($s1)
    *(uint32_t*)((s0) + 0xc) = v1;                              // 0x0019ea50: sw $v1, 0xc($s0)
    v1 = *(int32_t*)(s1);                                       // 0x0019ea54: lw $v1, 0($s1)
    *(uint32_t*)((s0) + 0x10) = v1;                             // 0x0019ea58: sw $v1, 0x10($s0)
    *(uint16_t*)((s0) + 0x14) = a0;                             // 0x0019ea5c: sh $a0, 0x14($s0)
    v1 = *(int16_t*)((s1) + 0x10);                              // 0x0019ea60: lh $v1, 0x10($s1)
    *(uint16_t*)((s0) + 0x16) = v1;                             // 0x0019ea64: sh $v1, 0x16($s0)
    v1 = *(int16_t*)((s1) + 0x12);                              // 0x0019ea68: lh $v1, 0x12($s1)
    *(uint16_t*)((s0) + 0x18) = v1;                             // 0x0019ea6c: sh $v1, 0x18($s0)
label_0x19ea70:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x0019ea74: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x0019ea78: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0019ea7c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0019ea80: jr $ra
    sp = sp + 0x40;                                             // 0x0019ea84: addiu $sp, $sp, 0x40
}