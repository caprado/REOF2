void func_00187418() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = 0x184;                                                 // 0x00187418: addiu $v1, $zero, 0x184
    sp = sp + -0x10;                                            // 0x0018741c: addiu $sp, $sp, -0x10
    /* multiply: a0 * v1 -> hi:lo */                            // 0x00187420: mult $ac3, $a0, $v1
    v0 = 0x21 << 16;                                            // 0x00187424: lui $v0, 0x21
    v0 = v0 + 0x6018;                                           // 0x0018742c: addiu $v0, $v0, 0x6018
    v1 = v1 + v0;                                               // 0x00187430: addu $v1, $v1, $v0
    a2 = *(uint16_t*)((v1) + 0x2a);                             // 0x00187434: lhu $a2, 0x2a($v1)
    v0 = *(uint16_t*)((v1) + 0x2c);                             // 0x00187438: lhu $v0, 0x2c($v1)
    /* beqzl $v0, 0x187448 */                                   // 0x00187440: beqzl $v0, 0x187448
    /* break (trap) */                                          // 0x00187444: break 0, 7
    /* divide: a1 / v0 -> hi:lo */                              // 0x00187448: div $zero, $a1, $v0
    func_001873d0();  // 1873d0                                // 0x0018744c: jal 0x1873d0
    /* mflo $a1 */                                              // 0x00187450
    return;                                                     // 0x00187458: jr $ra
    sp = sp + 0x10;                                             // 0x0018745c: addiu $sp, $sp, 0x10
}