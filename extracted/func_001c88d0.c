void func_001c88d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001c88d0: addiu $sp, $sp, -0x20
    func_001c7770();  // 1c7770                                // 0x001c88dc: jal 0x1c7770
    a2 = 0x200;                                                 // 0x001c88e8: addiu $a2, $zero, 0x200
    s0 = 0x31 << 16;                                            // 0x001c88ec: lui $s0, 0x31
    s0 = s0 + 0x669c;                                           // 0x001c88f0: addiu $s0, $s0, 0x669c
    func_0010b2a0();  // 10b2a0                                // 0x001c88f4: jal 0x10b2a0
    a0 = 0x3d;                                                  // 0x001c88fc: addiu $a0, $zero, 0x3d
    a1 = 0x220;                                                 // 0x001c8900: addiu $a1, $zero, 0x220
    a2 = 0x20;                                                  // 0x001c8904: addiu $a2, $zero, 0x20
    func_001c75b0();  // 1c75b0                                // 0x001c8908: jal 0x1c75b0
    g_0031689b = 0;  // Global at 0x0031689b                    // 0x001c890c: sb $zero, 0x1ff($s0)
    func_001c7780();  // 1c7780                                // 0x001c8914: jal 0x1c7780
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c8924: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c8928: jr $ra
    sp = sp + 0x20;                                             // 0x001c892c: addiu $sp, $sp, 0x20
}