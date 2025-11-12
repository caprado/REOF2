void func_001a5be0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001a5be0: addiu $sp, $sp, -0x10
    a0 = 0x2a << 16;                                            // 0x001a5be4: lui $a0, 0x2a
    a0 = a0 + 0xf40;                                            // 0x001a5bec: addiu $a0, $a0, 0xf40
    func_001a1530();  // 0x1a14c0                                // 0x001a5bf0: jal 0x1a14c0
    a1 = 0x24;                                                  // 0x001a5bf4: addiu $a1, $zero, 0x24
    a0 = 0x2a << 16;                                            // 0x001a5bf8: lui $a0, 0x2a
    a1 = 0x20;                                                  // 0x001a5bfc: addiu $a1, $zero, 0x20
    func_001a1530();  // 0x1a14c0                                // 0x001a5c00: jal 0x1a14c0
    a0 = a0 + 0xf00;                                            // 0x001a5c04: addiu $a0, $a0, 0xf00
    a0 = 0x2a << 16;                                            // 0x001a5c08: lui $a0, 0x2a
    a1 = 0x20;                                                  // 0x001a5c0c: addiu $a1, $zero, 0x20
    func_001a1530();  // 0x1a14c0                                // 0x001a5c10: jal 0x1a14c0
    a0 = a0 + 0xee0;                                            // 0x001a5c14: addiu $a0, $a0, 0xee0
    a0 = 0x2a << 16;                                            // 0x001a5c18: lui $a0, 0x2a
    a1 = 0x20;                                                  // 0x001a5c1c: addiu $a1, $zero, 0x20
    func_001a1530();  // 0x1a14c0                                // 0x001a5c20: jal 0x1a14c0
    a0 = a0 + 0xec0;                                            // 0x001a5c24: addiu $a0, $a0, 0xec0
    return;                                                     // 0x001a5c2c: jr $ra
    sp = sp + 0x10;                                             // 0x001a5c30: addiu $sp, $sp, 0x10
}