void func_001a8580() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001a8580: addiu $sp, $sp, -0x10
    at = 0x2a << 16;                                            // 0x001a8584: lui $at, 0x2a
    v1 = g_002a1530;  // Global at 0x002a1530                   // 0x001a858c: lb $v1, 0x1530($at)
    if (v1 == 0) goto label_0x1a85a8;                           // 0x001a8590: beqz $v1, 0x1a85a8
    func_00131138();  // 0x1310e8                                // 0x001a8598: jal 0x1310e8
    /* nop */                                                   // 0x001a859c: nop 
    at = 0x2a << 16;                                            // 0x001a85a0: lui $at, 0x2a
    g_002a1530 = 0;  // Global at 0x002a1530                    // 0x001a85a4: sb $zero, 0x1530($at)
label_0x1a85a8:
    return;                                                     // 0x001a85ac: jr $ra
    sp = sp + 0x10;                                             // 0x001a85b0: addiu $sp, $sp, 0x10
}