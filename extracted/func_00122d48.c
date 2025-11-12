void func_00122d48() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00122d48: addiu $sp, $sp, -0x10
    v0 = 0x1f << 16;                                            // 0x00122d4c: lui $v0, 0x1f
    v1 = g_001f1d34;  // Global at 0x001f1d34                   // 0x00122d54: lw $v1, 0x1d34($v0)
    /* call function at address in v1 */                        // 0x00122d58: jalr $v1
    /* nop */                                                   // 0x00122d5c: nop 
    return;                                                     // 0x00122d64: jr $ra
    sp = sp + 0x10;                                             // 0x00122d68: addiu $sp, $sp, 0x10
}