void func_001b8f80() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001b8f80: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b8f88: addu.qb $zero, $sp, $s1
    s1 = 0x39 << 16;                                            // 0x001b8f90: lui $s1, 0x39
    s1 = s1 + 0x4fe0;                                           // 0x001b8f94: addiu $s1, $s1, 0x4fe0
label_0x1b8f9c:
    v1 = g_00394fe0;  // Global at 0x00394fe0                   // 0x001b8f9c: lb $v1, 0($s1)
    if (v1 == 0) goto label_0x1b8fb4;                           // 0x001b8fa0: beqz $v1, 0x1b8fb4
    /* nop */                                                   // 0x001b8fa4: nop 
    v0 = g_00395008;  // Global at 0x00395008                   // 0x001b8fa8: lw $v0, 0x28($s1)
    /* call function at address in v0 */                        // 0x001b8fac: jalr $v0
label_0x1b8fb4:
    s0 = s0 + 1;                                                // 0x001b8fb4: addiu $s0, $s0, 1
    v1 = (s0 < 4) ? 1 : 0;                                      // 0x001b8fb8: slti $v1, $s0, 4
    if (v1 != 0) goto label_0x1b8f9c;                           // 0x001b8fbc: bnez $v1, 0x1b8f9c
    s1 = s1 + 0x3c;                                             // 0x001b8fc0: addiu $s1, $s1, 0x3c
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b8fc8: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b8fcc: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b8fd0: jr $ra
    sp = sp + 0x30;                                             // 0x001b8fd4: addiu $sp, $sp, 0x30
}