void func_00150140() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x21 << 16;                                            // 0x00150140: lui $v0, 0x21
    sp = sp + -0x10;                                            // 0x00150144: addiu $sp, $sp, -0x10
    v0 = g_00213e44;  // Global at 0x00213e44                   // 0x00150148: lw $v0, 0x3e44($v0)
    if (v0 == 0) goto label_0x15015c;                           // 0x0015014c: beqz $v0, 0x15015c
    /* call function at address in v0 */                        // 0x00150154: jalr $v0
    /* nop */                                                   // 0x00150158: nop 
label_0x15015c:
    return;                                                     // 0x00150160: jr $ra
    sp = sp + 0x10;                                             // 0x00150164: addiu $sp, $sp, 0x10
}