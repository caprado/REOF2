void func_001aac80() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a0 = 0x24 << 16;                                            // 0x001aac80: lui $a0, 0x24
    a1 = 0x2a << 16;                                            // 0x001aac84: lui $a1, 0x2a
    a0 = &str_0023da08;  // "BIN/%02d.dat"                      // 0x001aac88: addiu $a0, $a0, -0x25f8
    a1 = a1 + 0x2fe0;                                           // 0x001aac8c: addiu $a1, $a1, 0x2fe0
    a2 = 3;                                                     // 0x001aac90: addiu $a2, $zero, 3
    return func_001a93b0();  // Tail call                        // 0x001aac94: j 0x1a92d0
    a3 = 1;                                                     // 0x001aac98: addiu $a3, $zero, 1
    /* nop */                                                   // 0x001aac9c: nop 
    a1 = 0x73d;                                                 // 0x001aaca4: addiu $a1, $zero, 0x73d
    a0 = 0x22 << 16;                                            // 0x001aaca8: lui $a0, 0x22
    return func_001aac80();  // Tail call                        // 0x001aacac: j 0x1aaa00
    a0 = a0 + -0x61f0;                                          // 0x001aacb0: addiu $a0, $a0, -0x61f0
    /* nop */                                                   // 0x001aacb4: nop 
    /* nop */                                                   // 0x001aacb8: nop 
    /* nop */                                                   // 0x001aacbc: nop 
    a1 = 0x575;                                                 // 0x001aacc4: addiu $a1, $zero, 0x575
    a0 = 0x22 << 16;                                            // 0x001aacc8: lui $a0, 0x22
    return func_001aac80();  // Tail call                        // 0x001aaccc: j 0x1aaa00
    a0 = a0 + -0x77d0;                                          // 0x001aacd0: addiu $a0, $a0, -0x77d0
    /* nop */                                                   // 0x001aacd4: nop 
    /* nop */                                                   // 0x001aacd8: nop 
    /* nop */                                                   // 0x001aacdc: nop 
    sp = sp + -0x20;                                            // 0x001aace0: addiu $sp, $sp, -0x20
    a1 = 0x24 << 16;                                            // 0x001aace8: lui $a1, 0x24
    a0 = sp + 0x10;                                             // 0x001aacf0: addiu $a0, $sp, 0x10
    func_0010a4d8();  // 10a4d8                                // 0x001aacf4: jal 0x10a4d8
    a1 = a1 + -0x25e8;                                          // 0x001aacf8: addiu $a1, $a1, -0x25e8
    a1 = 0x2a << 16;                                            // 0x001aacfc: lui $a1, 0x2a
    a0 = sp + 0x10;                                             // 0x001aad00: addiu $a0, $sp, 0x10
    a1 = a1 + 0x2e40;                                           // 0x001aad04: addiu $a1, $a1, 0x2e40
    a2 = 4;                                                     // 0x001aad08: addiu $a2, $zero, 4
    func_001a92d0();  // 1a92d0                                // 0x001aad0c: jal 0x1a92d0
    a3 = 1;                                                     // 0x001aad10: addiu $a3, $zero, 1
    return;                                                     // 0x001aad18: jr $ra
    sp = sp + 0x20;                                             // 0x001aad1c: addiu $sp, $sp, 0x20
}