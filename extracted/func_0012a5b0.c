void func_0012a5b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0012a5b0: addiu $sp, $sp, -0x10
    if (a0 != 0) return;  // Branch to 0x12a5d8                 // 0x0012a5b4: bnez $a0, 0x12a5d8
    a0 = 0x22 << 16;                                            // 0x0012a5bc: lui $a0, 0x22
    func_00127d90();  // 127d90                                // 0x0012a5c0: jal 0x127d90
    a0 = &str_00222ca8;  // "E02080849 ADXT_ResetEntry: parameter error" // 0x0012a5c4: addiu $a0, $a0, 0x2ca8
    v0 = -1;                                                    // 0x0012a5c8: addiu $v0, $zero, -1
    return;                                                     // 0x0012a5d0: jr $ra
    sp = sp + 0x10;                                             // 0x0012a5d4: addiu $sp, $sp, 0x10
}