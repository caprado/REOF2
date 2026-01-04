/** @category: graphics/dma @status: complete @author: caprado */
void func_001030a8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x001030a8: addiu $sp, $sp, -0x50
    v0 = 0x1000 << 16;                                          // 0x001030ac: lui $v0, 0x1000
    v0 = v0 | 0xe000;                                           // 0x001030b4: ori $v0, $v0, 0xe000
    a2 = 0x22 << 16;                                            // 0x001030bc: lui $a2, 0x22
    v1 = 0x1f << 16;                                            // 0x001030c4: lui $v1, 0x1f
    v1 = v1 + -0x538;                                           // 0x001030cc: addiu $v1, $v1, -0x538
    a1 = g_10000000;  // Global at 0x10000000                   // 0x001030d0: lw $a1, 0($v0)
    a2 = a2 + -0x70;                                            // 0x001030d4: addiu $a2, $a2, -0x70
    a0 = 9;                                                     // 0x001030d8: addiu $a0, $zero, 9
    s1 = a1 & 1;                                                // 0x001030dc: andi $s1, $a1, 1
label_0x1030e0:
    v0 = g_0021ff90;  // Global at 0x0021ff90                   // 0x001030e0: lw $v0, 0($a2)
    /* beqzl $v0, 0x10310c */                                   // 0x001030e4: beqzl $v0, 0x10310c
    v1 = v1 + 4;                                                // 0x001030e8: addiu $v1, $v1, 4
    v0 = g_001efacc;  // Global at 0x001efacc                   // 0x001030ec: lw $v0, 0($v1)
    g_10000080 = 0;  // Global at 0x10000080                    // 0x001030f0: sw $zero, 0x80($v0)
    g_10000000 = 0;  // Global at 0x10000000                    // 0x001030f4: sw $zero, 0($v0)
    g_10000030 = 0;  // Global at 0x10000030                    // 0x001030f8: sw $zero, 0x30($v0)
    g_10000010 = 0;  // Global at 0x10000010                    // 0x001030fc: sw $zero, 0x10($v0)
    g_10000050 = 0;  // Global at 0x10000050                    // 0x00103100: sw $zero, 0x50($v0)
    g_10000040 = 0;  // Global at 0x10000040                    // 0x00103104: sw $zero, 0x40($v0)
    v1 = v1 + 4;                                                // 0x00103108: addiu $v1, $v1, 4
    a0 = a0 + -1;                                               // 0x0010310c: addiu $a0, $a0, -1
    if (a0 >= 0) goto label_0x1030e0;                           // 0x00103110: bgez $a0, 0x1030e0
    a2 = a2 + 4;                                                // 0x00103114: addiu $a2, $a2, 4
    v1 = 0x1000 << 16;                                          // 0x00103118: lui $v1, 0x1000
    v0 = 0 | 0xff1f;                                            // 0x0010311c: ori $v0, $zero, 0xff1f
    v1 = v1 | 0xe010;                                           // 0x00103120: ori $v1, $v1, 0xe010
    a2 = 0xff1f << 16;                                          // 0x00103124: lui $a2, 0xff1f
    g_10000000 = v0;  // Global at 0x10000000                   // 0x00103128: sw $v0, 0($v1)
    a1 = 0x14;                                                  // 0x00103130: addiu $a1, $zero, 0x14
    v0 = g_10000000;  // Global at 0x10000000                   // 0x00103134: lw $v0, 0($v1)
    v0 = v0 & a2;                                               // 0x00103138: and $v0, $v0, $a2
    func_00103048();  // 103048                                // 0x0010313c: jal 0x103048
    g_10000000 = v0;  // Global at 0x10000000                   // 0x00103140: sw $v0, 0($v1)
    func_00103188();  // 103188                                // 0x00103144: jal 0x103188
    v1 = 1;                                                     // 0x0010314c: addiu $v1, $zero, 1
    if (s0 != v1) goto label_0x103170;                          // 0x00103150: bne $s0, $v1, 0x103170
    v1 = 0x1000 << 16;                                          // 0x00103158: lui $v1, 0x1000
    v1 = v1 | 0xe000;                                           // 0x0010315c: ori $v1, $v1, 0xe000
    v0 = g_10000000;  // Global at 0x10000000                   // 0x00103160: lw $v0, 0($v1)
    v0 = v0 | 1;                                                // 0x00103164: ori $v0, $v0, 1
    g_10000000 = v0;  // Global at 0x10000000                   // 0x00103168: sw $v0, 0($v1)
label_0x103170:
    return;                                                     // 0x0010317c: jr $ra
    sp = sp + 0x50;                                             // 0x00103180: addiu $sp, $sp, 0x50
}