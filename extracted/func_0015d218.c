void func_0015d218() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0015d218: addiu $sp, $sp, -0x20
    func_0015e348();  // 0x15e338                                // 0x0015d234: jal 0x15e338
    *(uint32_t*)((v0) + 0x30) = s0;                             // 0x0015d23c: sw $s0, 0x30($v0)
    *(uint32_t*)((v0) + 0x28) = s1;                             // 0x0015d240: sw $s1, 0x28($v0)
    *(uint32_t*)((v0) + 0x2c) = s2;                             // 0x0015d244: sw $s2, 0x2c($v0)
    return;                                                     // 0x0015d258: jr $ra
    sp = sp + 0x20;                                             // 0x0015d25c: addiu $sp, $sp, 0x20
}