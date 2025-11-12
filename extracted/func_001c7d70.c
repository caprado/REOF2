void func_001c7d70() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x60;                                            // 0x001c7d70: addiu $sp, $sp, -0x60
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001c7d7c: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001c7d88: addu.qb $zero, $sp, $s1
    if (s2 > 0) goto label_0x1c7db0;                            // 0x001c7d9c: bgtz $s2, 0x1c7db0
    goto label_0x1c7e70;                                        // 0x001c7da4: b 0x1c7e70
    /* nop */                                                   // 0x001c7dac: nop 
label_0x1c7db0:
    func_001c7780();  // 0x1c7770                                // 0x001c7db0: jal 0x1c7770
    /* nop */                                                   // 0x001c7db4: nop 
    at = (s2 < 0x3cb) ? 1 : 0;                                  // 0x001c7db8: slti $at, $s2, 0x3cb
    if (at != 0) goto label_0x1c7dc8;                           // 0x001c7dbc: bnez $at, 0x1c7dc8
    /* nop */                                                   // 0x001c7dc0: nop 
    s0 = 0x3ca;                                                 // 0x001c7dc4: addiu $s0, $zero, 0x3ca
label_0x1c7dc8:
    s3 = 0x31 << 16;                                            // 0x001c7dcc: lui $s3, 0x31
    s3 = s3 + 0x669c;                                           // 0x001c7dd4: addiu $s3, $s3, 0x669c
    a1 = s2 + 0x26;                                             // 0x001c7dd8: addiu $a1, $s2, 0x26
    g_0031669c = s4;  // Global at 0x0031669c                   // 0x001c7ddc: sh $s4, 0($s3)
    a0 = 0x13;                                                  // 0x001c7de0: addiu $a0, $zero, 0x13
    func_001c7670();  // 0x1c75b0                                // 0x001c7de8: jal 0x1c75b0
    g_0031669e = s0;  // Global at 0x0031669e                   // 0x001c7dec: sh $s0, 2($s3)
    iFlushCache();  // 0x114560                                 // 0x001c7df8: jal 0x114560
    if (v0 >= 0) goto label_0x1c7e20;                           // 0x001c7e08: bgez $v0, 0x1c7e20
    /* nop */                                                   // 0x001c7e0c: nop 
    func_001c7790();  // 0x1c7780                                // 0x001c7e10: jal 0x1c7780
    /* nop */                                                   // 0x001c7e14: nop 
    goto label_0x1c7e70;                                        // 0x001c7e18: b 0x1c7e70
label_0x1c7e20:
    at = 0x31 << 16;                                            // 0x001c7e20: lui $at, 0x31
    v0 = g_00316698;  // Global at 0x00316698                   // 0x001c7e24: lw $v0, 0x6698($at)
    at = (s2 < v0) ? 1 : 0;                                     // 0x001c7e28: slt $at, $s2, $v0
    if (at != 0) goto label_0x1c7e40;                           // 0x001c7e2c: bnez $at, 0x1c7e40
    /* nop */                                                   // 0x001c7e30: nop 
    /* nop */                                                   // 0x001c7e3c: nop 
label_0x1c7e40:
    at = (0 < a2) ? 1 : 0;                                      // 0x001c7e48: slt $at, $zero, $a2
    if (at == 0) goto label_0x1c7e60;                           // 0x001c7e4c: beqz $at, 0x1c7e60
    func_00107b68();  // 0x107ab8                                // 0x001c7e54: jal 0x107ab8
    a1 = s3 + 4;                                                // 0x001c7e58: addiu $a1, $s3, 4
    /* nop */                                                   // 0x001c7e5c: nop 
label_0x1c7e60:
    func_001c7790();  // 0x1c7780                                // 0x001c7e60: jal 0x1c7780
    /* nop */                                                   // 0x001c7e64: nop 
    /* nop */                                                   // 0x001c7e6c: nop 
label_0x1c7e70:
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001c7e74: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001c7e7c: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001c7e80: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c7e84: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c7e88: jr $ra
    sp = sp + 0x60;                                             // 0x001c7e8c: addiu $sp, $sp, 0x60
}