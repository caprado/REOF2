void func_00124460() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00124460: addiu $sp, $sp, -0x10
    func_00134aa0();  // 0x134a50                                // 0x00124468: jal 0x134a50
    /* nop */                                                   // 0x0012446c: nop 
    func_00124218();  // 0x1241d8                                // 0x00124470: jal 0x1241d8
    /* nop */                                                   // 0x00124474: nop 
    a0 = 0x1f << 16;                                            // 0x00124478: lui $a0, 0x1f
    a0 = a0 + 0x1f58;                                           // 0x00124484: addiu $a0, $a0, 0x1f58
    a2 = 0xe40;                                                 // 0x00124488: addiu $a2, $zero, 0xe40
    return func_00107d30();  // Tail call                        // 0x0012448c: j 0x107c70
    sp = sp + 0x10;                                             // 0x00124490: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00124494: nop 
    sp = sp + -0x10;                                            // 0x00124498: addiu $sp, $sp, -0x10
    func_00134a78();  // 0x134a78                               // 0x001244a0: jal 0x134a78
    /* nop */                                                   // 0x001244a4: nop 
    func_001241f8();  // 0x1241f8                               // 0x001244a8: jal 0x1241f8
    /* nop */                                                   // 0x001244ac: nop 
    a0 = 0x1f << 16;                                            // 0x001244b0: lui $a0, 0x1f
    a0 = a0 + 0x1f58;                                           // 0x001244bc: addiu $a0, $a0, 0x1f58
    a2 = 0xe40;                                                 // 0x001244c0: addiu $a2, $zero, 0xe40
    return func_00107d30();  // Tail call                        // 0x001244c4: j 0x107c70
    sp = sp + 0x10;                                             // 0x001244c8: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x001244cc: nop 
    t0 = g_001f1fe4;  // Global at 0x001f1fe4                   // 0x001244d0: lw $t0, 0x8c($a0)
    v0 = g_001f1f94;  // Global at 0x001f1f94                   // 0x001244d4: lw $v0, 0x3c($a0)
    *(uint32_t*)(a1) = t0;                                      // 0x001244d8: sw $t0, 0($a1)
    a1 = g_001f1fe4;  // Global at 0x001f1fe4                   // 0x001244dc: lw $a1, 0x8c($a0)
    v1 = g_001f1f98;  // Global at 0x001f1f98                   // 0x001244e0: lw $v1, 0x40($a0)
    v1 = v1 - a1;                                               // 0x001244e4: subu $v1, $v1, $a1
    *(uint32_t*)(a2) = v1;                                      // 0x001244e8: sw $v1, 0($a2)
    a1 = g_001f1f70;  // Global at 0x001f1f70                   // 0x001244ec: lw $a1, 0x18($a0)
    v1 = g_001f1fe0;  // Global at 0x001f1fe0                   // 0x001244f0: lw $v1, 0x88($a0)
    a1 = a1 - v1;                                               // 0x001244f4: subu $a1, $a1, $v1
    return;                                                     // 0x001244f8: jr $ra
    *(uint32_t*)(a3) = a1;                                      // 0x001244fc: sw $a1, 0($a3)
}