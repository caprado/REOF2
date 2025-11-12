void func_001b5e60() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001b5e60: addiu $sp, $sp, -0x10
    if (a1 != 0) goto label_0x1b5e7c;                           // 0x001b5e64: bnez $a1, 0x1b5e7c
    func_001b5f50();  // 0x1b5e90                                // 0x001b5e6c: jal 0x1b5e90
    /* nop */                                                   // 0x001b5e70: nop 
    goto label_0x1b5e88;                                        // 0x001b5e74: b 0x1b5e88
label_0x1b5e7c:
    func_001b5fa0();  // 0x1b5f50                                // 0x001b5e7c: jal 0x1b5f50
    /* nop */                                                   // 0x001b5e80: nop 
label_0x1b5e88:
    return;                                                     // 0x001b5e88: jr $ra
    sp = sp + 0x10;                                             // 0x001b5e8c: addiu $sp, $sp, 0x10
}