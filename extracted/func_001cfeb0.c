void func_001cfeb0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_1f;
    
    sp = sp + -0x20;                                            // 0x001cfeb0: addiu $sp, $sp, -0x20
    a2 = 1;                                                     // 0x001cfeb4: addiu $a2, $zero, 1
    func_001cfdf0();  // 1cfdf0                                // 0x001cfebc: jal 0x1cfdf0
    a1 = sp + 0x1f;                                             // 0x001cfec0: addiu $a1, $sp, 0x1f
    v0 = local_1f;                                              // 0x001cfec4: lbu $v0, 0x1f($sp)
    return;                                                     // 0x001cfecc: jr $ra
    sp = sp + 0x20;                                             // 0x001cfed0: addiu $sp, $sp, 0x20
}