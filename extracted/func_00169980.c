void func_00169980() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00169980: addiu $sp, $sp, -0x20
    if (s0 != 0) goto label_0x1699b8;                           // 0x0016999c: bnez $s0, 0x1699b8
    a0 = 0x21 << 16;                                            // 0x001699a4: lui $a0, 0x21
    func_00169a28();  // 0x169a18                                // 0x001699a8: jal 0x169a18
    a0 = a0 + 0x5724;                                           // 0x001699ac: addiu $a0, $a0, 0x5724
    goto label_0x1699fc;                                        // 0x001699b0: b 0x1699fc
label_0x1699b8:
    func_00169b10();  // 0x169af0                                // 0x001699b8: jal 0x169af0
    /* nop */                                                   // 0x001699bc: nop 
    a1 = 0xff00 << 16;                                          // 0x001699c0: lui $a1, 0xff00
    if (v0 == 0) goto label_0x1699e8;                           // 0x001699c4: beqz $v0, 0x1699e8
    a1 = a1 | 0x101;                                            // 0x001699d0: ori $a1, $a1, 0x101
    return func_00169940();  // Tail call                        // 0x001699e0: j 0x1698d0
    sp = sp + 0x20;                                             // 0x001699e4: addiu $sp, $sp, 0x20
label_0x1699e8:
    a0 = s0 + 0x98c;                                            // 0x001699e8: addiu $a0, $s0, 0x98c
    func_00169a28();  // 0x169a18                                // 0x001699f0: jal 0x169a18
label_0x1699fc:
    return;                                                     // 0x00169a0c: jr $ra
    sp = sp + 0x20;                                             // 0x00169a10: addiu $sp, $sp, 0x20
}