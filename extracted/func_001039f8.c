void func_001039f8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001039f8: addiu $sp, $sp, -0x20
    v0 = 0x34 << 16;                                            // 0x001039fc: lui $v0, 0x34
    s1 = v0 + 0x1cc0;                                           // 0x00103a0c: addiu $s1, $v0, 0x1cc0
    func_001149d8();  // 0x1149c8                                // 0x00103a18: jal 0x1149c8
    g_00341cc0 = 0;  // Global at 0x00341cc0                    // 0x00103a1c: sw $zero, 0($s1)
    v1 = -1;                                                    // 0x00103a24: addiu $v1, $zero, -1
    if (a0 != v1) goto label_0x103a40;                          // 0x00103a28: bnel $a0, $v1, 0x103a40
    v1 = g_00341cc0;  // Global at 0x00341cc0                   // 0x00103a30: lw $v1, 0($s1)
    /* bnezl $v1, 0x103a3c */                                   // 0x00103a34: bnezl $v1, 0x103a3c
    *(uint32_t*)(s0) = v1;                                      // 0x00103a38: sw $v1, 0($s0)
label_0x103a40:
    return;                                                     // 0x00103a48: jr $ra
    sp = sp + 0x20;                                             // 0x00103a4c: addiu $sp, $sp, 0x20
}