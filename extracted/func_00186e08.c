void func_00186e08() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = 0x184;                                                 // 0x00186e08: addiu $v1, $zero, 0x184
    sp = sp + -0x10;                                            // 0x00186e0c: addiu $sp, $sp, -0x10
    /* multiply: a0 * v1 -> hi:lo */                            // 0x00186e10: mult $ac3, $a0, $v1
    v0 = 0x21 << 16;                                            // 0x00186e14: lui $v0, 0x21
    v0 = v0 + 0x6018;                                           // 0x00186e1c: addiu $v0, $v0, 0x6018
    v1 = v1 + v0;                                               // 0x00186e20: addu $v1, $v1, $v0
    t0 = *(uint16_t*)((v1) + 0x2a);                             // 0x00186e24: lhu $t0, 0x2a($v1)
    /* multiply: a3 *  -> hi:lo */                              // 0x00186e28: mult $t0, $a3
    /* mflo $a3 */                                              // 0x00186e2c
    /* multiply: t0 *  -> hi:lo */                              // 0x00186e30: mult $a2, $t0
    func_001882c8();  // 0x188138                                // 0x00186e34: jal 0x188138
    /* mflo $a2 */                                              // 0x00186e38
    return;                                                     // 0x00186e40: jr $ra
    sp = sp + 0x10;                                             // 0x00186e44: addiu $sp, $sp, 0x10
}