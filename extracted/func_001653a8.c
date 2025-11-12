void func_001653a8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001653a8: addiu $sp, $sp, -0x10
    func_00131c20();  // 0x131bb8                                // 0x001653b0: jal 0x131bb8
    /* nop */                                                   // 0x001653b4: nop 
    v0 = ((unsigned)v0 < (unsigned)2) ? 1 : 0;                  // 0x001653b8: sltiu $v0, $v0, 2
    v0 = ((unsigned)v0 < (unsigned)1) ? 1 : 0;                  // 0x001653c0: sltiu $v0, $v0, 1
    return;                                                     // 0x001653c4: jr $ra
    sp = sp + 0x10;                                             // 0x001653c8: addiu $sp, $sp, 0x10
}