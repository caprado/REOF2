void func_001b9800() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x001b9800: addiu $sp, $sp, -0x40
    v0 = 0x49 << 16;                                            // 0x001b9804: lui $v0, 0x49
    v1 = a0 << 2;                                               // 0x001b980c: sll $v1, $a0, 2
    v0 = v0 + 0x12f4;                                           // 0x001b9814: addiu $v0, $v0, 0x12f4
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b9818: addu.qb $zero, $sp, $s1
    v1 = v0 + v1;                                               // 0x001b981c: addu $v1, $v0, $v1
    v0 = *(int32_t*)(v1);                                       // 0x001b9828: lw $v0, 0($v1)
    if (v0 == s1) goto label_0x1b9848;                          // 0x001b9830: beq $v0, $s1, 0x1b9848
    func_001b98e0();  // 1b98e0                                // 0x001b9838: jal 0x1b98e0
    *(uint32_t*)(v1) = s1;                                      // 0x001b983c: sw $s1, 0($v1)
    goto label_0x1b98bc;                                        // 0x001b9840: b 0x1b98bc
label_0x1b9848:
    func_001adcc0();  // 1adcc0                                // 0x001b9848: jal 0x1adcc0
    a1 = 4;                                                     // 0x001b984c: addiu $a1, $zero, 4
    if (v0 == 0) goto label_0x1b98ac;                           // 0x001b9850: beqz $v0, 0x1b98ac
    func_001adcc0();  // 1adcc0                                // 0x001b985c: jal 0x1adcc0
    if (v0 == 0) goto label_0x1b9878;                           // 0x001b9864: beqz $v0, 0x1b9878
    v1 = 5;                                                     // 0x001b986c: addiu $v1, $zero, 5
    if (v0 != v1) goto label_0x1b988c;                          // 0x001b9870: bne $v0, $v1, 0x1b988c
    /* nop */                                                   // 0x001b9874: nop 
label_0x1b9878:
    func_001b98e0();  // 1b98e0                                // 0x001b987c: jal 0x1b98e0
    goto label_0x1b98b8;                                        // 0x001b9884: b 0x1b98b8
    /* nop */                                                   // 0x001b9888: nop 
label_0x1b988c:
    func_001ad940();  // 1ad940                                // 0x001b988c: jal 0x1ad940
    a1 = 0x7f;                                                  // 0x001b9898: addiu $a1, $zero, 0x7f
    func_001addd0();  // 1addd0                                // 0x001b989c: jal 0x1addd0
    a2 = 0x3c;                                                  // 0x001b98a0: addiu $a2, $zero, 0x3c
    goto label_0x1b98bc;                                        // 0x001b98a4: b 0x1b98bc
    v0 = 1;                                                     // 0x001b98a8: addiu $v0, $zero, 1
label_0x1b98ac:
    func_001b98e0();  // 1b98e0                                // 0x001b98b0: jal 0x1b98e0
label_0x1b98b8:
label_0x1b98bc:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001b98c0: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b98c4: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b98c8: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b98cc: jr $ra
    sp = sp + 0x40;                                             // 0x001b98d0: addiu $sp, $sp, 0x40
}