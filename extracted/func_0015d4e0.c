void func_0015d4e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0015d4e0: addiu $sp, $sp, -0x10
    func_0015fcb0();  // 0x15fc80                                // 0x0015d4ec: jal 0x15fc80
    if (v0 != 0) return;  // Branch to 0x15d520                 // 0x0015d4f4: bnez $v0, 0x15d520
    a0 = 0x22 << 16;                                            // 0x0015d4fc: lui $a0, 0x22
    func_001634a8();  // 0x163410                                // 0x0015d500: jal 0x163410
    a0 = &str_002274a0;  // "E1122614: mwPlyGetCurFrm: handle is invalid." // 0x0015d504: addiu $a0, $a0, 0x74a0
    return;                                                     // 0x0015d514: jr $ra
    sp = sp + 0x10;                                             // 0x0015d518: addiu $sp, $sp, 0x10
}