void func_001c8a70() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x001c8a70: addiu $sp, $sp, -0x50
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001c8a78: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001c8a84: addu.qb $zero, $sp, $s1
    func_001c7780();  // 0x1c7770                                // 0x001c8a94: jal 0x1c7770
    at = 0x31 << 16;                                            // 0x001c8a9c: lui $at, 0x31
    a0 = 0x47;                                                  // 0x001c8aa0: addiu $a0, $zero, 0x47
    a1 = 0x20;                                                  // 0x001c8aa4: addiu $a1, $zero, 0x20
    a2 = 0x32c;                                                 // 0x001c8aa8: addiu $a2, $zero, 0x32c
    func_001c7670();  // 0x1c75b0                                // 0x001c8aac: jal 0x1c75b0
    g_00316680 = s0;  // Global at 0x00316680                   // 0x001c8ab0: sw $s0, 0x6680($at)
    v1 = 0x31 << 16;                                            // 0x001c8ab4: lui $v1, 0x31
    v1 = v1 + 0x669c;                                           // 0x001c8abc: addiu $v1, $v1, 0x669c
    v0 = g_0031669c;  // Global at 0x0031669c                   // 0x001c8ac4: lw $v0, 0($v1)
    *(uint32_t*)(s3) = v0;                                      // 0x001c8ac8: sw $v0, 0($s3)
    v0 = g_003166a0;  // Global at 0x003166a0                   // 0x001c8acc: lw $v0, 4($v1)
    *(uint32_t*)(s2) = v0;                                      // 0x001c8ad0: sw $v0, 0($s2)
    v0 = g_003166a4;  // Global at 0x003166a4                   // 0x001c8ad4: lw $v0, 8($v1)
    func_001c7790();  // 0x1c7780                                // 0x001c8ad8: jal 0x1c7780
    *(uint32_t*)(s1) = v0;                                      // 0x001c8adc: sw $v0, 0($s1)
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001c8aec: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001c8af0: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c8af4: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c8af8: jr $ra
    sp = sp + 0x50;                                             // 0x001c8afc: addiu $sp, $sp, 0x50
}