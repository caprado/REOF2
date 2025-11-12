void func_001c9ae0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    at = 0x31 << 16;                                            // 0x001c9ae0: lui $at, 0x31
    v1 = 4;                                                     // 0x001c9ae4: addiu $v1, $zero, 4
    g_00316aab = 0;  // Global at 0x00316aab                    // 0x001c9ae8: sb $zero, 0x6aab($at)
    at = 0x31 << 16;                                            // 0x001c9af0: lui $at, 0x31
    return;                                                     // 0x001c9af4: jr $ra
    g_00316a90 = v1;  // Global at 0x00316a90                   // 0x001c9af8: sw $v1, 0x6a90($at)
}