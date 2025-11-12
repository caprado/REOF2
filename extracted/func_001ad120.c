void func_001ad120() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001ad120: addiu $sp, $sp, -0x10
    v1 = 0x2a << 16;                                            // 0x001ad124: lui $v1, 0x2a
    at = 0x2a << 16;                                            // 0x001ad12c: lui $at, 0x2a
    v0 = g_002a5404;  // Global at 0x002a5404                   // 0x001ad130: lw $v0, 0x5404($at)
    if (v0 == 0) goto label_0x1ad144;                           // 0x001ad134: beqz $v0, 0x1ad144
    v1 = v1 + 0x5240;                                           // 0x001ad138: addiu $v1, $v1, 0x5240
    func_001290c8();  // 0x129010                                // 0x001ad13c: jal 0x129010
    a0 = g_002a5404;  // Global at 0x002a5404                   // 0x001ad140: lw $a0, 0x1c4($v1)
label_0x1ad144:
    func_001ad030();  // 0x1acfe0                                // 0x001ad144: jal 0x1acfe0
    /* nop */                                                   // 0x001ad148: nop 
    return;                                                     // 0x001ad150: jr $ra
    sp = sp + 0x10;                                             // 0x001ad154: addiu $sp, $sp, 0x10
}