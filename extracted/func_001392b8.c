void func_001392b8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x20 << 16;                                            // 0x001392b8: lui $v0, 0x20
    sp = sp + -0x10;                                            // 0x001392bc: addiu $sp, $sp, -0x10
    v1 = g_002031e4;  // Global at 0x002031e4                   // 0x001392c0: lw $v1, 0x31e4($v0)
    if (v1 == 0) goto label_0x1392dc;                           // 0x001392c8: beqz $v1, 0x1392dc
    v0 = 0x20 << 16;                                            // 0x001392d0: lui $v0, 0x20
    /* call function at address in v1 */                        // 0x001392d4: jalr $v1
    a0 = g_002031e8;  // Global at 0x002031e8                   // 0x001392d8: lw $a0, 0x31e8($v0)
label_0x1392dc:
    return;                                                     // 0x001392e0: jr $ra
    sp = sp + 0x10;                                             // 0x001392e4: addiu $sp, $sp, 0x10
}