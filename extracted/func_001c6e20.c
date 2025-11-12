void func_001c6e20() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001c6e20: addiu $sp, $sp, -0x10
    a2 = *(int32_t*)((a0) + 0x20);                              // 0x001c6e28: lw $a2, 0x20($a0)
    a0 = *(int32_t*)((a0) + 0xec);                              // 0x001c6e2c: lw $a0, 0xec($a0)
    func_001c7310();  // 0x1c7230                                // 0x001c6e30: jal 0x1c7230
    a1 = 0 | 0x84d0;                                            // 0x001c6e34: ori $a1, $zero, 0x84d0
    v0 = (v0 < 0) ? 1 : 0;                                      // 0x001c6e3c: slt $v0, $v0, $zero
    v0 = -v0;                                                   // 0x001c6e40: negu $v0, $v0
    return;                                                     // 0x001c6e44: jr $ra
    sp = sp + 0x10;                                             // 0x001c6e48: addiu $sp, $sp, 0x10
}