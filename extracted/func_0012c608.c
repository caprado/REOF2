void func_0012c608() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0012c608: addiu $sp, $sp, -0x10
    func_00124520();  // 0x124460                                // 0x0012c610: jal 0x124460
    /* nop */                                                   // 0x0012c614: nop 
    a0 = 0x20 << 16;                                            // 0x0012c61c: lui $a0, 0x20
    a0 = a0 + -0x1c78;                                          // 0x0012c620: addiu $a0, $a0, -0x1c78
    a2 = 0x9c0;                                                 // 0x0012c628: addiu $a2, $zero, 0x9c0
    return func_00107d30();  // Tail call                        // 0x0012c62c: j 0x107c70
    sp = sp + 0x10;                                             // 0x0012c630: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0012c634: nop 
    sp = sp + -0x10;                                            // 0x0012c638: addiu $sp, $sp, -0x10
    a0 = 0x20 << 16;                                            // 0x0012c63c: lui $a0, 0x20
    a0 = a0 + -0x1c78;                                          // 0x0012c648: addiu $a0, $a0, -0x1c78
    a2 = 0x9c0;                                                 // 0x0012c64c: addiu $a2, $zero, 0x9c0
    return func_00107d30();  // Tail call                        // 0x0012c654: j 0x107c70
    sp = sp + 0x10;                                             // 0x0012c658: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0012c65c: nop 
    v0 = 0x7fff << 16;                                          // 0x0012c660: lui $v0, 0x7fff
    v1 = -1;                                                    // 0x0012c664: addiu $v1, $zero, -1
    v0 = v0 | 0xffff;                                           // 0x0012c668: ori $v0, $v0, 0xffff
    g_001fe3c4 = v1;  // Global at 0x001fe3c4                   // 0x0012c66c: sw $v1, 0x3c($a0)
    g_001fe3c0 = v0;  // Global at 0x001fe3c0                   // 0x0012c670: sw $v0, 0x38($a0)
    g_001fe38b = 0;  // Global at 0x001fe38b                    // 0x0012c674: sb $zero, 3($a0)
    g_001fe420 = 0;  // Global at 0x001fe420                    // 0x0012c678: sw $zero, 0x98($a0)
    g_001fe3b4 = 0;  // Global at 0x001fe3b4                    // 0x0012c67c: sw $zero, 0x2c($a0)
    g_001fe3b8 = 0;  // Global at 0x001fe3b8                    // 0x0012c680: sw $zero, 0x30($a0)
    g_001fe3bc = 0;  // Global at 0x001fe3bc                    // 0x0012c684: sw $zero, 0x34($a0)
    g_001fe3c8 = 0;  // Global at 0x001fe3c8                    // 0x0012c688: sw $zero, 0x40($a0)
    return;                                                     // 0x0012c68c: jr $ra
    g_001fe3cc = 0;  // Global at 0x001fe3cc                    // 0x0012c690: sw $zero, 0x44($a0)
}