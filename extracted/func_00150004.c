void func_00150004() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00150004: addiu $sp, $sp, -0x10
    v0 = *(int32_t*)((v0) + 0x3e20);                            // 0x00150008: lw $v0, 0x3e20($v0)
    if (v0 == 0) goto label_0x15001c;                           // 0x0015000c: beqz $v0, 0x15001c
    /* call function at address in v0 */                        // 0x00150014: jalr $v0
    /* nop */                                                   // 0x00150018: nop 
label_0x15001c:
    return;                                                     // 0x00150020: jr $ra
    sp = sp + 0x10;                                             // 0x00150024: addiu $sp, $sp, 0x10
}