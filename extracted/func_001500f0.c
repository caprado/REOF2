void func_001500f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x21 << 16;                                            // 0x001500f0: lui $v0, 0x21
    sp = sp + -0x10;                                            // 0x001500f4: addiu $sp, $sp, -0x10
    v0 = g_00213e3c;  // Global at 0x00213e3c                   // 0x001500f8: lw $v0, 0x3e3c($v0)
    if (v0 == 0) goto label_0x15010c;                           // 0x001500fc: beqz $v0, 0x15010c
    /* call function at address in v0 */                        // 0x00150104: jalr $v0
    /* nop */                                                   // 0x00150108: nop 
label_0x15010c:
    return;                                                     // 0x00150110: jr $ra
    sp = sp + 0x10;                                             // 0x00150114: addiu $sp, $sp, 0x10
}