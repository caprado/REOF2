void func_0017e6bc() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0017e6bc: addiu $sp, $sp, -0x10
    func_0010fe58();  // 0x10f7c0                                // 0x0017e6c8: jal 0x10f7c0
    return;                                                     // 0x0017e6d4: jr $ra
    sp = sp + 0x10;                                             // 0x0017e6d8: addiu $sp, $sp, 0x10
}