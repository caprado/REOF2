void func_001cc0d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001cc0d0: addiu $sp, $sp, -0x10
    func_001cfc90();  // 0x1cfc80                                // 0x001cc0d8: jal 0x1cfc80
    a0 = a0 + 0x28;                                             // 0x001cc0dc: addiu $a0, $a0, 0x28
    v0 = 0x447a << 16;                                          // 0x001cc0e0: lui $v0, 0x447a
    /* move to FPU: $v0, $f1 */                                 // 0x001cc0e8: mtc1 $v0, $f1
    /* nop */                                                   // 0x001cc0ec: nop 
    /* FPU: mul.s $f0, $f1, $f0 */                              // 0x001cc0f0: mul.s $f0, $f1, $f0
    return;                                                     // 0x001cc0f4: jr $ra
    sp = sp + 0x10;                                             // 0x001cc0f8: addiu $sp, $sp, 0x10
}