void func_001501b8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x21 << 16;                                            // 0x001501b8: lui $v0, 0x21
    sp = sp + -0x10;                                            // 0x001501bc: addiu $sp, $sp, -0x10
    v0 = g_00213e50;  // Global at 0x00213e50                   // 0x001501c0: lw $v0, 0x3e50($v0)
    if (v0 == 0) goto label_0x1501d4;                           // 0x001501c4: beqz $v0, 0x1501d4
    /* call function at address in v0 */                        // 0x001501cc: jalr $v0
    /* nop */                                                   // 0x001501d0: nop 
label_0x1501d4:
    return;                                                     // 0x001501d8: jr $ra
    sp = sp + 0x10;                                             // 0x001501dc: addiu $sp, $sp, 0x10
}