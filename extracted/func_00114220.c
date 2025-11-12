void func_00114220() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = -0x34;                                                 // 0x00114220: addiu $v1, $zero, -0x34
    syscall();                                                  // 0x00114224: syscall 
    return;                                                     // 0x00114228: jr $ra
    /* nop */                                                   // 0x0011422c: nop 
}