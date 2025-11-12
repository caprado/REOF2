void func_001b3fa0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001b3fa0: addiu $sp, $sp, -0x30
    at = 0x31 << 16;                                            // 0x001b3fa4: lui $at, 0x31
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b3fac: addu.qb $zero, $sp, $s1
    v1 = g_003137b6;  // Global at 0x003137b6                   // 0x001b3fb4: lbu $v1, 0x37b6($at)
    if (v1 == 0) goto label_0x1b401c;                           // 0x001b3fb8: beqz $v1, 0x1b401c
    at = 0x49 << 16;                                            // 0x001b3fbc: lui $at, 0x49
    v1 = g_00491364;  // Global at 0x00491364                   // 0x001b3fc0: lbu $v1, 0x1364($at)
    if (v1 != 0) goto label_0x1b401c;                           // 0x001b3fc4: bnez $v1, 0x1b401c
    /* nop */                                                   // 0x001b3fc8: nop 
    func_001b3fa0();  // 0x1b3ef0                                // 0x001b3fcc: jal 0x1b3ef0
    /* nop */                                                   // 0x001b3fd0: nop 
    s1 = 0x30 << 16;                                            // 0x001b3fd4: lui $s1, 0x30
    a0 = -2;                                                    // 0x001b3fd8: addiu $a0, $zero, -2
    func_001b5020();  // 0x1b5010                                // 0x001b3fdc: jal 0x1b5010
    s1 = s1 + 0x6c10;                                           // 0x001b3fe0: addiu $s1, $s1, 0x6c10
label_0x1b3fe8:
    v1 = g_00306c10;  // Global at 0x00306c10                   // 0x001b3fe8: lh $v1, 0($s1)
    if (v1 == 0) goto label_0x1b400c;                           // 0x001b3fec: beqz $v1, 0x1b400c
    /* nop */                                                   // 0x001b3ff0: nop 
    a0 = g_00306c12;  // Global at 0x00306c12                   // 0x001b3ff4: lh $a0, 2($s1)
    a1 = g_00306c14;  // Global at 0x00306c14                   // 0x001b3ff8: lh $a1, 4($s1)
    a2 = g_00306c18;  // Global at 0x00306c18                   // 0x001b3ffc: lbu $a2, 8($s1)
    t0 = g_00306c1a;  // Global at 0x00306c1a                   // 0x001b4000: lbu $t0, 0xa($s1)
    func_001b3ef0();  // 0x1b3ba0                                // 0x001b4004: jal 0x1b3ba0
    a3 = s1 + 0xc;                                              // 0x001b4008: addiu $a3, $s1, 0xc
label_0x1b400c:
    s0 = s0 + 1;                                                // 0x001b400c: addiu $s0, $s0, 1
    v1 = (s0 < 0x20) ? 1 : 0;                                   // 0x001b4010: slti $v1, $s0, 0x20
    if (v1 != 0) goto label_0x1b3fe8;                           // 0x001b4014: bnez $v1, 0x1b3fe8
    s1 = s1 + 0x8c;                                             // 0x001b4018: addiu $s1, $s1, 0x8c
label_0x1b401c:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b4020: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b4024: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b4028: jr $ra
    sp = sp + 0x30;                                             // 0x001b402c: addiu $sp, $sp, 0x30
}