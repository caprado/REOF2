void func_0011bb38() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x0011bb38: addiu $sp, $sp, -0x50
    v0 = 0x1f << 16;                                            // 0x0011bb3c: lui $v0, 0x1f
    v1 = 0x25 << 16;                                            // 0x0011bb44: lui $v1, 0x25
    s3 = v0 + 0x32c;                                            // 0x0011bb4c: addiu $s3, $v0, 0x32c
    s1 = v1 + -0x258;                                           // 0x0011bb54: addiu $s1, $v1, -0x258
    func_00107ab8();  // 0x107a20                                // 0x0011bb6c: jal 0x107a20
    a2 = 4;                                                     // 0x0011bb70: addiu $a2, $zero, 4
    if (v0 == 0) goto label_0x11bba4;                           // 0x0011bb74: beqz $v0, 0x11bba4
    s0 = 0x1f << 16;                                            // 0x0011bb78: lui $s0, 0x1f
    a1 = g_001f0404;  // Global at 0x001f0404                   // 0x0011bb80: lw $a1, 0x404($s0)
    func_00107ab8();  // 0x107a20                                // 0x0011bb84: jal 0x107a20
    a2 = 4;                                                     // 0x0011bb88: addiu $a2, $zero, 4
    if (v0 == 0) goto label_0x11bba4;                           // 0x0011bb8c: beqz $v0, 0x11bba4
    a1 = g_001f0404;  // Global at 0x001f0404                   // 0x0011bb90: lw $a1, 0x404($s0)
    func_00107ab8();  // 0x107a20                                // 0x0011bb98: jal 0x107a20
    a2 = 4;                                                     // 0x0011bb9c: addiu $a2, $zero, 4
    s2 = ((unsigned)0 < (unsigned)v0) ? 1 : 0;                  // 0x0011bba0: sltu $s2, $zero, $v0
label_0x11bba4:
    return;                                                     // 0x0011bbbc: jr $ra
    sp = sp + 0x50;                                             // 0x0011bbc0: addiu $sp, $sp, 0x50
}