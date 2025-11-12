void func_0014ff84() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0014ff84: addiu $sp, $sp, -0x10
    v1 = *(int32_t*)((v1) + 0x3e18);                            // 0x0014ff88: lw $v1, 0x3e18($v1)
    if (v1 == 0) goto label_0x14ffa0;                           // 0x0014ff90: beqz $v1, 0x14ffa0
    /* call function at address in v1 */                        // 0x0014ff98: jalr $v1
    /* nop */                                                   // 0x0014ff9c: nop 
label_0x14ffa0:
    return;                                                     // 0x0014ffa4: jr $ra
    sp = sp + 0x10;                                             // 0x0014ffa8: addiu $sp, $sp, 0x10
}