void func_00134e94() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00134e94: addiu $sp, $sp, -0x10
    v1 = g_0020217c;  // Global at 0x0020217c                   // 0x00134e98: lw $v1, 0x217c($v0)
    if (v1 == 0) goto label_0x134eb0;                           // 0x00134e9c: beqz $v1, 0x134eb0
    v0 = 0x20 << 16;                                            // 0x00134ea4: lui $v0, 0x20
    /* call function at address in v1 */                        // 0x00134ea8: jalr $v1
    a0 = g_00202180;  // Global at 0x00202180                   // 0x00134eac: lw $a0, 0x2180($v0)
label_0x134eb0:
    return;                                                     // 0x00134eb4: jr $ra
    sp = sp + 0x10;                                             // 0x00134eb8: addiu $sp, $sp, 0x10
}