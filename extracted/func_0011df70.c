void func_0011df70() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x0011df70: addiu $sp, $sp, -0x40
    v0 = 0x1f << 16;                                            // 0x0011df74: lui $v0, 0x1f
    v0 = v0 + 0x19e8;                                           // 0x0011df7c: addiu $v0, $v0, 0x19e8
    v1 = g_001f1a04;  // Global at 0x001f1a04                   // 0x0011df90: lw $v1, 0x1c($v0)
    if (v1 >= 0) goto label_0x11e0e8;                           // 0x0011df94: bgez $v1, 0x11e0e8
    a2 = g_001f1a00;  // Global at 0x001f1a00                   // 0x0011df98: lw $a2, 0x18($v0)
    v0 = 0x1000 << 16;                                          // 0x0011df9c: lui $v0, 0x1000
    v0 = v0 | 0x1010;                                           // 0x0011dfa0: ori $v0, $v0, 0x1010
    s2 = g_10000000;  // Global at 0x10000000                   // 0x0011dfa4: lw $s2, 0($v0)
    /* bnezl $a2, 0x11dfdc */                                   // 0x0011dfa8: bnezl $a2, 0x11dfdc
    func_0011dc10();  // 11dc10                                // 0x0011dfb0: jal 0x11dc10
    a0 = 0xffff << 16;                                          // 0x0011dfb8: lui $a0, 0xffff
    a0 = a0 | 0xf7ff;                                           // 0x0011dfc0: ori $a0, $a0, 0xf7ff
    a0 = s2 & a0;                                               // 0x0011dfc8: and $a0, $s2, $a0
    return func_0011dc10();  // Tail call                        // 0x0011dfd4: j 0x11dc00
    sp = sp + 0x40;                                             // 0x0011dfd8: addiu $sp, $sp, 0x40
    a2 = *(int32_t*)(a2);                                       // 0x0011dfe8: lw $a2, 0($a2)
    if (a2 == 0) goto label_0x11e054;                           // 0x0011dfec: beqz $a2, 0x11e054
    v1 = ((unsigned)v0 < (unsigned)v1) ? 1 : 0;                 // 0x0011e00c: sltu $v1, $v0, $v1
    if (v1 == 0) goto label_0x11e054;                           // 0x0011e010: beqz $v1, 0x11e054
    s1 = s2 & 3;                                                // 0x0011e014: andi $s1, $s2, 3
    /* nop */                                                   // 0x0011e01c: nop 
label_0x11e020:
    a2 = *(int32_t*)(a2);                                       // 0x0011e020: lw $a2, 0($a2)
    if (a2 == 0) goto label_0x11e058;                           // 0x0011e024: beqz $a2, 0x11e058
    v1 = ((unsigned)v0 < (unsigned)v1) ? 1 : 0;                 // 0x0011e040: sltu $v1, $v0, $v1
    /* beqzl $v1, 0x11e05c */                                   // 0x0011e044: beqzl $v1, 0x11e05c
    goto label_0x11e020;                                        // 0x0011e04c: b 0x11e020
label_0x11e054:
    s1 = s2 & 3;                                                // 0x0011e054: andi $s1, $s2, 3
label_0x11e058:
    v0 = (v0 < 0x7333) ? 1 : 0;                                 // 0x0011e05c: slti $v0, $v0, 0x7333
    if (v0 == 0) goto label_0x11e0b0;                           // 0x0011e060: beqz $v0, 0x11e0b0
    v0 = 0x1000 << 16;                                          // 0x0011e064: lui $v0, 0x1000
    a1 = s1 << 2;                                               // 0x0011e068: sll $a1, $s1, 2
    v0 = v0 | 0x1000;                                           // 0x0011e06c: ori $v0, $v0, 0x1000
    a0 = 0x7333;                                                // 0x0011e070: addiu $a0, $zero, 0x7333
    v1 = g_10000000;  // Global at 0x10000000                   // 0x0011e078: lw $v1, 0($v0)
    func_0011dc10();  // 11dc10                                // 0x0011e084: jal 0x11dc10
    a0 = v1 + a0;                                               // 0x0011e088: addu $a0, $v1, $a0
    a0 = 0xffff << 16;                                          // 0x0011e08c: lui $a0, 0xffff
    a0 = a0 | 0xf7ff;                                           // 0x0011e094: ori $a0, $a0, 0xf7ff
    a0 = s2 & a0;                                               // 0x0011e09c: and $a0, $s2, $a0
    return func_0011dc10();  // Tail call                        // 0x0011e0a8: j 0x11dc00
    sp = sp + 0x40;                                             // 0x0011e0ac: addiu $sp, $sp, 0x40
label_0x11e0b0:
    a0 = 0xffff << 16;                                          // 0x0011e0b0: lui $a0, 0xffff
    a0 = a0 | 0xf7ff;                                           // 0x0011e0b4: ori $a0, $a0, 0xf7ff
    func_0011dc00();  // 11dc00                                // 0x0011e0b8: jal 0x11dc00
    a0 = s2 & a0;                                               // 0x0011e0bc: and $a0, $s2, $a0
    a0 = s1 << 2;                                               // 0x0011e0c0: sll $a0, $s1, 2
    return func_0011dc20();  // Tail call                        // 0x0011e0e0: j 0x11dc10
    sp = sp + 0x40;                                             // 0x0011e0e4: addiu $sp, $sp, 0x40
label_0x11e0e8:
    return;                                                     // 0x0011e0f8: jr $ra
    sp = sp + 0x40;                                             // 0x0011e0fc: addiu $sp, $sp, 0x40
}