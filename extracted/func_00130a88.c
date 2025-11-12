void func_00130a88() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00130a88: addiu $sp, $sp, -0x10
    func_001302e0();  // 0x1302c8                                // 0x00130a94: jal 0x1302c8
    *(uint32_t*)(s0) = v0;                                      // 0x00130a9c: sw $v0, 0($s0)
    v0 = 1;                                                     // 0x00130aa0: addiu $v0, $zero, 1
    return;                                                     // 0x00130aac: jr $ra
    sp = sp + 0x10;                                             // 0x00130ab0: addiu $sp, $sp, 0x10
}