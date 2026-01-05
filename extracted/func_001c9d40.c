void func_001c9d40() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001c9d40: addiu $sp, $sp, -0x10
    func_001c7fe0();  // 1c7fe0                                // 0x001c9d48: jal 0x1c7fe0
    /* nop */                                                   // 0x001c9d4c: nop 
    at = 0x31 << 16;                                            // 0x001c9d50: lui $at, 0x31
    g_00316aa9 = 0;  // Global at 0x00316aa9                    // 0x001c9d58: sb $zero, 0x6aa9($at)
    return;                                                     // 0x001c9d64: jr $ra
    sp = sp + 0x10;                                             // 0x001c9d68: addiu $sp, $sp, 0x10
}