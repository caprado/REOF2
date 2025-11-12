void func_0015007c() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0015007c: addiu $sp, $sp, -0x10
    v0 = *(int32_t*)((v0) + 0x3e30);                            // 0x00150080: lw $v0, 0x3e30($v0)
    if (v0 == 0) goto label_0x150094;                           // 0x00150084: beqz $v0, 0x150094
    /* call function at address in v0 */                        // 0x0015008c: jalr $v0
    /* nop */                                                   // 0x00150090: nop 
label_0x150094:
    return;                                                     // 0x00150098: jr $ra
    sp = sp + 0x10;                                             // 0x0015009c: addiu $sp, $sp, 0x10
}