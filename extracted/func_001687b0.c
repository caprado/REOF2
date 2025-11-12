void func_001687b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_2, local_3;
    
    sp = sp + -0x20;                                            // 0x001687b0: addiu $sp, $sp, -0x20
    func_00168a00();  // 0x168930                                // 0x001687c4: jal 0x168930
    if (v0 != 0) goto label_0x1687e0;                           // 0x001687cc: bnez $v0, 0x1687e0
    a2 = -1;                                                    // 0x001687d0: addiu $a2, $zero, -1
    goto label_0x168858;                                        // 0x001687d4: b 0x168858
    v0 = -1;                                                    // 0x001687d8: addiu $v0, $zero, -1
    /* nop */                                                   // 0x001687dc: nop 
label_0x1687e0:
    v1 = local_0;                                               // 0x001687e0: lbu $v1, 0($sp)
    a0 = local_2;                                               // 0x001687e4: lbu $a0, 2($sp)
    a1 = v1 << 2;                                               // 0x001687e8: sll $a1, $v1, 2
    v1 = v1 << 4;                                               // 0x001687ec: sll $v1, $v1, 4
    v1 = v1 + a0;                                               // 0x001687f0: addu $v1, $v1, $a0
    v1 = v1 << 2;                                               // 0x001687f4: sll $v1, $v1, 2
    at = 0x23 << 16;                                            // 0x001687f8: lui $at, 0x23
    at = at + v1;                                               // 0x001687fc: addu $at, $at, $v1
    v1 = g_00228f00;  // Global at 0x00228f00                   // 0x00168800: lw $v1, -0x7100($at)
    if (v1 == a2) goto label_0x168858;                          // 0x00168804: beq $v1, $a2, 0x168858
    v0 = -1;                                                    // 0x00168808: addiu $v0, $zero, -1
    a0 = 0x23 << 16;                                            // 0x0016880c: lui $a0, 0x23
    a0 = a0 + a1;                                               // 0x00168810: addu $a0, $a0, $a1
    a0 = g_00229000;  // Global at 0x00229000                   // 0x00168814: lw $a0, -0x7000($a0)
    v0 = local_3;                                               // 0x00168818: lbu $v0, 3($sp)
    v0 = v0 << 2;                                               // 0x00168820: sll $v0, $v0, 2
    v1 = 0x23 << 16;                                            // 0x00168824: lui $v1, 0x23
    v1 = v1 + v0;                                               // 0x00168828: addu $v1, $v1, $v0
    v1 = g_00228ef0;  // Global at 0x00228ef0                   // 0x0016882c: lw $v1, -0x7110($v1)
    v0 = a0 << 5;                                               // 0x00168830: sll $v0, $a0, 5
    v1 = v1 << 3;                                               // 0x00168834: sll $v1, $v1, 3
    v0 = v0 - a0;                                               // 0x00168838: subu $v0, $v0, $a0
    /* beqzl $v1, 0x168844 */                                   // 0x0016883c: beqzl $v1, 0x168844
    /* break (trap) */                                          // 0x00168840: break 0, 7
    v0 = v0 << 2;                                               // 0x00168844: sll $v0, $v0, 2
    v0 = v0 + a0;                                               // 0x00168848: addu $v0, $v0, $a0
    v0 = v0 << 3;                                               // 0x0016884c: sll $v0, $v0, 3
    /* divide: v0 / v1 -> hi:lo */                              // 0x00168850: div $zero, $v0, $v1
    /* mflo $v0 */                                              // 0x00168854
label_0x168858:
    return;                                                     // 0x0016885c: jr $ra
    sp = sp + 0x20;                                             // 0x00168860: addiu $sp, $sp, 0x20
}