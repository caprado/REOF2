void func_0018bb30() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x70;                                            // 0x0018bb30: addiu $sp, $sp, -0x70
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x0018bb38: subu.qb $zero, $sp, $s5
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x0018bb44: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x0018bb54: addu.qb $zero, $sp, $s1
    if (a0 == 0) goto label_0x18bba8;                           // 0x0018bb64: beqz $a0, 0x18bba8
    func_00198330();  // 198330                                // 0x0018bb6c: jal 0x198330
    t3 = *(int32_t*)((gp) + -0x645c);                           // 0x0018bb70: lw $t3, -0x645c($gp)
    a0 = 0x3b;                                                  // 0x0018bb74: addiu $a0, $zero, 0x3b
    v1 = 0x14;                                                  // 0x0018bb78: addiu $v1, $zero, 0x14
    a0 = 6;                                                     // 0x0018bb84: addiu $a0, $zero, 6
    v1 = 8;                                                     // 0x0018bb8c: addiu $v1, $zero, 8
    a0 = 0x34;                                                  // 0x0018bb94: addiu $a0, $zero, 0x34
    v1 = 0x36;                                                  // 0x0018bb98: addiu $v1, $zero, 0x36
    goto label_0x18bbf0;                                        // 0x0018bba0: b 0x18bbf0
label_0x18bba8:
    v1 = 0x3b;                                                  // 0x0018bbac: addiu $v1, $zero, 0x3b
    a0 = 0x14;                                                  // 0x0018bbb4: addiu $a0, $zero, 0x14
    v1 = 6;                                                     // 0x0018bbbc: addiu $v1, $zero, 6
    a1 = 8;                                                     // 0x0018bbc4: addiu $a1, $zero, 8
    a0 = 0x34;                                                  // 0x0018bbcc: addiu $a0, $zero, 0x34
    v1 = 0x36;                                                  // 0x0018bbd8: addiu $v1, $zero, 0x36
label_0x18bbf0:
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x0018bbf4: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x0018bbf8: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x0018bc00: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x0018bc04: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0018bc08: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0018bc0c: jr $ra
    sp = sp + 0x70;                                             // 0x0018bc10: addiu $sp, $sp, 0x70
}