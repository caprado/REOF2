void func_0015e0b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0015e0b0: addiu $sp, $sp, -0x10
    func_0015fc80();  // 15fc80                                // 0x0015e0bc: jal 0x15fc80
    if (v0 != 0) return;  // Branch to 0x15e0f0                 // 0x0015e0c4: bnez $v0, 0x15e0f0
    a0 = 0x22 << 16;                                            // 0x0015e0cc: lui $a0, 0x22
    func_00163410();  // 163410                                // 0x0015e0d0: jal 0x163410
    a0 = &str_002275d8;  // "E202231: mwPlyGetNumSkipDisp: handle is invalid." // 0x0015e0d4: addiu $a0, $a0, 0x75d8
    return;                                                     // 0x0015e0e4: jr $ra
    sp = sp + 0x10;                                             // 0x0015e0e8: addiu $sp, $sp, 0x10
}