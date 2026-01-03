void func_001b26a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001b26a0: addiu $sp, $sp, -0x10
    at = 0x31 << 16;                                            // 0x001b26a4: lui $at, 0x31
    v1 = g_003137b3;  // Global at 0x003137b3                   // 0x001b26ac: lbu $v1, 0x37b3($at)
    if (v1 == 0) goto label_0x1b26dc;                           // 0x001b26b0: beqz $v1, 0x1b26dc
    a0 = 0x2b << 16;                                            // 0x001b26b4: lui $a0, 0x2b
    func_001af0d0();  // 1af0d0                                // 0x001b26b8: jal 0x1af0d0
    a0 = a0 + -0x5700;                                          // 0x001b26bc: addiu $a0, $a0, -0x5700
    a0 = 0x2b << 16;                                            // 0x001b26c0: lui $a0, 0x2b
    a0 = a0 + -0x5700;                                          // 0x001b26c8: addiu $a0, $a0, -0x5700
    func_00107c70();  // 107c70                                // 0x001b26cc: jal 0x107c70
    a2 = 0x33c;                                                 // 0x001b26d0: addiu $a2, $zero, 0x33c
    at = 0x31 << 16;                                            // 0x001b26d4: lui $at, 0x31
    g_003137b3 = 0;  // Global at 0x003137b3                    // 0x001b26d8: sb $zero, 0x37b3($at)
label_0x1b26dc:
    return;                                                     // 0x001b26e0: jr $ra
    sp = sp + 0x10;                                             // 0x001b26e4: addiu $sp, $sp, 0x10
}