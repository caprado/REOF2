void func_001ca0b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001ca0b0: addiu $sp, $sp, -0x20
    a1 = a0 + 4;                                                // 0x001ca0b4: addiu $a1, $a0, 4
    func_001c86b0();  // 1c86b0                                // 0x001ca0bc: jal 0x1c86b0
    a2 = sp + 0x1c;                                             // 0x001ca0c0: addiu $a2, $sp, 0x1c
    return;                                                     // 0x001ca0d0: jr $ra
    sp = sp + 0x20;                                             // 0x001ca0d4: addiu $sp, $sp, 0x20
}