void func_00129460() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00129460: addiu $sp, $sp, -0x10
    v0 = a2 & 0x3f;                                             // 0x00129464: andi $v0, $a2, 0x3f
    if (v0 == 0) return;  // Branch to 0x129490                 // 0x00129468: beqz $v0, 0x129490
    a0 = 0x22 << 16;                                            // 0x00129470: lui $a0, 0x22
    func_00127d90();  // 127d90                                // 0x00129474: jal 0x127d90
    a0 = &str_002228a0;  // "E9040822:'adxf' is NULL.(ADXF_Stop)" // 0x00129478: addiu $a0, $a0, 0x28a0
    v0 = -3;                                                    // 0x0012947c: addiu $v0, $zero, -3
    return;                                                     // 0x00129484: jr $ra
    sp = sp + 0x10;                                             // 0x00129488: addiu $sp, $sp, 0x10
}