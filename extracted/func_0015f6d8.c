void func_0015f6d8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0015f6d8: addiu $sp, $sp, -0x10
    func_00103080();  // 103080                                // 0x0015f6e4: jal 0x103080
    a1 = 1;                                                     // 0x0015f6f0: addiu $a1, $zero, 1
    func_00103650();  // 103650                                // 0x0015f6f4: jal 0x103650
    a2 = 0x1e;                                                  // 0x0015f6f8: addiu $a2, $zero, 0x1e
    *(uint32_t*)(s0) = v0;                                      // 0x0015f6fc: sw $v0, 0($s0)
    return;                                                     // 0x0015f708: jr $ra
    sp = sp + 0x10;                                             // 0x0015f70c: addiu $sp, $sp, 0x10
}