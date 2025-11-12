void func_00122d70() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00122d70: addiu $sp, $sp, -0x10
    v0 = *(int32_t*)((a0) + 0xb0);                              // 0x00122d78: lw $v0, 0xb0($a0)
    if (v0 == 0) goto label_0x122d94;                           // 0x00122d7c: beqz $v0, 0x122d94
    v0 = 0x1f << 16;                                            // 0x00122d84: lui $v0, 0x1f
    v1 = g_001f1d30;  // Global at 0x001f1d30                   // 0x00122d88: lw $v1, 0x1d30($v0)
    /* call function at address in v1 */                        // 0x00122d8c: jalr $v1
    /* nop */                                                   // 0x00122d90: nop 
label_0x122d94:
    return;                                                     // 0x00122d98: jr $ra
    sp = sp + 0x10;                                             // 0x00122d9c: addiu $sp, $sp, 0x10
}