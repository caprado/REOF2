void func_001258c8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a1 = 0x22 << 16;                                            // 0x001258c8: lui $a1, 0x22
    sp = sp + -0x10;                                            // 0x001258cc: addiu $sp, $sp, -0x10
    a2 = 4;                                                     // 0x001258d0: addiu $a2, $zero, 4
    func_00107ab8();  // 0x107a20                                // 0x001258d8: jal 0x107a20
    a1 = a1 + 0x2438;                                           // 0x001258dc: addiu $a1, $a1, 0x2438
    v0 = ((unsigned)v0 < (unsigned)1) ? 1 : 0;                  // 0x001258e4: sltiu $v0, $v0, 1
    return;                                                     // 0x001258e8: jr $ra
    sp = sp + 0x10;                                             // 0x001258ec: addiu $sp, $sp, 0x10
}