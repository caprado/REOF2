void func_001a5a60() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001a5a60: addiu $sp, $sp, -0x10
    func_001a5be0();  // 1a5be0                                // 0x001a5a68: jal 0x1a5be0
    /* nop */                                                   // 0x001a5a6c: nop 
    func_001a62d0();  // 1a62d0                                // 0x001a5a70: jal 0x1a62d0
    /* nop */                                                   // 0x001a5a74: nop 
    return;                                                     // 0x001a5a7c: jr $ra
    sp = sp + 0x10;                                             // 0x001a5a80: addiu $sp, $sp, 0x10
}