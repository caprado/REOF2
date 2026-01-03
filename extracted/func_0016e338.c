void func_0016e338() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x0016e338: addiu $sp, $sp, -0x30
    s2 = 1;                                                     // 0x0016e348: addiu $s2, $zero, 1
    a1 = 0x2f;                                                  // 0x0016e35c: addiu $a1, $zero, 0x2f
    func_001752e8();  // 1752e8                                // 0x0016e364: jal 0x1752e8
    s1 = *(int32_t*)((s0) + 0x1b30);                            // 0x0016e368: lw $s1, 0x1b30($s0)
    if (v0 == s2) goto label_0x16e408;                          // 0x0016e36c: beq $v0, $s2, 0x16e408
    s3 = s1 + 0x8c;                                             // 0x0016e370: addiu $s3, $s1, 0x8c
    func_001752e8();  // 1752e8                                // 0x0016e378: jal 0x1752e8
    a1 = 0x27;                                                  // 0x0016e37c: addiu $a1, $zero, 0x27
    if (v0 != s2) goto label_0x16e390;                          // 0x0016e380: bnel $v0, $s2, 0x16e390
    v1 = *(int32_t*)((s1) + 0x134);                             // 0x0016e384: lw $v1, 0x134($s1)
    goto label_0x16e408;                                        // 0x0016e388: b 0x16e408
label_0x16e390:
    if (v1 != 0) goto label_0x16e408;                           // 0x0016e390: bnez $v1, 0x16e408
    func_0016e550();  // 16e550                                // 0x0016e39c: jal 0x16e550
    s1 = *(int32_t*)((s3) + 0x18);                              // 0x0016e3a0: lw $s1, 0x18($s3)
    if (v0 != 0) goto label_0x16e3f4;                           // 0x0016e3a4: bnez $v0, 0x16e3f4
    s2 = 1;                                                     // 0x0016e3a8: addiu $s2, $zero, 1
    func_0016e5a0();  // 16e5a0                                // 0x0016e3b0: jal 0x16e5a0
    if (v0 != 0) goto label_0x16e3f8;                           // 0x0016e3b8: bnez $v0, 0x16e3f8
    func_0016e5f0();  // 16e5f0                                // 0x0016e3c4: jal 0x16e5f0
    if (v0 != 0) goto label_0x16e3f8;                           // 0x0016e3cc: bnez $v0, 0x16e3f8
    func_0016e428();  // 16e428                                // 0x0016e3d4: jal 0x16e428
    /* bnezl $v0, 0x16e3f8 */                                   // 0x0016e3dc: bnezl $v0, 0x16e3f8
    func_0016e678();  // 16e678                                // 0x0016e3e8: jal 0x16e678
    s2 = ((unsigned)0 < (unsigned)v0) ? 1 : 0;                  // 0x0016e3f0: sltu $s2, $zero, $v0
label_0x16e3f4:
label_0x16e3f8:
    func_0016e488();  // 16e488                                // 0x0016e3fc: jal 0x16e488
label_0x16e408:
    return;                                                     // 0x0016e420: jr $ra
    sp = sp + 0x30;                                             // 0x0016e424: addiu $sp, $sp, 0x30
}