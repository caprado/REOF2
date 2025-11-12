void func_001c7b50() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x60;                                            // 0x001c7b50: addiu $sp, $sp, -0x60
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001c7b5c: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001c7b6c: addu.qb $zero, $sp, $s1
    func_001c7780();  // 0x1c7770                                // 0x001c7b78: jal 0x1c7770
    s0 = 0x31 << 16;                                            // 0x001c7b80: lui $s0, 0x31
    a1 = 0x2a;                                                  // 0x001c7b84: addiu $a1, $zero, 0x2a
    s0 = s0 + 0x669c;                                           // 0x001c7b88: addiu $s0, $s0, 0x669c
    a0 = 0xf;                                                   // 0x001c7b8c: addiu $a0, $zero, 0xf
    func_001c7670();  // 0x1c75b0                                // 0x001c7b94: jal 0x1c75b0
    g_0031669c = s1;  // Global at 0x0031669c                   // 0x001c7b98: sh $s1, 0($s0)
    if (s1 >= 0) goto label_0x1c7bc0;                           // 0x001c7ba4: bgez $s1, 0x1c7bc0
    /* nop */                                                   // 0x001c7ba8: nop 
    func_001c7790();  // 0x1c7780                                // 0x001c7bac: jal 0x1c7780
    /* nop */                                                   // 0x001c7bb0: nop 
    goto label_0x1c7be0;                                        // 0x001c7bb4: b 0x1c7be0
    /* nop */                                                   // 0x001c7bbc: nop 
label_0x1c7bc0:
    v0 = g_0031669e;  // Global at 0x0031669e                   // 0x001c7bc0: lhu $v0, 2($s0)
    *(uint16_t*)(s4) = v0;                                      // 0x001c7bc4: sh $v0, 0($s4)
    v0 = g_003166a2;  // Global at 0x003166a2                   // 0x001c7bc8: lhu $v0, 6($s0)
    *(uint16_t*)(s3) = v0;                                      // 0x001c7bcc: sh $v0, 0($s3)
    v0 = g_003166a4;  // Global at 0x003166a4                   // 0x001c7bd0: lhu $v0, 8($s0)
    func_001c7790();  // 0x1c7780                                // 0x001c7bd4: jal 0x1c7780
    *(uint16_t*)(s2) = v0;                                      // 0x001c7bd8: sh $v0, 0($s2)
label_0x1c7be0:
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001c7be4: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001c7bec: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001c7bf0: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c7bf4: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c7bf8: jr $ra
    sp = sp + 0x60;                                             // 0x001c7bfc: addiu $sp, $sp, 0x60
}