void func_001241a4() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001241a4: addiu $sp, $sp, -0x10
    v1 = g_001f1f40;  // Global at 0x001f1f40                   // 0x001241a8: lw $v1, 0x1f40($v0)
    if (v1 == 0) goto label_0x1241c4;                           // 0x001241b0: beqz $v1, 0x1241c4
    v0 = 0x1f << 16;                                            // 0x001241b8: lui $v0, 0x1f
    /* call function at address in v1 */                        // 0x001241bc: jalr $v1
    a0 = g_001f1f44;  // Global at 0x001f1f44                   // 0x001241c0: lw $a0, 0x1f44($v0)
label_0x1241c4:
    return;                                                     // 0x001241cc: jr $ra
    sp = sp + 0x10;                                             // 0x001241d0: addiu $sp, $sp, 0x10
}