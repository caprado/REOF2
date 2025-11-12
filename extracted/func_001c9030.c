void func_001c9030() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001c9030: addiu $sp, $sp, -0x30
    a2 = 4;                                                     // 0x001c9034: addiu $a2, $zero, 4
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001c903c: addu.qb $zero, $sp, $s1
    a1 = 0x2008;                                                // 0x001c9054: addiu $a1, $zero, 0x2008
    func_001c7970();  // 0x1c78e0                                // 0x001c9058: jal 0x1c78e0
    func_001c8c90();  // 0x1c8c80                                // 0x001c9064: jal 0x1c8c80
    if (v0 >= 0) goto label_0x1c9080;                           // 0x001c906c: bgez $v0, 0x1c9080
    /* nop */                                                   // 0x001c9070: nop 
    goto label_0x1c90a8;                                        // 0x001c9074: b 0x1c90a8
    /* nop */                                                   // 0x001c9078: nop 
    /* nop */                                                   // 0x001c907c: nop 
label_0x1c9080:
    a3 = s0 + 4;                                                // 0x001c9088: addiu $a3, $s0, 4
    a1 = 0x2001;                                                // 0x001c908c: addiu $a1, $zero, 0x2001
    func_001c7970();  // 0x1c78e0                                // 0x001c9090: jal 0x1c78e0
    a2 = 4;                                                     // 0x001c9094: addiu $a2, $zero, 4
    func_001c8c90();  // 0x1c8c80                                // 0x001c909c: jal 0x1c8c80
    /* nop */                                                   // 0x001c90a4: nop 
label_0x1c90a8:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001c90ac: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c90b0: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c90b4: jr $ra
    sp = sp + 0x30;                                             // 0x001c90b8: addiu $sp, $sp, 0x30
}