void func_00108e18() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00108e18: addiu $sp, $sp, -0x20
    v0 = 0x34 << 16;                                            // 0x00108e1c: lui $v0, 0x34
    s1 = v0 + 0x1cc0;                                           // 0x00108e2c: addiu $s1, $v0, 0x1cc0
    func_001149c8();  // 0x1149a0                                // 0x00108e40: jal 0x1149a0
    g_00341cc0 = 0;  // Global at 0x00341cc0                    // 0x00108e44: sw $zero, 0($s1)
    v1 = -1;                                                    // 0x00108e4c: addiu $v1, $zero, -1
    if (a0 != v1) goto label_0x108e68;                          // 0x00108e50: bnel $a0, $v1, 0x108e68
    v1 = g_00341cc0;  // Global at 0x00341cc0                   // 0x00108e58: lw $v1, 0($s1)
    /* bnezl $v1, 0x108e64 */                                   // 0x00108e5c: bnezl $v1, 0x108e64
    *(uint32_t*)(s0) = v1;                                      // 0x00108e60: sw $v1, 0($s0)
label_0x108e68:
    return;                                                     // 0x00108e70: jr $ra
    sp = sp + 0x20;                                             // 0x00108e74: addiu $sp, $sp, 0x20
}