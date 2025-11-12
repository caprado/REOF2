void func_00168150() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x00168150: addiu $sp, $sp, -0x40
    a2 = 1 << 16;                                               // 0x00168160: lui $a2, 1
    func_00168548();  // 0x1684e0                                // 0x00168184: jal 0x1684e0
    *(uint32_t*)(s6) = 0;                                       // 0x00168188: sw $zero, 0($s6)
    a2 = 1 << 16;                                               // 0x0016818c: lui $a2, 1
    s2 = s1 - s3;                                               // 0x00168194: subu $s2, $s1, $s3
    a0 = s1 + 1;                                                // 0x00168198: addiu $a0, $s1, 1
    if (s1 == 0) goto label_0x168210;                           // 0x0016819c: beqz $s1, 0x168210
    s5 = s4 - s2;                                               // 0x001681a0: subu $s5, $s4, $s2
    func_00168548();  // 0x1684e0                                // 0x001681a4: jal 0x1684e0
    a1 = s5 + -1;                                               // 0x001681a8: addiu $a1, $s5, -1
    a2 = 1 << 16;                                               // 0x001681ac: lui $a2, 1
    v1 = s0 - s3;                                               // 0x001681b4: subu $v1, $s0, $s3
    a0 = s0 + 1;                                                // 0x001681b8: addiu $a0, $s0, 1
    if (s0 == 0) goto label_0x168210;                           // 0x001681bc: beqz $s0, 0x168210
    a1 = s4 - v1;                                               // 0x001681c0: subu $a1, $s4, $v1
    func_00168548();  // 0x1684e0                                // 0x001681c4: jal 0x1684e0
    a1 = a1 + -1;                                               // 0x001681c8: addiu $a1, $a1, -1
    if (v1 == 0) goto label_0x168210;                           // 0x001681d0: beqz $v1, 0x168210
    a0 = v1 - s0;                                               // 0x001681d4: subu $a0, $v1, $s0
    s0 = s0 - s1;                                               // 0x001681d8: subu $s0, $s0, $s1
    if (s0 != a0) goto label_0x168210;                          // 0x001681dc: bne $s0, $a0, 0x168210
    v0 = -1;                                                    // 0x001681e0: addiu $v0, $zero, -1
    /* divide: s2 / s0 -> hi:lo */                              // 0x001681e4: div $zero, $s2, $s0
    /* beqzl $s0, 0x1681f0 */                                   // 0x001681e8: beqzl $s0, 0x1681f0
    /* break (trap) */                                          // 0x001681ec: break 0, 7
    /* mfhi $v1 */                                              // 0x001681f0
    /* bnezl $v1, 0x168214 */                                   // 0x001681f4: bnezl $v1, 0x168214
    func_001682d0();  // 0x168238                                // 0x00168204: jal 0x168238
label_0x168210:
    return;                                                     // 0x00168230: jr $ra
    sp = sp + 0x40;                                             // 0x00168234: addiu $sp, $sp, 0x40
}