void func_001d9360() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001d9360: addiu $sp, $sp, -0x10
    func_001d3c20();  // 0x1d3ae0                                // 0x001d936c: jal 0x1d3ae0
    a0 = 0x4200;                                                // 0x001d9370: addiu $a0, $zero, 0x4200
    func_0018db40();  // 0x18db10                                // 0x001d9374: jal 0x18db10
    /* nop */                                                   // 0x001d9378: nop 
    return;                                                     // 0x001d9380: jr $ra
    sp = sp + 0x10;                                             // 0x001d9384: addiu $sp, $sp, 0x10
}