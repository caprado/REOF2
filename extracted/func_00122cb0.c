void func_00122cb0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00122cb0: addiu $sp, $sp, -0x10
    v0 = *(int32_t*)((a0) + 0xb0);                              // 0x00122cb8: lw $v0, 0xb0($a0)
    if (v0 == 0) goto label_0x122cd4;                           // 0x00122cbc: beqz $v0, 0x122cd4
    v0 = 0x1f << 16;                                            // 0x00122cc4: lui $v0, 0x1f
    v1 = g_001f1d28;  // Global at 0x001f1d28                   // 0x00122cc8: lw $v1, 0x1d28($v0)
    /* call function at address in v1 */                        // 0x00122ccc: jalr $v1
    /* nop */                                                   // 0x00122cd0: nop 
label_0x122cd4:
    return;                                                     // 0x00122cd8: jr $ra
    sp = sp + 0x10;                                             // 0x00122cdc: addiu $sp, $sp, 0x10
}