void func_001c8cd0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    at = 0x31 << 16;                                            // 0x001c8cd0: lui $at, 0x31
    v0 = g_00316a90;  // Global at 0x00316a90                   // 0x001c8cd4: lw $v0, 0x6a90($at)
    v0 = v0 ^ 3;                                                // 0x001c8cd8: xori $v0, $v0, 3
    return;                                                     // 0x001c8cdc: jr $ra
    v0 = ((unsigned)v0 < (unsigned)1) ? 1 : 0;                  // 0x001c8ce0: sltiu $v0, $v0, 1
}