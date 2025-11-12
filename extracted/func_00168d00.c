void func_00168d00() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00168d00: addiu $sp, $sp, -0x10
    func_00168d58();  // 0x168d28                                // 0x00168d08: jal 0x168d28
    /* nop */                                                   // 0x00168d0c: nop 
    v0 = v0 ^ 0x1bf;                                            // 0x00168d10: xori $v0, $v0, 0x1bf
    v0 = ((unsigned)v0 < (unsigned)1) ? 1 : 0;                  // 0x00168d18: sltiu $v0, $v0, 1
    return;                                                     // 0x00168d1c: jr $ra
    sp = sp + 0x10;                                             // 0x00168d20: addiu $sp, $sp, 0x10
}