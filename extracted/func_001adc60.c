void func_001adc60() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001adc60: addiu $sp, $sp, -0x20
label_0x1adc70:
    v1 = 0x2b << 16;                                            // 0x001adc70: lui $v1, 0x2b
    a0 = s0 << 2;                                               // 0x001adc74: sll $a0, $s0, 2
    v1 = v1 + -0x5788;                                          // 0x001adc78: addiu $v1, $v1, -0x5788
    v1 = v1 + a0;                                               // 0x001adc7c: addu $v1, $v1, $a0
    a0 = g_002aa878;  // Global at 0x002aa878                   // 0x001adc80: lw $a0, 0($v1)
    if (a0 == 0) goto label_0x1adc94;                           // 0x001adc84: beqz $a0, 0x1adc94
    func_00132c40();  // 0x132b10                                // 0x001adc8c: jal 0x132b10
    /* nop */                                                   // 0x001adc90: nop 
label_0x1adc94:
    s0 = s0 + 1;                                                // 0x001adc94: addiu $s0, $s0, 1
    v1 = (s0 < 3) ? 1 : 0;                                      // 0x001adc98: slti $v1, $s0, 3
    if (v1 != 0) goto label_0x1adc70;                           // 0x001adc9c: bnez $v1, 0x1adc70
    /* nop */                                                   // 0x001adca0: nop 
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001adca8: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001adcac: jr $ra
    sp = sp + 0x20;                                             // 0x001adcb0: addiu $sp, $sp, 0x20
}