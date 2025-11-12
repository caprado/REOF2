void func_0015d400() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0015d400: addiu $sp, $sp, -0x20
    s0 = s1 + 0x1e8;                                            // 0x0015d414: addiu $s0, $s1, 0x1e8
    s2 = 0x1f;                                                  // 0x0015d41c: addiu $s2, $zero, 0x1f
label_0x15d420:
    a1 = *(int32_t*)(s0);                                       // 0x0015d420: lw $a1, 0($s0)
    /* beqzl $a1, 0x15d43c */                                   // 0x0015d424: beqzl $a1, 0x15d43c
    s2 = s2 + -1;                                               // 0x0015d428: addiu $s2, $s2, -1
    func_0015d3c0();  // 0x15d370                                // 0x0015d42c: jal 0x15d370
    *(uint32_t*)(s0) = 0;                                       // 0x0015d434: sw $zero, 0($s0)
    s2 = s2 + -1;                                               // 0x0015d438: addiu $s2, $s2, -1
    if (s2 >= 0) goto label_0x15d420;                           // 0x0015d43c: bgez $s2, 0x15d420
    s0 = s0 + -4;                                               // 0x0015d440: addiu $s0, $s0, -4
    return;                                                     // 0x0015d454: jr $ra
    sp = sp + 0x20;                                             // 0x0015d458: addiu $sp, $sp, 0x20
}