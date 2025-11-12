void func_00122b00() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00122b00: addiu $sp, $sp, -0x10
    v0 = *(int32_t*)((a0) + 0xbc);                              // 0x00122b08: lw $v0, 0xbc($a0)
    if (v0 == 0) goto label_0x122b24;                           // 0x00122b0c: beqz $v0, 0x122b24
    v0 = 0x1f << 16;                                            // 0x00122b14: lui $v0, 0x1f
    v1 = g_001f1d18;  // Global at 0x001f1d18                   // 0x00122b18: lw $v1, 0x1d18($v0)
    /* call function at address in v1 */                        // 0x00122b1c: jalr $v1
    /* nop */                                                   // 0x00122b20: nop 
label_0x122b24:
    return;                                                     // 0x00122b28: jr $ra
    sp = sp + 0x10;                                             // 0x00122b2c: addiu $sp, $sp, 0x10
}