void func_001b1d30() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001b1d30: addiu $sp, $sp, -0x30
    at = 0x49 << 16;                                            // 0x001b1d34: lui $at, 0x49
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b1d3c: addu.qb $zero, $sp, $s1
    v1 = g_004912c8;  // Global at 0x004912c8                   // 0x001b1d44: lb $v1, 0x12c8($at)
    if (v1 == 0) goto label_0x1b1dd8;                           // 0x001b1d48: beqz $v1, 0x1b1dd8
    at = 0x36 << 16;                                            // 0x001b1d4c: lui $at, 0x36
    s0 = g_00361914;  // Global at 0x00361914                   // 0x001b1d50: lw $s0, 0x1914($at)
    if (s0 == 0) goto label_0x1b1d84;                           // 0x001b1d54: beqz $s0, 0x1b1d84
    /* nop */                                                   // 0x001b1d58: nop 
label_0x1b1d60:
    v0 = *(uint16_t*)((s0) + 0x1170);                           // 0x001b1d60: lhu $v0, 0x1170($s0)
    if (v0 == 0) goto label_0x1b1d74;                           // 0x001b1d64: beqz $v0, 0x1b1d74
    a0 = v0 & 0xffff;                                           // 0x001b1d68: andi $a0, $v0, 0xffff
    func_00192370();  // 0x192350                                // 0x001b1d6c: jal 0x192350
    /* nop */                                                   // 0x001b1d70: nop 
label_0x1b1d74:
    s1 = s1 + 1;                                                // 0x001b1d74: addiu $s1, $s1, 1
    v0 = (s1 < 0x10) ? 1 : 0;                                   // 0x001b1d78: slti $v0, $s1, 0x10
    if (v0 != 0) goto label_0x1b1d60;                           // 0x001b1d7c: bnez $v0, 0x1b1d60
    s0 = s0 + 0x11a0;                                           // 0x001b1d80: addiu $s0, $s0, 0x11a0
label_0x1b1d84:
    a0 = 0x49 << 16;                                            // 0x001b1d84: lui $a0, 0x49
    func_001b18f0();  // 0x1b18e0                                // 0x001b1d88: jal 0x1b18e0
    a0 = a0 + 0x2cf4;                                           // 0x001b1d8c: addiu $a0, $a0, 0x2cf4
    at = 0x49 << 16;                                            // 0x001b1d90: lui $at, 0x49
    a0 = 0x49 << 16;                                            // 0x001b1d94: lui $a0, 0x49
    g_00492cf0 = 0;  // Global at 0x00492cf0                    // 0x001b1d98: sb $zero, 0x2cf0($at)
    a0 = a0 + 0x2064;                                           // 0x001b1d9c: addiu $a0, $a0, 0x2064
    at = 0x49 << 16;                                            // 0x001b1da0: lui $at, 0x49
    func_001b18f0();  // 0x1b18e0                                // 0x001b1da4: jal 0x1b18e0
    g_00492cf1 = 0;  // Global at 0x00492cf1                    // 0x001b1da8: sb $zero, 0x2cf1($at)
    at = 0x49 << 16;                                            // 0x001b1dac: lui $at, 0x49
    a0 = 0x49 << 16;                                            // 0x001b1db0: lui $a0, 0x49
    g_00492060 = 0;  // Global at 0x00492060                    // 0x001b1db4: sb $zero, 0x2060($at)
    a0 = a0 + 0x13d4;                                           // 0x001b1db8: addiu $a0, $a0, 0x13d4
    at = 0x49 << 16;                                            // 0x001b1dbc: lui $at, 0x49
    func_001b18f0();  // 0x1b18e0                                // 0x001b1dc0: jal 0x1b18e0
    g_00492061 = 0;  // Global at 0x00492061                    // 0x001b1dc4: sb $zero, 0x2061($at)
    at = 0x49 << 16;                                            // 0x001b1dc8: lui $at, 0x49
    g_004913d0 = 0;  // Global at 0x004913d0                    // 0x001b1dcc: sb $zero, 0x13d0($at)
    at = 0x49 << 16;                                            // 0x001b1dd0: lui $at, 0x49
    g_004913d1 = 0;  // Global at 0x004913d1                    // 0x001b1dd4: sb $zero, 0x13d1($at)
label_0x1b1dd8:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b1ddc: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b1de0: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b1de4: jr $ra
    sp = sp + 0x30;                                             // 0x001b1de8: addiu $sp, $sp, 0x30
}