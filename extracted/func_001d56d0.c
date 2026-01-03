void func_001d56d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001d56d0: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001d56d8: addu.qb $zero, $sp, $s1
    goto label_0x1d570c;                                        // 0x001d56e4: b 0x1d570c
label_0x1d56ec:
    a0 = *(int16_t*)(s1);                                       // 0x001d56ec: lh $a0, 0($s1)
    v1 = -1;                                                    // 0x001d56f0: addiu $v1, $zero, -1
    if (a0 == v1) goto label_0x1d5718;                          // 0x001d56f4: beq $a0, $v1, 0x1d5718
    a1 = 1;                                                     // 0x001d56f8: addiu $a1, $zero, 1
    func_001d3ae0();  // 1d3ae0                                // 0x001d56fc: jal 0x1d3ae0
    /* nop */                                                   // 0x001d5700: nop 
    s1 = s1 + 2;                                                // 0x001d5704: addiu $s1, $s1, 2
    s0 = s0 + 1;                                                // 0x001d5708: addiu $s0, $s0, 1
label_0x1d570c:
    v1 = (s0 < 6) ? 1 : 0;                                      // 0x001d570c: slti $v1, $s0, 6
    if (v1 != 0) goto label_0x1d56ec;                           // 0x001d5710: bnez $v1, 0x1d56ec
    /* nop */                                                   // 0x001d5714: nop 
label_0x1d5718:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001d571c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d5720: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d5724: jr $ra
    sp = sp + 0x30;                                             // 0x001d5728: addiu $sp, $sp, 0x30
}