void func_00163fe8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00163fe8: addiu $sp, $sp, -0x20
    func_0015e348();  // 0x15e338                                // 0x00163ffc: jal 0x15e338
    *(uint32_t*)((s0) + 0x5c) = s1;                             // 0x00164008: sw $s1, 0x5c($s0)
    *(uint32_t*)((v0) + 0x24) = s1;                             // 0x0016400c: sw $s1, 0x24($v0)
    return;                                                     // 0x00164018: jr $ra
    sp = sp + 0x20;                                             // 0x0016401c: addiu $sp, $sp, 0x20
}