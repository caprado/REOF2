void func_001b8b20() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_68, local_6c;
    
    a3 = -1;                                                    // 0x001b8b20: addiu $a3, $zero, -1
    return func_001ac590();  // Tail call                        // 0x001b8b2c: j 0x1ac220
    /* nop */                                                   // 0x001b8b34: nop 
    /* nop */                                                   // 0x001b8b38: nop 
    /* nop */                                                   // 0x001b8b3c: nop 
    sp = sp + -0x70;                                            // 0x001b8b40: addiu $sp, $sp, -0x70
    v0 = 1;                                                     // 0x001b8b44: addiu $v0, $zero, 1
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001b8b50: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b8b60: addu.qb $zero, $sp, $s1
    if (t0 != v0) goto label_0x1b8b7c;                          // 0x001b8b70: bne $t0, $v0, 0x1b8b7c
label_0x1b8b7c:
    v0 = 0x22 << 16;                                            // 0x001b8b7c: lui $v0, 0x22
    v1 = t0 << 2;                                               // 0x001b8b84: sll $v1, $t0, 2
    v0 = v0 + -0x36b0;                                          // 0x001b8b88: addiu $v0, $v0, -0x36b0
    v0 = v0 + v1;                                               // 0x001b8b8c: addu $v0, $v0, $v1
    a2 = sp + 0x68;                                             // 0x001b8b90: addiu $a2, $sp, 0x68
    a1 = g_0021c950;  // Global at 0x0021c950                   // 0x001b8b94: lw $a1, 0($v0)
    func_001b8c20();  // 1b8c20                                // 0x001b8b98: jal 0x1b8c20
    a3 = sp + 0x6c;                                             // 0x001b8b9c: addiu $a3, $sp, 0x6c
    if (v0 == 0) goto label_0x1b8bf4;                           // 0x001b8ba0: beqz $v0, 0x1b8bf4
    /* nop */                                                   // 0x001b8ba4: nop 
    if (s1 != 0) goto label_0x1b8bd8;                           // 0x001b8ba8: bnez $s1, 0x1b8bd8
    /* nop */                                                   // 0x001b8bac: nop 
    a3 = local_68;                                              // 0x001b8bb0: lw $a3, 0x68($sp)
    t0 = local_6c;                                              // 0x001b8bb8: lw $t0, 0x6c($sp)
    func_001ac220();  // 1ac220                                // 0x001b8bc8: jal 0x1ac220
    t1 = -1;                                                    // 0x001b8bcc: addiu $t1, $zero, -1
    goto label_0x1b8bf8;                                        // 0x001b8bd0: b 0x1b8bf8
label_0x1b8bd8:
    a3 = local_68;                                              // 0x001b8bd8: lw $a3, 0x68($sp)
    t0 = local_6c;                                              // 0x001b8be0: lw $t0, 0x6c($sp)
    func_001ac590();  // 1ac590                                // 0x001b8bec: jal 0x1ac590
    t1 = 0x2000;                                                // 0x001b8bf0: addiu $t1, $zero, 0x2000
label_0x1b8bf4:
label_0x1b8bf8:
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001b8bf8: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001b8c00: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b8c04: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b8c08: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b8c0c: jr $ra
    sp = sp + 0x70;                                             // 0x001b8c10: addiu $sp, $sp, 0x70
}