void func_001a97d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x001a97d0: addiu $sp, $sp, -0x50
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001a97d8: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001a97e4: addu.qb $zero, $sp, $s1
    a0 = 9;                                                     // 0x001a97f0: addiu $a0, $zero, 9
    a1 = 1;                                                     // 0x001a97f4: addiu $a1, $zero, 1
    func_001a8fc0();  // 1a8fc0                                // 0x001a97f8: jal 0x1a8fc0
label_0x1a9804:
    a0 = *(int32_t*)((s3) + 0x20);                              // 0x001a9804: lw $a0, 0x20($s3)
    func_00128f00();  // 128f00                                // 0x001a9808: jal 0x128f00
    *(uint32_t*)((gp) + -0x63e4) = v0;                          // 0x001a9810: sw $v0, -0x63e4($gp)
    /* nop */                                                   // 0x001a9814: nop 
    if (v0 == 0) goto label_0x1a9804;                           // 0x001a9818: beqz $v0, 0x1a9804
    /* nop */                                                   // 0x001a981c: nop 
    func_001298c8();  // 1298c8                                // 0x001a9820: jal 0x1298c8
    a0 = *(int32_t*)((gp) + -0x63e4);                           // 0x001a9824: lw $a0, -0x63e4($gp)
    a0 = *(int32_t*)((gp) + -0x63e4);                           // 0x001a9828: lw $a0, -0x63e4($gp)
    func_00129460();  // 129460                                // 0x001a9830: jal 0x129460
    goto label_0x1a9858;                                        // 0x001a9838: b 0x1a9858
    a0 = *(int32_t*)((gp) + -0x63e4);                           // 0x001a983c: lw $a0, -0x63e4($gp)
label_0x1a9840:
    v0 = 1;                                                     // 0x001a9840: addiu $v0, $zero, 1
    if (s0 != v0) goto label_0x1a9854;                          // 0x001a9844: bne $s0, $v0, 0x1a9854
    /* nop */                                                   // 0x001a9848: nop 
    func_001af560();  // 1af560                                // 0x001a984c: jal 0x1af560
    /* nop */                                                   // 0x001a9850: nop 
label_0x1a9854:
    a0 = *(int32_t*)((gp) + -0x63e4);                           // 0x001a9854: lw $a0, -0x63e4($gp)
label_0x1a9858:
    func_00129a08();  // 129a08                                // 0x001a9858: jal 0x129a08
    /* nop */                                                   // 0x001a985c: nop 
    v1 = 3;                                                     // 0x001a9860: addiu $v1, $zero, 3
    if (v0 != v1) goto label_0x1a9840;                          // 0x001a9864: bne $v0, $v1, 0x1a9840
    /* nop */                                                   // 0x001a9868: nop 
    func_00129010();  // 129010                                // 0x001a986c: jal 0x129010
    a0 = *(int32_t*)((gp) + -0x63e4);                           // 0x001a9870: lw $a0, -0x63e4($gp)
    *(uint32_t*)((gp) + -0x63e4) = 0;                           // 0x001a9874: sw $zero, -0x63e4($gp)
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001a9880: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001a9884: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001a9888: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001a988c: jr $ra
    sp = sp + 0x50;                                             // 0x001a9890: addiu $sp, $sp, 0x50
}