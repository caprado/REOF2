void func_001b9c10() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x130;                                           // 0x001b9c10: addiu $sp, $sp, -0x130
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b9c18: addu.qb $zero, $sp, $s1
    at = (s1 < 5) ? 1 : 0;                                      // 0x001b9c24: slti $at, $s1, 5
    if (at == 0) goto label_0x1b9c80;                           // 0x001b9c28: beqz $at, 0x1b9c80
    a1 = 0x24 << 16;                                            // 0x001b9c30: lui $a1, 0x24
    a0 = sp + 0x30;                                             // 0x001b9c34: addiu $a0, $sp, 0x30
    a1 = &str_0023ddb0;  // "%s%s%s%s%s"                        // 0x001b9c38: addiu $a1, $a1, -0x2250
    a2 = 2;                                                     // 0x001b9c3c: addiu $a2, $zero, 2
    func_0010a570();  // 0x10a4d8                                // 0x001b9c40: jal 0x10a4d8
    func_001aaee0();  // 0x1aae40                                // 0x001b9c4c: jal 0x1aae40
    if (v0 == 0) goto label_0x1b9c74;                           // 0x001b9c54: beqz $v0, 0x1b9c74
    v1 = 0x49 << 16;                                            // 0x001b9c58: lui $v1, 0x49
    v1 = 0x49 << 16;                                            // 0x001b9c5c: lui $v1, 0x49
    a0 = s0 + 1;                                                // 0x001b9c60: addiu $a0, $s0, 1
    v1 = v1 + 0x1341;                                           // 0x001b9c64: addiu $v1, $v1, 0x1341
    v1 = v1 + s1;                                               // 0x001b9c68: addu $v1, $v1, $s1
    goto label_0x1b9c80;                                        // 0x001b9c6c: b 0x1b9c80
    g_00491341 = a0;  // Global at 0x00491341                   // 0x001b9c70: sb $a0, 0($v1)
label_0x1b9c74:
    v1 = v1 + 0x1341;                                           // 0x001b9c74: addiu $v1, $v1, 0x1341
    v1 = v1 + s1;                                               // 0x001b9c78: addu $v1, $v1, $s1
    g_00492682 = 0;  // Global at 0x00492682                    // 0x001b9c7c: sb $zero, 0($v1)
label_0x1b9c80:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b9c84: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b9c88: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b9c8c: jr $ra
    sp = sp + 0x130;                                            // 0x001b9c90: addiu $sp, $sp, 0x130
}