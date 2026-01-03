void func_00192730() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x00192730: addiu $sp, $sp, -0x50
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x00192738: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x00192744: addu.qb $zero, $sp, $s1
    s1 = *(int16_t*)(a0);                                       // 0x00192750: lh $s1, 0($a0)
    goto label_0x192788;                                        // 0x00192754: b 0x192788
    s0 = a0 + 2;                                                // 0x00192758: addiu $s0, $a0, 2
label_0x19275c:
    v1 = *(int16_t*)(s0);                                       // 0x0019275c: lh $v1, 0($s0)
    at = 0x7000 << 16;                                          // 0x00192760: lui $at, 0x7000
    v0 = s2 << 6;                                               // 0x00192764: sll $v0, $s2, 6
    at = at | 0x3700;                                           // 0x00192768: ori $at, $at, 0x3700
    a1 = v0 + at;                                               // 0x0019276c: addu $a1, $v0, $at
    a2 = 1;                                                     // 0x00192770: addiu $a2, $zero, 1
    v0 = v1 << 6;                                               // 0x00192774: sll $v0, $v1, 6
    func_00189ad0();  // 189ad0                                // 0x00192778: jal 0x189ad0
    a0 = s3 + v0;                                               // 0x0019277c: addu $a0, $s3, $v0
    s0 = s0 + 2;                                                // 0x00192780: addiu $s0, $s0, 2
    s2 = s2 + 1;                                                // 0x00192784: addiu $s2, $s2, 1
label_0x192788:
    v1 = (s2 < s1) ? 1 : 0;                                     // 0x00192788: slt $v1, $s2, $s1
    if (v1 != 0) goto label_0x19275c;                           // 0x0019278c: bnez $v1, 0x19275c
    /* nop */                                                   // 0x00192790: nop 
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x0019279c: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001927a0: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001927a4: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001927a8: jr $ra
    sp = sp + 0x50;                                             // 0x001927ac: addiu $sp, $sp, 0x50
}