void func_00148ed8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00148ed8: addiu $sp, $sp, -0x10
    func_00148ec8();  // 148ec8                                // 0x00148ee4: jal 0x148ec8
    *(uint32_t*)(v0) = s0;                                      // 0x00148eec: sw $s0, 0($v0)
    return;                                                     // 0x00148ef8: jr $ra
    sp = sp + 0x10;                                             // 0x00148efc: addiu $sp, $sp, 0x10
}