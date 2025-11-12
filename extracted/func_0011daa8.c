void func_0011daa8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x0011daa8: addiu $sp, $sp, -0x40
    v0 = 0x1000 << 16;                                          // 0x0011daac: lui $v0, 0x1000
    v0 = v0 | 0x1810;                                           // 0x0011dab4: ori $v0, $v0, 0x1810
    v1 = g_10000000;  // Global at 0x10000000                   // 0x0011dac4: lw $v1, 0($v0)
    v1 = v1 & 0x100;                                            // 0x0011dac8: andi $v1, $v1, 0x100
    if (v1 != 0) goto label_0x11db68;                           // 0x0011dacc: bnez $v1, 0x11db68
    v0 = 0x1f << 16;                                            // 0x0011dad4: lui $v0, 0x1f
    s2 = 2;                                                     // 0x0011dad8: addiu $s2, $zero, 2
    s0 = v0 + 0x19a8;                                           // 0x0011dadc: addiu $s0, $v0, 0x19a8
    a0 = g_001f19a8;  // Global at 0x001f19a8                   // 0x0011dae0: lw $a0, 0x19a8($v0)
    a1 = g_001f19ac;  // Global at 0x001f19ac                   // 0x0011dae4: lw $a1, 4($s0)
    func_0011da50();  // 0x11da40                                // 0x0011dae8: jal 0x11da40
    s1 = s0 + 0x10;                                             // 0x0011daec: addiu $s1, $s0, 0x10
    a1 = 0x1f << 16;                                            // 0x0011daf0: lui $a1, 0x1f
    a0 = 0x8007 << 16;                                          // 0x0011daf4: lui $a0, 0x8007
    a1 = a1 + 0x1240;                                           // 0x0011daf8: addiu $a1, $a1, 0x1240
    a0 = a0 | 0x6000;                                           // 0x0011dafc: ori $a0, $a0, 0x6000
    RFU091();  // 0x11da50                                      // 0x0011db00: jal 0x11da50
    a2 = 0x740;                                                 // 0x0011db04: addiu $a2, $zero, 0x740
    a1 = 0x1f << 16;                                            // 0x0011db08: lui $a1, 0x1f
    a0 = 8 << 16;                                               // 0x0011db0c: lui $a0, 8
    a1 = a1 + 0x1980;                                           // 0x0011db10: addiu $a1, $a1, 0x1980
    a0 = a0 | 0x2000;                                           // 0x0011db14: ori $a0, $a0, 0x2000
    RFU091();  // 0x11da50                                      // 0x0011db18: jal 0x11da50
    a2 = 0x28;                                                  // 0x0011db1c: addiu $a2, $zero, 0x28
    iFlushCache();  // 0x114560                                 // 0x0011db20: jal 0x114560
    iFlushCache();  // 0x114560                                 // 0x0011db28: jal 0x114560
    a0 = 2;                                                     // 0x0011db2c: addiu $a0, $zero, 2
    a0 = g_001f19b0;  // Global at 0x001f19b0                   // 0x0011db30: lw $a0, 8($s0)
    func_0011da50();  // 0x11da40                                // 0x0011db34: jal 0x11da40
    a1 = g_001f19b4;  // Global at 0x001f19b4                   // 0x0011db38: lw $a1, 0xc($s0)
    a0 = g_001f19b8;  // Global at 0x001f19b8                   // 0x0011db3c: lw $a0, 0($s1)
    func_0011daa8();  // 0x11da98                                // 0x0011db40: jal 0x11da98
    s2 = s2 + 1;                                                // 0x0011db44: addiu $s2, $s2, 1
    a0 = g_001f19b8;  // Global at 0x001f19b8                   // 0x0011db48: lw $a0, 0($s1)
    func_0011da50();  // 0x11da40                                // 0x0011db50: jal 0x11da40
    s1 = s1 + 8;                                                // 0x0011db54: addiu $s1, $s1, 8
    v0 = ((unsigned)s2 < (unsigned)8) ? 1 : 0;                  // 0x0011db58: sltiu $v0, $s2, 8
    /* bnezl $v0, 0x11db40 */                                   // 0x0011db5c: bnezl $v0, 0x11db40
    a0 = g_001f19c0;  // Global at 0x001f19c0                   // 0x0011db60: lw $a0, 0($s1)
label_0x11db68:
    return;                                                     // 0x0011db74: jr $ra
    sp = sp + 0x40;                                             // 0x0011db78: addiu $sp, $sp, 0x40
}