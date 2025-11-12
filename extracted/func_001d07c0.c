void func_001d07c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001d07c0: addiu $sp, $sp, -0x10
    a0 = 0x33 << 16;                                            // 0x001d07c4: lui $a0, 0x33
    a0 = a0 + -0x3160;                                          // 0x001d07cc: addiu $a0, $a0, -0x3160
    func_00107d30();  // 0x107c70                                // 0x001d07d4: jal 0x107c70
    a2 = 0x10;                                                  // 0x001d07d8: addiu $a2, $zero, 0x10
    a0 = 0x33 << 16;                                            // 0x001d07dc: lui $a0, 0x33
    a0 = a0 + -0x3180;                                          // 0x001d07e4: addiu $a0, $a0, -0x3180
    func_00107d30();  // 0x107c70                                // 0x001d07e8: jal 0x107c70
    a2 = 0x14;                                                  // 0x001d07ec: addiu $a2, $zero, 0x14
    a0 = 0x33 << 16;                                            // 0x001d07f0: lui $a0, 0x33
    a0 = a0 + -0x4180;                                          // 0x001d07f8: addiu $a0, $a0, -0x4180
    func_00107d30();  // 0x107c70                                // 0x001d07fc: jal 0x107c70
    a2 = 0x1000;                                                // 0x001d0800: addiu $a2, $zero, 0x1000
    a0 = 0x33 << 16;                                            // 0x001d0804: lui $a0, 0x33
    a0 = a0 + -0x41d0;                                          // 0x001d080c: addiu $a0, $a0, -0x41d0
    func_00107d30();  // 0x107c70                                // 0x001d0810: jal 0x107c70
    a2 = 0x14;                                                  // 0x001d0814: addiu $a2, $zero, 0x14
    a0 = 0x33 << 16;                                            // 0x001d0818: lui $a0, 0x33
    a0 = a0 + -0x41b0;                                          // 0x001d0820: addiu $a0, $a0, -0x41b0
    func_00107d30();  // 0x107c70                                // 0x001d0824: jal 0x107c70
    a2 = 0x2c;                                                  // 0x001d0828: addiu $a2, $zero, 0x2c
    v1 = -1;                                                    // 0x001d082c: addiu $v1, $zero, -1
    at = 0x33 << 16;                                            // 0x001d0830: lui $at, 0x33
    g_0032be54 = v1;  // Global at 0x0032be54                   // 0x001d0834: sw $v1, -0x41ac($at)
    return;                                                     // 0x001d083c: jr $ra
    sp = sp + 0x10;                                             // 0x001d0840: addiu $sp, $sp, 0x10
}