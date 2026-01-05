void func_00130bb0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00130bb0: addiu $sp, $sp, -0x10
    func_00135c78();  // 135c78                                // 0x00130bbc: jal 0x135c78
    *(uint32_t*)(s0) = v0;                                      // 0x00130bc4: sw $v0, 0($s0)
    v0 = 1;                                                     // 0x00130bc8: addiu $v0, $zero, 1
    return;                                                     // 0x00130bd4: jr $ra
    sp = sp + 0x10;                                             // 0x00130bd8: addiu $sp, $sp, 0x10
}