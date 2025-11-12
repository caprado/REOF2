void func_001c9e50() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    at = 0x31 << 16;                                            // 0x001c9e50: lui $at, 0x31
    v0 = 3;                                                     // 0x001c9e54: addiu $v0, $zero, 3
    g_00316aa0 = 0;  // Global at 0x00316aa0                    // 0x001c9e58: sw $zero, 0x6aa0($at)
    v1 = 1;                                                     // 0x001c9e5c: addiu $v1, $zero, 1
    at = 0x31 << 16;                                            // 0x001c9e60: lui $at, 0x31
    g_00316a90 = v0;  // Global at 0x00316a90                   // 0x001c9e64: sw $v0, 0x6a90($at)
    at = 0x31 << 16;                                            // 0x001c9e68: lui $at, 0x31
    return;                                                     // 0x001c9e70: jr $ra
    g_00316aab = v1;  // Global at 0x00316aab                   // 0x001c9e74: sb $v1, 0x6aab($at)
}