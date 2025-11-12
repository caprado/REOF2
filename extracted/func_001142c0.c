void func_001142c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = 0x3e;                                                  // 0x001142c0: addiu $v1, $zero, 0x3e
    syscall();                                                  // 0x001142c4: syscall 
    return;                                                     // 0x001142c8: jr $ra
    /* nop */                                                   // 0x001142cc: nop 
}