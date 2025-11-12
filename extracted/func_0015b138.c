void func_0015b138() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0015b138: addiu $sp, $sp, -0x10
    func_0015b4e0();  // 0x15b4c8                                // 0x0015b140: jal 0x15b4c8
    /* nop */                                                   // 0x0015b144: nop 
    v0 = 0x25 << 16;                                            // 0x0015b148: lui $v0, 0x25
    a0 = g_00256440;  // Global at 0x00256440                   // 0x0015b150: lw $a0, 0x6440($v0)
    a1 = 0xae0;                                                 // 0x0015b154: addiu $a1, $zero, 0xae0
    return func_0015b368();  // Tail call                        // 0x0015b158: j 0x15b358
    sp = sp + 0x10;                                             // 0x0015b15c: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x0015b160: addiu $sp, $sp, -0x10
    func_0015b208();  // 0x15b1b8                                // 0x0015b16c: jal 0x15b1b8
    /* nop */                                                   // 0x0015b170: nop 
    a1 = 0x3c4;                                                 // 0x0015b178: addiu $a1, $zero, 0x3c4
    if (s0 == 0) goto label_0x15b1a8;                           // 0x0015b17c: beqz $s0, 0x15b1a8
    func_0015b358();  // 0x15b350                                // 0x0015b184: jal 0x15b350
    /* nop */                                                   // 0x0015b188: nop 
    func_0015b2d0();  // 0x15b208                                // 0x0015b18c: jal 0x15b208
    func_0015b4f8();  // 0x15b4e0                                // 0x0015b198: jal 0x15b4e0
    *(uint32_t*)((s0) + 0x380) = v0;                            // 0x0015b1a0: sw $v0, 0x380($s0)
label_0x15b1a8:
    return;                                                     // 0x0015b1b0: jr $ra
    sp = sp + 0x10;                                             // 0x0015b1b4: addiu $sp, $sp, 0x10
}