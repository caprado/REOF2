void func_0010078c() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0010078c: addiu $sp, $sp, -0x20
    a1 = g_0024b708;  // Global at 0x0024b708                   // 0x00100790: lw $a1, -0x48f8($v0)
    if (a1 == 0) goto label_0x1007cc;                           // 0x00100798: beqz $a1, 0x1007cc
    v0 = 0x1f << 16;                                            // 0x001007a0: lui $v0, 0x1f
    v1 = g_001edf24;  // Global at 0x001edf24                   // 0x001007a4: lw $v1, -0x20dc($v0)
    if (v1 != 0) goto label_0x1007d0;                           // 0x001007a8: bnez $v1, 0x1007d0
    v0 = 0x25 << 16;                                            // 0x001007b0: lui $v0, 0x25
    gp = g_0024b70c;  // Global at 0x0024b70c                   // 0x001007b8: lw $gp, -0x48f4($v0)
    v1 = 0x25 << 16;                                            // 0x001007bc: lui $v1, 0x25
    /* call function at address in a1 */                        // 0x001007c0: jalr $a1
    a0 = g_0024b710;  // Global at 0x0024b710                   // 0x001007c4: lw $a0, -0x48f0($v1)
label_0x1007cc:
label_0x1007d0:
    return;                                                     // 0x001007d4: jr $ra
    sp = sp + 0x20;                                             // 0x001007d8: addiu $sp, $sp, 0x20
}