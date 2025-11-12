void func_0013ac88() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x20 << 16;                                            // 0x0013ac88: lui $v0, 0x20
    sp = sp + -0x10;                                            // 0x0013ac8c: addiu $sp, $sp, -0x10
    v1 = g_0020407c;  // Global at 0x0020407c                   // 0x0013ac90: lw $v1, 0x407c($v0)
    if (v1 == 0) goto label_0x13acac;                           // 0x0013ac98: beqz $v1, 0x13acac
    v0 = 0x20 << 16;                                            // 0x0013aca0: lui $v0, 0x20
    /* call function at address in v1 */                        // 0x0013aca4: jalr $v1
    a0 = g_00204080;  // Global at 0x00204080                   // 0x0013aca8: lw $a0, 0x4080($v0)
label_0x13acac:
    return;                                                     // 0x0013acb0: jr $ra
    sp = sp + 0x10;                                             // 0x0013acb4: addiu $sp, $sp, 0x10
}