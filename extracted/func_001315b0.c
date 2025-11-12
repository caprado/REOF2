void func_001315b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x20 << 16;                                            // 0x001315b0: lui $v0, 0x20
    sp = sp + -0x10;                                            // 0x001315b4: addiu $sp, $sp, -0x10
    v0 = g_00201d94;  // Global at 0x00201d94                   // 0x001315b8: lw $v0, 0x1d94($v0)
    if (v0 == 0) goto label_0x1315cc;                           // 0x001315bc: beqz $v0, 0x1315cc
    /* call function at address in v0 */                        // 0x001315c4: jalr $v0
    /* nop */                                                   // 0x001315c8: nop 
label_0x1315cc:
    return;                                                     // 0x001315d0: jr $ra
    sp = sp + 0x10;                                             // 0x001315d4: addiu $sp, $sp, 0x10
}