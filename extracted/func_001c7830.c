void func_001c7830() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x001c7830: addiu $sp, $sp, -0x40
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001c783c: addu.qb $zero, $sp, $s1
    func_001c7780();  // 0x1c7770                                // 0x001c784c: jal 0x1c7770
    v0 = 0x31 << 16;                                            // 0x001c7854: lui $v0, 0x31
    a0 = 1;                                                     // 0x001c7858: addiu $a0, $zero, 1
    v0 = v0 + 0x669c;                                           // 0x001c785c: addiu $v0, $v0, 0x669c
    a1 = 0x2c;                                                  // 0x001c7860: addiu $a1, $zero, 0x2c
    g_0031669c = s2;  // Global at 0x0031669c                   // 0x001c7864: sw $s2, 0($v0)
    a2 = 0x20;                                                  // 0x001c7868: addiu $a2, $zero, 0x20
    g_003166a0 = s1;  // Global at 0x003166a0                   // 0x001c786c: sw $s1, 4($v0)
    func_001c7670();  // 0x1c75b0                                // 0x001c7870: jal 0x1c75b0
    g_003166a4 = s0;  // Global at 0x003166a4                   // 0x001c7874: sw $s0, 8($v0)
    func_001c7790();  // 0x1c7780                                // 0x001c787c: jal 0x1c7780
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001c788c: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001c7890: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c7894: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c7898: jr $ra
    sp = sp + 0x40;                                             // 0x001c789c: addiu $sp, $sp, 0x40
}