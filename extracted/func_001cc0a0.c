void func_001cc0a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001cc0a0: addiu $sp, $sp, -0x10
    if (a1 == 0) goto label_0x1cc0b4;                           // 0x001cc0a4: beqz $a1, 0x1cc0b4
    func_001cfc70();  // 0x1cfc70                               // 0x001cc0ac: jal 0x1cfc70
    a0 = a0 + 0x28;                                             // 0x001cc0b0: addiu $a0, $a0, 0x28
label_0x1cc0b4:
    return;                                                     // 0x001cc0b8: jr $ra
    sp = sp + 0x10;                                             // 0x001cc0bc: addiu $sp, $sp, 0x10
}