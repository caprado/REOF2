void func_001ae3d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001ae3d0: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001ae3d8: addu.qb $zero, $sp, $s1
    func_001b7a70();  // 1b7a70                                // 0x001ae3e8: jal 0x1b7a70
    a0 = 0xe;                                                   // 0x001ae3ec: addiu $a0, $zero, 0xe
    if (v0 != 0) goto label_0x1ae430;                           // 0x001ae3f0: bnez $v0, 0x1ae430
    v1 = 0x2b << 16;                                            // 0x001ae3f4: lui $v1, 0x2b
    a0 = s0 << 2;                                               // 0x001ae3f8: sll $a0, $s0, 2
    v1 = v1 + -0x5788;                                          // 0x001ae3fc: addiu $v1, $v1, -0x5788
    s0 = v1 + a0;                                               // 0x001ae400: addu $s0, $v1, $a0
    v1 = *(int32_t*)(s0);                                       // 0x001ae404: lw $v1, 0($s0)
    if (v1 == 0) goto label_0x1ae430;                           // 0x001ae408: beqz $v1, 0x1ae430
    func_001aaca0();  // 1aaca0                                // 0x001ae410: jal 0x1aaca0
    /* nop */                                                   // 0x001ae414: nop 
    if (a2 < 0) goto label_0x1ae430;                            // 0x001ae41c: bltz $a2, 0x1ae430
    /* nop */                                                   // 0x001ae420: nop 
    a0 = *(int32_t*)(s0);                                       // 0x001ae424: lw $a0, 0($s0)
    func_0012a378();  // 12a378                                // 0x001ae428: jal 0x12a378
    a1 = 3;                                                     // 0x001ae42c: addiu $a1, $zero, 3
label_0x1ae430:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001ae434: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001ae438: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001ae43c: jr $ra
    sp = sp + 0x30;                                             // 0x001ae440: addiu $sp, $sp, 0x30
}