void func_00131588() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x20 << 16;                                            // 0x00131588: lui $v0, 0x20
    sp = sp + -0x10;                                            // 0x0013158c: addiu $sp, $sp, -0x10
    v0 = g_00201d90;  // Global at 0x00201d90                   // 0x00131590: lw $v0, 0x1d90($v0)
    if (v0 == 0) goto label_0x1315a4;                           // 0x00131594: beqz $v0, 0x1315a4
    /* call function at address in v0 */                        // 0x0013159c: jalr $v0
    /* nop */                                                   // 0x001315a0: nop 
label_0x1315a4:
    return;                                                     // 0x001315a8: jr $ra
    sp = sp + 0x10;                                             // 0x001315ac: addiu $sp, $sp, 0x10
}