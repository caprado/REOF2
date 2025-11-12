void func_0012fd88() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a0 = 0x20 << 16;                                            // 0x0012fd88: lui $a0, 0x20
    sp = sp + -0x10;                                            // 0x0012fd8c: addiu $sp, $sp, -0x10
    a0 = a0 + 0xec0;                                            // 0x0012fd94: addiu $a0, $a0, 0xec0
    func_00107d30();  // 0x107c70                                // 0x0012fd9c: jal 0x107c70
    a2 = 0xe60;                                                 // 0x0012fda0: addiu $a2, $zero, 0xe60
    v0 = 1;                                                     // 0x0012fda4: addiu $v0, $zero, 1
    return;                                                     // 0x0012fdac: jr $ra
    sp = sp + 0x10;                                             // 0x0012fdb0: addiu $sp, $sp, 0x10
}