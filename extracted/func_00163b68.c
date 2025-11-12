void func_00163b68() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00163b68: addiu $sp, $sp, -0x10
    func_00163370();  // 0x163350                                // 0x00163b74: jal 0x163350
    /* nop */                                                   // 0x00163b78: nop 
    func_00163c40();  // 0x163ba0                                // 0x00163b7c: jal 0x163ba0
    func_001633a8();  // 0x163370                                // 0x00163b84: jal 0x163370
    return;                                                     // 0x00163b98: jr $ra
    sp = sp + 0x10;                                             // 0x00163b9c: addiu $sp, $sp, 0x10
}