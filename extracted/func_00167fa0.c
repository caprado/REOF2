void func_00167fa0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00167fa0: addiu $sp, $sp, -0x20
    func_00168098();  // 0x168038                                // 0x00167fc0: jal 0x168038
    func_00168150();  // 0x168098                                // 0x00167fd0: jal 0x168098
    if (v0 != 0) goto label_0x168020;                           // 0x00167fe0: bnez $v0, 0x168020
    func_00168c08();  // 0x168a80                                // 0x00167fe8: jal 0x168a80
    /* nop */                                                   // 0x00167fec: nop 
    /* bnezl $v0, 0x168024 */                                   // 0x00167ff0: bnezl $v0, 0x168024
    func_00168660();  // 0x1685c8                                // 0x00168000: jal 0x1685c8
    if (v0 != 0) goto label_0x168020;                           // 0x00168010: bnez $v0, 0x168020
    func_00168930();  // 0x168868                                // 0x00168018: jal 0x168868
    /* nop */                                                   // 0x0016801c: nop 
label_0x168020:
    return;                                                     // 0x00168030: jr $ra
    sp = sp + 0x20;                                             // 0x00168034: addiu $sp, $sp, 0x20
}