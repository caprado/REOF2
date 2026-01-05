void func_0011ede8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0011ede8: addiu $sp, $sp, -0x20
    v0 = 0x8ca << 16;                                           // 0x0011edec: lui $v0, 0x8ca
    /* multiply: v0 *  -> hi:lo */                              // 0x0011ee04: multu $a0, $v0
    a1 = 0xf << 16;                                             // 0x0011ee08: lui $a1, 0xf
    a1 = a1 | 0x4240;                                           // 0x0011ee0c: ori $a1, $a1, 0x4240
    /* mflo $a2 */                                              // 0x0011ee14
    /* mfhi $a0 */                                              // 0x0011ee20
    a0 = a0 | a2;                                               // 0x0011ee2c: or $a0, $a0, $a2
    func_001104e8();  // 1104e8                                // 0x0011ee3c: jal 0x1104e8
    s0 = s0 | a2;                                               // 0x0011ee40: or $s0, $s0, $a2
    return;                                                     // 0x0011ee50: jr $ra
    sp = sp + 0x20;                                             // 0x0011ee54: addiu $sp, $sp, 0x20
}