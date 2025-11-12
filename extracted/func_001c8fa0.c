void func_001c8fa0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001c8fa0: addiu $sp, $sp, -0x30
    a2 = 4;                                                     // 0x001c8fa4: addiu $a2, $zero, 4
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001c8fac: addu.qb $zero, $sp, $s1
    a1 = 0x2008;                                                // 0x001c8fc4: addiu $a1, $zero, 0x2008
    func_001c7a40();  // 0x1c7970                                // 0x001c8fc8: jal 0x1c7970
    func_001c8c90();  // 0x1c8c80                                // 0x001c8fd4: jal 0x1c8c80
    if (v0 >= 0) goto label_0x1c8ff0;                           // 0x001c8fdc: bgez $v0, 0x1c8ff0
    /* nop */                                                   // 0x001c8fe0: nop 
    goto label_0x1c9018;                                        // 0x001c8fe4: b 0x1c9018
    /* nop */                                                   // 0x001c8fe8: nop 
    /* nop */                                                   // 0x001c8fec: nop 
label_0x1c8ff0:
    a3 = s0 + 4;                                                // 0x001c8ff8: addiu $a3, $s0, 4
    a1 = 0x2001;                                                // 0x001c8ffc: addiu $a1, $zero, 0x2001
    func_001c7a40();  // 0x1c7970                                // 0x001c9000: jal 0x1c7970
    a2 = 4;                                                     // 0x001c9004: addiu $a2, $zero, 4
    func_001c8c90();  // 0x1c8c80                                // 0x001c900c: jal 0x1c8c80
    /* nop */                                                   // 0x001c9014: nop 
label_0x1c9018:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001c901c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c9020: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c9024: jr $ra
    sp = sp + 0x30;                                             // 0x001c9028: addiu $sp, $sp, 0x30
}