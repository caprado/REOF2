void func_001b0f40() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001b0f40: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b0f48: addu.qb $zero, $sp, $s1
label_0x1b0f54:
    v0 = 0x4c << 16;                                            // 0x001b0f58: lui $v0, 0x4c
    v0 = v0 + 0x4290;                                           // 0x001b0f60: addiu $v0, $v0, 0x4290
    v1 = s0 << 3;                                               // 0x001b0f64: sll $v1, $s0, 3
    v1 = v1 + s0;                                               // 0x001b0f6c: addu $v1, $v1, $s0
    a2 = 0x4c;                                                  // 0x001b0f70: addiu $a2, $zero, 0x4c
    v1 = v1 << 1;                                               // 0x001b0f74: sll $v1, $v1, 1
    v1 = v1 + s0;                                               // 0x001b0f78: addu $v1, $v1, $s0
    v1 = v1 << 2;                                               // 0x001b0f7c: sll $v1, $v1, 2
    func_00107d30();  // 0x107c70                                // 0x001b0f80: jal 0x107c70
    a0 = v0 + v1;                                               // 0x001b0f84: addu $a0, $v0, $v1
    v1 = s1 + 1;                                                // 0x001b0f88: addiu $v1, $s1, 1
    a0 = 0x4c << 16;                                            // 0x001b0f8c: lui $a0, 0x4c
    a0 = a0 + 0x2e30;                                           // 0x001b0f94: addiu $a0, $a0, 0x2e30
    a0 = a0 + s0;                                               // 0x001b0f9c: addu $a0, $a0, $s0
    v1 = (s1 < 0x258) ? 1 : 0;                                  // 0x001b0fa0: slti $v1, $s1, 0x258
    if (v1 != 0) goto label_0x1b0f54;                           // 0x001b0fa4: bnez $v1, 0x1b0f54
    g_004c2e30 = 0;  // Global at 0x004c2e30                    // 0x001b0fa8: sb $zero, 0($a0)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b0fb0: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b0fb4: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b0fb8: jr $ra
    sp = sp + 0x30;                                             // 0x001b0fbc: addiu $sp, $sp, 0x30
}