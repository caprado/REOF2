void func_0015f820() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0015f820: addiu $sp, $sp, -0x10
    func_0015fcb0();  // 0x15fc80                                // 0x0015f82c: jal 0x15fc80
    if (v0 != 0) return;  // Branch to 0x15f860                 // 0x0015f834: bnez $v0, 0x15f860
    a0 = 0x22 << 16;                                            // 0x0015f83c: lui $a0, 0x22
    func_001634a8();  // 0x163410                                // 0x0015f840: jal 0x163410
    a0 = &str_00227b88;  // "E202232: mwPlyGetNumDropFrm: handle is invalid." // 0x0015f844: addiu $a0, $a0, 0x7b88
    return;                                                     // 0x0015f854: jr $ra
    sp = sp + 0x10;                                             // 0x0015f858: addiu $sp, $sp, 0x10
}