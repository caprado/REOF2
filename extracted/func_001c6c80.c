void func_001c6c80() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001c6c84: addiu $sp, $sp, -0x10
    a0 = 0x31 << 16;                                            // 0x001c6c88: lui $a0, 0x31
    a0 = a0 + 0x35a0;                                           // 0x001c6c90: addiu $a0, $a0, 0x35a0
    func_00107b68();  // 0x107ab8                                // 0x001c6c94: jal 0x107ab8
    a2 = 0x10;                                                  // 0x001c6c98: addiu $a2, $zero, 0x10
    func_001ba660();  // 0x1ba590                                // 0x001c6c9c: jal 0x1ba590
    /* nop */                                                   // 0x001c6ca0: nop 
    return;                                                     // 0x001c6ca8: jr $ra
    sp = sp + 0x10;                                             // 0x001c6cac: addiu $sp, $sp, 0x10
}