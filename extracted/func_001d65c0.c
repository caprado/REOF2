void func_001d65c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001d65c0: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001d65c8: addu.qb $zero, $sp, $s1
    func_001d65c0();  // 0x1d6560                                // 0x001d65dc: jal 0x1d6560
    if (s0 != 0) goto label_0x1d65f8;                           // 0x001d65e8: bnez $s0, 0x1d65f8
    /* nop */                                                   // 0x001d65ec: nop 
    goto label_0x1d6610;                                        // 0x001d65f0: b 0x1d6610
label_0x1d65f8:
    a1 = *(int32_t*)((s0) + 4);                                 // 0x001d65f8: lw $a1, 4($s0)
    func_00107b68();  // 0x107ab8                                // 0x001d6600: jal 0x107ab8
    a2 = 0xc84;                                                 // 0x001d6604: addiu $a2, $zero, 0xc84
    *(uint16_t*)((s0) + 0xa) = s1;                              // 0x001d6608: sh $s1, 0xa($s0)
    v0 = 1;                                                     // 0x001d660c: addiu $v0, $zero, 1
label_0x1d6610:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001d6614: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d6618: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d661c: jr $ra
    sp = sp + 0x30;                                             // 0x001d6620: addiu $sp, $sp, 0x30
}