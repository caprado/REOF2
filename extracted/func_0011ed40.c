void func_0011ed40() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x0011ed40: addiu $sp, $sp, -0x40
    func_001104e8();  // 1104e8                                // 0x0011ed60: jal 0x1104e8
    a1 = 0x8ca << 16;                                           // 0x0011ed64: lui $a1, 0x8ca
    /* bnezl $s0, 0x11ed78 */                                   // 0x0011ed70: bnezl $s0, 0x11ed78
    *(uint32_t*)(s0) = v0;                                      // 0x0011ed74: sw $v0, 0($s0)
    if (s2 == 0) goto label_0x11edd0;                           // 0x0011ed78: beqz $s2, 0x11edd0
    v1 = 0x8ca << 16;                                           // 0x0011ed7c: lui $v1, 0x8ca
    a1 = 0x8ca << 16;                                           // 0x0011ed80: lui $a1, 0x8ca
    /* multiply: v1 *  -> hi:lo */                              // 0x0011ed84: multu $v0, $v1
    /* mflo $a2 */                                              // 0x0011ed88
    /* mfhi $v1 */                                              // 0x0011ed8c
    v1 = v1 | a2;                                               // 0x0011ed9c: or $v1, $v1, $a2
    func_001104e8();  // 1104e8                                // 0x0011edbc: jal 0x1104e8
    *(uint32_t*)(s2) = v0;                                      // 0x0011edcc: sw $v0, 0($s2)
label_0x11edd0:
    return;                                                     // 0x0011ede0: jr $ra
    sp = sp + 0x40;                                             // 0x0011ede4: addiu $sp, $sp, 0x40
}