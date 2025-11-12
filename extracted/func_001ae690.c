void func_001ae690() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001ae690: addiu $sp, $sp, -0x10
    a0 = 0x31 << 16;                                            // 0x001ae694: lui $a0, 0x31
    a0 = a0 + 0x35a0;                                           // 0x001ae69c: addiu $a0, $a0, 0x35a0
    func_00107d30();  // 0x107c70                                // 0x001ae6a4: jal 0x107c70
    a2 = 0x10;                                                  // 0x001ae6a8: addiu $a2, $zero, 0x10
    a0 = 0x31 << 16;                                            // 0x001ae6ac: lui $a0, 0x31
    a1 = 0x24 << 16;                                            // 0x001ae6b0: lui $a1, 0x24
    a0 = a0 + 0x35a0;                                           // 0x001ae6b4: addiu $a0, $a0, 0x35a0
    a1 = a1 + -0x2480;                                          // 0x001ae6b8: addiu $a1, $a1, -0x2480
    func_00107b68();  // 0x107ab8                                // 0x001ae6bc: jal 0x107ab8
    a2 = 0x10;                                                  // 0x001ae6c0: addiu $a2, $zero, 0x10
    func_001b7a70();  // 0x1b7a60                                // 0x001ae6c4: jal 0x1b7a60
    /* nop */                                                   // 0x001ae6c8: nop 
    return;                                                     // 0x001ae6d0: jr $ra
    sp = sp + 0x10;                                             // 0x001ae6d4: addiu $sp, $sp, 0x10
}