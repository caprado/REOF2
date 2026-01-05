void func_001c8c40() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001c8c40: addiu $sp, $sp, -0x10
    at = 0x31 << 16;                                            // 0x001c8c44: lui $at, 0x31
    g_00316a80 = 0;  // Global at 0x00316a80                    // 0x001c8c4c: sb $zero, 0x6a80($at)
    at = 0x31 << 16;                                            // 0x001c8c50: lui $at, 0x31
    g_00316a88 = 0;  // Global at 0x00316a88                    // 0x001c8c54: sw $zero, 0x6a88($at)
    at = 0x31 << 16;                                            // 0x001c8c58: lui $at, 0x31
    g_00316a90 = 0;  // Global at 0x00316a90                    // 0x001c8c5c: sw $zero, 0x6a90($at)
    at = 0x31 << 16;                                            // 0x001c8c60: lui $at, 0x31
    func_001c7580();  // 1c7580                                // 0x001c8c64: jal 0x1c7580
    g_00316a98 = 0;  // Global at 0x00316a98                    // 0x001c8c68: sw $zero, 0x6a98($at)
    return;                                                     // 0x001c8c74: jr $ra
    sp = sp + 0x10;                                             // 0x001c8c78: addiu $sp, $sp, 0x10
}