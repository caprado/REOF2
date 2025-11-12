void func_00150168() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x21 << 16;                                            // 0x00150168: lui $v0, 0x21
    sp = sp + -0x10;                                            // 0x0015016c: addiu $sp, $sp, -0x10
    v0 = g_00213e48;  // Global at 0x00213e48                   // 0x00150170: lw $v0, 0x3e48($v0)
    if (v0 == 0) goto label_0x150184;                           // 0x00150174: beqz $v0, 0x150184
    /* call function at address in v0 */                        // 0x0015017c: jalr $v0
    /* nop */                                                   // 0x00150180: nop 
label_0x150184:
    return;                                                     // 0x00150188: jr $ra
    sp = sp + 0x10;                                             // 0x0015018c: addiu $sp, $sp, 0x10
}