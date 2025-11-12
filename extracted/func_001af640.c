void func_001af640() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x001af640: addiu $sp, $sp, -0x50
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001af648: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001af654: addu.qb $zero, $sp, $s1
    func_001afb80();  // 0x1afb40                                // 0x001af664: jal 0x1afb40
    v1 = 3;                                                     // 0x001af66c: addiu $v1, $zero, 3
    if (v0 == v1) goto label_0x1af6c4;                          // 0x001af670: beq $v0, $v1, 0x1af6c4
    v1 = 2;                                                     // 0x001af674: addiu $v1, $zero, 2
    if (v0 == v1) goto label_0x1af6c4;                          // 0x001af678: beq $v0, $v1, 0x1af6c4
    /* nop */                                                   // 0x001af67c: nop 
    v1 = 1;                                                     // 0x001af680: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x1af6b4;                          // 0x001af684: beq $v0, $v1, 0x1af6b4
    if (v0 == 0) goto label_0x1af69c;                           // 0x001af68c: beqz $v0, 0x1af69c
    goto label_0x1af6c8;                                        // 0x001af694: b 0x1af6c8
label_0x1af69c:
    func_007d31a0();  // 0x7d31a0                               // 0x001af6a4: jal 0x7d31a0
    goto label_0x1af6c4;                                        // 0x001af6ac: b 0x1af6c4
    /* nop */                                                   // 0x001af6b0: nop 
label_0x1af6b4:
    func_007d28a0();  // 0x7d28a0                               // 0x001af6bc: jal 0x7d28a0
label_0x1af6c4:
label_0x1af6c8:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001af6cc: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001af6d0: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001af6d4: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001af6d8: jr $ra
    sp = sp + 0x50;                                             // 0x001af6dc: addiu $sp, $sp, 0x50
}