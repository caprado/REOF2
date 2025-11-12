void func_001c0720() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    at = 0x31 << 16;                                            // 0x001c0720: lui $at, 0x31
    v1 = 5;                                                     // 0x001c0724: addiu $v1, $zero, 5
    g_00315fd4 = a0;  // Global at 0x00315fd4                   // 0x001c0728: sw $a0, 0x5fd4($at)
    at = 0x31 << 16;                                            // 0x001c072c: lui $at, 0x31
    g_00315fc0 = 0;  // Global at 0x00315fc0                    // 0x001c0730: sw $zero, 0x5fc0($at)
    at = 0x31 << 16;                                            // 0x001c0734: lui $at, 0x31
    g_0031608c = v1;  // Global at 0x0031608c                   // 0x001c0738: sw $v1, 0x608c($at)
    v1 = -1;                                                    // 0x001c073c: addiu $v1, $zero, -1
    at = 0x31 << 16;                                            // 0x001c0740: lui $at, 0x31
    g_00315fe4 = v1;  // Global at 0x00315fe4                   // 0x001c0744: sw $v1, 0x5fe4($at)
    v1 = 1;                                                     // 0x001c0748: addiu $v1, $zero, 1
    at = 0x31 << 16;                                            // 0x001c074c: lui $at, 0x31
    g_003160a0 = v1;  // Global at 0x003160a0                   // 0x001c0750: sw $v1, 0x60a0($at)
    at = 0x31 << 16;                                            // 0x001c0754: lui $at, 0x31
    return;                                                     // 0x001c0758: jr $ra
    g_00315fc4 = 0;  // Global at 0x00315fc4                    // 0x001c075c: sw $zero, 0x5fc4($at)
}