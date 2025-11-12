void func_00186dc8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = 0x184;                                                 // 0x00186dc8: addiu $v1, $zero, 0x184
    sp = sp + -0x10;                                            // 0x00186dcc: addiu $sp, $sp, -0x10
    /* multiply: a0 * v1 -> hi:lo */                            // 0x00186dd0: mult $ac3, $a0, $v1
    v0 = 0x21 << 16;                                            // 0x00186dd4: lui $v0, 0x21
    v0 = v0 + 0x6018;                                           // 0x00186ddc: addiu $v0, $v0, 0x6018
    v1 = v1 + v0;                                               // 0x00186de0: addu $v1, $v1, $v0
    t0 = *(uint16_t*)((v1) + 0x2a);                             // 0x00186de4: lhu $t0, 0x2a($v1)
    /* multiply: a3 *  -> hi:lo */                              // 0x00186de8: mult $t0, $a3
    /* mflo $a3 */                                              // 0x00186dec
    /* multiply: t0 *  -> hi:lo */                              // 0x00186df0: mult $a2, $t0
    func_00188138();  // 0x188118                                // 0x00186df4: jal 0x188118
    /* mflo $a2 */                                              // 0x00186df8
    return;                                                     // 0x00186e00: jr $ra
    sp = sp + 0x10;                                             // 0x00186e04: addiu $sp, $sp, 0x10
}