void func_00191fa0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    return func_00122268();  // Tail call                        // 0x00191fa0: j 0x122190
    /* nop */                                                   // 0x00191fa4: nop 
    /* nop */                                                   // 0x00191fa8: nop 
    /* nop */                                                   // 0x00191fac: nop 
    sp = sp + -0x20;                                            // 0x00191fb0: addiu $sp, $sp, -0x20
    func_0010a2f8();  // 0x10a2f8                               // 0x00191fb8: jal 0x10a2f8
    a0 = sp + 0x1c;                                             // 0x00191fbc: addiu $a0, $sp, 0x1c
    return;                                                     // 0x00191fc4: jr $ra
    sp = sp + 0x20;                                             // 0x00191fc8: addiu $sp, $sp, 0x20
}