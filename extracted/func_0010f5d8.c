void func_0010f5d8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0010f5d8: addiu $sp, $sp, -0x20
    v0 = 0x34 << 16;                                            // 0x0010f5dc: lui $v0, 0x34
    s1 = v0 + 0x1cc0;                                           // 0x0010f5ec: addiu $s1, $v0, 0x1cc0
    func_00114928();  // 0x1148a8                                // 0x0010f600: jal 0x1148a8
    g_00341cc0 = 0;  // Global at 0x00341cc0                    // 0x0010f604: sw $zero, 0($s1)
    a0 = -1;                                                    // 0x0010f60c: addiu $a0, $zero, -1
    if (v1 != a0) goto label_0x10f624;                          // 0x0010f610: bne $v1, $a0, 0x10f624
    v1 = g_00341cc0;  // Global at 0x00341cc0                   // 0x0010f618: lw $v1, 0($s1)
    /* bnezl $v1, 0x10f624 */                                   // 0x0010f61c: bnezl $v1, 0x10f624
    *(uint32_t*)(s0) = v1;                                      // 0x0010f620: sw $v1, 0($s0)
label_0x10f624:
    return;                                                     // 0x0010f630: jr $ra
    sp = sp + 0x20;                                             // 0x0010f634: addiu $sp, $sp, 0x20
}