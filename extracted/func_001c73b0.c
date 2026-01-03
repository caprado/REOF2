void func_001c73b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x001c73b0: addiu $sp, $sp, -0x50
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001c73b8: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001c73c4: addu.qb $zero, $sp, $s1
label_0x1c73d4:
    func_00128d88();  // 128d88                                // 0x001c73d8: jal 0x128d88
    /* nop */                                                   // 0x001c73e4: nop 
    if (v0 == 0) goto label_0x1c73d4;                           // 0x001c73e8: beqz $v0, 0x1c73d4
    /* nop */                                                   // 0x001c73ec: nop 
    func_001298c8();  // 1298c8                                // 0x001c73f0: jal 0x1298c8
    func_00129460();  // 129460                                // 0x001c7400: jal 0x129460
label_0x1c7408:
    func_00129a08();  // 129a08                                // 0x001c7408: jal 0x129a08
    v1 = 3;                                                     // 0x001c7410: addiu $v1, $zero, 3
    /* nop */                                                   // 0x001c7414: nop 
    /* nop */                                                   // 0x001c7418: nop 
    if (v0 != v1) goto label_0x1c7408;                          // 0x001c741c: bne $v0, $v1, 0x1c7408
    /* nop */                                                   // 0x001c7420: nop 
    func_00129010();  // 129010                                // 0x001c7424: jal 0x129010
    v0 = 1;                                                     // 0x001c742c: addiu $v0, $zero, 1
    func_001c0c00();  // 1c0c00                                // 0x001c7434: jal 0x1c0c00
    *(uint32_t*)((s3) + 0x40) = v0;                             // 0x001c7438: sw $v0, 0x40($s3)
    *(uint32_t*)((s3) + 0x28) = v0;                             // 0x001c743c: sw $v0, 0x28($s3)
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001c7448: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001c744c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c7450: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c7454: jr $ra
    sp = sp + 0x50;                                             // 0x001c7458: addiu $sp, $sp, 0x50
}