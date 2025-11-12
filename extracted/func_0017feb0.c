void func_0017feb0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x0017feb0: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x0017feb8: addu.qb $zero, $sp, $s1
    at = ((unsigned)a0 < (unsigned)s1) ? 1 : 0;                 // 0x0017fec4: sltu $at, $a0, $s1
    if (at == 0) goto label_0x17fef0;                           // 0x0017fec8: beqz $at, 0x17fef0
label_0x17fed0:
    v0 = *(int32_t*)(s0);                                       // 0x0017fed0: lw $v0, 0($s0)
    /* call function at address in v0 */                        // 0x0017fed4: jalr $v0
    /* nop */                                                   // 0x0017fed8: nop 
    s0 = s0 + 4;                                                // 0x0017fedc: addiu $s0, $s0, 4
    v1 = ((unsigned)s0 < (unsigned)s1) ? 1 : 0;                 // 0x0017fee0: sltu $v1, $s0, $s1
    /* nop */                                                   // 0x0017fee4: nop 
    if (v1 != 0) goto label_0x17fed0;                           // 0x0017fee8: bnez $v1, 0x17fed0
    /* nop */                                                   // 0x0017feec: nop 
label_0x17fef0:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x0017fef4: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0017fef8: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0017fefc: jr $ra
    sp = sp + 0x30;                                             // 0x0017ff00: addiu $sp, $sp, 0x30
}