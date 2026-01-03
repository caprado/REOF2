void func_001099b8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001099b8: addiu $sp, $sp, -0x20
    v0 = 0x34 << 16;                                            // 0x001099bc: lui $v0, 0x34
    s1 = v0 + 0x1cc0;                                           // 0x001099cc: addiu $s1, $v0, 0x1cc0
    func_00114928();  // 114928                                // 0x001099e0: jal 0x114928
    g_00341cc0 = 0;  // Global at 0x00341cc0                    // 0x001099e4: sw $zero, 0($s1)
    a0 = -1;                                                    // 0x001099ec: addiu $a0, $zero, -1
    if (v1 != a0) goto label_0x109a04;                          // 0x001099f0: bne $v1, $a0, 0x109a04
    v1 = g_00341cc0;  // Global at 0x00341cc0                   // 0x001099f8: lw $v1, 0($s1)
    /* bnezl $v1, 0x109a04 */                                   // 0x001099fc: bnezl $v1, 0x109a04
    *(uint32_t*)(s0) = v1;                                      // 0x00109a00: sw $v1, 0($s0)
label_0x109a04:
    return;                                                     // 0x00109a10: jr $ra
    sp = sp + 0x20;                                             // 0x00109a14: addiu $sp, $sp, 0x20
}