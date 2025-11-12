void func_001cdf30() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    at = 0x32 << 16;                                            // 0x001cdf30: lui $at, 0x32
    g_003257d6 = a0;  // Global at 0x003257d6                   // 0x001cdf34: sb $a0, 0x57d6($at)
    at = 0x32 << 16;                                            // 0x001cdf38: lui $at, 0x32
    g_003257d9 = 0;  // Global at 0x003257d9                    // 0x001cdf3c: sb $zero, 0x57d9($at)
    at = 0x32 << 16;                                            // 0x001cdf40: lui $at, 0x32
    g_003257d8 = 0;  // Global at 0x003257d8                    // 0x001cdf44: sb $zero, 0x57d8($at)
    at = 0x32 << 16;                                            // 0x001cdf48: lui $at, 0x32
    g_003257d7 = 0;  // Global at 0x003257d7                    // 0x001cdf4c: sb $zero, 0x57d7($at)
    at = 0x32 << 16;                                            // 0x001cdf50: lui $at, 0x32
    g_003257dc = 0;  // Global at 0x003257dc                    // 0x001cdf54: sh $zero, 0x57dc($at)
    at = 0x32 << 16;                                            // 0x001cdf58: lui $at, 0x32
    g_003257da = 0;  // Global at 0x003257da                    // 0x001cdf5c: sh $zero, 0x57da($at)
    at = 0x32 << 16;                                            // 0x001cdf60: lui $at, 0x32
    return;                                                     // 0x001cdf64: jr $ra
    g_003257f4 = 0;  // Global at 0x003257f4                    // 0x001cdf68: sw $zero, 0x57f4($at)
}