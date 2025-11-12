void func_001c87f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x001c87f0: addiu $sp, $sp, -0x50
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001c87f8: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001c8804: addu.qb $zero, $sp, $s1
    func_001c7780();  // 0x1c7770                                // 0x001c8810: jal 0x1c7770
    s0 = 0x31 << 16;                                            // 0x001c8818: lui $s0, 0x31
    if (s3 == 0) goto label_0x1c8838;                           // 0x001c881c: beqz $s3, 0x1c8838
    s0 = s0 + 0x669c;                                           // 0x001c8820: addiu $s0, $s0, 0x669c
    func_0010ae00();  // 0x10ac68                                // 0x001c8828: jal 0x10ac68
    goto label_0x1c8840;                                        // 0x001c8830: b 0x1c8840
    /* nop */                                                   // 0x001c8834: nop 
label_0x1c8838:
    g_0031669c = 0;  // Global at 0x0031669c                    // 0x001c8838: sb $zero, 0($s0)
    /* nop */                                                   // 0x001c883c: nop 
label_0x1c8840:
    g_0031679c = s2;  // Global at 0x0031679c                   // 0x001c8840: sw $s2, 0x100($s0)
    a0 = 0x3b;                                                  // 0x001c8844: addiu $a0, $zero, 0x3b
    a1 = 0x128;                                                 // 0x001c8848: addiu $a1, $zero, 0x128
    a2 = 0x20;                                                  // 0x001c884c: addiu $a2, $zero, 0x20
    func_001c7670();  // 0x1c75b0                                // 0x001c8850: jal 0x1c75b0
    g_003167a0 = s1;  // Global at 0x003167a0                   // 0x001c8854: sw $s1, 0x104($s0)
    func_001c7790();  // 0x1c7780                                // 0x001c885c: jal 0x1c7780
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001c8870: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001c8874: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c8878: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c887c: jr $ra
    sp = sp + 0x50;                                             // 0x001c8880: addiu $sp, $sp, 0x50
}