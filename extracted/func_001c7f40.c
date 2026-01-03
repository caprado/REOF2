void func_001c7f40() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001c7f40: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001c7f48: addu.qb $zero, $sp, $s1
    func_001c7770();  // 1c7770                                // 0x001c7f54: jal 0x1c7770
    v0 = 0x31 << 16;                                            // 0x001c7f5c: lui $v0, 0x31
    a0 = 0x1f;                                                  // 0x001c7f60: addiu $a0, $zero, 0x1f
    v0 = v0 + 0x669c;                                           // 0x001c7f64: addiu $v0, $v0, 0x669c
    a1 = 0x28;                                                  // 0x001c7f68: addiu $a1, $zero, 0x28
    g_0031669c = s1;  // Global at 0x0031669c                   // 0x001c7f6c: sw $s1, 0($v0)
    a2 = 0x20;                                                  // 0x001c7f70: addiu $a2, $zero, 0x20
    func_001c75b0();  // 1c75b0                                // 0x001c7f74: jal 0x1c75b0
    g_003166a0 = s0;  // Global at 0x003166a0                   // 0x001c7f78: sw $s0, 4($v0)
    func_001c7780();  // 1c7780                                // 0x001c7f80: jal 0x1c7780
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001c7f90: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c7f94: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c7f98: jr $ra
    sp = sp + 0x30;                                             // 0x001c7f9c: addiu $sp, $sp, 0x30
}