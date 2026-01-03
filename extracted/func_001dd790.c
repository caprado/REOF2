void func_001dd790() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001dd790: addiu $sp, $sp, -0x20
    a0 = 0x33 << 16;                                            // 0x001dd794: lui $a0, 0x33
    a0 = a0 + 0x1c80;                                           // 0x001dd79c: addiu $a0, $a0, 0x1c80
    s0 = 0x34 << 16;                                            // 0x001dd7a8: lui $s0, 0x34
    a2 = 0 | 0x8000;                                            // 0x001dd7ac: ori $a2, $zero, 0x8000
    func_00107c70();  // 107c70                                // 0x001dd7b0: jal 0x107c70
    s0 = s0 + 0x1c80;                                           // 0x001dd7b4: addiu $s0, $s0, 0x1c80
    a0 = 0x34 << 16;                                            // 0x001dd7b8: lui $a0, 0x34
    a0 = a0 + -0x6380;                                          // 0x001dd7c0: addiu $a0, $a0, -0x6380
    func_00107c70();  // 107c70                                // 0x001dd7c4: jal 0x107c70
    a2 = 0 | 0x8000;                                            // 0x001dd7c8: ori $a2, $zero, 0x8000
    a1 = 0x30 << 16;                                            // 0x001dd7cc: lui $a1, 0x30
    a1 = a1 + 0x7fb0;                                           // 0x001dd7d4: addiu $a1, $a1, 0x7fb0
    func_0010b2a0();  // 10b2a0                                // 0x001dd7d8: jal 0x10b2a0
    a2 = 8;                                                     // 0x001dd7dc: addiu $a2, $zero, 8
    a1 = 0x25 << 16;                                            // 0x001dd7e0: lui $a1, 0x25
    a0 = s0 + 0xa;                                              // 0x001dd7e4: addiu $a0, $s0, 0xa
    a1 = a1 + -0x6ff0;                                          // 0x001dd7e8: addiu $a1, $a1, -0x6ff0
    func_0010b2a0();  // 10b2a0                                // 0x001dd7ec: jal 0x10b2a0
    a2 = 4;                                                     // 0x001dd7f0: addiu $a2, $zero, 4
    g_00341c94 = 0;  // Global at 0x00341c94                    // 0x001dd7f4: sw $zero, 0x14($s0)
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001dd7fc: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001dd800: jr $ra
    sp = sp + 0x20;                                             // 0x001dd804: addiu $sp, $sp, 0x20
}