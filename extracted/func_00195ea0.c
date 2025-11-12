void func_00195ea0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 2;                                                     // 0x00195ea0: addiu $v0, $zero, 2
    at = 0x29 << 16;                                            // 0x00195ea4: lui $at, 0x29
    g_00290370 = v0;  // Global at 0x00290370                   // 0x00195ea8: sw $v0, 0x370($at)
    return;                                                     // 0x00195eac: jr $ra
    v0 = 1;                                                     // 0x00195eb0: addiu $v0, $zero, 1
}