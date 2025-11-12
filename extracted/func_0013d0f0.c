void func_0013d0f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x20 << 16;                                            // 0x0013d0f0: lui $v0, 0x20
    sp = sp + -0x10;                                            // 0x0013d0f4: addiu $sp, $sp, -0x10
    a2 = g_002045d8;  // Global at 0x002045d8                   // 0x0013d0f8: lw $a2, 0x45d8($v0)
    if (a2 == 0) goto label_0x13d118;                           // 0x0013d0fc: beqz $a2, 0x13d118
    v0 = 0x20 << 16;                                            // 0x0013d104: lui $v0, 0x20
    v1 = 0x20 << 16;                                            // 0x0013d108: lui $v1, 0x20
    a0 = g_002045dc;  // Global at 0x002045dc                   // 0x0013d10c: lw $a0, 0x45dc($v0)
    /* call function at address in a2 */                        // 0x0013d110: jalr $a2
    a1 = g_002045e0;  // Global at 0x002045e0                   // 0x0013d114: lw $a1, 0x45e0($v1)
label_0x13d118:
    return;                                                     // 0x0013d11c: jr $ra
    sp = sp + 0x10;                                             // 0x0013d120: addiu $sp, $sp, 0x10
}