void func_00191e80() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00191e80: addiu $sp, $sp, -0x10
    func_00191e50();  // 191e50                                // 0x00191e88: jal 0x191e50
    /* nop */                                                   // 0x00191e8c: nop 
    func_00191fd0();  // 191fd0                                // 0x00191e90: jal 0x191fd0
    /* FPU: mov.s $f12, $f0 */                                  // 0x00191e94: mov.s $f12, $f0
    return;                                                     // 0x00191e9c: jr $ra
    sp = sp + 0x10;                                             // 0x00191ea0: addiu $sp, $sp, 0x10
}