void func_001a8dd0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x830;                                           // 0x001a8dd0: addiu $sp, $sp, -0x830
    a0 = sp + 0x30;                                             // 0x001a8ddc: addiu $a0, $sp, 0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001a8de0: addu.qb $zero, $sp, $s1
    func_0010ae00();  // 0x10ac68                                // 0x001a8dec: jal 0x10ac68
label_0x1a8df4:
    a0 = sp + 0x30;                                             // 0x001a8df4: addiu $a0, $sp, 0x30
    func_00128e28();  // 0x128d88                                // 0x001a8df8: jal 0x128d88
    /* nop */                                                   // 0x001a8e04: nop 
    if (v0 == 0) goto label_0x1a8df4;                           // 0x001a8e08: beqz $v0, 0x1a8df4
    /* nop */                                                   // 0x001a8e0c: nop 
    func_00129968();  // 0x1298c8                                // 0x001a8e10: jal 0x1298c8
    func_001294a0();  // 0x129460                                // 0x001a8e20: jal 0x129460
label_0x1a8e28:
    func_00129a38();  // 0x129a08                                // 0x001a8e28: jal 0x129a08
    v1 = 3;                                                     // 0x001a8e30: addiu $v1, $zero, 3
    /* nop */                                                   // 0x001a8e34: nop 
    /* nop */                                                   // 0x001a8e38: nop 
    if (v0 != v1) goto label_0x1a8e28;                          // 0x001a8e3c: bne $v0, $v1, 0x1a8e28
    /* nop */                                                   // 0x001a8e40: nop 
    func_001290c8();  // 0x129010                                // 0x001a8e44: jal 0x129010
    v0 = 1;                                                     // 0x001a8e50: addiu $v0, $zero, 1
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001a8e54: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001a8e58: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001a8e5c: jr $ra
    sp = sp + 0x830;                                            // 0x001a8e60: addiu $sp, $sp, 0x830
}