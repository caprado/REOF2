void func_0017e028() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    /* move to FPU: $zero, $f2 */                               // 0x0017e028: mtc1 $zero, $f2
    v0 = 1;                                                     // 0x0017e02c: addiu $v0, $zero, 1
    FPU_F0 = *(float*)((a0) + 0x3c);  // Load float             // 0x0017e030: lwc1 $f0, 0x3c($a0)
    /* FPU: c.eq.s $f0, $f2 */                                  // 0x0017e034: c.eq.s $f0, $f2
    /* bc1f 0x17e04c */                                         // 0x0017e038: bc1f 0x17e04c
    FPU_F1 = *(float*)((a0) + 0x40);  // Load float             // 0x0017e03c: lwc1 $f1, 0x40($a0)
    /* FPU: c.eq.s $f1, $f2 */                                  // 0x0017e040: c.eq.s $f1, $f2
    /* bc1tl 0x17e04c */                                        // 0x0017e044: bc1tl 0x17e04c
    return;                                                     // 0x0017e04c: jr $ra
    /* nop */                                                   // 0x0017e050: nop 
}