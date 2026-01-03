void func_001164d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x90;                                            // 0x001164d0: addiu $sp, $sp, -0x90
    a1 = sp + 0x58;                                             // 0x001164dc: addiu $a1, $sp, 0x58
    func_00115ed8();  // 115ed8                                // 0x001164f4: jal 0x115ed8
    return;                                                     // 0x00116500: jr $ra
    sp = sp + 0x90;                                             // 0x00116504: addiu $sp, $sp, 0x90
}