void func_001cbff0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001cbff0: addiu $sp, $sp, -0x10
    func_001cfc80();  // 0x1cfc60                                // 0x001cbff8: jal 0x1cfc60
    a0 = a0 + 0x28;                                             // 0x001cbffc: addiu $a0, $a0, 0x28
    v0 = *(uint8_t*)(v0);                                       // 0x001cc004: lbu $v0, 0($v0)
    return;                                                     // 0x001cc008: jr $ra
    sp = sp + 0x10;                                             // 0x001cc00c: addiu $sp, $sp, 0x10
}