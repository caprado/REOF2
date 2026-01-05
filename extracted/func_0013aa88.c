void func_0013aa88() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x40;                                            // 0x0013aa88: addiu $sp, $sp, -0x40
    func_0013a6c0();  // 13a6c0                                // 0x0013aa90: jal 0x13a6c0
    v0 = local_0;                                               // 0x0013aa98: lw $v0, 0($sp)
    v0 = ((unsigned)0 < (unsigned)v0) ? 1 : 0;                  // 0x0013aaa0: sltu $v0, $zero, $v0
    return;                                                     // 0x0013aaa4: jr $ra
    sp = sp + 0x40;                                             // 0x0013aaa8: addiu $sp, $sp, 0x40
}