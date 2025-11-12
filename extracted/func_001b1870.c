void func_001b1870() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x001b1870: addiu $sp, $sp, -0x50
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001b1878: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b1884: addu.qb $zero, $sp, $s1
    goto label_0x1b18b8;                                        // 0x001b1890: b 0x1b18b8
    s1 = a1 + a2;                                               // 0x001b1894: addu $s1, $a1, $a2
label_0x1b1898:
    s0 = s3 + v1;                                               // 0x001b1898: addu $s0, $s3, $v1
    a0 = *(uint16_t*)(s0);                                      // 0x001b189c: lhu $a0, 0($s0)
    if (a0 == 0) goto label_0x1b18b4;                           // 0x001b18a0: beqz $a0, 0x1b18b4
    /* nop */                                                   // 0x001b18a4: nop 
    func_00192370();  // 0x192350                                // 0x001b18a8: jal 0x192350
    /* nop */                                                   // 0x001b18ac: nop 
    *(uint16_t*)(s0) = 0;                                       // 0x001b18b0: sh $zero, 0($s0)
label_0x1b18b4:
    s2 = s2 + 1;                                                // 0x001b18b4: addiu $s2, $s2, 1
label_0x1b18b8:
    v1 = (s2 < s1) ? 1 : 0;                                     // 0x001b18b8: slt $v1, $s2, $s1
    if (v1 != 0) goto label_0x1b1898;                           // 0x001b18bc: bnez $v1, 0x1b1898
    v1 = s2 << 1;                                               // 0x001b18c0: sll $v1, $s2, 1
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001b18cc: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b18d0: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b18d4: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b18d8: jr $ra
    sp = sp + 0x50;                                             // 0x001b18dc: addiu $sp, $sp, 0x50
}