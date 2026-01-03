void func_001c9d10() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001c9d10: addiu $sp, $sp, -0x10
    func_001c8130();  // 1c8130                                // 0x001c9d18: jal 0x1c8130
    /* nop */                                                   // 0x001c9d1c: nop 
    v1 = 5;                                                     // 0x001c9d20: addiu $v1, $zero, 5
    at = 0x31 << 16;                                            // 0x001c9d24: lui $at, 0x31
    g_00316a90 = v1;  // Global at 0x00316a90                   // 0x001c9d28: sw $v1, 0x6a90($at)
    return;                                                     // 0x001c9d38: jr $ra
    sp = sp + 0x10;                                             // 0x001c9d3c: addiu $sp, $sp, 0x10
}