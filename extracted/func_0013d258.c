void func_0013d258() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0013d258: addiu $sp, $sp, -0x20
    v0 = 0x20 << 16;                                            // 0x0013d25c: lui $v0, 0x20
    v0 = v0 + 0x46f0;                                           // 0x0013d264: addiu $v0, $v0, 0x46f0
    func_0013d178();  // 0x13d158                                // 0x0013d270: jal 0x13d158
    v1 = g_002046f0;  // Global at 0x002046f0                   // 0x0013d274: lw $v1, 0($v0)
    v0 = 0x20 << 16;                                            // 0x0013d278: lui $v0, 0x20
    a0 = 0x20 << 16;                                            // 0x0013d27c: lui $a0, 0x20
    s0 = v0 + 0x4708;                                           // 0x0013d280: addiu $s0, $v0, 0x4708
    a0 = a0 + 0x4710;                                           // 0x0013d284: addiu $a0, $a0, 0x4710
    v0 = g_00204708;  // Global at 0x00204708                   // 0x0013d288: lw $v0, 0($s0)
    if (v0 != 0) goto label_0x13d2b8;                           // 0x0013d290: bnez $v0, 0x13d2b8
    a2 = 0x2380;                                                // 0x0013d294: addiu $a2, $zero, 0x2380
    func_00107d30();  // 0x107c70                                // 0x0013d298: jal 0x107c70
    /* nop */                                                   // 0x0013d29c: nop 
    func_0013d250();  // 0x13d248                                // 0x0013d2a0: jal 0x13d248
    /* nop */                                                   // 0x0013d2a4: nop 
    func_0013d1b8();  // 0x13d190                                // 0x0013d2ac: jal 0x13d190
    v0 = g_00204708;  // Global at 0x00204708                   // 0x0013d2b4: lw $v0, 0($s0)
label_0x13d2b8:
    v0 = v0 + 1;                                                // 0x0013d2b8: addiu $v0, $v0, 1
    func_0013d190();  // 0x13d178                                // 0x0013d2c0: jal 0x13d178
    g_00204708 = v0;  // Global at 0x00204708                   // 0x0013d2c4: sw $v0, 0($s0)
    return;                                                     // 0x0013d2d0: jr $ra
    sp = sp + 0x20;                                             // 0x0013d2d4: addiu $sp, $sp, 0x20
}