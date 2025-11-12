void func_001b13c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001b13c0: addiu $sp, $sp, -0x20
    func_001b13c0();  // 0x1b12b0                                // 0x001b13cc: jal 0x1b12b0
    v1 = 1;                                                     // 0x001b13d4: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x1b13ec;                          // 0x001b13d8: beq $v0, $v1, 0x1b13ec
    func_001b1870();  // 0x1b17c0                                // 0x001b13e0: jal 0x1b17c0
label_0x1b13ec:
    func_001b17c0();  // 0x1b1700                                // 0x001b13ec: jal 0x1b1700
    /* nop */                                                   // 0x001b13f0: nop 
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b13f8: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b13fc: jr $ra
    sp = sp + 0x20;                                             // 0x001b1400: addiu $sp, $sp, 0x20
}