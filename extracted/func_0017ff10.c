void func_0017ff10() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x0017ff10: addiu $sp, $sp, -0x50
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x0017ff18: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x0017ff24: addu.qb $zero, $sp, $s1
    s0 = *(int32_t*)((a0) + 0x14);                              // 0x0017ff34: lw $s0, 0x14($a0)
    iFlushCache();  // 0x114560                                 // 0x0017ff38: jal 0x114560
    a0 = 2;                                                     // 0x0017ff3c: addiu $a0, $zero, 2
    if (s0 == 0) goto label_0x17ff60;                           // 0x0017ff40: beqz $s0, 0x17ff60
    /* nop */                                                   // 0x0017ff44: nop 
    s2 = s2 + s3;                                               // 0x0017ff48: addu $s2, $s2, $s3
    func_00107d30();  // 0x107c70                                // 0x0017ff54: jal 0x107c70
    /* nop */                                                   // 0x0017ff5c: nop 
label_0x17ff60:
    a0 = *(int32_t*)((s1) + 0x18);                              // 0x0017ff60: lw $a0, 0x18($s1)
    a1 = *(int32_t*)((s1) + 0x1c);                              // 0x0017ff64: lw $a1, 0x1c($s1)
    func_0017ff10();  // 0x17feb0                                // 0x0017ff6c: jal 0x17feb0
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x0017ff7c: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x0017ff80: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0017ff84: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0017ff88: jr $ra
    sp = sp + 0x50;                                             // 0x0017ff8c: addiu $sp, $sp, 0x50
}