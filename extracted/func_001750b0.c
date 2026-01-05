void func_001750b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001750b0: addiu $sp, $sp, -0x30
    v0 = 0x21 << 16;                                            // 0x001750b4: lui $v0, 0x21
    s0 = 7;                                                     // 0x001750c0: addiu $s0, $zero, 7
    s1 = v0 + 0x578c;                                           // 0x001750c8: addiu $s1, $v0, 0x578c
    v0 = g_0021578c;  // Global at 0x0021578c                   // 0x001750dc: lw $v0, 0($s1)
label_0x1750e0:
    s1 = s1 + 4;                                                // 0x001750e0: addiu $s1, $s1, 4
    if (v0 == 0) goto label_0x1750f8;                           // 0x001750e4: beqz $v0, 0x1750f8
    func_00175120();  // 175120                                // 0x001750f0: jal 0x175120
label_0x1750f8:
    s0 = s0 + -1;                                               // 0x001750f8: addiu $s0, $s0, -1
    if (s0 >= 0) goto label_0x1750e0;                           // 0x001750fc: bgezl $s0, 0x1750e0
    v0 = g_00215790;  // Global at 0x00215790                   // 0x00175100: lw $v0, 0($s1)
    return;                                                     // 0x00175118: jr $ra
    sp = sp + 0x30;                                             // 0x0017511c: addiu $sp, $sp, 0x30
}