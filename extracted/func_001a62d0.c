void func_001a62d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001a62d0: addiu $sp, $sp, -0x10
    v1 = 0x2a << 16;                                            // 0x001a62d4: lui $v1, 0x2a
    v1 = v1 + 0xf20;                                            // 0x001a62dc: addiu $v1, $v1, 0xf20
    v0 = g_002a0f20;  // Global at 0x002a0f20                   // 0x001a62e0: lbu $v0, 0($v1)
    if (v0 == 0) goto label_0x1a62f4;                           // 0x001a62e4: beqz $v0, 0x1a62f4
    /* nop */                                                   // 0x001a62e8: nop 
    func_00180140();  // 180140                                // 0x001a62ec: jal 0x180140
    a0 = g_002a0f26;  // Global at 0x002a0f26                   // 0x001a62f0: lbu $a0, 6($v1)
label_0x1a62f4:
    func_0017ffd0();  // 17ffd0                                // 0x001a62f4: jal 0x17ffd0
    /* nop */                                                   // 0x001a62f8: nop 
    func_00188a68();  // 188a68                                // 0x001a62fc: jal 0x188a68
    /* nop */                                                   // 0x001a6300: nop 
    return;                                                     // 0x001a6308: jr $ra
    sp = sp + 0x10;                                             // 0x001a630c: addiu $sp, $sp, 0x10
}