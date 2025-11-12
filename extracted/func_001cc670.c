void func_001cc670() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001cc670: addiu $sp, $sp, -0x10
    at = 0x32 << 16;                                            // 0x001cc674: lui $at, 0x32
    v1 = 1;                                                     // 0x001cc67c: addiu $v1, $zero, 1
    a0 = g_003257d7;  // Global at 0x003257d7                   // 0x001cc680: lbu $a0, 0x57d7($at)
    if (a0 == v1) goto label_0x1cc6a8;                          // 0x001cc684: beq $a0, $v1, 0x1cc6a8
    /* nop */                                                   // 0x001cc688: nop 
    if (a0 == 0) goto label_0x1cc69c;                           // 0x001cc68c: beqz $a0, 0x1cc69c
    /* nop */                                                   // 0x001cc690: nop 
    goto label_0x1cc704;                                        // 0x001cc694: b 0x1cc704
label_0x1cc69c:
    v0 = a0 + 1;                                                // 0x001cc69c: addiu $v0, $a0, 1
    at = 0x32 << 16;                                            // 0x001cc6a0: lui $at, 0x32
    g_003257d7 = v0;  // Global at 0x003257d7                   // 0x001cc6a4: sb $v0, 0x57d7($at)
label_0x1cc6a8:
    at = 0x32 << 16;                                            // 0x001cc6a8: lui $at, 0x32
    v0 = 0x1e;                                                  // 0x001cc6ac: addiu $v0, $zero, 0x1e
    v1 = g_003257da;  // Global at 0x003257da                   // 0x001cc6b0: lh $v1, 0x57da($at)
    /* divide: v1 / v0 -> hi:lo */                              // 0x001cc6b4: div $zero, $v1, $v0
    /* nop */                                                   // 0x001cc6b8: nop 
    /* nop */                                                   // 0x001cc6bc: nop 
    /* mfhi $v0 */                                              // 0x001cc6c0
    if (v0 != 0) goto label_0x1cc6d4;                           // 0x001cc6c4: bnez $v0, 0x1cc6d4
    /* nop */                                                   // 0x001cc6c8: nop 
    func_001ce310();  // 0x1ce240                                // 0x001cc6cc: jal 0x1ce240
label_0x1cc6d4:
    at = 0x32 << 16;                                            // 0x001cc6d4: lui $at, 0x32
    a0 = 1;                                                     // 0x001cc6d8: addiu $a0, $zero, 1
    v0 = g_003257da;  // Global at 0x003257da                   // 0x001cc6dc: lh $v0, 0x57da($at)
    v0 = v0 + 1;                                                // 0x001cc6e0: addiu $v0, $v0, 1
    at = 0x32 << 16;                                            // 0x001cc6e4: lui $at, 0x32
    func_001ce240();  // 0x1ce0f0                                // 0x001cc6e8: jal 0x1ce0f0
    g_003257da = v0;  // Global at 0x003257da                   // 0x001cc6ec: sh $v0, 0x57da($at)
    if (v0 == 0) goto label_0x1cc700;                           // 0x001cc6f0: beqz $v0, 0x1cc700
    a0 = 2;                                                     // 0x001cc6f4: addiu $a0, $zero, 2
    func_001cdf70();  // 0x1cdf30                                // 0x001cc6f8: jal 0x1cdf30
    /* nop */                                                   // 0x001cc6fc: nop 
label_0x1cc700:
label_0x1cc704:
    return;                                                     // 0x001cc704: jr $ra
    sp = sp + 0x10;                                             // 0x001cc708: addiu $sp, $sp, 0x10
}