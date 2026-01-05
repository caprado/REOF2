/** @category ps2-kernel-not-needed @status complete @author caprado */
void func_0011d6f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x0011d6f0: addiu $sp, $sp, -0x40
    func_0011d688();  // 11d688                                // 0x0011d700: jal 0x11d688
    if (v0 == 0) goto label_0x11d784;                           // 0x0011d708: beqz $v0, 0x11d784
    v0 = 0x1f << 16;                                            // 0x0011d70c: lui $v0, 0x1f
    s2 = 2;                                                     // 0x0011d710: addiu $s2, $zero, 2
    s0 = v0 + 0x1220;                                           // 0x0011d714: addiu $s0, $v0, 0x1220
    a0 = g_001f1220;  // Global at 0x001f1220                   // 0x0011d718: lw $a0, 0x1220($v0)
    a1 = g_001f1224;  // Global at 0x001f1224                   // 0x0011d71c: lw $a1, 4($s0)
    func_0011d620();  // 11d620                                // 0x0011d720: jal 0x11d620
    s1 = s0 + 0x10;                                             // 0x0011d724: addiu $s1, $s0, 0x10
    a1 = 0x1f << 16;                                            // 0x0011d728: lui $a1, 0x1f
    a0 = 0x8007 << 16;                                          // 0x0011d72c: lui $a0, 0x8007
    a2 = 0x7a8;                                                 // 0x0011d730: addiu $a2, $zero, 0x7a8
    a1 = a1 + 0xa78;                                            // 0x0011d734: addiu $a1, $a1, 0xa78
    RFU091();  // 0x11d630                                      // 0x0011d738: jal 0x11d630
    a0 = a0 | 0x4000;                                           // 0x0011d73c: ori $a0, $a0, 0x4000
    iFlushCache();  // 0x114560                                 // 0x0011d740: jal 0x114560
    iFlushCache();  // 0x114560                                 // 0x0011d748: jal 0x114560
    a0 = 2;                                                     // 0x0011d74c: addiu $a0, $zero, 2
    a0 = g_001f1228;  // Global at 0x001f1228                   // 0x0011d750: lw $a0, 8($s0)
    func_0011d620();  // 11d620                                // 0x0011d754: jal 0x11d620
    a1 = g_001f122c;  // Global at 0x001f122c                   // 0x0011d758: lw $a1, 0xc($s0)
    a0 = g_001f1230;  // Global at 0x001f1230                   // 0x0011d75c: lw $a0, 0($s1)
    func_0011d678();  // 11d678                                // 0x0011d760: jal 0x11d678
    s2 = s2 + 1;                                                // 0x0011d764: addiu $s2, $s2, 1
    a0 = g_001f1230;  // Global at 0x001f1230                   // 0x0011d768: lw $a0, 0($s1)
    func_0011d620();  // 11d620                                // 0x0011d770: jal 0x11d620
    s1 = s1 + 8;                                                // 0x0011d774: addiu $s1, $s1, 8
    v0 = ((unsigned)s2 < (unsigned)3) ? 1 : 0;                  // 0x0011d778: sltiu $v0, $s2, 3
    /* bnezl $v0, 0x11d760 */                                   // 0x0011d77c: bnezl $v0, 0x11d760
    a0 = g_001f1238;  // Global at 0x001f1238                   // 0x0011d780: lw $a0, 0($s1)
label_0x11d784:
    return;                                                     // 0x0011d794: jr $ra
    sp = sp + 0x40;                                             // 0x0011d798: addiu $sp, $sp, 0x40
}