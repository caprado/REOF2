void func_001c9d70() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001c9d70: addiu $sp, $sp, -0x10
    func_001c8340();  // 1c8340                                // 0x001c9d78: jal 0x1c8340
    /* nop */                                                   // 0x001c9d7c: nop 
    v1 = 1;                                                     // 0x001c9d80: addiu $v1, $zero, 1
    at = 0x31 << 16;                                            // 0x001c9d84: lui $at, 0x31
    g_00316aaa = v1;  // Global at 0x00316aaa                   // 0x001c9d88: sb $v1, 0x6aaa($at)
    return;                                                     // 0x001c9d98: jr $ra
    sp = sp + 0x10;                                             // 0x001c9d9c: addiu $sp, $sp, 0x10
}