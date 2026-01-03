void func_001ca1e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001ca1e0: addiu $sp, $sp, -0x20
    at = 0x31 << 16;                                            // 0x001ca1e4: lui $at, 0x31
    a2 = sp + 0x1c;                                             // 0x001ca1ec: addiu $a2, $sp, 0x1c
    g_00316a80 = 0;  // Global at 0x00316a80                    // 0x001ca1f0: sb $zero, 0x6a80($at)
    a3 = sp + 0x18;                                             // 0x001ca1f4: addiu $a3, $sp, 0x18
    at = 0x31 << 16;                                            // 0x001ca1f8: lui $at, 0x31
    func_001c8a70();  // 1c8a70                                // 0x001ca1fc: jal 0x1c8a70
    g_00316a88 = 0;  // Global at 0x00316a88                    // 0x001ca200: sw $zero, 0x6a88($at)
    return;                                                     // 0x001ca210: jr $ra
    sp = sp + 0x20;                                             // 0x001ca214: addiu $sp, $sp, 0x20
}