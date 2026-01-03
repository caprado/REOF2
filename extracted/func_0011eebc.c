void func_0011eebc() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0011eebc: addiu $sp, $sp, -0x10
    /* nop */                                                   // 0x0011eec4: nop 
    /* nop */                                                   // 0x0011eec8: nop 
    /* FPU: div.s $f12, $f0, $f12 */                            // 0x0011eecc: div.s $f12, $f0, $f12
    func_001112f0();  // 1112f0                                // 0x0011eed0: jal 0x1112f0
    /* nop */                                                   // 0x0011eed4: nop 
    return;                                                     // 0x0011eedc: jr $ra
    sp = sp + 0x10;                                             // 0x0011eee0: addiu $sp, $sp, 0x10
}