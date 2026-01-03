void func_00111998() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x80;                                            // 0x00111998: addiu $sp, $sp, -0x80
    a0 = sp + 0x60;                                             // 0x001119a0: addiu $a0, $sp, 0x60
    func_00111678();  // 111678                                // 0x001119b0: jal 0x111678
    s0 = sp + 0x20;                                             // 0x001119b8: addiu $s0, $sp, 0x20
    a0 = sp + 0x68;                                             // 0x001119bc: addiu $a0, $sp, 0x68
    func_00111678();  // 111678                                // 0x001119c0: jal 0x111678
    func_00111738();  // 111738                                // 0x001119d0: jal 0x111738
    a2 = sp + 0x40;                                             // 0x001119d4: addiu $a2, $sp, 0x40
    func_001115a0();  // 1115a0                                // 0x001119d8: jal 0x1115a0
    return;                                                     // 0x001119e8: jr $ra
    sp = sp + 0x80;                                             // 0x001119ec: addiu $sp, $sp, 0x80
}