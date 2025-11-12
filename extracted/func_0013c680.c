void func_0013c680() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_4;
    
    sp = sp + -0x20;                                            // 0x0013c680: addiu $sp, $sp, -0x20
    func_0013c4f8();  // 0x13c4a8                                // 0x0013c688: jal 0x13c4a8
    v0 = local_4;                                               // 0x0013c690: lw $v0, 4($sp)
    v0 = ((unsigned)0 < (unsigned)v0) ? 1 : 0;                  // 0x0013c698: sltu $v0, $zero, $v0
    return;                                                     // 0x0013c69c: jr $ra
    sp = sp + 0x20;                                             // 0x0013c6a0: addiu $sp, $sp, 0x20
}