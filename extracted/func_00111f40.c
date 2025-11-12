void func_00111f40() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x60;                                            // 0x00111f40: addiu $sp, $sp, -0x60
    a0 = sp + 0x40;                                             // 0x00111f48: addiu $a0, $sp, 0x40
    func_00111738();  // 0x111678                                // 0x00111f58: jal 0x111678
    s0 = sp + 0x20;                                             // 0x00111f60: addiu $s0, $sp, 0x20
    a0 = sp + 0x48;                                             // 0x00111f64: addiu $a0, $sp, 0x48
    func_00111738();  // 0x111678                                // 0x00111f68: jal 0x111678
    func_00111f40();  // 0x111e20                                // 0x00111f74: jal 0x111e20
    return;                                                     // 0x00111f84: jr $ra
    sp = sp + 0x60;                                             // 0x00111f88: addiu $sp, $sp, 0x60
}