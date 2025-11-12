void func_001d8810() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x60;                                            // 0x001d8810: addiu $sp, $sp, -0x60
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001d881c: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001d8824: addu.qb $zero, $sp, $s1
    s4 = *(int32_t*)(a0);                                       // 0x001d8834: lw $s4, 0($a0)
    s3 = *(int32_t*)((a0) + 4);                                 // 0x001d883c: lw $s3, 4($a0)
    a1 = 0x4c << 16;                                            // 0x001d8840: lui $a1, 0x4c
    a1 = a1 + -0x1170;                                          // 0x001d8844: addiu $a1, $a1, -0x1170
    a2 = s2 + 8;                                                // 0x001d8848: addiu $a2, $s2, 8
    v0 = s4 & 0xffff;                                           // 0x001d8854: andi $v0, $s4, 0xffff
    g_004bee90 = v0;  // Global at 0x004bee90                   // 0x001d8858: sb $v0, 0($a1)
    v0 = s3 & 0xffff;                                           // 0x001d885c: andi $v0, $s3, 0xffff
    func_001d8780();  // 0x1d8490                                // 0x001d8860: jal 0x1d8490
    g_004bee91 = v0;  // Global at 0x004bee91                   // 0x001d8864: sb $v0, 1($a1)
    a1 = 0x4c << 16;                                            // 0x001d8868: lui $a1, 0x4c
    v1 = s4 & 0xffff;                                           // 0x001d886c: andi $v1, $s4, 0xffff
    a1 = a1 + -0x30c0;                                          // 0x001d8870: addiu $a1, $a1, -0x30c0
    v0 = s3 & 0xffff;                                           // 0x001d8874: andi $v0, $s3, 0xffff
    g_004bcf40 = v1;  // Global at 0x004bcf40                   // 0x001d8878: sb $v1, 0($a1)
    a2 = s2 + 0xa8;                                             // 0x001d8888: addiu $a2, $s2, 0xa8
    func_001d8780();  // 0x1d8490                                // 0x001d888c: jal 0x1d8490
    g_004bcf41 = v0;  // Global at 0x004bcf41                   // 0x001d8890: sb $v0, 1($a1)
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001d8898: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001d88a0: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001d88a4: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d88a8: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d88ac: jr $ra
    sp = sp + 0x60;                                             // 0x001d88b0: addiu $sp, $sp, 0x60
}