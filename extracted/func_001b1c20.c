void func_001b1c20() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x001b1c20: addiu $sp, $sp, -0x40
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b1c2c: addu.qb $zero, $sp, $s1
label_0x1b1c38:
    v0 = 0xc84;                                                 // 0x001b1c38: addiu $v0, $zero, 0xc84
    /* multiply: s2 * v0 -> hi:lo */                            // 0x001b1c40: mult $ac3, $s2, $v0
    v0 = 0x49 << 16;                                            // 0x001b1c44: lui $v0, 0x49
    v0 = v0 + 0x5110;                                           // 0x001b1c48: addiu $v0, $v0, 0x5110
    goto label_0x1b1c70;                                        // 0x001b1c4c: b 0x1b1c70
    s0 = v0 + v1;                                               // 0x001b1c50: addu $s0, $v0, $v1
label_0x1b1c54:
    v0 = s0 + v0;                                               // 0x001b1c54: addu $v0, $s0, $v0
    func_001d6700();  // 1d6700                                // 0x001b1c58: jal 0x1d6700
    a0 = g_00495114;  // Global at 0x00495114                   // 0x001b1c5c: lhu $a0, 4($v0)
    v1 = 1;                                                     // 0x001b1c60: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x1b1c7c;                          // 0x001b1c64: beq $v0, $v1, 0x1b1c7c
    /* nop */                                                   // 0x001b1c68: nop 
    s1 = s1 + 1;                                                // 0x001b1c6c: addiu $s1, $s1, 1
label_0x1b1c70:
    v0 = (s1 < 0x640) ? 1 : 0;                                  // 0x001b1c70: slti $v0, $s1, 0x640
    if (v0 != 0) goto label_0x1b1c54;                           // 0x001b1c74: bnez $v0, 0x1b1c54
    v0 = s1 << 1;                                               // 0x001b1c78: sll $v0, $s1, 1
label_0x1b1c7c:
    v0 = 0x640;                                                 // 0x001b1c7c: addiu $v0, $zero, 0x640
    if (s1 != v0) goto label_0x1b1c98;                          // 0x001b1c80: bne $s1, $v0, 0x1b1c98
    a0 = s0 + 4;                                                // 0x001b1c84: addiu $a0, $s0, 4
    func_001b18e0();  // 1b18e0                                // 0x001b1c88: jal 0x1b18e0
    a0 = s0 + 4;                                                // 0x001b1c8c: addiu $a0, $s0, 4
    goto label_0x1b1ca8;                                        // 0x001b1c90: b 0x1b1ca8
    v0 = s2 << 6;                                               // 0x001b1c94: sll $v0, $s2, 6
label_0x1b1c98:
    func_00107c70();  // 107c70                                // 0x001b1c9c: jal 0x107c70
    a2 = 0xc80;                                                 // 0x001b1ca0: addiu $a2, $zero, 0xc80
    v0 = s2 << 6;                                               // 0x001b1ca4: sll $v0, $s2, 6
label_0x1b1ca8:
    *(uint8_t*)(s0) = 0;                                        // 0x001b1ca8: sb $zero, 0($s0)
    v0 = v0 - s2;                                               // 0x001b1cac: subu $v0, $v0, $s2
    *(uint8_t*)((s0) + 1) = 0;                                  // 0x001b1cb0: sb $zero, 1($s0)
    v1 = v0 << 2;                                               // 0x001b1cb4: sll $v1, $v0, 2
    v0 = 0x49 << 16;                                            // 0x001b1cb8: lui $v0, 0x49
    v1 = v1 - s2;                                               // 0x001b1cbc: subu $v1, $v1, $s2
    v0 = v0 + 0x3980;                                           // 0x001b1cc0: addiu $v0, $v0, 0x3980
    v1 = v1 << 2;                                               // 0x001b1cc4: sll $v1, $v1, 2
    s0 = v0 + v1;                                               // 0x001b1cc8: addu $s0, $v0, $v1
    func_001b1950();  // 1b1950                                // 0x001b1ccc: jal 0x1b1950
    a0 = s0 + 4;                                                // 0x001b1cd0: addiu $a0, $s0, 4
    s2 = s2 + 1;                                                // 0x001b1cd4: addiu $s2, $s2, 1
    *(uint8_t*)(s0) = 0;                                        // 0x001b1cd8: sb $zero, 0($s0)
    v1 = (s2 < 6) ? 1 : 0;                                      // 0x001b1cdc: slti $v1, $s2, 6
    if (v1 != 0) goto label_0x1b1c38;                           // 0x001b1ce0: bnez $v1, 0x1b1c38
    *(uint8_t*)((s0) + 1) = 0;                                  // 0x001b1ce4: sb $zero, 1($s0)
    a2 = 0x41;                                                  // 0x001b1ce8: addiu $a2, $zero, 0x41
    a0 = 0x49 << 16;                                            // 0x001b1cec: lui $a0, 0x49
    a1 = 0xff;                                                  // 0x001b1cf0: addiu $a1, $zero, 0xff
    a0 = a0 + 0x1380;                                           // 0x001b1cf4: addiu $a0, $a0, 0x1380
label_0x1b1cf8:
    v1 = a0 + a2;                                               // 0x001b1cf8: addu $v1, $a0, $a2
    a2 = a2 + -1;                                               // 0x001b1cfc: addiu $a2, $a2, -1
    *(uint8_t*)(v1) = a1;                                       // 0x001b1d00: sb $a1, 0($v1)
    /* nop */                                                   // 0x001b1d04: nop 
    /* nop */                                                   // 0x001b1d08: nop 
    if (a2 >= 0) goto label_0x1b1cf8;                           // 0x001b1d0c: bgez $a2, 0x1b1cf8
    /* nop */                                                   // 0x001b1d10: nop 
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001b1d18: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b1d1c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b1d20: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b1d24: jr $ra
    sp = sp + 0x40;                                             // 0x001b1d28: addiu $sp, $sp, 0x40
}