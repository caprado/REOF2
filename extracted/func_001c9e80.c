void func_001c9e80() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001c9e80: addiu $sp, $sp, -0x10
    func_001c78e0();  // 0x1c78a0                                // 0x001c9e88: jal 0x1c78a0
    /* nop */                                                   // 0x001c9e8c: nop 
    at = 0x31 << 16;                                            // 0x001c9e90: lui $at, 0x31
    v0 = 4;                                                     // 0x001c9e94: addiu $v0, $zero, 4
    g_00316aab = 0;  // Global at 0x00316aab                    // 0x001c9e98: sb $zero, 0x6aab($at)
    at = 0x31 << 16;                                            // 0x001c9e9c: lui $at, 0x31
    g_00316a90 = v0;  // Global at 0x00316a90                   // 0x001c9ea0: sw $v0, 0x6a90($at)
    return;                                                     // 0x001c9eac: jr $ra
    sp = sp + 0x10;                                             // 0x001c9eb0: addiu $sp, $sp, 0x10
}